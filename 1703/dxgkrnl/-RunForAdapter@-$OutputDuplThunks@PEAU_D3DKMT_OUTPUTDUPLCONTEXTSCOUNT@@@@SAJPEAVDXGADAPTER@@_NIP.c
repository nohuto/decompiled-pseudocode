/*
 * XREFs of ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C01AEEF8
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C009DAE0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00F6B60 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT *>::RunForAdapter(
        struct DXGADAPTER *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(struct OUTPUTDUPL_MGR *, __int64))
{
  struct DXGADAPTER *v5; // rdi
  __int64 v8; // r14
  int OutputDuplManager; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct OUTPUTDUPL_MGR *v14; // rbx
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct DXGADAPTER *v24; // [rsp+48h] [rbp-51h] BYREF
  DXGADAPTER *v25; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-41h] BYREF
  _BYTE v27[8]; // [rsp+60h] [rbp-39h] BYREF
  struct DXGADAPTER *v28; // [rsp+68h] [rbp-31h]
  char v29; // [rsp+70h] [rbp-29h]
  unsigned __int64 v30; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v31[8]; // [rsp+88h] [rbp-11h] BYREF
  _BYTE v32[32]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v33[40]; // [rsp+B0h] [rbp+17h] BYREF
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // [rsp+F8h] [rbp+5Fh] BYREF

  v25 = 0LL;
  v5 = 0LL;
  RemoteOutputDuplMgr = 0LL;
  v26 = -1LL;
  v8 = a3;
  v24 = 0LL;
  if ( !a1 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v14 = RemoteOutputDuplMgr;
    if ( !RemoteOutputDuplMgr )
    {
      v19 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v19 + 24) = 90LL;
      WdLogEvent5_WdError(v19);
      return 3221226021LL;
    }
    goto LABEL_8;
  }
  OutputDuplManager = FindOutputDuplManager(a1, a3, &v25, &v30, &v24, &v26, &RemoteOutputDuplMgr);
  v14 = (struct OUTPUTDUPL_MGR *)OutputDuplManager;
  if ( OutputDuplManager >= 0 )
  {
    v5 = v24;
    v14 = RemoteOutputDuplMgr;
    if ( v24 )
    {
      v16 = 1;
      goto LABEL_9;
    }
LABEL_8:
    v16 = 0;
LABEL_9:
    v28 = v5;
    v29 = 0;
    if ( v16 )
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v5, 0LL);
    if ( a1 )
    {
      DXGADAPTER::ReleaseReference(v25);
      DXGADAPTER::ReleaseReference(v5);
      if ( *((_DWORD *)v5 + 44) != 1 )
      {
        LODWORD(v14) = -1073741130;
LABEL_18:
        COREACCESS::~COREACCESS((COREACCESS *)v33);
        COREACCESS::~COREACCESS((COREACCESS *)v32);
        if ( v29 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
        return (unsigned int)v14;
      }
      v14 = RemoteOutputDuplMgr;
    }
    if ( (unsigned int)v8 < *((_DWORD *)v14 + 13) )
    {
      LODWORD(v14) = a5(v14, a4);
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v23 + 24) = v8;
      WdLogEvent5_WdError(v23);
      LODWORD(v14) = -1071774972;
    }
    goto LABEL_18;
  }
  v15 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
  *(_QWORD *)(v15 + 24) = a1;
  *(_QWORD *)(v15 + 32) = v14;
  WdLogEvent5_WdWarning(v15);
  return (unsigned int)v14;
}
