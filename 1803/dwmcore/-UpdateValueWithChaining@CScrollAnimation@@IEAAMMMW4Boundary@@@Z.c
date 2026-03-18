/*
 * XREFs of ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801BE9A0
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF260 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF920 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x180193F88 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801947C0 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x180196A38 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x180196AF0 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x1801BE594 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x1801BE8F8 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801CA9F0 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@AEBAPEAVCManipulation@@XZ @ 0x1801CAAA8 (-TryGetActiveManipulation@InteractionSourceManager@@AEBAPEAVCManipulation@@XZ.c)
 *     ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z @ 0x1801CBC24 (-ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x1801CBD30 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

void __fastcall CScrollAnimation::UpdateValueWithChaining(__int64 a1, float a2, float a3, unsigned int a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v8; // rax
  InteractionSourceManager *v9; // rsi
  int v10; // r13d
  unsigned __int8 ShouldChainForAxis; // r15
  struct CManipulation *ActiveManipulation; // r12
  __int64 v13; // rcx
  int v14; // ecx
  const WCHAR *v15; // rax
  unsigned int v16; // edx
  int v17; // ecx
  __int64 v18; // r10
  char v19; // cl
  __int64 v20; // rax
  __int64 v21; // rcx
  struct CChainingHelper *ActiveChainingHelper; // r12
  __int64 v23; // r9
  struct CManipulation *v24; // rax
  __int64 v25; // rcx
  bool ShouldChainAllForAxis; // al
  __int64 v27; // rcx
  int v28; // edx
  int v29; // edx
  bool v30; // r12
  struct CManipulation *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  struct CChainingHelper *v35; // rax
  __int64 v36; // r9
  int v37; // eax
  int v38; // edx
  bool v39; // r12
  struct CManipulation *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  struct CChainingHelper *v44; // rax
  __int64 v45; // r9
  bool v46; // r12
  struct CManipulation *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  struct CChainingHelper *v51; // rax
  __int64 v52; // r9
  bool v53; // r12
  struct CManipulation *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  struct CChainingHelper *v57; // rax
  __int64 v58; // r9
  bool v59; // r12
  struct CManipulation *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  struct CChainingHelper *v64; // rax
  __int64 v65; // r9
  float v66; // xmm0_4
  float v67; // xmm3_4
  __int64 v68; // rax
  __int64 v69; // rcx
  struct CChainingHelper *v70; // rax
  __int64 v71; // rdx
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  int v73; // [rsp+34h] [rbp-CCh] BYREF
  int v74; // [rsp+38h] [rbp-C8h] BYREF
  int v75; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v76; // [rsp+40h] [rbp-C0h] BYREF
  int v77; // [rsp+44h] [rbp-BCh] BYREF
  int v78; // [rsp+48h] [rbp-B8h] BYREF
  int v79; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v80; // [rsp+50h] [rbp-B0h]
  __int64 v81; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v83; // [rsp+80h] [rbp-80h]
  __int64 v84; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v86; // [rsp+A0h] [rbp-60h]
  __int64 v87; // [rsp+A8h] [rbp-58h]
  int *v88; // [rsp+B0h] [rbp-50h]
  __int64 v89; // [rsp+B8h] [rbp-48h]
  int *v90; // [rsp+C0h] [rbp-40h]
  __int64 v91; // [rsp+C8h] [rbp-38h]
  int *v92; // [rsp+D0h] [rbp-30h]
  __int64 v93; // [rsp+D8h] [rbp-28h]
  float *v94; // [rsp+E0h] [rbp-20h]
  __int64 v95; // [rsp+E8h] [rbp-18h]
  __int64 v96; // [rsp+F0h] [rbp-10h]
  __int64 v97; // [rsp+F8h] [rbp-8h]
  __int64 v98; // [rsp+100h] [rbp+0h]
  __int64 v99; // [rsp+108h] [rbp+8h]
  __int64 v100; // [rsp+110h] [rbp+10h]
  __int64 v101; // [rsp+118h] [rbp+18h]
  unsigned __int32 *v102; // [rsp+120h] [rbp+20h]
  __int64 v103; // [rsp+128h] [rbp+28h]
  int *v104; // [rsp+130h] [rbp+30h]
  __int64 v105; // [rsp+138h] [rbp+38h]
  int *v106; // [rsp+140h] [rbp+40h]
  __int64 v107; // [rsp+148h] [rbp+48h]
  int *v108; // [rsp+150h] [rbp+50h]
  __int64 v109; // [rsp+158h] [rbp+58h]
  unsigned __int32 v110; // [rsp+1C8h] [rbp+C8h] BYREF
  float v111; // [rsp+1D0h] [rbp+D0h] BYREF

  v111 = a3;
  v110 = LODWORD(a2);
  v4 = *(_QWORD *)(a1 + 296);
  v5 = 0LL;
  if ( v4 )
    v8 = *(_QWORD *)(v4 + 8);
  else
    v8 = 0LL;
  v9 = (InteractionSourceManager *)(v8 + 352);
  v80 = v8;
  v10 = 0;
  if ( InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(v8 + 352)) )
    v10 = *((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v9) + 103);
  ShouldChainForAxis = 0;
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v9);
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v9) && ActiveManipulation )
    ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(
                           v13,
                           *(_DWORD *)(a1 + 292),
                           (__int64)ActiveManipulation,
                           0);
  if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
  {
    v14 = *(_DWORD *)(a1 + 292);
    v83 = &v81;
    v81 = a1;
    v84 = 8LL;
    v15 = ScrollAxisToString(v14);
    TlgCreateWsz(&pDesc, v15);
    v16 = *(unsigned __int8 *)(a1 + 404);
    v17 = *(_DWORD *)(a1 + 384);
    v86 = &v73;
    v88 = &v74;
    v75 = *(_DWORD *)(a1 + 388);
    v90 = &v75;
    v92 = (int *)&v76;
    v94 = &v111;
    v96 = a1 + 396;
    v98 = a1 + 392;
    v100 = a1 + 400;
    v102 = &v110;
    v77 = ShouldChainForAxis;
    v104 = &v77;
    v73 = v17;
    v78 = (v16 >> 1) & 1;
    v87 = v18;
    v106 = &v78;
    v108 = &v79;
    v74 = v10;
    v89 = v18;
    v91 = v18;
    v76 = a4;
    v93 = v18;
    v95 = v18;
    v97 = v18;
    v99 = v18;
    v101 = v18;
    v103 = v18;
    v105 = v18;
    v107 = v18;
    v79 = v16 & 1;
    v109 = v18;
    TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A952A, 0LL, 0LL, 0x10u, &pData);
  }
  v19 = *(_BYTE *)(a1 + 404);
  if ( (v19 & 2) == 0 && v10 == 2 )
  {
    v20 = *(_QWORD *)(a1 + 296);
    if ( v20 )
      v21 = *(_QWORD *)(v20 + 8);
    else
      v21 = 0LL;
    ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v21 + 352));
    if ( InteractionSourceManager::TryGetActiveChainingHelper(v9) && InteractionSourceManager::HasActiveManipulation(v9) )
    {
      v24 = InteractionSourceManager::TryGetActiveManipulation(v9);
      ShouldChainAllForAxis = CInteractionTracker::ShouldChainAllForAxis(v25, *(_DWORD *)(a1 + 292), (__int64)v24);
    }
    else
    {
      ShouldChainAllForAxis = 0;
    }
    LOBYTE(v23) = ShouldChainForAxis;
    LOBYTE(cData) = ShouldChainAllForAxis;
    CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
      ActiveChainingHelper,
      *(unsigned int *)(a1 + 292),
      a4,
      v23,
      cData);
    v27 = 3LL * *(int *)(a1 + 292);
    *((_BYTE *)ActiveChainingHelper + 4 * v27) &= ~4u;
    *((_DWORD *)ActiveChainingHelper + v27 + 2) = 0;
    *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
    *(_BYTE *)(a1 + 404) |= 2u;
    v19 = *(_BYTE *)(a1 + 404);
  }
  v28 = *(_DWORD *)(a1 + 384);
  if ( !v28 )
  {
    *(_BYTE *)(a1 + 404) = v19 | 1;
    if ( v10 != 2 )
      goto LABEL_87;
    goto LABEL_85;
  }
  v29 = v28 - 2;
  if ( v29 )
  {
    if ( v29 != 1 )
      goto LABEL_87;
    if ( *(_DWORD *)(a1 + 388) && ShouldChainForAxis )
    {
      if ( v10 != 2 )
        goto LABEL_87;
      v30 = 0;
      if ( InteractionSourceManager::TryGetActiveChainingHelper(v9)
        && InteractionSourceManager::HasActiveManipulation(v9) )
      {
        v31 = InteractionSourceManager::TryGetActiveManipulation(v9);
        v30 = CInteractionTracker::ShouldChainAllForAxis(v32, *(_DWORD *)(a1 + 292), (__int64)v31);
      }
      v33 = *(_QWORD *)(a1 + 296);
      if ( v33 )
        v34 = *(_QWORD *)(v33 + 8);
      else
        v34 = 0LL;
      v35 = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v34 + 352));
      LOBYTE(v36) = ShouldChainForAxis;
      LOBYTE(cData) = v30;
      CChainingHelper::RestoreSupportedInteractionsWithBoundaries(v35, *(unsigned int *)(a1 + 292), a4, v36, cData);
      goto LABEL_86;
    }
    if ( v10 != 2 )
      goto LABEL_87;
    *(_BYTE *)(a1 + 404) = v19 | 1;
LABEL_85:
    *(_DWORD *)(a1 + 392) = *(_DWORD *)(a1 + 396);
LABEL_86:
    CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, v111);
    goto LABEL_87;
  }
  CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, v111);
  v37 = *(_DWORD *)(a1 + 388);
  if ( !v37 || !ShouldChainForAxis )
  {
    if ( a4 && ShouldChainForAxis )
    {
      v59 = 0;
      if ( InteractionSourceManager::TryGetActiveChainingHelper(v9)
        && InteractionSourceManager::HasActiveManipulation(v9) )
      {
        v60 = InteractionSourceManager::TryGetActiveManipulation(v9);
        v59 = CInteractionTracker::ShouldChainAllForAxis(v61, *(_DWORD *)(a1 + 292), (__int64)v60);
      }
      v62 = *(_QWORD *)(a1 + 296);
      if ( v62 )
        v63 = *(_QWORD *)(v62 + 8);
      else
        v63 = 0LL;
      v64 = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v63 + 352));
      LOBYTE(v65) = v59;
      CChainingHelper::ChainToParent(v64, *(unsigned int *)(a1 + 292), a4, v65);
    }
    else if ( (*(_BYTE *)(a1 + 404) & 1) == 0 )
    {
      v66 = *(float *)(a1 + 400);
      if ( v66 != 0.0 )
      {
        v67 = v111 - *(float *)(a1 + 392);
        if ( (float)(v67 > 0.0) != (float)(v66 > 0.0) && v67 != 0.0 )
        {
          v68 = *(_QWORD *)(a1 + 296);
          if ( v68 )
            v69 = *(_QWORD *)(v68 + 8);
          else
            v69 = 0LL;
          v70 = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v69 + 352));
          v71 = 3LL * *(int *)(a1 + 292);
          *((_BYTE *)v70 + 4 * v71) &= ~4u;
          *((_DWORD *)v70 + v71 + 2) = 0;
          *((_BYTE *)v70 + 36) |= 2u;
          *(_DWORD *)(a1 + 400) = 0;
        }
      }
    }
LABEL_87:
    if ( !a4 )
      goto LABEL_90;
    goto LABEL_88;
  }
  if ( v37 == 1 || (v38 = *(_DWORD *)(a1 + 388), v37 == 3) )
  {
    v38 = *(_DWORD *)(a1 + 388);
    if ( a4 == v37 && (float)((float)(v111 - *(float *)(a1 + 392)) > 0.0) < 0.0 )
    {
      v39 = 0;
      if ( InteractionSourceManager::TryGetActiveChainingHelper(v9)
        && InteractionSourceManager::HasActiveManipulation(v9) )
      {
        v40 = InteractionSourceManager::TryGetActiveManipulation(v9);
        v39 = CInteractionTracker::ShouldChainAllForAxis(v41, *(_DWORD *)(a1 + 292), (__int64)v40);
      }
      v42 = *(_QWORD *)(a1 + 296);
      if ( v42 )
        v43 = *(_QWORD *)(v42 + 8);
      else
        v43 = 0LL;
      v44 = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v43 + 352));
      LOBYTE(v45) = v39;
      CChainingHelper::ChainToParent(v44, *(unsigned int *)(a1 + 292), a4, v45);
      v38 = *(_DWORD *)(a1 + 388);
    }
  }
  if ( (unsigned int)(v38 - 2) <= 1 && a4 == v38 && (float)((float)(v111 - *(float *)(a1 + 392)) > 0.0) > 0.0 )
  {
    v46 = 0;
    if ( InteractionSourceManager::TryGetActiveChainingHelper(v9) && InteractionSourceManager::HasActiveManipulation(v9) )
    {
      v47 = InteractionSourceManager::TryGetActiveManipulation(v9);
      v46 = CInteractionTracker::ShouldChainAllForAxis(v48, *(_DWORD *)(a1 + 292), (__int64)v47);
    }
    v49 = *(_QWORD *)(a1 + 296);
    if ( v49 )
      v50 = *(_QWORD *)(v49 + 8);
    else
      v50 = 0LL;
    v51 = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v50 + 352));
    LOBYTE(v52) = v46;
    CChainingHelper::ChainToParent(v51, *(unsigned int *)(a1 + 292), a4, v52);
  }
  if ( a4 )
  {
LABEL_88:
    if ( ShouldChainForAxis )
      v110 = CInteractionTracker::ClampValueToBoundary(
               v80,
               *(unsigned int *)(a1 + 292),
               COERCE_DOUBLE((unsigned __int64)v110)).m128_u32[0];
    goto LABEL_90;
  }
  v53 = 0;
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v9) && InteractionSourceManager::HasActiveManipulation(v9) )
  {
    v54 = InteractionSourceManager::TryGetActiveManipulation(v9);
    v53 = CInteractionTracker::ShouldChainAllForAxis(v55, *(_DWORD *)(a1 + 292), (__int64)v54);
  }
  v56 = *(_QWORD *)(a1 + 296);
  if ( v56 )
    v5 = *(_QWORD *)(v56 + 8);
  v57 = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v5 + 352));
  LOBYTE(v58) = ShouldChainForAxis;
  LOBYTE(cData) = v53;
  CChainingHelper::RestoreSupportedInteractionsWithBoundaries(v57, *(unsigned int *)(a1 + 292), 0LL, v58, cData);
LABEL_90:
  *(float *)(a1 + 396) = v111;
  *(_DWORD *)(a1 + 388) = a4;
  *(_DWORD *)(a1 + 384) = v10;
}
