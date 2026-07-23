/*
 * XREFs of PopCalculateCsSummary @ 0x14024457C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PpmConvertTime @ 0x14008D4CC (PpmConvertTime.c)
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x14023AC64 (PpmGetPlatformSelectionVetoCounts.c)
 *     PopBatteryCapacityToRate @ 0x140244558 (PopBatteryCapacityToRate.c)
 *     PopCalculateIdleInformation @ 0x140244980 (PopCalculateIdleInformation.c)
 *     PopCurrentPowerState @ 0x1404EA194 (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x1405AD3BC (PopMeasureEnergyChange.c)
 */

__int64 __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  char v4; // di
  LARGE_INTEGER InterruptTimePrecise; // r13
  unsigned __int64 v6; // kr00_8
  unsigned __int64 v7; // r12
  unsigned int v8; // eax
  int v9; // ecx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rcx
  LONGLONG v13; // r13
  unsigned __int64 v14; // r13
  char v15; // r10
  __int64 v16; // r8
  __int64 v17; // r11
  __int128 v18; // xmm0
  char v19; // al
  __int64 result; // rax
  int v21; // [rsp+20h] [rbp-D8h]
  int v22; // [rsp+24h] [rbp-D4h]
  __int64 v23; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v24; // [rsp+28h] [rbp-D0h]
  __int64 v25; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C0h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-B8h]
  __int64 v28; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v29; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v30; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v31; // [rsp+60h] [rbp-98h]
  _QWORD v32[2]; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-80h]
  int v34; // [rsp+80h] [rbp-78h]
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp-70h] BYREF
  __int128 v36; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v37[8]; // [rsp+A0h] [rbp-58h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp-50h]
  unsigned int v39; // [rsp+ACh] [rbp-4Ch]
  char v40; // [rsp+100h] [rbp+8h]
  int v41; // [rsp+108h] [rbp+10h]
  int v42; // [rsp+110h] [rbp+18h]
  int v43; // [rsp+118h] [rbp+20h]

  v4 = 0;
  PopCalculateIdleInformation(v32);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v6 = InterruptTimePrecise.QuadPart - qword_140389BC8;
  v7 = (InterruptTimePrecise.QuadPart - qword_140389BC8) / 0xAuLL;
  if ( PopPdcLastCsExitTime <= (unsigned __int64)qword_140389BC8 )
    v27 = 0LL;
  else
    v27 = (InterruptTimePrecise.QuadPart - PopPdcLastCsExitTime) / 0xAuLL;
  PopCurrentPowerState(v37);
  if ( v7 && (xmmword_140365954 & 0x40000000) == 0 && v39 < PopCsConsumption && v39 )
    v41 = PopBatteryCapacityToRate(PopCsConsumption - v39, v6 / 0xA);
  else
    v41 = 0;
  PopMeasureEnergyChange(&v36, &CsSessionEnergyCounter);
  v42 = HIDWORD(xmmword_140365954);
  if ( HIDWORD(xmmword_140365954) )
    v8 = (unsigned int)(100 * xmmword_140365964) / HIDWORD(xmmword_140365954);
  else
    LOBYTE(v8) = 0;
  v9 = 0;
  v40 = v8;
  if ( (xmmword_140365954 & 0x40000000) == 0 )
    v9 = xmmword_140365964;
  v28 = v32[1] - qword_140389BD0;
  v21 = v34 - dword_140389BE0;
  v43 = v9;
  if ( qword_140389C48 == -1 || v33 == -1LL )
  {
    v10 = -1LL;
  }
  else if ( v33 < qword_140389C48 )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = v33 - qword_140389C48;
    if ( v33 - qword_140389C48 > v7 )
      v10 = v6 / 0xA;
  }
  v29 = v7 + qword_140389BD8 - v32[0];
  v11 = _InterlockedExchangeAdd64(&qword_140389C80, 0LL);
  if ( v11 )
    v11 = (v11 - qword_140389BC8) / 0xA;
  v23 = qword_140389C10;
  v24 = v23 - PpmConvertTime(qword_140389C00, PopQpcFrequency, 0xF4240uLL);
  v12 = qword_140389C20;
  if ( qword_140389C18 )
  {
    if ( qword_140389BC8 <= (unsigned __int64)qword_140389C18 )
      v13 = InterruptTimePrecise.QuadPart - qword_140389C18;
    else
      v13 = InterruptTimePrecise.QuadPart - qword_140389BC8;
    v12 = v13 + qword_140389C20;
  }
  v14 = v12 / 0xA;
  v30 = PpmConvertTime(qword_140389C30, PopQpcFrequency, 0xF4240uLL);
  v31 = PpmConvertTime(qword_140389C40, PopQpcFrequency, 0xF4240uLL);
  v22 = PopPdcLastCsExitReason;
  v25 = 0LL;
  v26 = 0LL;
  PpmGetPlatformSelectionVetoCounts(dword_140389CC0, &v25, &v26);
  v16 = v26 - qword_140389C58;
  v17 = v25 - qword_140389C50;
  if ( qword_140389BE8 )
    v4 = 100 * qword_140389BF0 / (unsigned __int64)qword_140389BE8;
  v18 = v36;
  *(_DWORD *)a1 = v41;
  *(_DWORD *)(a1 + 24) = v42;
  *(_DWORD *)(a1 + 28) = v43;
  *(_QWORD *)(a1 + 40) = v28;
  *(_QWORD *)(a1 + 48) = v29;
  *(_DWORD *)(a1 + 56) = v21;
  *(_QWORD *)(a1 + 72) = v24;
  *(_QWORD *)(a1 + 88) = v30;
  *(_QWORD *)(a1 + 96) = v31;
  *(_DWORD *)(a1 + 108) = v22;
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 64) = v11;
  *(_QWORD *)(a1 + 144) = v27;
  v19 = (*(_BYTE *)(a1 + 117) ^ byte_140389C6D) & 7;
  *(_QWORD *)(a1 + 80) = v14;
  *(_BYTE *)(a1 + 117) ^= v19;
  *(_DWORD *)(a1 + 156) = dword_140389C60;
  *(_DWORD *)(a1 + 160) = dword_140389C64;
  *(_DWORD *)(a1 + 164) = dword_140389C68;
  *(_DWORD *)(a1 + 168) = dword_140389C70;
  *(_DWORD *)(a1 + 172) = dword_140389C74;
  *(_BYTE *)(a1 + 176) = byte_140389C78;
  *(_DWORD *)(a1 + 180) = v39;
  result = v38;
  *(_DWORD *)(a1 + 184) = v38;
  *(_OWORD *)(a1 + 8) = v18;
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = v10;
  *(_QWORD *)(a1 + 128) = v17;
  *(_QWORD *)(a1 + 136) = v16;
  *(_BYTE *)(a1 + 152) = v4;
  *(_BYTE *)(a1 + 116) = (2 * v40) ^ v15 & 1;
  return result;
}
