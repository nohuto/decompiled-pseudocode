/*
 * XREFs of CmpInitHiveFromFile @ 0x14049DBFC
 * Callers:
 *     CmpCmdHiveOpen @ 0x1404F7D70 (CmpCmdHiveOpen.c)
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401A76E0 (ZwQueryInformationFile.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14049BD64 (CmpQueryFileSecurityDescriptor.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpLogEvent @ 0x1406EFE04 (CmpLogEvent.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        PCUNICODE_STRING Source,
        unsigned int a2,
        ULONG_PTR *a3,
        _BYTE *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        _BYTE *a9,
        void *a10)
{
  ULONG_PTR *v11; // r10
  __int64 v13; // rdx
  HANDLE v14; // rbx
  unsigned int v15; // ecx
  HANDLE v16; // rsi
  void *v17; // r12
  int v18; // ecx
  int v19; // r15d
  int v20; // edi
  HANDLE v21; // r14
  int v23; // eax
  unsigned int v24; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v26; // eax
  ULONG_PTR v27; // rdi
  PVOID PoolWithTag; // rax
  char *v29; // rcx
  int v30; // r15d
  bool v31; // zf
  char v32; // [rsp+60h] [rbp-A0h]
  char v33; // [rsp+61h] [rbp-9Fh]
  BOOLEAN v34; // [rsp+62h] [rbp-9Eh]
  int v35; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h]
  int v37; // [rsp+70h] [rbp-90h]
  HANDLE v38; // [rsp+78h] [rbp-88h]
  HANDLE FileHandle; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  void *v41; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR *v42; // [rsp+98h] [rbp-68h]
  int v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A4h] [rbp-5Ch]
  unsigned int v45; // [rsp+ACh] [rbp-54h]
  void *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE *v48; // [rsp+C0h] [rbp-40h]
  _BYTE *v49; // [rsp+D0h] [rbp-30h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v51[4]; // [rsp+E0h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  char FileInformation[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v54; // [rsp+120h] [rbp+20h]
  _BYTE v55[56]; // [rsp+138h] [rbp+38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  wchar_t *Buffer; // [rsp+1A0h] [rbp+A0h]
  _DWORD v60[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  EVENT_DATA_DESCRIPTOR v61; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v62; // [rsp+1D0h] [rbp+D0h]
  int v63; // [rsp+1D8h] [rbp+D8h]
  int v64; // [rsp+1DCh] [rbp+DCh]

  v49 = a9;
  v11 = a3;
  v45 = a2;
  v13 = a6;
  v46 = a10;
  v48 = a4;
  v42 = a3;
  v40 = a6;
  if ( stru_140397090.LevelPlus1 > 4 )
  {
    v58 = 2LL;
    v57 = v60;
    Buffer = Source->Buffer;
    v60[0] = Source->Length;
    v60[1] = 0;
    TlgWrite(&stru_140397090, &unk_140307FBC, 0LL, 0LL, 4u, &pData);
    v13 = v40;
    a4 = v48;
    v11 = v42;
  }
  v33 = 0;
  v14 = 0LL;
  v15 = (a5 >> 19) & 0x40;
  v34 = 0;
  FileHandle = 0LL;
  v44 = a2 & 0x8000;
  v16 = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v38 = 0LL;
  v32 = 1;
  v41 = 0LL;
  if ( (a2 & 0x8000) != 0 )
  {
    v18 = v15 | 0x20;
    v32 = 0;
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
  while ( 1 )
  {
    v47 = 0LL;
    *v11 = 0LL;
    v20 = CmpOpenHiveFile(Source, v19, v13, (__int64)&v47, 0LL, 0LL);
    if ( v20 < 0 )
    {
      v21 = FileHandle;
      goto LABEL_8;
    }
    v37 = v19;
    if ( v43 == 2 )
    {
      v33 = 1;
      v37 = v19 | 0x10;
    }
    v21 = FileHandle;
    if ( !v44 )
    {
      v23 = CmpQueryFileSecurityDescriptor(FileHandle, &v41);
      v17 = v41;
      v20 = v23;
      if ( v23 < 0 )
        goto LABEL_8;
    }
    if ( (a5 & 0x10000000) != 0 )
    {
      v35 = 1;
      v20 = CmpOpenHiveFile(Source, v37, v40, 0LL, (__int64)v17, 0LL);
      if ( v20 >= 0 )
      {
        v14 = Handle;
        goto LABEL_34;
      }
      v14 = 0LL;
      v31 = v32 == 0;
      Handle = 0LL;
    }
    else
    {
      v35 = 2;
      v20 = CmpOpenHiveFile(Source, v37, v40, 0LL, (__int64)v17, 0LL);
      if ( v20 < 0 )
      {
        v14 = 0LL;
        Handle = 0LL;
        if ( v32 )
          goto LABEL_8;
      }
      else
      {
        v14 = Handle;
      }
      v20 = CmpOpenHiveFile(Source, v37, v40, 0LL, (__int64)v17, 0LL);
      if ( v20 >= 0 )
      {
        v16 = v38;
        goto LABEL_34;
      }
      v16 = 0LL;
      v31 = v32 == 0;
      v38 = 0LL;
    }
    if ( !v31 )
      goto LABEL_8;
LABEL_34:
    v24 = v35;
    if ( !v32 )
    {
      if ( v35 != 2 )
      {
        v24 = v14 != 0LL;
        goto LABEL_35;
      }
      if ( v14 )
      {
        if ( v16 )
          goto LABEL_35;
        ZwClose(v14);
        v14 = 0LL;
        Handle = 0LL;
      }
      if ( v16 )
      {
        ZwClose(v16);
        v16 = 0LL;
        v38 = 0LL;
      }
      v24 = 0;
    }
LABEL_35:
    if ( !v34 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v34 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      if ( !v34 )
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v21 = FileHandle;
      v14 = Handle;
      v16 = v38;
      v17 = v41;
      if ( !v34 )
      {
        v20 = -1073741431;
        goto LABEL_8;
      }
    }
    v51[3] = 0LL;
    v51[0] = v21;
    v51[1] = v14;
    v51[2] = v16;
    memset(v46, 0, 0x160uLL);
    v26 = CmpCreateHive(
            &BugCheckParameter2,
            v33 == 0 ? 5 : 0,
            v45,
            v24,
            0LL,
            (__int64)v51,
            (__int64)Source,
            a5,
            0LL,
            0LL,
            v49,
            (__int64)v46);
    v20 = v26;
    if ( v26 != -1073741267 )
      break;
    ZwClose(v21);
    FileHandle = 0LL;
    if ( v14 )
    {
      ZwClose(v14);
      v14 = 0LL;
      Handle = 0LL;
    }
    v13 = v40;
    v11 = v42;
    if ( v16 )
    {
      ZwClose(v16);
      v13 = v40;
      v16 = 0LL;
      v11 = v42;
      v38 = 0LL;
    }
  }
  if ( v26 >= 0 )
  {
    v27 = BugCheckParameter2;
    if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x800) != 0 )
    {
      CmpAttachToRegistryProcess(v55);
      v30 = CmpFlushHive(v27, 0xCu);
      KiUnstackDetachProcess((__int64)v55, 0LL);
      if ( v30 < 0 )
        SetFailureLocation((__int64)v46, 1, 1, v30, 230);
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Source->Length, 0x624E4D43u);
    *(_QWORD *)(v27 + 1840) = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_WORD *)(v27 + 1832) = Source->Length;
      *(_WORD *)(v27 + 1834) = Source->Length;
      memmove(*(void **)(v27 + 1840), Source->Buffer, Source->Length);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v27 + 64) + 4088LL) & 4) != 0 )
      CmpLogEvent(&REG_EVENT_SELFHEAL);
    if ( ZwQueryInformationFile(v21, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation) >= 0 )
      *(_QWORD *)(v27 + 4224) = v54;
    v29 = v48;
    *(_DWORD *)(v27 + 184) = HIDWORD(v47);
    *v42 = v27;
    v20 = 0;
    *v29 = v33;
  }
LABEL_8:
  if ( v34 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v21 = FileHandle;
    v14 = Handle;
    v16 = v38;
    v17 = v41;
  }
  if ( v21 )
    ZwClose(v21);
  if ( v14 )
    ZwClose(v14);
  if ( v16 )
    ZwClose(v16);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( stru_140397090.LevelPlus1 > 4 )
  {
    v64 = 0;
    v62 = &v35;
    v35 = v20;
    v63 = 4;
    TlgWrite(&stru_140397090, &unk_140307F92, 0LL, 0LL, 3u, &v61);
  }
  return (unsigned int)v20;
}
