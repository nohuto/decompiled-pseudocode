/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C01CBCB0
 * Callers:
 *     DxgkDesktopSwitch @ 0x1C01CC9D0 (DxgkDesktopSwitch.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00AAB1C (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00AC9CC (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(unsigned int),unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 (__fastcall *a6)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_CONTEXT **this, unsigned int a2), _QWORD))
{
  struct DXGADAPTER *v6; // rbx
  __int64 v8; // r15
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rax
  char v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  DXGADAPTER *v22; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v24[8]; // [rsp+50h] [rbp-49h] BYREF
  struct DXGADAPTER *v25; // [rsp+58h] [rbp-41h]
  char v26; // [rsp+60h] [rbp-39h]
  unsigned __int64 v27; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v28[8]; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v29[32]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v30[72]; // [rsp+98h] [rbp-1h] BYREF
  struct DXGADAPTER *v31; // [rsp+F0h] [rbp+57h] BYREF
  struct OUTPUTDUPL_MGR *v32; // [rsp+108h] [rbp+6Fh] BYREF

  v22 = 0LL;
  v6 = 0LL;
  v32 = 0LL;
  v23 = -1LL;
  v8 = a3;
  v31 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL);
    if ( !RemoteOutputDuplMgr )
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = 90LL;
      WdLogEvent5_WdError(v17);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, a3, &v22, &v27, &v31, &v23, &v32);
  v6 = (struct DXGADAPTER *)OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v6 = v31;
    RemoteOutputDuplMgr = v32;
    if ( v31 )
    {
      v15 = 1;
LABEL_9:
      v19 = 0;
      v25 = v6;
      v26 = 0;
      if ( v15 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
        v19 = v26;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v6, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReferenceNoTracking(v22),
            DXGADAPTER::ReleaseReferenceNoTracking(v6),
            LODWORD(v6) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28),
            (int)v6 >= 0) )
      {
        if ( (unsigned int)v8 < *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          LODWORD(v6) = a6(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessDesktopSwitch, a5);
        }
        else
        {
          v21 = WdLogNewEntry5_WdError(v20);
          *(_QWORD *)(v21 + 24) = v8;
          WdLogEvent5_WdError(v21);
          LODWORD(v6) = -1071774972;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      COREACCESS::~COREACCESS((COREACCESS *)v29);
      if ( v19 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
      return (unsigned int)v6;
    }
LABEL_8:
    v15 = 0;
    goto LABEL_9;
  }
  v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v13 + 24) = a1;
  *(_QWORD *)(v13 + 32) = v6;
  WdLogEvent5_WdWarning(v13);
  return (unsigned int)v6;
}
