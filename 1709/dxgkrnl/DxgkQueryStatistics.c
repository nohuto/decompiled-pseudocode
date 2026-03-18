/*
 * XREFs of DxgkQueryStatistics @ 0x1C01810E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000E380 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00F1B34 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00F1B54 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01701A8 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C017F194 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkQueryStatistics(ULONG64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  _OWORD *v5; // rax
  unsigned int *v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  struct DXGPROCESS *Process; // r14
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // rcx
  bool v29; // zf
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGPROCESS *Current; // r14
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  int ProcessStatistics; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  _OWORD *v47; // rcx
  ULONG64 v48; // r8
  __int64 v49; // rax
  _OWORD *v50; // rax
  _BYTE v51[8]; // [rsp+20h] [rbp-3E8h] BYREF
  struct DXGADAPTER *v52; // [rsp+28h] [rbp-3E0h]
  char v53; // [rsp+30h] [rbp-3D8h]
  _BYTE v54[8]; // [rsp+38h] [rbp-3D0h] BYREF
  struct DXGADAPTER *v55; // [rsp+40h] [rbp-3C8h]
  char v56; // [rsp+48h] [rbp-3C0h]
  unsigned __int64 v57; // [rsp+50h] [rbp-3B8h] BYREF
  unsigned int v58; // [rsp+60h] [rbp-3A8h] BYREF
  struct _LUID v59; // [rsp+64h] [rbp-3A4h]
  void *v60; // [rsp+70h] [rbp-398h]
  _BYTE v61[776]; // [rsp+78h] [rbp-390h] BYREF
  _BYTE v62[80]; // [rsp+390h] [rbp-78h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2049);
  v4 = -1073741811;
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  v6 = &v58;
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
  memset(v61, 0, sizeof(v61));
  Global = DXGGLOBAL::GetGlobal(v9);
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v59, &v57);
  if ( !v13 )
  {
    v49 = WdLogNewEntry5_WdWarning(v12, v11, v14);
    *(_QWORD *)(v49 + 24) = v59.LowPart;
    *(_QWORD *)(v49 + 32) = v59.HighPart;
    WdLogEvent5_WdWarning(v49);
    goto LABEL_58;
  }
  if ( !v60 || v58 > 9 || (v12 = 854LL, !_bittest((const int *)&v12, v58)) )
  {
    Current = DXGPROCESS::GetCurrent(v12, (__int64)v60);
    if ( !Current )
    {
      v46 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v46 + 24) = 4180LL;
      WdLogEvent5_WdWarning(v46);
      goto LABEL_56;
    }
    v55 = v13;
    v56 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
    v39 = *((unsigned int *)v13 + 44);
    if ( (_DWORD)v39 != 1 )
    {
      v45 = WdLogNewEntry5_WdWarning(v39, v37, v38);
      *(_QWORD *)(v45 + 24) = v59.LowPart;
      *(_QWORD *)(v45 + 32) = v59.HighPart;
      WdLogEvent5_WdWarning(v45);
LABEL_53:
      if ( v56 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
      goto LABEL_56;
    }
    v40 = *((_QWORD *)v13 + 289);
    if ( !v40 )
    {
      v41 = WdLogNewEntry5_WdError(v39);
      *(_QWORD *)(v41 + 24) = v13;
      *(_QWORD *)(v41 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v41);
      if ( v56 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
      v29 = (qword_1C005F010 & 2) == 0;
      goto LABEL_19;
    }
    if ( !*(_QWORD *)(v40 + 528) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v39);
      *(_QWORD *)(v42 + 24) = 4125LL;
      WdLogEvent5_WdAssertion(v42);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v13 + 289) + 504LL) )
    {
      v43 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v43 + 24) = 4126LL;
      WdLogEvent5_WdAssertion(v43);
    }
    if ( v58 )
    {
      if ( v58 != 3 && v58 != 5 && v58 != 7 )
      {
        ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)&v58, v13, Current);
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
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v62, v60, 1024);
  v4 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v62, 1);
  if ( v4 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v18 + 24) = v60;
    WdLogEvent5_WdWarning(v18);
LABEL_30:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v62, v19, v20);
LABEL_56:
    DXGADAPTER::ReleaseReferenceNoTracking(v13);
LABEL_58:
    if ( v4 >= 0 )
    {
      v47 = (_OWORD *)(a1 + 24);
      v48 = MmUserProbeAddress;
      if ( a1 + 800 > MmUserProbeAddress || a1 + 800 <= (unsigned __int64)v47 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v50 = v61;
      do
      {
        *v47 = *v50;
        v47[1] = v50[1];
        v47[2] = v50[2];
        v47[3] = v50[3];
        v47[4] = v50[4];
        v47[5] = v50[5];
        v47[6] = v50[6];
        v47 += 8;
        *(v47 - 1) = v50[7];
        v50 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v47 = *(_QWORD *)v50;
    }
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v47, &EventProfilerExit, v48, 2049);
    return (unsigned int)v4;
  }
  Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v62);
  v52 = v13;
  v53 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  v22 = *((unsigned int *)v13 + 44);
  if ( (_DWORD)v22 != 1 )
  {
LABEL_28:
    if ( v53 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    goto LABEL_30;
  }
  v23 = *((_QWORD *)v13 + 289);
  if ( v23 )
  {
    if ( !*(_QWORD *)(v23 + 528) )
    {
      v31 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v31 + 24) = 4090LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( !*(_QWORD *)(*((_QWORD *)v13 + 289) + 504LL) )
    {
      v32 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v32 + 24) = 4091LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v4 = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)&v58, v13, Process);
    goto LABEL_28;
  }
  v24 = WdLogNewEntry5_WdError(v22);
  *(_QWORD *)(v24 + 24) = v13;
  *(_QWORD *)(v24 + 32) = -1073741637LL;
  WdLogEvent5_WdError(v24);
  if ( v53 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v62, v25, v26);
  v28 = qword_1C005F010;
  v29 = (qword_1C005F010 & 2) == 0;
LABEL_19:
  if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v27, 2049);
  return 3221225659LL;
}
