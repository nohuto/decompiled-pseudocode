/*
 * XREFs of DxgkQueryStatistics @ 0x1C017D700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0001DCC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C009B108 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C016CA50 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C017B3E4 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkQueryStatistics(ULONG64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  _OWORD *v5; // rax
  unsigned int *v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DXGGLOBAL *Global; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGADAPTER *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  struct DXGPROCESS *Process; // r15
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rcx
  bool v37; // zf
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  struct DXGPROCESS *Current; // r15
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int ProcessStatistics; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  _OWORD *v57; // rcx
  ULONG64 v58; // r8
  __int64 v59; // rax
  _OWORD *v60; // rax
  _BYTE v61[8]; // [rsp+20h] [rbp-3E8h] BYREF
  struct DXGADAPTER *v62; // [rsp+28h] [rbp-3E0h]
  char v63; // [rsp+30h] [rbp-3D8h]
  _BYTE v64[8]; // [rsp+38h] [rbp-3D0h] BYREF
  struct DXGADAPTER *v65; // [rsp+40h] [rbp-3C8h]
  char v66; // [rsp+48h] [rbp-3C0h]
  int v67; // [rsp+50h] [rbp-3B8h]
  unsigned __int64 v68; // [rsp+58h] [rbp-3B0h] BYREF
  unsigned int v69; // [rsp+60h] [rbp-3A8h] BYREF
  struct _LUID v70; // [rsp+64h] [rbp-3A4h]
  void *v71; // [rsp+70h] [rbp-398h]
  _BYTE v72[776]; // [rsp+78h] [rbp-390h] BYREF
  _BYTE v73[80]; // [rsp+390h] [rbp-78h] BYREF

  v67 = 2049;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2049);
  v4 = -1073741811;
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  v6 = &v69;
  v7 = 6LL;
  v8 = 6LL;
  do
  {
    *(_OWORD *)v6 = *v5;
    *((_OWORD *)v6 + 1) = v5[1];
    *((_OWORD *)v6 + 2) = v5[2];
    *((_OWORD *)v6 + 3) = v5[3];
    *((_OWORD *)v6 + 4) = v5[4];
    *((_OWORD *)v6 + 5) = v5[5];
    *((_OWORD *)v6 + 6) = v5[6];
    v6 += 32;
    *((_OWORD *)v6 - 1) = v5[7];
    v5 += 8;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)v6 = *v5;
  *((_OWORD *)v6 + 1) = v5[1];
  *((_QWORD *)v6 + 4) = *((_QWORD *)v5 + 4);
  memset(v72, 0, sizeof(v72));
  Global = DXGGLOBAL::GetGlobal(v10, v9, v11, v12);
  v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v70, &v68, v14);
  if ( !v17 )
  {
    v59 = WdLogNewEntry5_WdWarning(v16, v15, v18, v19);
    *(_QWORD *)(v59 + 24) = v70.LowPart;
    *(_QWORD *)(v59 + 32) = v70.HighPart;
    WdLogEvent5_WdWarning(v59);
    goto LABEL_58;
  }
  if ( !v71 || v69 > 9 || (v16 = 854LL, !_bittest((const int *)&v16, v69)) )
  {
    Current = DXGPROCESS::GetCurrent(v16);
    if ( !Current )
    {
      v56 = WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
      *(_QWORD *)(v56 + 24) = 3895LL;
      WdLogEvent5_WdWarning(v56);
      goto LABEL_56;
    }
    v65 = v17;
    v66 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
    v49 = *((unsigned int *)v17 + 44);
    if ( (_DWORD)v49 != 1 )
    {
      v55 = WdLogNewEntry5_WdWarning(v49, v46, v47, v48);
      *(_QWORD *)(v55 + 24) = v70.LowPart;
      *(_QWORD *)(v55 + 32) = v70.HighPart;
      WdLogEvent5_WdWarning(v55);
LABEL_53:
      if ( v66 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
      goto LABEL_56;
    }
    v50 = *((_QWORD *)v17 + 286);
    if ( !v50 )
    {
      v51 = WdLogNewEntry5_WdError(v49, v46);
      *(_QWORD *)(v51 + 24) = v17;
      *(_QWORD *)(v51 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v51);
      if ( v66 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
      v37 = (qword_1C006E790 & 2) == 0;
      goto LABEL_19;
    }
    if ( !*(_QWORD *)(v50 + 432) )
    {
      v52 = WdLogNewEntry5_WdAssertion(v49, v46, v47, v48);
      *(_QWORD *)(v52 + 24) = 3840LL;
      WdLogEvent5_WdAssertion(v52);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v17 + 286) + 408LL) )
    {
      v53 = WdLogNewEntry5_WdAssertion(0LL, v46, v47, v48);
      *(_QWORD *)(v53 + 24) = 3841LL;
      WdLogEvent5_WdAssertion(v53);
    }
    if ( v69 )
    {
      if ( v69 != 3 && v69 != 5 && v69 != 7 )
      {
        ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)&v69, v17, Current, v48);
LABEL_51:
        v4 = ProcessStatistics;
        goto LABEL_53;
      }
    }
    else
    {
      v4 = _guard_dispatch_icall_fptr();
      if ( v4 < 0 )
        goto LABEL_53;
    }
    ProcessStatistics = _guard_dispatch_icall_fptr();
    goto LABEL_51;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v73, v71, 1024);
  v4 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v73, 1);
  if ( v4 < 0 )
  {
    v24 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
    *(_QWORD *)(v24 + 24) = v71;
    WdLogEvent5_WdWarning(v24);
LABEL_30:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v73, v25, v26, v27);
LABEL_56:
    DXGADAPTER::ReleaseReference(v17);
LABEL_58:
    if ( v4 >= 0 )
    {
      v57 = (_OWORD *)(a1 + 24);
      v58 = MmUserProbeAddress;
      if ( a1 + 800 > MmUserProbeAddress || a1 + 800 <= (unsigned __int64)v57 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v60 = v72;
      do
      {
        *v57 = *v60;
        v57[1] = v60[1];
        v57[2] = v60[2];
        v57[3] = v60[3];
        v57[4] = v60[4];
        v57[5] = v60[5];
        v57[6] = v60[6];
        v57 += 8;
        *(v57 - 1) = v60[7];
        v60 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v57 = *(_QWORD *)v60;
    }
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v57, &EventProfilerExit, v58, 2049);
    return (unsigned int)v4;
  }
  Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v73);
  v62 = v17;
  v63 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
  v29 = *((unsigned int *)v17 + 44);
  if ( (_DWORD)v29 != 1 )
  {
LABEL_28:
    if ( v63 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
    goto LABEL_30;
  }
  v30 = *((_QWORD *)v17 + 286);
  if ( v30 )
  {
    if ( !*(_QWORD *)(v30 + 432) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v29, v25, v26, v27);
      *(_QWORD *)(v39 + 24) = 3805LL;
      WdLogEvent5_WdAssertion(v39);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v17 + 286) + 408LL) )
    {
      v40 = WdLogNewEntry5_WdAssertion(0LL, v25, v26, v27);
      *(_QWORD *)(v40 + 24) = 3806LL;
      WdLogEvent5_WdAssertion(v40);
    }
    v4 = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)&v69, v17, Process, v27);
    goto LABEL_28;
  }
  v31 = WdLogNewEntry5_WdError(v29, v25);
  *(_QWORD *)(v31 + 24) = v17;
  *(_QWORD *)(v31 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v31);
  if ( v63 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v73, v32, v33, v34);
  v36 = qword_1C006E790;
  v37 = (qword_1C006E790 & 2) == 0;
LABEL_19:
  if ( !v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v36, &EventProfilerExit, v35, 2049);
  return 3221225659LL;
}
