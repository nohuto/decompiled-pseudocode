/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00826C4
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C007FD9C (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z @ 0x1C0082C20 (-GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(ADAPTER_RENDER *this, union _LARGE_INTEGER *a2)
{
  PVOID v4; // r14
  __int64 v5; // rdi
  const struct _UNICODE_STRING *UMDFileName; // rax
  bool v8; // zf
  const struct _UNICODE_STRING *v9; // rdi
  size_t v10; // rax
  size_t MaximumLength; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  size_t v15; // rax
  size_t v16; // rcx
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rcx
  wchar_t *v19; // rdx
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  __int64 CurrentProcess; // rax
  int v25; // eax
  int Resource; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-A8h] BYREF
  int v37; // [rsp+60h] [rbp-98h]
  void *FileHandle; // [rsp+68h] [rbp-90h] BYREF
  __int64 v39; // [rsp+70h] [rbp-88h] BYREF
  void *SectionHandle; // [rsp+78h] [rbp-80h] BYREF
  PVOID Object; // [rsp+80h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-70h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-38h] BYREF
  unsigned __int64 v45; // [rsp+110h] [rbp+18h] BYREF
  __int64 v46; // [rsp+118h] [rbp+20h] BYREF

  v39 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  v4 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( !a2 )
  {
    v31 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v31 + 24) = 3236LL;
    WdLogEvent5_WdAssertion(v31);
  }
  LODWORD(v5) = 0;
  if ( *((_QWORD *)this + 62) != -1LL )
    goto LABEL_4;
  while ( 1 )
  {
    UMDFileName = ADAPTER_RENDER::GetUMDFileName(this, (enum _KMTUMDVERSION)v5);
    if ( !(unsigned int)IsNullUmdDriver(UMDFileName) )
      break;
    v8 = (_DWORD)v5 == 4;
    if ( (unsigned int)v5 >= 4 )
      goto LABEL_18;
    LODWORD(v5) = v5 + 1;
  }
  v8 = (_DWORD)v5 == 4;
LABEL_18:
  if ( v8 )
  {
    LODWORD(v5) = -1073741811;
    goto LABEL_5;
  }
  v9 = ADAPTER_RENDER::GetUMDFileName(this, (enum _KMTUMDVERSION)v5);
  v10 = 2 * wcsnlen(v9->Buffer, (unsigned __int64)v9->MaximumLength >> 1);
  v45 = v10;
  MaximumLength = v9->MaximumLength;
  if ( v10 >= MaximumLength )
  {
    v32 = WdLogNewEntry5_WdAssertion(MaximumLength);
    *(_QWORD *)(v32 + 24) = 3271LL;
    WdLogEvent5_WdAssertion(v32);
    LOWORD(v10) = v45;
  }
  Destination.Length = 0;
  Destination.MaximumLength = v10 + 12;
  Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v10 + 12), 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
    goto LABEL_48;
  RtlAppendUnicodeToString(&Destination, L"\\??\\");
  RtlAppendUnicodeToString(&Destination, v9->Buffer);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
    goto LABEL_35;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v14, v13) + 24) = 3313LL;
  v15 = 2 * wcsnlen(v9->Buffer, (unsigned __int64)v9->MaximumLength >> 1);
  v45 = v15;
  v16 = v9->MaximumLength;
  if ( v15 >= v16 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v34 + 24) = 3319LL;
    WdLogEvent5_WdAssertion(v34);
    LOWORD(v15) = v45;
  }
  Destination.Length = 0;
  v17 = v15 + 56;
  Destination.MaximumLength = v17;
  if ( Destination.Buffer )
  {
    ExFreePoolWithTag(Destination.Buffer, 0);
    Destination.Buffer = 0LL;
    v17 = Destination.MaximumLength;
  }
  Destination.Buffer = (wchar_t *)operator new[](v17, 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
  {
LABEL_48:
    LODWORD(v5) = -1073741801;
    v33 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v33 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdLowResource(v33);
    goto LABEL_43;
  }
  RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
  RtlAppendUnicodeToString(&Destination, v9->Buffer);
  v18 = v45 >> 1;
  if ( v45 >> 1 )
  {
    v19 = &v9->Buffer[v18 - 1];
    do
    {
      if ( *v19 == 46 )
        break;
      --v19;
      --v18;
    }
    while ( v18 );
  }
  if ( !v18 )
    RtlAppendUnicodeToString(&Destination, L".DLL");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v20 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  v5 = v20;
  if ( v20 < 0 )
    goto LABEL_49;
LABEL_35:
  ObjectAttributes.ObjectName = 0LL;
  v22 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x1000000u, FileHandle);
  v5 = v22;
  if ( v22 < 0 )
    goto LABEL_49;
  v23 = ObReferenceObjectByHandle(SectionHandle, 4u, 0LL, 0, &Object, 0LL);
  v5 = v23;
  v4 = Object;
  if ( v23 < 0
    || (v45 = 0LL,
        v43 = 0LL,
        CurrentProcess = PsGetCurrentProcess(),
        v25 = MmMapViewOfSection(
                v4,
                CurrentProcess,
                &v46,
                0LL,
                0LL,
                &v43,
                &v45,
                1,
                0,
                2,
                *(_QWORD *)&Destination.Length),
        v5 = v25,
        v25 < 0) )
  {
LABEL_49:
    v35 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v35 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v35 + 32) = v5;
    WdLogEvent5_WdError(v35);
    goto LABEL_43;
  }
  *((_QWORD *)this + 62) = 0LL;
  Resource = LdrResFindResource(v46, 16LL, 1LL, 0LL, &v39, &v45, 0LL, 0LL, 16);
  v5 = Resource;
  v37 = Resource;
  if ( Resource < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v29 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v29 + 32) = v5;
    WdLogEvent5_WdError(v29);
    LODWORD(v5) = 0;
    v37 = 0;
  }
  else if ( v45 >= 0x5C && !wcsncmp((const wchar_t *)(v39 + 6), L"VS_VERSION_INFO", 0x20uLL) )
  {
    v28 = v39;
    *((_DWORD *)this + 125) = *(_DWORD *)(v39 + 48);
    *((_DWORD *)this + 124) = *(_DWORD *)(v28 + 52);
  }
LABEL_43:
  if ( (int)v5 >= 0 )
LABEL_4:
    *a2 = *(union _LARGE_INTEGER *)((char *)this + 496);
LABEL_5:
  if ( v46 )
  {
    v30 = PsGetCurrentProcess();
    MmUnmapViewOfSection(v30, v46);
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v5;
}
