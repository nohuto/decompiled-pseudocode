/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01AF094
 * Callers:
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01AF22C (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
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

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  struct DXGADAPTER *v5; // rbx
  __int64 v8; // r15
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rdi
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  char v21; // si
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGADAPTER *v25; // [rsp+40h] [rbp-61h] BYREF
  DXGADAPTER *v26; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v28[8]; // [rsp+58h] [rbp-49h] BYREF
  struct DXGADAPTER *v29; // [rsp+60h] [rbp-41h]
  char v30; // [rsp+68h] [rbp-39h]
  unsigned __int64 v31; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v32[8]; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v33[32]; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v34[40]; // [rsp+A8h] [rbp+7h] BYREF
  struct OUTPUTDUPL_MGR *v35; // [rsp+100h] [rbp+5Fh] BYREF

  v26 = 0LL;
  v5 = 0LL;
  v35 = 0LL;
  v27 = -1LL;
  v8 = a3;
  v25 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    if ( !RemoteOutputDuplMgr )
    {
      v19 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v19 + 24) = 90LL;
      WdLogEvent5_WdError(v19);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, a3, &v26, &v31, &v25, &v27, &v35);
  v5 = (struct DXGADAPTER *)OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v5 = v25;
    RemoteOutputDuplMgr = v35;
    if ( v25 )
    {
      v16 = 1;
LABEL_9:
      v21 = 0;
      v29 = v5;
      v30 = 0;
      if ( v16 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
        v21 = v30;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v5, 0LL);
      if ( !a1
        || (DXGADAPTER::ReleaseReference(v26),
            DXGADAPTER::ReleaseReference(v5),
            LODWORD(v5) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32),
            (int)v5 >= 0) )
      {
        if ( (unsigned int)v8 < *((_DWORD *)RemoteOutputDuplMgr + 13) )
        {
          LODWORD(v5) = a5(RemoteOutputDuplMgr, a4);
        }
        else
        {
          v24 = WdLogNewEntry5_WdError(v23, v22);
          *(_QWORD *)(v24 + 24) = v8;
          WdLogEvent5_WdError(v24);
          LODWORD(v5) = -1071774972;
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v34);
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      if ( v21 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
      return (unsigned int)v5;
    }
LABEL_8:
    v16 = 0;
    goto LABEL_9;
  }
  v14 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
  *(_QWORD *)(v14 + 24) = a1;
  *(_QWORD *)(v14 + 32) = v5;
  WdLogEvent5_WdWarning(v14);
  return (unsigned int)v5;
}
