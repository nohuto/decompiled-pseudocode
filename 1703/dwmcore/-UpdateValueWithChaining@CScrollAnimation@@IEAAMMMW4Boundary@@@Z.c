/*
 * XREFs of ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1801824AC
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180182B70 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801835B0 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18016C748 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18016E600 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18016E84C (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180181E10 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x180182414 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?ChainToParent@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N@Z @ 0x180188840 (-ChainToParent@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@W4Boundary@@_N3@Z @ 0x180188944 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis.c)
 */

void __fastcall CScrollAnimation::UpdateValueWithChaining(__int64 a1, float a2, float a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // r15d
  unsigned __int8 ShouldChainForAxis; // r12
  int v12; // ecx
  const wchar_t *v13; // rax
  unsigned int v14; // edx
  int v15; // ecx
  __int64 v16; // r10
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  __int64 v19; // r11
  unsigned int v20; // r10d
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // r11
  unsigned int v28; // r10d
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // r11
  unsigned int v32; // r10d
  __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // r11
  unsigned int v36; // r10d
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // r10d
  __int64 v40; // rdx
  __int64 v41; // r11
  unsigned int v42; // r10d
  __int64 v43; // rdx
  float v44; // xmm0_4
  float v45; // xmm3_4
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  int pData; // [rsp+28h] [rbp-D8h]
  int v51; // [rsp+30h] [rbp-D0h] BYREF
  int v52; // [rsp+34h] [rbp-CCh] BYREF
  int v53; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v54; // [rsp+3Ch] [rbp-C4h] BYREF
  int v55; // [rsp+40h] [rbp-C0h] BYREF
  int v56; // [rsp+44h] [rbp-BCh] BYREF
  int v57; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v59; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  int *v63; // [rsp+A0h] [rbp-60h]
  __int64 v64; // [rsp+A8h] [rbp-58h]
  int *v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  int *v67; // [rsp+C0h] [rbp-40h]
  __int64 v68; // [rsp+C8h] [rbp-38h]
  int *v69; // [rsp+D0h] [rbp-30h]
  __int64 v70; // [rsp+D8h] [rbp-28h]
  float *v71; // [rsp+E0h] [rbp-20h]
  __int64 v72; // [rsp+E8h] [rbp-18h]
  __int64 v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  __int64 v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  __int64 v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+118h] [rbp+18h]
  unsigned __int32 *v79; // [rsp+120h] [rbp+20h]
  __int64 v80; // [rsp+128h] [rbp+28h]
  int *v81; // [rsp+130h] [rbp+30h]
  __int64 v82; // [rsp+138h] [rbp+38h]
  int *v83; // [rsp+140h] [rbp+40h]
  __int64 v84; // [rsp+148h] [rbp+48h]
  int *v85; // [rsp+150h] [rbp+50h]
  __int64 v86; // [rsp+158h] [rbp+58h]
  unsigned __int32 v87; // [rsp+1C8h] [rbp+C8h] BYREF
  float v88; // [rsp+1D0h] [rbp+D0h] BYREF

  v88 = a3;
  v87 = LODWORD(a2);
  v4 = *(_QWORD *)(a1 + 232);
  v5 = 0LL;
  if ( v4 )
    v8 = *(_QWORD *)(v4 + 8);
  else
    v8 = 0LL;
  v9 = *(_QWORD *)(v8 + 512);
  v10 = 0;
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 392);
  ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(v8, *(_DWORD *)(a1 + 228));
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v12 = *(_DWORD *)(a1 + 228);
    v60 = &v58;
    v58 = a1;
    v61 = 8LL;
    v13 = ScrollAxisToString(v12);
    TlgCreateWsz(&pDesc, v13);
    v14 = *(unsigned __int8 *)(a1 + 332);
    v15 = *(_DWORD *)(a1 + 312);
    v63 = &v51;
    v65 = &v52;
    v53 = *(_DWORD *)(a1 + 316);
    v67 = &v53;
    v69 = (int *)&v54;
    v71 = &v88;
    v73 = a1 + 324;
    v75 = a1 + 320;
    v77 = a1 + 328;
    v79 = &v87;
    v55 = ShouldChainForAxis;
    v81 = &v55;
    v51 = v15;
    v56 = (v14 >> 1) & 1;
    v64 = v16;
    v83 = &v56;
    v85 = &v57;
    v52 = v10;
    v66 = v16;
    v68 = v16;
    v54 = a4;
    v70 = v16;
    v72 = v16;
    v74 = v16;
    v76 = v16;
    v78 = v16;
    v80 = v16;
    v82 = v16;
    v84 = v16;
    v57 = v14 & 1;
    v86 = v16;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F7C1D, v17, v18, 0x10u, &v59);
  }
  if ( (*(_BYTE *)(a1 + 332) & 2) == 0 && v10 == 2 )
  {
    LOBYTE(pData) = CInteractionTracker::ShouldChainAllForAxis(v8, *(unsigned int *)(a1 + 228));
    LOBYTE(cData) = ShouldChainForAxis;
    CChainingHelper::RestoreSupportedInteractionsWithBoundaries(v19 + 328, v21, v20, a4, cData, pData);
    v22 = *(_QWORD *)(a1 + 232);
    if ( v22 )
      v23 = *(_QWORD *)(v22 + 8);
    else
      v23 = 0LL;
    v24 = *(int *)(a1 + 228);
    *(_BYTE *)(v23 + 12 * v24 + 328) &= ~4u;
    *(_DWORD *)(v23 + 12 * v24 + 336) = 0;
    *(_BYTE *)(v23 + 364) |= 2u;
    *(_BYTE *)(a1 + 332) |= 2u;
  }
  v25 = *(_DWORD *)(a1 + 312);
  if ( !v25 )
  {
    *(_BYTE *)(a1 + 332) |= 1u;
    if ( v10 != 2 )
      goto LABEL_52;
    goto LABEL_50;
  }
  v26 = v25 - 2;
  if ( v26 )
  {
    if ( v26 != 1 )
      goto LABEL_52;
    if ( *(_DWORD *)(a1 + 316) && ShouldChainForAxis )
    {
      if ( v10 != 2 )
        goto LABEL_52;
      LOBYTE(pData) = CInteractionTracker::ShouldChainAllForAxis(v8, *(unsigned int *)(a1 + 228));
      LOBYTE(cData) = ShouldChainForAxis;
      CChainingHelper::RestoreSupportedInteractionsWithBoundaries(v27 + 328, v29, v28, a4, cData, pData);
      goto LABEL_51;
    }
    if ( v10 != 2 )
      goto LABEL_52;
    *(_BYTE *)(a1 + 332) |= 1u;
LABEL_50:
    *(_DWORD *)(a1 + 320) = *(_DWORD *)(a1 + 324);
LABEL_51:
    CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, v88);
    goto LABEL_52;
  }
  CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, v88);
  v30 = *(_DWORD *)(a1 + 316);
  if ( !v30 || !ShouldChainForAxis )
  {
    if ( a4 && ShouldChainForAxis )
    {
      LOBYTE(cData) = CInteractionTracker::ShouldChainAllForAxis(v8, *(unsigned int *)(a1 + 228));
      CChainingHelper::ChainToParent(v41 + 328, v43, v42, a4, cData);
    }
    else if ( (*(_BYTE *)(a1 + 332) & 1) == 0 )
    {
      v44 = *(float *)(a1 + 328);
      if ( v44 != 0.0 )
      {
        v45 = v88 - *(float *)(a1 + 320);
        if ( (float)(v45 > 0.0) != (float)(v44 > 0.0) && v45 != 0.0 )
        {
          v46 = *(_QWORD *)(a1 + 232);
          if ( v46 )
            v47 = *(_QWORD *)(v46 + 8);
          else
            v47 = 0LL;
          v48 = *(int *)(a1 + 228);
          *(_BYTE *)(v47 + 12 * v48 + 328) &= ~4u;
          *(_DWORD *)(v47 + 12 * v48 + 336) = 0;
          *(_BYTE *)(v47 + 364) |= 2u;
          *(_DWORD *)(a1 + 328) = 0;
        }
      }
    }
LABEL_52:
    if ( !a4 )
      goto LABEL_55;
    goto LABEL_53;
  }
  if ( ((v30 - 1) & 0xFFFFFFFD) == 0 && a4 == v30 && (float)((float)(v88 - *(float *)(a1 + 320)) > 0.0) < 0.0 )
  {
    LOBYTE(cData) = CInteractionTracker::ShouldChainAllForAxis(v8, *(unsigned int *)(a1 + 228));
    CChainingHelper::ChainToParent(v31 + 328, v33, v32, a4, cData);
  }
  v34 = *(_DWORD *)(a1 + 316);
  if ( (unsigned int)(v34 - 2) <= 1 && a4 == v34 && (float)((float)(v88 - *(float *)(a1 + 320)) > 0.0) > 0.0 )
  {
    LOBYTE(cData) = CInteractionTracker::ShouldChainAllForAxis(v8, *(unsigned int *)(a1 + 228));
    CChainingHelper::ChainToParent(v35 + 328, v37, v36, a4, cData);
  }
  if ( a4 )
  {
LABEL_53:
    if ( ShouldChainForAxis )
      v87 = CInteractionTracker::ClampValueToBoundary(
              v8,
              *(unsigned int *)(a1 + 228),
              COERCE_DOUBLE((unsigned __int64)v87)).m128_u32[0];
    goto LABEL_55;
  }
  v38 = *(_QWORD *)(a1 + 232);
  if ( v38 )
    v5 = *(_QWORD *)(v38 + 8);
  LOBYTE(pData) = CInteractionTracker::ShouldChainAllForAxis(v8, *(unsigned int *)(a1 + 228));
  LOBYTE(cData) = ShouldChainForAxis;
  CChainingHelper::RestoreSupportedInteractionsWithBoundaries(v5 + 328, v40, v39, 0LL, cData, pData);
LABEL_55:
  *(float *)(a1 + 324) = v88;
  *(_DWORD *)(a1 + 316) = a4;
  *(_DWORD *)(a1 + 312) = v10;
}
