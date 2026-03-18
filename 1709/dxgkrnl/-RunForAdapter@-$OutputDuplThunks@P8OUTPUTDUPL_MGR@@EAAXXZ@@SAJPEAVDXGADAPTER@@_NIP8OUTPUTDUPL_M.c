/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C01C8B14
 * Callers:
 *     ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01C8460 (-ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0090AB0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00B461C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(void)>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, void (__fastcall *)(OUTPUTDUPL_CONTEXT **this)))
{
  struct DXGADAPTER *v5; // rbx
  int OutputDuplManager; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rax
  char v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rax
  DXGADAPTER *v20; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v22[8]; // [rsp+58h] [rbp-31h] BYREF
  struct DXGADAPTER *v23; // [rsp+60h] [rbp-29h]
  char v24; // [rsp+68h] [rbp-21h]
  unsigned __int64 v25; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v26[8]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v27[32]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v28[40]; // [rsp+A0h] [rbp+17h] BYREF
  struct DXGADAPTER *v29; // [rsp+E8h] [rbp+5Fh] BYREF
  struct OUTPUTDUPL_MGR *v30; // [rsp+100h] [rbp+77h] BYREF

  v20 = 0LL;
  v5 = 0LL;
  v30 = 0LL;
  v21 = -1LL;
  v29 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL);
    if ( !RemoteOutputDuplMgr )
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = 90LL;
      WdLogEvent5_WdError(v15);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, 0, &v20, &v25, &v29, &v21, &v30);
  v5 = (struct DXGADAPTER *)OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v5 = v29;
    RemoteOutputDuplMgr = v30;
    if ( v29 )
    {
      v13 = 1;
LABEL_9:
      v17 = 0;
      v23 = v5;
      v24 = 0;
      if ( v13 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
        v17 = v24;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, v5, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReferenceNoTracking(v20),
            DXGADAPTER::ReleaseReferenceNoTracking(v5),
            LODWORD(v5) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26),
            (int)v5 >= 0) )
      {
        if ( *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          LODWORD(v5) = a5(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessLockScreenActive);
        }
        else
        {
          v19 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v19 + 24) = 0LL;
          WdLogEvent5_WdError(v19);
          LODWORD(v5) = -1071774972;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v28);
      COREACCESS::~COREACCESS((COREACCESS *)v27);
      if ( v17 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
      return (unsigned int)v5;
    }
LABEL_8:
    v13 = 0;
    goto LABEL_9;
  }
  v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
  *(_QWORD *)(v11 + 24) = a1;
  *(_QWORD *)(v11 + 32) = v5;
  WdLogEvent5_WdWarning(v11);
  return (unsigned int)v5;
}
