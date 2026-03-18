/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C01AED68
 * Callers:
 *     ?ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01AE8D0 (-ProcessLockScreenAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00F6B60 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
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
  __int64 v11; // r9
  __int64 v12; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  char v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  DXGADAPTER *v23; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v25[8]; // [rsp+58h] [rbp-31h] BYREF
  struct DXGADAPTER *v26; // [rsp+60h] [rbp-29h]
  char v27; // [rsp+68h] [rbp-21h]
  unsigned __int64 v28; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v29[8]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v30[32]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v31[40]; // [rsp+A0h] [rbp+17h] BYREF
  struct DXGADAPTER *v32; // [rsp+E8h] [rbp+5Fh] BYREF
  struct OUTPUTDUPL_MGR *v33; // [rsp+100h] [rbp+77h] BYREF

  v23 = 0LL;
  v5 = 0LL;
  v33 = 0LL;
  v24 = -1LL;
  v32 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( !RemoteOutputDuplMgr )
    {
      v17 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v17 + 24) = 90LL;
      WdLogEvent5_WdError(v17);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, 0, &v23, &v28, &v32, &v24, &v33);
  v5 = (struct DXGADAPTER *)OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v5 = v32;
    RemoteOutputDuplMgr = v33;
    if ( v32 )
    {
      v14 = 1;
LABEL_9:
      v19 = 0;
      v26 = v5;
      v27 = 0;
      if ( v14 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
        v19 = v27;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v5, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReference(v23),
            DXGADAPTER::ReleaseReference(v5),
            LODWORD(v5) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29),
            (int)v5 >= 0) )
      {
        if ( *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          LODWORD(v5) = a5(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessLockScreenActive);
        }
        else
        {
          v22 = WdLogNewEntry5_WdError(v21, v20);
          *(_QWORD *)(v22 + 24) = 0LL;
          WdLogEvent5_WdError(v22);
          LODWORD(v5) = -1071774972;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v31);
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      if ( v19 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
      return (unsigned int)v5;
    }
LABEL_8:
    v14 = 0;
    goto LABEL_9;
  }
  v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
  *(_QWORD *)(v12 + 24) = a1;
  *(_QWORD *)(v12 + 32) = v5;
  WdLogEvent5_WdWarning(v12);
  return (unsigned int)v5;
}
