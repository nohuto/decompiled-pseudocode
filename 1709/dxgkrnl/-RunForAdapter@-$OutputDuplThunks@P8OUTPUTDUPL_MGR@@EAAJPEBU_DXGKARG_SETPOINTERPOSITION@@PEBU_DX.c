/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C00B524C
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00B497C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0090AB0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00B461C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
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
        __int64 (__fastcall *a9)(struct OUTPUTDUPL_MGR *, __int64 (__fastcall *)(OUTPUTDUPL_MGR *this, const struct _DXGKARG_SETPOINTERPOSITION *a2, const struct _DXGKARG_SETPOINTERSHAPE *a3, UINT a4, UINT a5), __int64, __int64, int, int))
{
  DXGADAPTER *v9; // rbx
  __int64 v10; // rsi
  int OutputDuplManager; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // al
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  DXGADAPTER *v21; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v23[8]; // [rsp+58h] [rbp-51h] BYREF
  DXGADAPTER *v24; // [rsp+60h] [rbp-49h]
  char v25; // [rsp+68h] [rbp-41h]
  unsigned __int64 v26; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v27[8]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v28[8]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v29; // [rsp+88h] [rbp-21h]
  DXGADAPTER *v30; // [rsp+90h] [rbp-19h]
  char v31; // [rsp+98h] [rbp-11h]
  _BYTE v32[8]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-1h]
  DXGADAPTER *v34; // [rsp+B0h] [rbp+7h]
  char v35; // [rsp+B8h] [rbp+Fh]
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+E8h] [rbp+3Fh] BYREF
  DXGADAPTER *v37; // [rsp+100h] [rbp+57h] BYREF

  v21 = 0LL;
  v9 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v10 = a3;
  v37 = 0LL;
  v22 = -1LL;
  if ( a1 )
  {
    OutputDuplManager = FindOutputDuplManager(a1, a3, &v21, &v26, &v37, &v22, &RemoteOutputDuplMgr);
    v9 = (DXGADAPTER *)OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v18 + 24) = a1;
      *(_QWORD *)(v18 + 32) = v9;
      WdLogEvent5_WdWarning(v18);
      return (unsigned int)v9;
    }
    v9 = v37;
    if ( v37 )
    {
      v16 = 1;
LABEL_5:
      v24 = v9;
      v25 = 0;
      if ( v16 )
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
      v30 = v9;
      v31 = 0;
      if ( v9 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
        v9 = v37;
        v29 = -1LL;
      }
      v34 = v9;
      v35 = 0;
      if ( v9 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 3);
        v9 = v37;
        v33 = -1LL;
      }
      if ( !a1
        || (DXGADAPTER::ReleaseReferenceNoTracking(v21),
            DXGADAPTER::ReleaseReferenceNoTracking(v9),
            LODWORD(v9) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27),
            (int)v9 >= 0) )
      {
        if ( (unsigned int)v10 >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          v20 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v20 + 24) = v10;
          WdLogEvent5_WdError(v20);
          LODWORD(v9) = -1071774972;
        }
        else
        {
          LODWORD(v9) = a9(RemoteOutputDuplMgr, OUTPUTDUPL_MGR::ProcessPointerShapeChange, a5, a6, a7, a8);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v32);
      COREACCESS::~COREACCESS((COREACCESS *)v28);
      if ( v25 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
      return (unsigned int)v9;
    }
LABEL_21:
    v16 = 0;
    goto LABEL_5;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(0LL);
  if ( RemoteOutputDuplMgr )
    goto LABEL_21;
  v19 = WdLogNewEntry5_WdError(v14);
  *(_QWORD *)(v19 + 24) = 90LL;
  WdLogEvent5_WdError(v19);
  return 3221226021LL;
}
