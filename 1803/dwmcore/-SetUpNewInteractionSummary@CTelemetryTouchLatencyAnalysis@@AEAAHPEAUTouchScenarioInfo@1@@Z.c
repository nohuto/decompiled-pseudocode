/*
 * XREFs of ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x18014F2AC
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18014CFC4 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800CCAD0 (--4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq @ 0x1801503C0 (McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(
        LARGE_INTEGER *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2)
{
  wchar_t *v4; // r10
  void *QuadPart; // rcx
  void *v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  LPVOID v9; // rax
  void *v10; // r14
  __int64 result; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  LPVOID v14; // rax
  _BYTE v15[122]; // [rsp+110h] [rbp-80h] BYREF
  __int64 v16; // [rsp+18Ah] [rbp-6h]
  __int16 v17; // [rsp+192h] [rbp+2h]
  __int64 v18; // [rsp+194h] [rbp+4h]
  __int16 v19; // [rsp+19Ch] [rbp+Ch]
  _BYTE v20[40]; // [rsp+1A0h] [rbp+10h] BYREF
  __int64 v21; // [rsp+1C8h] [rbp+38h]
  __int64 v22; // [rsp+1D0h] [rbp+40h]
  __int64 v23; // [rsp+1D8h] [rbp+48h]
  __int64 v24; // [rsp+1E0h] [rbp+50h]
  __int64 v25; // [rsp+1E8h] [rbp+58h]
  __int64 v26; // [rsp+1F0h] [rbp+60h]
  _BYTE v27[120]; // [rsp+1F8h] [rbp+68h] BYREF
  __int64 v28; // [rsp+270h] [rbp+E0h]
  __int64 v29; // [rsp+278h] [rbp+E8h]
  __int64 v30; // [rsp+280h] [rbp+F0h]
  int v31; // [rsp+288h] [rbp+F8h]
  __int16 v32; // [rsp+28Ch] [rbp+FCh]
  char v33; // [rsp+28Eh] [rbp+FEh]
  __int64 v34; // [rsp+290h] [rbp+100h]
  __int64 v35; // [rsp+298h] [rbp+108h]
  __int64 v36; // [rsp+2A0h] [rbp+110h]
  __int64 v37; // [rsp+2A8h] [rbp+118h]
  __int64 v38; // [rsp+2B0h] [rbp+120h]
  __int64 v39; // [rsp+2B8h] [rbp+128h]
  _BYTE v40[120]; // [rsp+2C0h] [rbp+130h] BYREF
  _BYTE v41[68]; // [rsp+338h] [rbp+1A8h] BYREF
  __int64 v42; // [rsp+37Ch] [rbp+1ECh]
  __int64 v43; // [rsp+384h] [rbp+1F4h]
  __int64 v44; // [rsp+38Ch] [rbp+1FCh]
  int v45; // [rsp+394h] [rbp+204h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v4 = word_180252860;
    if ( *((_QWORD *)a2 + 1) )
      v4 = (wchar_t *)*((_QWORD *)a2 + 1);
    McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq(
      *((unsigned __int8 *)a2 + 60),
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SETUPINTERACTIONSUMMARY_EVENT,
      (_DWORD)v4,
      *(_QWORD *)a2,
      *((_DWORD *)a2 + 7),
      *((_DWORD *)a2 + 8),
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 10),
      *((_BYTE *)a2 + 96),
      *((_WORD *)a2 + 22),
      *((_WORD *)a2 + 23),
      *((_WORD *)a2 + 56),
      *((_DWORD *)a2 + 12));
  }
  QuadPart = (void *)this[311].QuadPart;
  if ( QuadPart )
    operator delete(QuadPart);
  v6 = (void *)this[312].QuadPart;
  if ( v6 )
    operator delete(v6);
  memset_0(v15, 0, 0x79uLL);
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  memset_0(v20, 0, sizeof(v20));
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v27,
    24LL,
    5LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v40,
    24LL,
    5LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  memset_0(v41, 0, 0x42uLL);
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0;
  CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=((__int64)&this[311], (__int64)v15);
  QueryPerformanceCounter(this + 318);
  this[313].HighPart = *((_DWORD *)a2 + 12);
  v7 = -1LL;
  this[314] = *(LARGE_INTEGER *)((char *)a2 + 52);
  LOBYTE(this[315].LowPart) = *((_BYTE *)a2 + 60);
  do
    ++v7;
  while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * v7) );
  v8 = v7 + 1;
  v9 = operator new(saturated_mul(v8, 2uLL));
  v10 = v9;
  if ( !v9 )
    return 0LL;
  if ( (unsigned int)_o_wcscpy_s(v9, v8, *((_QWORD *)a2 + 1)) )
    goto LABEL_14;
  this[311].QuadPart = (LONGLONG)v10;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(*((_QWORD *)a2 + 2) + 2 * v12) );
  v13 = v12 + 1;
  v14 = operator new(saturated_mul(v13, 2uLL));
  v10 = v14;
  if ( !v14 )
    return 0LL;
  if ( (unsigned int)_o_wcscpy_s(v14, v13, *((_QWORD *)a2 + 2)) )
  {
LABEL_14:
    operator delete(v10);
    return 0LL;
  }
  this[312].QuadPart = (LONGLONG)v10;
  result = 1LL;
  this[315].HighPart = *((_DWORD *)a2 + 7);
  this[316].HighPart = *((_DWORD *)a2 + 9);
  this[316].LowPart = *((_DWORD *)a2 + 8);
  this[313].LowPart = *((_DWORD *)a2 + 6);
  this[317].LowPart = *((_DWORD *)a2 + 10);
  return result;
}
