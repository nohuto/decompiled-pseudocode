/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00CEF34
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(
        union _LARGE_INTEGER *this,
        union _LARGE_INTEGER *a2,
        __int64 a3,
        __int64 a4)
{
  union _LARGE_INTEGER *v5; // rsi
  PVOID v6; // r14
  __int64 v7; // rdi
  union _LARGE_INTEGER v9; // rdi
  size_t v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  size_t v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  size_t v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  size_t v24; // rcx
  unsigned __int16 MaximumLength; // ax
  unsigned __int64 v26; // rcx
  _WORD *v27; // rdx
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  __int64 CurrentProcess; // rax
  int v34; // eax
  int Resource; // eax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-A8h] BYREF
  int v45; // [rsp+60h] [rbp-98h]
  void *FileHandle; // [rsp+68h] [rbp-90h] BYREF
  __int64 v47; // [rsp+70h] [rbp-88h] BYREF
  void *SectionHandle; // [rsp+78h] [rbp-80h] BYREF
  PVOID Object; // [rsp+80h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-70h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-38h] BYREF
  unsigned __int64 v53; // [rsp+110h] [rbp+18h] BYREF
  __int64 v54; // [rsp+118h] [rbp+20h] BYREF

  v5 = this;
  v47 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  v6 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  if ( !a2 )
  {
    v39 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v39 + 24) = 3010LL;
    WdLogEvent5_WdAssertion(v39);
  }
  if ( v5[50].QuadPart != -1 )
  {
    LODWORD(v7) = 0;
LABEL_5:
    *a2 = v5[50];
    goto LABEL_6;
  }
  v9 = v5[2];
  v10 = 2
      * wcsnlen(
          *(const wchar_t **)(v9.QuadPart + 1136),
          (unsigned __int64)*(unsigned __int16 *)(v9.QuadPart + 1130) >> 1);
  v53 = v10;
  v14 = *(unsigned __int16 *)(v9.QuadPart + 1130);
  if ( v10 >= v14 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v14, v11, v12, v13);
    *(_QWORD *)(v40 + 24) = 3034LL;
    WdLogEvent5_WdAssertion(v40);
    LOWORD(v10) = v53;
  }
  Destination.Length = 0;
  Destination.MaximumLength = v10 + 12;
  Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v10 + 12), 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
    goto LABEL_43;
  RtlAppendUnicodeToString(&Destination, L"\\??\\");
  RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(v9.QuadPart + 1136));
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
    goto LABEL_33;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = 3076LL;
  v20 = 2
      * wcsnlen(
          *(const wchar_t **)(v9.QuadPart + 1136),
          (unsigned __int64)*(unsigned __int16 *)(v9.QuadPart + 1130) >> 1);
  v53 = v20;
  v24 = *(unsigned __int16 *)(v9.QuadPart + 1130);
  if ( v20 >= v24 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v24, v21, v22, v23);
    *(_QWORD *)(v42 + 24) = 3082LL;
    WdLogEvent5_WdAssertion(v42);
    LOWORD(v20) = v53;
  }
  Destination.Length = 0;
  MaximumLength = v20 + 56;
  Destination.MaximumLength = MaximumLength;
  if ( Destination.Buffer )
  {
    ExFreePoolWithTag(Destination.Buffer, 0);
    Destination.Buffer = 0LL;
    MaximumLength = Destination.MaximumLength;
  }
  Destination.Buffer = (wchar_t *)operator new[](MaximumLength, 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
  {
LABEL_43:
    LODWORD(v7) = -1073741801;
    v41 = WdLogNewEntry5_WdLowResource(v15);
    *(union _LARGE_INTEGER *)(v41 + 24) = v5[2];
    WdLogEvent5_WdLowResource(v41);
    goto LABEL_41;
  }
  RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
  RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(v9.QuadPart + 1136));
  v26 = v53 >> 1;
  if ( v53 >> 1 )
  {
    v27 = (_WORD *)(*(_QWORD *)(v9.QuadPart + 1136) + 2 * (v26 - 1));
    do
    {
      if ( *v27 == 46 )
        break;
      --v27;
      --v26;
    }
    while ( v26 );
  }
  if ( !v26 )
    RtlAppendUnicodeToString(&Destination, L".DLL");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v28 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  v7 = v28;
  if ( v28 < 0 )
    goto LABEL_44;
LABEL_33:
  ObjectAttributes.ObjectName = 0LL;
  v31 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x1000000u, FileHandle);
  v7 = v31;
  if ( v31 < 0 )
    goto LABEL_44;
  v32 = ObReferenceObjectByHandle(SectionHandle, 4u, 0LL, 0, &Object, 0LL);
  v7 = v32;
  v6 = Object;
  if ( v32 < 0
    || (v53 = 0LL,
        v51 = 0LL,
        CurrentProcess = PsGetCurrentProcess(v30),
        v34 = MmMapViewOfSection(
                v6,
                CurrentProcess,
                &v54,
                0LL,
                0LL,
                &v51,
                &v53,
                1,
                0,
                2,
                *(_QWORD *)&Destination.Length),
        v7 = v34,
        v34 < 0) )
  {
LABEL_44:
    v43 = WdLogNewEntry5_WdError(v30, v29);
    *(union _LARGE_INTEGER *)(v43 + 24) = v5[2];
    *(_QWORD *)(v43 + 32) = v7;
    WdLogEvent5_WdError(v43);
    goto LABEL_41;
  }
  v5[50].QuadPart = 0LL;
  Resource = LdrResFindResource(v54, 16LL, 1LL, 0LL, &v47, &v53, 0LL, 0LL, 16);
  v7 = Resource;
  v45 = Resource;
  if ( Resource < 0 )
  {
    v37 = WdLogNewEntry5_WdError(this, v36);
    *(union _LARGE_INTEGER *)(v37 + 24) = v5[2];
    *(_QWORD *)(v37 + 32) = v7;
    WdLogEvent5_WdError(v37);
    LODWORD(v7) = 0;
    v45 = 0;
  }
  else if ( v53 >= 0x5C && !wcsncmp((const wchar_t *)(v47 + 6), L"VS_VERSION_INFO", 0x20uLL) )
  {
    this = (union _LARGE_INTEGER *)v47;
    v5[50].HighPart = *(_DWORD *)(v47 + 48);
    v5[50].LowPart = this[6].HighPart;
  }
LABEL_41:
  if ( (int)v7 >= 0 )
    goto LABEL_5;
LABEL_6:
  if ( v54 )
  {
    v38 = PsGetCurrentProcess(this);
    MmUnmapViewOfSection(v38, v54);
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v7;
}
