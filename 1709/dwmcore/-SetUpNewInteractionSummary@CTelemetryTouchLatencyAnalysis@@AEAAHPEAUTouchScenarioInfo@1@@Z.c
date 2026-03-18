/*
 * XREFs of ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x18012CA5C
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x18012A448 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     McTemplateU0zxqqqhhhqqqqqqhhhhhhhhhh @ 0x18012DC60 (McTemplateU0zxqqqhhhqqqqqqhhhhhhhhhh.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(
        LARGE_INTEGER *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2)
{
  __int16 *v4; // r8
  void *QuadPart; // rcx
  void *v6; // rcx
  LARGE_INTEGER *v7; // rax
  _OWORD *v8; // rdx
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  wchar_t *v19; // rax
  wchar_t *v20; // rbp
  __int64 result; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rsi
  wchar_t *v24; // rax
  _BYTE v25[256]; // [rsp+D0h] [rbp-118h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v4 = &word_1801EFDD8;
    if ( *((_QWORD *)a2 + 1) )
      v4 = (__int16 *)*((_QWORD *)a2 + 1);
    McTemplateU0zxqqqhhhqqqqqqhhhhhhhhhh(
      (_DWORD)this,
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SETUPINTERACTIONSUMMARY_EVENT,
      (_DWORD)v4,
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
  QuadPart = (void *)this[242].QuadPart;
  if ( QuadPart )
    WPF::ProcessHeapImpl::Free(QuadPart);
  v6 = (void *)this[243].QuadPart;
  if ( v6 )
    WPF::ProcessHeapImpl::Free(v6);
  memset_0(v25, 0, sizeof(v25));
  v7 = this + 241;
  v8 = v25;
  v9 = 2LL;
  do
  {
    v10 = v8[1];
    *(_OWORD *)&v7->LowPart = *v8;
    v11 = v8[2];
    *(_OWORD *)&v7[2].LowPart = v10;
    v12 = v8[3];
    *(_OWORD *)&v7[4].LowPart = v11;
    v13 = v8[4];
    *(_OWORD *)&v7[6].LowPart = v12;
    v14 = v8[5];
    *(_OWORD *)&v7[8].LowPart = v13;
    v15 = v8[6];
    *(_OWORD *)&v7[10].LowPart = v14;
    v16 = v8[7];
    v8 += 8;
    *(_OWORD *)&v7[12].LowPart = v15;
    v7 += 16;
    *(_OWORD *)&v7[-2].LowPart = v16;
    --v9;
  }
  while ( v9 );
  QueryPerformanceCounter(this + 241);
  v17 = -1LL;
  do
    ++v17;
  while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v17) );
  v18 = v17 + 1;
  v19 = (wchar_t *)operator new(saturated_mul(v18, 2uLL));
  v20 = v19;
  if ( !v19 )
    return 0LL;
  if ( wcscpy_s(v19, v18, *((const wchar_t **)a2 + 1)) )
    goto LABEL_16;
  this[242].QuadPart = (LONGLONG)v20;
  v22 = -1LL;
  do
    ++v22;
  while ( *(_WORD *)(*((_QWORD *)a2 + 2) + 2 * v22) );
  v23 = v22 + 1;
  v24 = (wchar_t *)operator new(saturated_mul(v23, 2uLL));
  v20 = v24;
  if ( !v24 )
    return 0LL;
  if ( wcscpy_s(v24, v23, *((const wchar_t **)a2 + 2)) )
  {
LABEL_16:
    WPF::ProcessHeapImpl::Free(v20);
    return 0LL;
  }
  this[243].QuadPart = (LONGLONG)v20;
  result = 1LL;
  this[244].LowPart = *((_DWORD *)a2 + 18);
  this[245].HighPart = *((_DWORD *)a2 + 19);
  this[244].HighPart = *((_DWORD *)a2 + 6);
  this[245].LowPart = *((_DWORD *)a2 + 7);
  return result;
}
