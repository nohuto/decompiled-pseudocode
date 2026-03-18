/*
 * XREFs of CmpInitHiveFromFile @ 0x1404D6800
 * Callers:
 *     CmpCmdHiveOpen @ 0x1404D65D8 (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14017E160 (ZwQueryInformationFile.c)
 *     ZwSetInformationObject @ 0x14017EAC0 (ZwSetInformationObject.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpOpenHiveFile @ 0x1404D7AAC (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1404D809C (CmpQueryFileSecurityDescriptor.c)
 *     CmpLogEvent @ 0x140662528 (CmpLogEvent.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        PCUNICODE_STRING Source,
        int a2,
        ULONG_PTR *a3,
        _BYTE *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  ULONG_PTR *v10; // r10
  __int64 v13; // r8
  HANDLE v14; // rbx
  unsigned int v15; // ecx
  HANDLE v16; // rdi
  void *v17; // r13
  int v18; // ecx
  int v19; // r12d
  int v20; // eax
  int FileSecurityDescriptor; // esi
  HANDLE v22; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v25; // esi
  int v26; // eax
  PVOID PoolWithTag; // rax
  ULONG_PTR v28; // rsi
  char *v29; // rcx
  bool v30; // zf
  char v31; // [rsp+60h] [rbp-A0h]
  char v32; // [rsp+61h] [rbp-9Fh]
  BOOLEAN v33; // [rsp+62h] [rbp-9Eh]
  int v34; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  __int16 ObjectInformation[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v37; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v38[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v39; // [rsp+7Ch] [rbp-84h]
  int v40; // [rsp+80h] [rbp-80h]
  HANDLE v41; // [rsp+88h] [rbp-78h]
  HANDLE ObjectHandle; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  void *v44; // [rsp+A0h] [rbp-60h]
  int v45; // [rsp+A8h] [rbp-58h]
  int v46; // [rsp+ACh] [rbp-54h]
  ULONG_PTR *v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h]
  void *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v53; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v54[4]; // [rsp+F0h] [rbp-10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+110h] [rbp+10h] BYREF
  char FileInformation[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v57; // [rsp+130h] [rbp+30h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF
  _DWORD *v59; // [rsp+170h] [rbp+70h]
  __int64 v60; // [rsp+178h] [rbp+78h]
  wchar_t *Buffer; // [rsp+180h] [rbp+80h]
  _DWORD v62[6]; // [rsp+188h] [rbp+88h] BYREF
  EVENT_DATA_DESCRIPTOR v63; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v64; // [rsp+1C0h] [rbp+C0h]
  int v65; // [rsp+1C8h] [rbp+C8h]
  int v66; // [rsp+1CCh] [rbp+CCh]

  v10 = a3;
  v52 = a9;
  v47 = a3;
  v13 = a6;
  v49 = a10;
  v51 = a4;
  v40 = a2;
  v43 = a6;
  if ( stru_14033C3C0.LevelPlus1 > 4 )
  {
    v60 = 2LL;
    v59 = v62;
    Buffer = Source->Buffer;
    v62[0] = Source->Length;
    v62[1] = 0;
    TlgWrite(&stru_14033C3C0, &unk_1402AA983, 0LL, 0LL, 4u, &pData);
    v13 = v43;
    a4 = v51;
    v10 = v47;
  }
  v32 = 0;
  v33 = 0;
  v14 = 0LL;
  v15 = (a5 >> 19) & 0x40;
  ObjectHandle = 0LL;
  Handle = 0LL;
  v16 = 0LL;
  v41 = 0LL;
  v17 = 0LL;
  v31 = 1;
  v44 = 0LL;
  v45 = a2 & 0x20000;
  if ( (a2 & 0x8000) != 0 )
  {
    v18 = v15 | 0x20;
    v31 = 0;
    v19 = v18 | 0x80;
    if ( (a2 & 0x40000) == 0 )
      v19 = v18;
  }
  else
  {
    v19 = v15 | 2;
    if ( (a5 & 0x40000000) == 0 )
      v19 = (a5 >> 19) & 0x40;
    if ( *a4 )
      v19 |= 1u;
  }
  v20 = v19 | 4;
  if ( (a2 & 0x20000) != 0 )
    v20 = v19;
  v46 = v20;
  while ( 1 )
  {
    v50 = 0LL;
    *v10 = 0LL;
    FileSecurityDescriptor = CmpOpenHiveFile(Source, v20, v13, (__int64)&v50, 0LL, 0LL);
    if ( FileSecurityDescriptor < 0 )
    {
      v22 = ObjectHandle;
      goto LABEL_11;
    }
    v34 = v19;
    if ( v48 == 2 )
    {
      v32 = 1;
      v34 = v19 | 0x10;
    }
    v22 = ObjectHandle;
    if ( (v40 & 0x8000) == 0 )
    {
      v17 = v44;
      FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(ObjectHandle);
      if ( FileSecurityDescriptor < 0 )
        goto LABEL_11;
    }
    if ( (a5 & 0x10000000) != 0 )
    {
      v39 = 1;
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v34, v43, 0LL, (__int64)v17, 0LL);
      if ( FileSecurityDescriptor >= 0 )
      {
        v14 = Handle;
        goto LABEL_33;
      }
      v14 = 0LL;
      v30 = v31 == 0;
      Handle = 0LL;
    }
    else
    {
      v39 = 2;
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v34, v43, 0LL, (__int64)v17, 0LL);
      if ( FileSecurityDescriptor < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v31 )
          goto LABEL_11;
      }
      else
      {
        v14 = Handle;
      }
      FileSecurityDescriptor = CmpOpenHiveFile(Source, v34, v43, 0LL, (__int64)v17, 0LL);
      if ( FileSecurityDescriptor >= 0 )
      {
        v16 = v41;
        goto LABEL_33;
      }
      v16 = 0LL;
      v30 = v31 == 0;
      v41 = 0LL;
    }
    if ( !v30 )
      goto LABEL_11;
LABEL_33:
    if ( !v31 )
    {
      if ( v39 != 2 )
      {
        v39 = v14 != 0LL;
        goto LABEL_37;
      }
      if ( v14 )
      {
        if ( v16 )
          goto LABEL_37;
        ZwClose(v14);
        v14 = 0LL;
        Handle = 0LL;
      }
      if ( v16 )
      {
        ZwClose(v16);
        v16 = 0LL;
        v41 = 0LL;
      }
      v39 = 0;
    }
LABEL_37:
    if ( !v33 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v33 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      if ( !v33 )
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v22 = ObjectHandle;
      v14 = Handle;
      v16 = v41;
      v17 = v44;
      if ( !v33 )
      {
        FileSecurityDescriptor = -1073741431;
        goto LABEL_11;
      }
    }
    if ( v32 )
    {
      v25 = 0;
    }
    else if ( v45 )
    {
      v25 = 5;
    }
    else
    {
      v40 &= ~0x20000u;
      v25 = 2;
    }
    v54[3] = 0LL;
    v54[0] = v22;
    v54[1] = v14;
    v54[2] = v16;
    memset(v49, 0, 0x160uLL);
    v26 = CmpInitializeHive(&v53, v25, v40, v39, 0LL, (__int64)v54, (__int64)Source, a5, 0LL, 0LL, v52, (__int64)v49);
    FileSecurityDescriptor = v26;
    if ( v26 != -1073741267 )
      break;
    if ( !v45 )
      goto LABEL_11;
    ZwClose(v22);
    ObjectHandle = 0LL;
    if ( v14 )
    {
      ZwClose(v14);
      v14 = 0LL;
      Handle = 0LL;
    }
    v20 = v46;
    v13 = v43;
    v10 = v47;
    if ( v16 )
    {
      ZwClose(v16);
      v20 = v46;
      v16 = 0LL;
      v13 = v43;
      v10 = v47;
      v41 = 0LL;
    }
  }
  if ( v26 >= 0 )
  {
    ObjectInformation[0] = 256;
    ZwSetInformationObject(v22, ObjectHandleFlagInformation, ObjectInformation, 2u);
    if ( v14 )
    {
      v37 = 256;
      ZwSetInformationObject(v14, ObjectHandleFlagInformation, &v37, 2u);
    }
    if ( v16 )
    {
      v38[0] = 256;
      ZwSetInformationObject(v16, ObjectHandleFlagInformation, v38, 2u);
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Source->Length, 0x624E4D43u);
    v28 = v53;
    *(_QWORD *)(v53 + 3016) = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_WORD *)(v28 + 3008) = Source->Length;
      *(_WORD *)(v28 + 3010) = Source->Length;
      memmove(*(void **)(v28 + 3016), Source->Buffer, Source->Length);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v28 + 64) + 4088LL) & 4) != 0 )
      CmpLogEvent(&REG_EVENT_SELFHEAL);
    if ( ZwQueryInformationFile(v22, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
      *(_QWORD *)(v28 + 5432) = v57;
    v22 = 0LL;
    v29 = v51;
    v14 = 0LL;
    *(_DWORD *)(v28 + 168) = HIDWORD(v50);
    v16 = 0LL;
    ObjectHandle = 0LL;
    Handle = 0LL;
    v41 = 0LL;
    *v47 = v28;
    FileSecurityDescriptor = 0;
    *v29 = v32;
  }
LABEL_11:
  if ( v33 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v22 = ObjectHandle;
    v14 = Handle;
    v16 = v41;
    v17 = v44;
  }
  if ( v22 )
    ZwClose(v22);
  if ( v14 )
    ZwClose(v14);
  if ( v16 )
    ZwClose(v16);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( stru_14033C3C0.LevelPlus1 > 4 )
  {
    v66 = 0;
    v64 = &v34;
    v34 = FileSecurityDescriptor;
    v65 = 4;
    TlgWrite(&stru_14033C3C0, &unk_1402AA959, 0LL, 0LL, 3u, &v63);
  }
  return (unsigned int)FileSecurityDescriptor;
}
