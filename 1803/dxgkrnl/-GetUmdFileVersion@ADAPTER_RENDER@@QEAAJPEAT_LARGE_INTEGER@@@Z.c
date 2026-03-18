/*
 * XREFs of ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00A587C
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z @ 0x1C00A5918 (-GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z.c)
 *     ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C00A8B78 (-IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z.c)
 *     ?GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0159F28 (-GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetUmdFileVersion(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  const struct _UNICODE_STRING *UMDFileName; // rax
  bool v8; // zf
  const struct _UNICODE_STRING *v9; // rsi
  size_t v10; // rax
  unsigned __int64 MaximumLength; // rcx
  __int16 v12; // bx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  size_t v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int16 v23; // ax
  unsigned __int64 v24; // rbx
  wchar_t *v25; // rcx
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  Handle = 0LL;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 3710LL;
    WdLogEvent5_WdAssertion(v6);
  }
  LODWORD(v4) = 0;
  if ( this[63].QuadPart != -1 )
    goto LABEL_4;
  while ( 1 )
  {
    UMDFileName = ADAPTER_RENDER::GetUMDFileName((ADAPTER_RENDER *)this, (enum _KMTUMDVERSION)v4);
    if ( !(unsigned int)IsNullUmdDriver(UMDFileName) )
      break;
    v8 = (_DWORD)v4 == 4;
    if ( (unsigned int)v4 >= 4 )
      goto LABEL_14;
    LODWORD(v4) = v4 + 1;
  }
  v8 = (_DWORD)v4 == 4;
LABEL_14:
  if ( v8 )
  {
    LODWORD(v4) = -1073741811;
    goto LABEL_5;
  }
  v9 = ADAPTER_RENDER::GetUMDFileName((ADAPTER_RENDER *)this, (enum _KMTUMDVERSION)v4);
  v10 = wcsnlen(v9->Buffer, (unsigned __int64)v9->MaximumLength >> 1);
  MaximumLength = v9->MaximumLength;
  v12 = 2 * v10;
  if ( 2 * v10 >= MaximumLength )
  {
    v13 = WdLogNewEntry5_WdAssertion(MaximumLength);
    *(_QWORD *)(v13 + 24) = 3745LL;
    WdLogEvent5_WdAssertion(v13);
  }
  Destination.Length = 0;
  Destination.MaximumLength = v12 + 12;
  Destination.Buffer = (wchar_t *)operator new[]((unsigned __int16)(v12 + 12), 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
    goto LABEL_33;
  RtlAppendUnicodeToString(&Destination, L"\\??\\");
  RtlAppendUnicodeToString(&Destination, v9->Buffer);
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&Handle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
    goto LABEL_34;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = 3787LL;
  v19 = wcsnlen(v9->Buffer, (unsigned __int64)v9->MaximumLength >> 1);
  v20 = v9->MaximumLength;
  v21 = 2 * v19;
  if ( 2 * v19 >= v20 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v22 + 24) = 3793LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = v21 + 56;
  Destination.Length = 0;
  Destination.MaximumLength = v21 + 56;
  if ( Destination.Buffer )
  {
    operator delete(Destination.Buffer);
    v23 = Destination.MaximumLength;
    Destination.Buffer = 0LL;
  }
  Destination.Buffer = (wchar_t *)operator new[](v23, 0x4B677844u, PagedPool);
  if ( !Destination.Buffer )
  {
LABEL_33:
    LODWORD(v4) = -1073741801;
    v29 = WdLogNewEntry5_WdLowResource(v14);
    *(union _LARGE_INTEGER *)(v29 + 24) = this[2];
    WdLogEvent5_WdLowResource(v29);
    goto LABEL_5;
  }
  RtlAppendUnicodeToString(&Destination, L"\\Systemroot\\System32\\");
  RtlAppendUnicodeToString(&Destination, v9->Buffer);
  v24 = v21 >> 1;
  if ( v24 )
  {
    v25 = &v9->Buffer[v24 - 1];
    do
    {
      if ( *v25 == 46 )
        break;
      --v25;
      --v24;
    }
    while ( v24 );
  }
  if ( !v24 )
    RtlAppendUnicodeToString(&Destination, L".DLL");
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v26 = ZwOpenFile(&Handle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  v4 = v26;
  if ( v26 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v27);
    *(union _LARGE_INTEGER *)(v28 + 24) = this[2];
    *(_QWORD *)(v28 + 32) = v4;
    WdLogEvent5_WdError(v28);
    goto LABEL_35;
  }
LABEL_34:
  LODWORD(v4) = ADAPTER_RENDER::GetFileVersion((ADAPTER_RENDER *)this, Handle, &ObjectAttributes, this + 63);
LABEL_35:
  if ( (int)v4 >= 0 )
LABEL_4:
    *a2 = this[63];
LABEL_5:
  if ( Handle )
    ZwClose(Handle);
  if ( Destination.Buffer )
    operator delete(Destination.Buffer);
  return (unsigned int)v4;
}
