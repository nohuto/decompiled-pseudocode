/*
 * XREFs of ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800CCAD0
 * Callers:
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800CE30C (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18014CFC4 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x18014F2AC (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 * Callees:
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800CD718 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=(__int64 a1, __int64 a2)
{
  int v5; // eax
  __int64 v6; // rdx
  _DWORD *v7; // rcx
  __int64 v8; // r10
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  _BYTE *v11; // rcx
  __int64 v12; // rdx
  _WORD *v13; // rcx
  __int64 v14; // rdx
  _WORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r11
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r11
  __int64 v29; // rcx
  _BYTE *v30; // rcx
  __int64 v31; // rdx
  _BYTE *v32; // rcx
  __int64 v33; // rdx
  _BYTE *v34; // rcx
  __int64 v35; // rdx
  _BYTE *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r10
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r11
  __int64 v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r11
  __int64 v48; // rcx
  _WORD *v49; // rcx
  __int64 v50; // rdx
  _WORD *v51; // rcx
  __int64 v52; // rdx
  _WORD *v53; // rcx
  __int64 v54; // rdx
  _WORD *v55; // rcx
  __int64 v56; // rdx
  _DWORD *v57; // rcx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 64);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
  v5 = *(_DWORD *)(a2 + 72);
  v6 = 5LL;
  *(_DWORD *)(a1 + 72) = v5;
  v7 = (_DWORD *)(a1 + 76);
  v8 = a2 - a1;
  do
  {
    *v7 = *(_DWORD *)((char *)v7 + v8);
    ++v7;
    --v6;
  }
  while ( v6 );
  v9 = (_DWORD *)(a1 + 96);
  v10 = 5LL;
  do
  {
    *v9 = *(_DWORD *)((char *)v9 + v8);
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = (_BYTE *)(a1 + 116);
  v12 = 5LL;
  do
  {
    *v11 = v11[v8];
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = (_WORD *)(a1 + 122);
  v14 = 5LL;
  do
  {
    *v13 = *(_WORD *)((char *)v13 + v8);
    ++v13;
    --v14;
  }
  while ( v14 );
  v15 = (_WORD *)(a1 + 132);
  v16 = 5LL;
  do
  {
    *v15 = *(_WORD *)((char *)v15 + v8);
    ++v15;
    --v16;
  }
  while ( v16 );
  v17 = (_QWORD *)(a1 + 144);
  v18 = 5LL;
  do
  {
    *v17 = *(_QWORD *)((char *)v17 + v8);
    ++v17;
    --v18;
  }
  while ( v18 );
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(a1 + 184, a2 + 184);
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v20 + 208, v19 + 208);
  v23 = v22 + 232;
  v25 = v24;
  do
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v23, v21 + v23);
    v23 = v29 + 24;
    --v25;
  }
  while ( v25 );
  v30 = (_BYTE *)(v26 + 353);
  *(_BYTE *)(v26 + 352) = *(_BYTE *)(v27 + 352);
  v31 = v28;
  do
  {
    *v30 = v30[v21];
    ++v30;
    --v31;
  }
  while ( v31 );
  v32 = (_BYTE *)(v26 + 359);
  *(_BYTE *)(v26 + 358) = *(_BYTE *)(v27 + 358);
  v33 = v28;
  do
  {
    *v32 = v32[v21];
    ++v32;
    --v33;
  }
  while ( v33 );
  v34 = (_BYTE *)(v26 + 372);
  *(_BYTE *)(v26 + 364) = *(_BYTE *)(v27 + 364);
  v35 = v28;
  *(_DWORD *)(v26 + 368) = *(_DWORD *)(v27 + 368);
  do
  {
    *v34 = v34[v21];
    ++v34;
    --v35;
  }
  while ( v35 );
  v36 = (_BYTE *)(v26 + 378);
  *(_BYTE *)(v26 + 377) = *(_BYTE *)(v27 + 377);
  v37 = v28;
  do
  {
    *v36 = v36[v21];
    ++v36;
    --v37;
  }
  while ( v37 );
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v26 + 384, v27 + 384);
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v39 + 408, v38 + 408);
  v42 = v41 + 432;
  v44 = v43;
  do
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v42, v40 + v42);
    v42 = v48 + 24;
    --v44;
  }
  while ( v44 );
  v49 = (_WORD *)(v45 + 560);
  *(_WORD *)(v45 + 552) = *(_WORD *)(v46 + 552);
  v50 = v47;
  *(_DWORD *)(v45 + 556) = *(_DWORD *)(v46 + 556);
  do
  {
    *v49 = *(_WORD *)((char *)v49 + v40);
    ++v49;
    --v50;
  }
  while ( v50 );
  v51 = (_WORD *)(v45 + 576);
  *(_WORD *)(v45 + 570) = *(_WORD *)(v46 + 570);
  v52 = v47;
  *(_DWORD *)(v45 + 572) = *(_DWORD *)(v46 + 572);
  do
  {
    *v51 = *(_WORD *)((char *)v51 + v40);
    ++v51;
    --v52;
  }
  while ( v52 );
  v53 = (_WORD *)(v45 + 592);
  *(_WORD *)(v45 + 586) = *(_WORD *)(v46 + 586);
  v54 = v47;
  *(_DWORD *)(v45 + 588) = *(_DWORD *)(v46 + 588);
  do
  {
    *v53 = *(_WORD *)((char *)v53 + v40);
    ++v53;
    --v54;
  }
  while ( v54 );
  v55 = (_WORD *)(v45 + 608);
  *(_WORD *)(v45 + 602) = *(_WORD *)(v46 + 602);
  v56 = v47;
  *(_DWORD *)(v45 + 604) = *(_DWORD *)(v46 + 604);
  do
  {
    *v55 = *(_WORD *)((char *)v55 + v40);
    ++v55;
    --v56;
  }
  while ( v56 );
  v57 = (_DWORD *)(v45 + 628);
  *(_DWORD *)(v45 + 620) = *(_DWORD *)(v46 + 620);
  *(_DWORD *)(v45 + 624) = *(_DWORD *)(v46 + 624);
  do
  {
    *v57 = *(_DWORD *)((char *)v57 + v40);
    ++v57;
    --v47;
  }
  while ( v47 );
  return v45;
}
