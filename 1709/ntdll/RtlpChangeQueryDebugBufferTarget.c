/*
 * XREFs of RtlpChangeQueryDebugBufferTarget @ 0x1800830C4
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180016D80 (RtlQueryProcessDebugInformation.c)
 *     RtlDestroyQueryDebugBuffer @ 0x180083090 (RtlDestroyQueryDebugBuffer.c)
 *     RtlSetProcessDebugInformation @ 0x1800D8CB0 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenProcess @ 0x1800A0580 (NtOpenProcess.c)
 *     ZwMapViewOfSection @ 0x1800A05C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 */

NTSTATUS __fastcall RtlpChangeQueryDebugBufferTarget(__int64 a1, void *a2, int a3, HANDLE *a4)
{
  void *v4; // rax
  __int64 v5; // rsi
  __int64 v10; // rcx
  HANDLE v11; // rdx
  PVOID *v12; // rdi
  __int128 v13; // xmm0
  _OWORD *v14; // rbx
  NTSTATUS result; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // edi
  NTSTATUS v18; // r14d
  HANDLE v19; // rdx
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-31h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-29h] BYREF
  _CLIENT_ID v23; // [rsp+70h] [rbp-21h] BYREF
  _CLIENT_ID ClientId; // [rsp+80h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-1h] BYREF
  HANDLE ProcessHandle; // [rsp+F8h] [rbp+67h] BYREF

  v4 = *(void **)(a1 + 48);
  v5 = a1 + *(_QWORD *)(a1 + 88);
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v4 )
  {
    v23.UniqueProcess = v4;
    v23.UniqueThread = 0LL;
    result = NtOpenProcess(&Handle, 0x1FFFFFu, &ObjectAttributes, &v23);
    if ( result < 0 )
      return result;
    v10 = (__int64)Handle;
  }
  else
  {
    v10 = -1LL;
    Handle = (HANDLE)-1LL;
  }
  if ( a2 )
  {
    ClientId.UniqueProcess = a2;
    ClientId.UniqueThread = 0LL;
    v16 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
    v10 = (__int64)Handle;
    v17 = v16;
    if ( v16 < 0 )
    {
      if ( Handle != (HANDLE)-1LL )
        NtClose(Handle);
      return v17;
    }
    v11 = ProcessHandle;
  }
  else
  {
    v11 = 0LL;
    ProcessHandle = 0LL;
  }
  v12 = (PVOID *)(a1 + 16);
  if ( v10 == -1 )
  {
    *v12 = (PVOID)(*(_QWORD *)(a1 + 88) + *(_QWORD *)(a1 + 8));
  }
  else
  {
    if ( *v12 )
    {
      NtUnmapViewOfSection((HANDLE)v10, *v12);
      v10 = (__int64)Handle;
      *v12 = 0LL;
    }
    NtClose((HANDLE)v10);
    v11 = ProcessHandle;
  }
  ViewSize = *(_QWORD *)(a1 + 88);
  SectionOffset.QuadPart = ViewSize;
  if ( v11 )
  {
    v18 = ZwMapViewOfSection(
            *(HANDLE *)a1,
            v11,
            (PVOID *)(a1 + 16),
            0LL,
            0LL,
            &SectionOffset,
            &ViewSize,
            ViewUnmap,
            0,
            4u);
    if ( v18 == -1073741800 )
    {
      v19 = ProcessHandle;
      *v12 = 0LL;
      v18 = ZwMapViewOfSection(
              *(HANDLE *)a1,
              v19,
              (PVOID *)(a1 + 16),
              0LL,
              0LL,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              4u);
    }
    if ( v18 < 0 )
    {
      NtClose(ProcessHandle);
      return v18;
    }
    if ( a4 )
      *a4 = ProcessHandle;
    else
      NtClose(ProcessHandle);
  }
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 24) = a1 - (_QWORD)*v12;
  if ( a3 == 1 )
  {
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = *(_DWORD *)v12;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)v12;
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(v5 + 28) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(v5 + 36) = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(v5 + 40) = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(v5 + 44) = *(_DWORD *)(a1 + 88);
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(a1 + 160);
  }
  else
  {
    *(_OWORD *)v5 = *(_OWORD *)a1;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v5 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v5 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v5 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v5 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v5 + 96) = *(_OWORD *)(a1 + 96);
    v13 = *(_OWORD *)(a1 + 112);
    v14 = (_OWORD *)(a1 + 128);
    *(_OWORD *)(v5 + 112) = v13;
    *(_OWORD *)(v5 + 128) = *v14;
    *(_OWORD *)(v5 + 144) = v14[1];
    *(_OWORD *)(v5 + 160) = v14[2];
    *(_OWORD *)(v5 + 176) = v14[3];
    *(_OWORD *)(v5 + 192) = v14[4];
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(v5 + 16);
    *(_QWORD *)v5 = 0LL;
  }
  return 0;
}
