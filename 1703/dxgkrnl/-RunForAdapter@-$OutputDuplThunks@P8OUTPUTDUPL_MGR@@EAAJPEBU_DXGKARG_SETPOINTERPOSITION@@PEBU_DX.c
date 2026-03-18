/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C00FB9A8
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXIIE@Z @ 0x1C00F8758 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00F6B60 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<long (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int),_DXGKARG_SETPOINTERPOSITION const *,_DXGKARG_SETPOINTERSHAPE const *,unsigned int,unsigned int>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 (__fastcall *a9)(struct OUTPUTDUPL_MGR *, __int64 (__fastcall *)(OUTPUTDUPL_MGR *this, const struct _DXGKARG_SETPOINTERPOSITION *a2, const struct _DXGKARG_SETPOINTERSHAPE *a3, __int64 a4, UINT a5), __int64, __int64, int, int))
{
  DXGADAPTER *v9; // rbx
  __int64 v10; // rsi
  int OutputDuplManager; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  DXGADAPTER *v22; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v24[8]; // [rsp+58h] [rbp-51h] BYREF
  DXGADAPTER *v25; // [rsp+60h] [rbp-49h]
  char v26; // [rsp+68h] [rbp-41h]
  unsigned __int64 v27; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v29[8]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v30; // [rsp+88h] [rbp-21h]
  DXGADAPTER *v31; // [rsp+90h] [rbp-19h]
  char v32; // [rsp+98h] [rbp-11h]
  _BYTE v33[8]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v34; // [rsp+A8h] [rbp-1h]
  DXGADAPTER *v35; // [rsp+B0h] [rbp+7h]
  char v36; // [rsp+B8h] [rbp+Fh]
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+E8h] [rbp+3Fh] BYREF
  DXGADAPTER *v38; // [rsp+100h] [rbp+57h] BYREF

  v22 = 0LL;
  v9 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v10 = a3;
  v38 = 0LL;
  v23 = -1LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v22, &v27, &v38, &v23, &RemoteOutputDuplMgr);
    v9 = (DXGADAPTER *)OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v19 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
      *(_QWORD *)(v19 + 24) = a1;
      *(_QWORD *)(v19 + 32) = v9;
      WdLogEvent5_WdWarning(v19);
      return (unsigned int)v9;
    }
    v9 = v38;
    if ( v38 )
    {
      v17 = 1;
LABEL_5:
      v25 = v9;
      v26 = 0;
      if ( v17 )
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
      v31 = v9;
      v32 = 0;
      if ( v9 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
        v9 = v38;
        v30 = -1LL;
      }
      v35 = v9;
      v36 = 0;
      if ( v9 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
        v9 = v38;
        v34 = -1LL;
      }
      if ( !a1
        || (DXGADAPTER::ReleaseReference(v22),
            DXGADAPTER::ReleaseReference(v9),
            LODWORD(v9) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28),
            (int)v9 >= 0) )
      {
        if ( (unsigned int)v10 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          v21 = WdLogNewEntry5_WdError(v14, v13);
          *(_QWORD *)(v21 + 24) = v10;
          WdLogEvent5_WdError(v21);
          LODWORD(v9) = -1071774972;
        }
        else
        {
          LODWORD(v9) = a9(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, a5, a6, a7, a8);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      COREACCESS::~COREACCESS((COREACCESS *)v29);
      if ( v26 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
      return (unsigned int)v9;
    }
LABEL_21:
    v17 = 0;
    goto LABEL_5;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    goto LABEL_21;
  v20 = WdLogNewEntry5_WdError(v14, v13);
  *(_QWORD *)(v20 + 24) = 90LL;
  WdLogEvent5_WdError(v20);
  return 3221226021LL;
}
