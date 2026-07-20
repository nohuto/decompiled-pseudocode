/*
 * XREFs of SmpInitializeKnownDlls @ 0x140006E00
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140007224 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpEventWriteULONG @ 0x140002EC8 (SmpEventWriteULONG.c)
 *     SmpOpenKnownDllsHandles @ 0x140005D10 (SmpOpenKnownDllsHandles.c)
 *     SmpInitializeKnownDllsInternal @ 0x140006870 (SmpInitializeKnownDllsInternal.c)
 *     SmpWow64IsWowGuestMachineSupported @ 0x140007094 (SmpWow64IsWowGuestMachineSupported.c)
 *     SmpEventWrite @ 0x140007820 (SmpEventWrite.c)
 *     SmpDeallocSavedRegistryEntry @ 0x140009004 (SmpDeallocSavedRegistryEntry.c)
 */

__int64 SmpInitializeKnownDlls()
{
  int v0; // edi
  void *v1; // r14
  void *v2; // rsi
  void *v3; // r12
  void *v4; // r15
  int v5; // ebx
  PVOID *v6; // rdi
  struct _UNICODE_STRING *v7; // rbx
  _QWORD *v8; // rax
  void **Buffer; // rcx
  void *v10; // r8
  PVOID *v11; // rbx
  PVOID *v13; // rcx
  PVOID *v14; // rax
  PVOID **v15; // rdx
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  HANDLE v17; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING v18; // [rsp+40h] [rbp-49h] BYREF
  struct _UNICODE_STRING v19; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING v20; // [rsp+60h] [rbp-29h] BYREF
  struct _UNICODE_STRING v21; // [rsp+70h] [rbp-19h] BYREF
  UNICODE_STRING v22; // [rsp+80h] [rbp-9h] BYREF
  struct _UNICODE_STRING v23; // [rsp+90h] [rbp+7h] BYREF
  void *v24; // [rsp+F0h] [rbp+67h] BYREF
  void *v25; // [rsp+F8h] [rbp+6Fh] BYREF
  void *v26; // [rsp+100h] [rbp+77h] BYREF
  void *v27; // [rsp+108h] [rbp+7Fh] BYREF

  v0 = 0;
  *(_DWORD *)&v19.Length = 1441812;
  Handle = 0LL;
  v19.Buffer = L"\\KnownDlls";
  v17 = 0LL;
  v18.Buffer = L"\\System32";
  v1 = 0LL;
  *(_DWORD *)&v18.Length = 1310738;
  v21.Buffer = L"\\KnownDlls32";
  v2 = 0LL;
  v24 = 0LL;
  v20.Buffer = L"\\SysWOW64";
  v3 = 0LL;
  v25 = 0LL;
  v23.Buffer = L"\\KnownDllsArm32";
  v4 = 0LL;
  *(_DWORD *)&v21.Length = 1703960;
  v22.Buffer = L"\\SysArm32";
  *(_DWORD *)&v20.Length = 1310738;
  v26 = 0LL;
  v27 = 0LL;
  *(_DWORD *)&v23.Length = 2097182;
  *(_DWORD *)&v22.Length = 1310738;
  SmpEventWrite(&SmssEvt_InitializeKnownDlls_Start);
  v5 = SmpOpenKnownDllsHandles(&v19, &v18, 1, &v17, &Handle);
  if ( v5 < 0 )
    goto LABEL_33;
  if ( !(unsigned __int8)SmpWow64IsWowGuestMachineSupported(332LL) )
  {
LABEL_5:
    if ( (unsigned __int8)SmpWow64IsWowGuestMachineSupported(452LL) )
    {
      v5 = SmpOpenKnownDllsHandles(&v23, &v22, 0, &v27, &v26);
      if ( v5 < 0 )
      {
LABEL_21:
        if ( v1 )
          NtClose(v1);
        if ( v2 )
          NtClose(v2);
        if ( v3 )
          NtClose(v3);
        if ( v4 )
          NtClose(v4);
        goto LABEL_29;
      }
      v3 = v26;
      v4 = v27;
    }
    if ( v2 || v4 )
      v0 = 1;
    v5 = SmpInitializeKnownDllsInternal((__int64)v17, Handle, 0, v0);
    if ( v5 >= 0 )
    {
      if ( !v2 || (v5 = SmpInitializeKnownDllsInternal((__int64)v2, v1, 1, v0), v5 >= 0) )
      {
        if ( !v4 || (v5 = SmpInitializeKnownDllsInternal((__int64)v4, v3, 1, v0), v5 >= 0) )
        {
          v6 = (PVOID *)SmpKnownDllsList;
          if ( SmpKnownDllsList != &SmpKnownDllsList )
          {
            do
            {
              v7 = (struct _UNICODE_STRING *)v6;
              v6 = (PVOID *)*v6;
              v8 = *(_QWORD **)&v7->Length;
              if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v7->Length + 8LL) != v7
                || (Buffer = (void **)v7->Buffer, *Buffer != v7) )
              {
                __fastfail(3u);
              }
              *Buffer = v8;
              v8[1] = Buffer;
              RtlFreeUnicodeString(v7 + 2);
              v10 = *(void **)&v7[3].Length;
              if ( v10 )
                RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v7);
            }
            while ( v6 != &SmpKnownDllsList );
            v1 = v24;
            v2 = v25;
            v3 = v26;
            v4 = v27;
          }
          v11 = (PVOID *)SmpExcludeKnownDllsList;
          if ( SmpExcludeKnownDllsList != &SmpExcludeKnownDllsList )
          {
            do
            {
              v13 = v11;
              v11 = (PVOID *)*v11;
              v14 = (PVOID *)*v13;
              if ( *((PVOID **)*v13 + 1) != v13 || (v15 = (PVOID **)v13[1], *v15 != v13) )
                __fastfail(3u);
              *v15 = v14;
              v14[1] = v15;
              SmpDeallocSavedRegistryEntry(v13);
            }
            while ( v11 != &SmpExcludeKnownDllsList );
          }
          v5 = 0;
        }
      }
    }
    goto LABEL_21;
  }
  v5 = SmpOpenKnownDllsHandles(&v21, &v20, 0, &v25, &v24);
  if ( v5 >= 0 )
  {
    v1 = v24;
    v2 = v25;
    goto LABEL_5;
  }
LABEL_29:
  if ( Handle )
    NtClose(Handle);
  if ( v17 )
    NtClose(v17);
LABEL_33:
  SmpEventWriteULONG(&SmssEvt_InitializeKnownDlls_Stop, v5);
  return (unsigned int)v5;
}
