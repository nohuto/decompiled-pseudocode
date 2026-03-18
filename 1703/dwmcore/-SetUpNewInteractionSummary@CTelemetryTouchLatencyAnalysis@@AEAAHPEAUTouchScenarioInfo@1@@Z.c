/*
 * XREFs of ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x180027CD8
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800279A0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     Template_zxqqqhhhqqqqqqhhhhhhhhhh @ 0x180141DB8 (Template_zxqqqhhhqqqqqqhhhhhhhhhh.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(
        LARGE_INTEGER *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2)
{
  void *QuadPart; // rcx
  void *v5; // rcx
  LARGE_INTEGER *v6; // rax
  _OWORD *v7; // rdx
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  wchar_t *v18; // rax
  wchar_t *v19; // rbp
  __int64 v20; // rsi
  unsigned __int64 v21; // rsi
  wchar_t *v22; // rax
  __int64 result; // rax
  void *v24; // r8
  _BYTE v25[256]; // [rsp+D0h] [rbp-118h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v24 = &unk_1801D5868;
    if ( *((_QWORD *)a2 + 1) )
      v24 = (void *)*((_QWORD *)a2 + 1);
    Template_zxqqqhhhqqqqqqhhhhhhhhhh(
      (_DWORD)this,
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SETUPINTERACTIONSUMMARY_EVENT,
      (_DWORD)v24,
      *(_QWORD *)a2,
      *((_DWORD *)a2 + 18),
      *((_DWORD *)a2 + 7),
      *((_DWORD *)a2 + 19),
      *((_WORD *)a2 + 40),
      *((_WORD *)a2 + 16),
      *((_WORD *)a2 + 17),
      *((_WORD *)a2 + 48),
      *((_DWORD *)a2 + 25),
      *((_DWORD *)a2 + 26),
      *((_DWORD *)a2 + 27),
      *((_DWORD *)a2 + 28),
      *((_DWORD *)a2 + 29),
      *((_WORD *)a2 + 60),
      *((_WORD *)a2 + 61),
      *((_WORD *)a2 + 62),
      *((_WORD *)a2 + 63),
      *((_WORD *)a2 + 64),
      *((_WORD *)a2 + 65),
      *((_WORD *)a2 + 66),
      *((_WORD *)a2 + 67),
      *((_WORD *)a2 + 68),
      *((_WORD *)a2 + 69));
  }
  QuadPart = (void *)this[252].QuadPart;
  if ( QuadPart )
    WPF::ProcessHeapImpl::Free(QuadPart);
  v5 = (void *)this[253].QuadPart;
  if ( v5 )
    WPF::ProcessHeapImpl::Free(v5);
  memset_0(v25, 0, sizeof(v25));
  v6 = this + 251;
  v7 = v25;
  v8 = 2LL;
  do
  {
    v9 = v7[1];
    *(_OWORD *)&v6->LowPart = *v7;
    v10 = v7[2];
    *(_OWORD *)&v6[2].LowPart = v9;
    v11 = v7[3];
    *(_OWORD *)&v6[4].LowPart = v10;
    v12 = v7[4];
    *(_OWORD *)&v6[6].LowPart = v11;
    v13 = v7[5];
    *(_OWORD *)&v6[8].LowPart = v12;
    v14 = v7[6];
    *(_OWORD *)&v6[10].LowPart = v13;
    v15 = v7[7];
    v7 += 8;
    *(_OWORD *)&v6[12].LowPart = v14;
    v6 += 16;
    *(_OWORD *)&v6[-2].LowPart = v15;
    --v8;
  }
  while ( v8 );
  QueryPerformanceCounter(this + 251);
  v16 = -1LL;
  do
    ++v16;
  while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v16) );
  v17 = v16 + 1;
  v18 = (wchar_t *)operator new(saturated_mul(v17, 2uLL));
  v19 = v18;
  if ( !v18 )
    return 0LL;
  if ( !wcscpy_s(v18, v17, *((const wchar_t **)a2 + 1)) )
  {
    this[252].QuadPart = (LONGLONG)v19;
    v20 = -1LL;
    do
      ++v20;
    while ( *(_WORD *)(*((_QWORD *)a2 + 2) + 2 * v20) );
    v21 = v20 + 1;
    v22 = (wchar_t *)operator new(saturated_mul(v21, 2uLL));
    v19 = v22;
    if ( !v22 )
      return 0LL;
    if ( !wcscpy_s(v22, v21, *((const wchar_t **)a2 + 2)) )
    {
      this[253].QuadPart = (LONGLONG)v19;
      result = 1LL;
      this[254].LowPart = *((_DWORD *)a2 + 18);
      this[255].HighPart = *((_DWORD *)a2 + 19);
      this[254].HighPart = *((_DWORD *)a2 + 6);
      this[255].LowPart = *((_DWORD *)a2 + 7);
      return result;
    }
  }
  WPF::ProcessHeapImpl::Free(v19);
  return 0LL;
}
