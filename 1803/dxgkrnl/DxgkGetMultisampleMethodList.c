/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C0194600
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C0212F4C (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _D3DDDI_MULTISAMPLINGMETHOD *v12; // r14
  ULONG64 v13; // rax
  __int64 v14; // rsi
  SIZE_T v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGADAPTER *v21; // rsi
  int PairingAdapters; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGADAPTER *v26; // rsi
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // r13
  __int64 v37; // rbx
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rbx
  __int64 v51; // rcx
  unsigned int v52; // r11d
  _QWORD *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v57; // [rsp+40h] [rbp-F8h]
  struct _D3DDDI_MULTISAMPLINGMETHOD *v58; // [rsp+48h] [rbp-F0h]
  _BYTE v59[40]; // [rsp+50h] [rbp-E8h] BYREF
  int v60; // [rsp+78h] [rbp-C0h]
  int v61; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+88h] [rbp-B0h]
  struct DXGADAPTER *v63; // [rsp+90h] [rbp-A8h] BYREF
  unsigned __int64 v64; // [rsp+98h] [rbp-A0h] BYREF
  DXGADAPTER *v65; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v66[136]; // [rsp+B0h] [rbp-88h] BYREF
  unsigned __int64 v67; // [rsp+148h] [rbp+10h] BYREF
  struct _KTHREAD **v68; // [rsp+150h] [rbp+18h]
  struct DXGADAPTER *v69; // [rsp+158h] [rbp+20h] BYREF

  v62 = 0LL;
  v61 = 2019;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2019);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v61, 2019);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v68 = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    *(_QWORD *)(v8 + 32) = PsGetCurrentProcess(v11, v10);
    WdLogEvent5_WdError(v8);
    goto LABEL_44;
  }
  memset(v59, 0, sizeof(v59));
  LODWORD(v9) = 0;
  v12 = 0LL;
  v58 = 0LL;
  v13 = a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  *(_OWORD *)v59 = *(_OWORD *)v13;
  *(_OWORD *)&v59[16] = *(_OWORD *)(v13 + 16);
  *(_QWORD *)&v59[32] = *(_QWORD *)(v13 + 32);
  if ( _mm_srli_si128(*(__m128i *)&v59[16], 8).m128i_u64[0] && *(_DWORD *)&v59[32] )
  {
    v14 = *(unsigned int *)&v59[32];
    v15 = 8LL * *(unsigned int *)&v59[32];
    if ( !is_mul_ok(*(unsigned int *)&v59[32], 8uLL) )
      v15 = -1LL;
    v12 = (struct _D3DDDI_MULTISAMPLINGMETHOD *)operator new[](v15, 0x4B677844u, PagedPool);
    v58 = v12;
    if ( !v12 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdLowResource(v16);
      LODWORD(v9) = -1073741801;
      v17[3] = -1073741801LL;
      v17[4] = *(unsigned int *)v59;
      v17[5] = *(unsigned int *)&v59[4];
      v17[6] = v14;
      WdLogEvent5_WdLowResource(v17);
    }
  }
  if ( (int)v9 >= 0 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v65, *(unsigned int *)v59, Current, &v69);
    v67 = 0LL;
    v21 = v69;
    if ( v69 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v69, *(unsigned int *)&v59[4], 0LL, 0LL, &v63, &v64);
      v9 = PairingAdapters;
      v57 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v26 = v63;
        if ( !v63 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v27 + 24) = 5379LL;
          WdLogEvent5_WdAssertion(v27);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v26, 0LL);
        DXGADAPTER::ReleaseReferenceNoTracking(v26);
        v28 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66);
        v9 = v28;
        v57 = v28;
        if ( v28 < 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
          v47[3] = v9;
          v47[4] = Current;
          v47[5] = *(unsigned int *)v59;
          v47[6] = v26;
          WdLogEvent5_WdDmmEvent(v47);
        }
        else
        {
          v32 = *(unsigned int *)&v59[4];
          if ( *(_DWORD *)(*((_QWORD *)v26 + 307) + 80LL) > *(_DWORD *)&v59[4] )
          {
            if ( *((_QWORD *)v26 + 308) )
            {
              v35 = *(unsigned int *)&v59[32];
              v36 = *(int *)&v59[16];
              v37 = *(unsigned int *)&v59[4];
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v26,
                                                              *(unsigned int *)&v59[4],
                                                              *(unsigned int *)&v59[8],
                                                              *(unsigned int *)&v59[12],
                                                              *(enum _D3DDDIFORMAT *)&v59[16],
                                                              *(unsigned int *)&v59[32],
                                                              v12,
                                                              &v67);
              v9 = MultisamplingMethodSetFromClientVidPnSource;
              v57 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
                v42[3] = v35;
                v42[4] = v37;
                v42[5] = v26;
                v42[6] = v9;
                WdLogEvent5_WdWarning(v42);
                v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
                v46[3] = v37;
                v46[4] = v26;
                v46[5] = *(unsigned int *)&v59[8];
                v46[6] = *(unsigned int *)&v59[12];
                v46[7] = v36;
                WdLogEvent5_WdWarning(v46);
              }
              goto LABEL_28;
            }
            v34 = WdLogNewEntry5_WdDmmEvent(v30);
            *(_QWORD *)(v34 + 24) = v26;
            LODWORD(v9) = -1073741637;
            *(_QWORD *)(v34 + 32) = -1073741637LL;
            WdLogEvent5_WdDmmEvent(v34);
          }
          else
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
            LODWORD(v9) = -1073741811;
            v33[3] = -1073741811LL;
            v33[4] = v26;
            v33[5] = v32;
            WdLogEvent5_WdWarning(v33);
          }
          v57 = v9;
        }
LABEL_28:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
        goto LABEL_31;
      }
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v48[3] = v21;
      v48[4] = *(unsigned int *)&v59[4];
      v48[5] = v9;
      WdLogEvent5_WdWarning(v48);
    }
    else
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      LODWORD(v9) = -1073741811;
      v49[3] = -1073741811LL;
      v49[4] = Current;
      v49[5] = *(unsigned int *)v59;
      WdLogEvent5_WdWarning(v49);
      v57 = -1073741811;
    }
LABEL_31:
    if ( (int)v9 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = v67 >> 3;
      if ( v12 )
      {
        v50 = *(_QWORD *)(a1 + 24);
        v51 = 0LL;
        v52 = *(_DWORD *)&v59[32];
        v12 = v58;
        while ( 1 )
        {
          v60 = v51;
          if ( (unsigned int)v51 >= v52 )
            break;
          v53 = (_QWORD *)(v50 + 12 * v51);
          if ( (unsigned __int64)(v53 + 1) > MmUserProbeAddress || v53 + 1 <= v53 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v53 = v58[v51];
          v51 = (unsigned int)(v51 + 1);
        }
        LODWORD(v9) = v57;
      }
    }
    if ( v65 )
      DXGADAPTER::ReleaseReferenceNoTracking(v65);
  }
  if ( v12 )
    operator delete[](v12);
LABEL_44:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v54, &EventProfilerExit, v55, v61);
  return (unsigned int)v9;
}
