/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C01A3C30
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MULTISAMPLINGMETHOD@@PEA_K@Z @ 0x1C01EC880 (-DmmGetMultisamplingMethodSetFromClientVidPnSource@@YAJQEAXIIIW4_D3DDDIFORMAT@@_KPEAU_D3DDDI_MUL.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  struct _D3DDDI_MULTISAMPLINGMETHOD *v13; // r14
  ULONG64 v14; // rax
  __int64 v15; // rsi
  SIZE_T v16; // rax
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
  int v55; // [rsp+40h] [rbp-E8h]
  struct _D3DDDI_MULTISAMPLINGMETHOD *v56; // [rsp+48h] [rbp-E0h]
  _BYTE v57[40]; // [rsp+50h] [rbp-D8h] BYREF
  int v58; // [rsp+78h] [rbp-B0h]
  struct DXGADAPTER *v59; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp-A0h] BYREF
  DXGADAPTER *v61; // [rsp+90h] [rbp-98h] BYREF
  _BYTE v62[136]; // [rsp+A0h] [rbp-88h] BYREF
  unsigned __int64 v63; // [rsp+138h] [rbp+10h] BYREF
  struct _KTHREAD **v64; // [rsp+140h] [rbp+18h]
  struct DXGADAPTER *v65; // [rsp+148h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2019);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v64 = Current;
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    LODWORD(v7) = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    *(_QWORD *)(v6 + 32) = PsGetCurrentProcess(v9, v8);
    WdLogEvent5_WdError(v6);
    v11 = qword_1C005F010;
    v12 = (qword_1C005F010 & 2) == 0;
    goto LABEL_45;
  }
  memset(v57, 0, sizeof(v57));
  LODWORD(v7) = 0;
  v13 = 0LL;
  v56 = 0LL;
  v11 = MmUserProbeAddress;
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)v57 = *(_OWORD *)v14;
  *(_OWORD *)&v57[16] = *(_OWORD *)(v14 + 16);
  *(_QWORD *)&v57[32] = *(_QWORD *)(v14 + 32);
  if ( _mm_srli_si128(*(__m128i *)&v57[16], 8).m128i_u64[0] && *(_DWORD *)&v57[32] )
  {
    v15 = *(unsigned int *)&v57[32];
    v16 = 8LL * *(unsigned int *)&v57[32];
    if ( !is_mul_ok(*(unsigned int *)&v57[32], 8uLL) )
      v16 = -1LL;
    v13 = (struct _D3DDDI_MULTISAMPLINGMETHOD *)operator new(v16, 0x4B677844u, PagedPool);
    v56 = v13;
    if ( !v13 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdLowResource(v11);
      LODWORD(v7) = -1073741801;
      v17[3] = -1073741801LL;
      v17[4] = *(unsigned int *)v57;
      v17[5] = *(unsigned int *)&v57[4];
      v17[6] = v15;
      WdLogEvent5_WdLowResource(v17);
    }
  }
  if ( (int)v7 >= 0 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v61, *(unsigned int *)v57, Current, &v65);
    v63 = 0LL;
    v21 = v65;
    if ( v65 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v65, *(unsigned int *)&v57[4], 0LL, 0LL, &v59, &v60);
      v7 = PairingAdapters;
      v55 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v26 = v59;
        if ( !v59 )
        {
          v27 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v27 + 24) = 5461LL;
          WdLogEvent5_WdAssertion(v27);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, v26, 0LL);
        DXGADAPTER::ReleaseReferenceNoTracking(v26);
        v28 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62);
        v7 = v28;
        v55 = v28;
        if ( v28 < 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
          v47[3] = v7;
          v47[4] = Current;
          v47[5] = *(unsigned int *)v57;
          v47[6] = v26;
          WdLogEvent5_WdDmmEvent(v47);
        }
        else
        {
          v32 = *(unsigned int *)&v57[4];
          if ( *(_DWORD *)(*((_QWORD *)v26 + 288) + 80LL) > *(_DWORD *)&v57[4] )
          {
            if ( *((_QWORD *)v26 + 289) )
            {
              v35 = *(unsigned int *)&v57[32];
              v36 = *(int *)&v57[16];
              v37 = *(unsigned int *)&v57[4];
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v26,
                                                              *(unsigned int *)&v57[4],
                                                              *(unsigned int *)&v57[8],
                                                              *(unsigned int *)&v57[12],
                                                              *(_D3DDDIFORMAT *)&v57[16],
                                                              *(unsigned int *)&v57[32],
                                                              v13,
                                                              &v63);
              v7 = MultisamplingMethodSetFromClientVidPnSource;
              v55 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
                v42[3] = v35;
                v42[4] = v37;
                v42[5] = v26;
                v42[6] = v7;
                WdLogEvent5_WdWarning(v42);
                v46 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
                v46[3] = v37;
                v46[4] = v26;
                v46[5] = *(unsigned int *)&v57[8];
                v46[6] = *(unsigned int *)&v57[12];
                v46[7] = v36;
                WdLogEvent5_WdWarning(v46);
              }
              goto LABEL_28;
            }
            v34 = WdLogNewEntry5_WdDmmEvent(v30);
            *(_QWORD *)(v34 + 24) = v26;
            LODWORD(v7) = -1073741637;
            *(_QWORD *)(v34 + 32) = -1073741637LL;
            WdLogEvent5_WdDmmEvent(v34);
          }
          else
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31);
            LODWORD(v7) = -1073741811;
            v33[3] = -1073741811LL;
            v33[4] = v26;
            v33[5] = v32;
            WdLogEvent5_WdWarning(v33);
          }
          v55 = v7;
        }
LABEL_28:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
        goto LABEL_31;
      }
      v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
      v48[3] = v21;
      v48[4] = *(unsigned int *)&v57[4];
      v48[5] = v7;
      WdLogEvent5_WdWarning(v48);
    }
    else
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      LODWORD(v7) = -1073741811;
      v49[3] = -1073741811LL;
      v49[4] = Current;
      v49[5] = *(unsigned int *)v57;
      WdLogEvent5_WdWarning(v49);
      v55 = -1073741811;
    }
LABEL_31:
    if ( (int)v7 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = v63 >> 3;
      if ( v13 )
      {
        v50 = *(_QWORD *)(a1 + 24);
        v51 = 0LL;
        v52 = *(_DWORD *)&v57[32];
        v13 = v56;
        while ( 1 )
        {
          v58 = v51;
          if ( (unsigned int)v51 >= v52 )
            break;
          v53 = (_QWORD *)(v50 + 12 * v51);
          if ( (unsigned __int64)(v53 + 1) > MmUserProbeAddress || v53 + 1 <= v53 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v53 = v56[v51];
          v51 = (unsigned int)(v51 + 1);
        }
        LODWORD(v7) = v55;
      }
    }
    v11 = (__int64)v61;
    if ( v61 )
      DXGADAPTER::ReleaseReferenceNoTracking(v61);
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v12 = (qword_1C005F010 & 2) == 0;
LABEL_45:
  if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v11, &EventProfilerExit, v10, 2019);
  return (unsigned int)v7;
}
