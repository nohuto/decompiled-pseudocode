/*
 * XREFs of DxgkGetMultisampleMethodList @ 0x1C018F3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C01D57D0 (DmmGetMultisamplingMethodSetFromClientVidPnSource.c)
 */

__int64 __fastcall DxgkGetMultisampleMethodList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  PVOID v12; // r14
  ULONG64 v13; // rax
  __int64 v14; // rsi
  SIZE_T v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGADAPTER *v21; // rsi
  int PairingAdapters; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct DXGADAPTER *v27; // rsi
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // r13
  __int64 v39; // rbx
  int MultisamplingMethodSetFromClientVidPnSource; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rcx
  unsigned int v56; // r11d
  _QWORD *v57; // rdx
  int v59; // [rsp+40h] [rbp-F8h]
  PVOID v60; // [rsp+48h] [rbp-F0h]
  _BYTE v61[40]; // [rsp+50h] [rbp-E8h] BYREF
  int v62; // [rsp+78h] [rbp-C0h]
  struct DXGADAPTER *v63; // [rsp+80h] [rbp-B8h] BYREF
  struct DXGADAPTER *v64; // [rsp+88h] [rbp-B0h] BYREF
  unsigned __int64 v65; // [rsp+90h] [rbp-A8h] BYREF
  DXGADAPTER *v66; // [rsp+98h] [rbp-A0h] BYREF
  _BYTE v67[136]; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v68; // [rsp+150h] [rbp+18h] BYREF
  struct _KTHREAD **v69; // [rsp+158h] [rbp+20h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2019);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v69 = Current;
  if ( Current )
  {
    memset(v61, 0, sizeof(v61));
    LODWORD(v8) = 0;
    v12 = 0LL;
    v60 = 0LL;
    v11 = MmUserProbeAddress;
    v13 = a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    *(_OWORD *)v61 = *(_OWORD *)v13;
    *(_OWORD *)&v61[16] = *(_OWORD *)(v13 + 16);
    *(_QWORD *)&v61[32] = *(_QWORD *)(v13 + 32);
    if ( _mm_srli_si128(*(__m128i *)&v61[16], 8).m128i_u64[0] && *(_DWORD *)&v61[32] )
    {
      v14 = *(unsigned int *)&v61[32];
      v15 = 8LL * *(unsigned int *)&v61[32];
      if ( !is_mul_ok(*(unsigned int *)&v61[32], 8uLL) )
        v15 = -1LL;
      v12 = operator new(v15, 0x4B677844u, PagedPool);
      v60 = v12;
      if ( !v12 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdLowResource(v11);
        LODWORD(v8) = -1073741801;
        v16[3] = -1073741801LL;
        v16[4] = *(unsigned int *)v61;
        v16[5] = *(unsigned int *)&v61[4];
        v16[6] = v14;
        WdLogEvent5_WdLowResource(v16);
      }
    }
    if ( (int)v8 < 0 )
    {
LABEL_44:
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        goto LABEL_48;
      return (unsigned int)v8;
    }
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v66, *(unsigned int *)v61, Current, &v63);
    v68 = 0LL;
    v21 = v63;
    if ( v63 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v63, *(unsigned int *)&v61[4], 0LL, 0LL, &v64, &v65);
      v8 = PairingAdapters;
      v59 = PairingAdapters;
      if ( PairingAdapters >= 0 )
      {
        v27 = v64;
        if ( !v64 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
          *(_QWORD *)(v28 + 24) = 5457LL;
          WdLogEvent5_WdAssertion(v28);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v67, v27, 0LL);
        DXGADAPTER::ReleaseReference(v27);
        v29 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v67);
        v8 = v29;
        v59 = v29;
        if ( v29 < 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v31, v30, v32, v33);
          v51[3] = v8;
          v51[4] = Current;
          v51[5] = *(unsigned int *)v61;
          v51[6] = v27;
          WdLogEvent5_WdDmmEvent(v51);
        }
        else
        {
          v34 = *(unsigned int *)&v61[4];
          if ( *(_DWORD *)(*((_QWORD *)v27 + 285) + 80LL) > *(_DWORD *)&v61[4] )
          {
            if ( *((_QWORD *)v27 + 286) )
            {
              v37 = *(unsigned int *)&v61[32];
              v38 = *(int *)&v61[16];
              v39 = *(unsigned int *)&v61[4];
              MultisamplingMethodSetFromClientVidPnSource = DmmGetMultisamplingMethodSetFromClientVidPnSource(
                                                              v27,
                                                              *(enum _D3DDDIFORMAT *)&v61[16],
                                                              *(unsigned int *)&v61[32],
                                                              v12,
                                                              (__int64)&v68);
              v8 = MultisamplingMethodSetFromClientVidPnSource;
              v59 = MultisamplingMethodSetFromClientVidPnSource;
              if ( MultisamplingMethodSetFromClientVidPnSource < 0 )
              {
                v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43, v44);
                v45[3] = v37;
                v45[4] = v39;
                v45[5] = v27;
                v45[6] = v8;
                WdLogEvent5_WdWarning(v45);
                v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, v48, v49);
                v50[3] = v39;
                v50[4] = v27;
                v50[5] = *(unsigned int *)&v61[8];
                v50[6] = *(unsigned int *)&v61[12];
                v50[7] = v38;
                WdLogEvent5_WdWarning(v50);
              }
              goto LABEL_30;
            }
            v36 = WdLogNewEntry5_WdDmmEvent(v31, v30, v32, v33);
            *(_QWORD *)(v36 + 24) = v27;
            LODWORD(v8) = -1073741637;
            *(_QWORD *)(v36 + 32) = -1073741637LL;
            WdLogEvent5_WdDmmEvent(v36);
          }
          else
          {
            v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
            LODWORD(v8) = -1073741811;
            v35[3] = -1073741811LL;
            v35[4] = v27;
            v35[5] = v34;
            WdLogEvent5_WdWarning(v35);
          }
          v59 = v8;
        }
LABEL_30:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
        goto LABEL_33;
      }
      v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      v52[3] = v21;
      v52[4] = *(unsigned int *)&v61[4];
      v52[5] = v8;
      WdLogEvent5_WdWarning(v52);
    }
    else
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      LODWORD(v8) = -1073741811;
      v53[3] = -1073741811LL;
      v53[4] = Current;
      v53[5] = *(unsigned int *)v61;
      WdLogEvent5_WdWarning(v53);
      v59 = -1073741811;
    }
LABEL_33:
    if ( (int)v8 >= 0 )
    {
      *(_DWORD *)(a1 + 32) = (unsigned __int64)v68 >> 3;
      if ( v12 )
      {
        v54 = *(_QWORD *)(a1 + 24);
        v55 = 0LL;
        v56 = *(_DWORD *)&v61[32];
        v12 = v60;
        while ( 1 )
        {
          v62 = v55;
          if ( (unsigned int)v55 >= v56 )
            break;
          v57 = (_QWORD *)(v54 + 12 * v55);
          if ( (unsigned __int64)(v57 + 1) > MmUserProbeAddress || v57 + 1 <= v57 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v57 = *((_QWORD *)v60 + v55);
          v55 = (unsigned int)(v55 + 1);
        }
        LODWORD(v8) = v59;
      }
    }
    v11 = (__int64)v66;
    if ( v66 )
      DXGADAPTER::ReleaseReference(v66);
    goto LABEL_44;
  }
  v7 = WdLogNewEntry5_WdError(v5, v4);
  LODWORD(v8) = -1073741811;
  *(_QWORD *)(v7 + 24) = -1073741811LL;
  *(_QWORD *)(v7 + 32) = PsGetCurrentProcess(v9);
  WdLogEvent5_WdError(v7);
  v11 = qword_1C006E790;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_48:
    Template_q(v11, &EventProfilerExit, v10, 2019);
  return (unsigned int)v8;
}
