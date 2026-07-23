/*
 * XREFs of PopCalculateCsSummary @ 0x14027ACFC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     PpmConvertTime @ 0x14003884C (PpmConvertTime.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x14027213C (PpmGetPlatformSelectionVetoCounts.c)
 *     PopBatteryCapacityToRate @ 0x14027ACD8 (PopBatteryCapacityToRate.c)
 *     PopCalculateIdleInformation @ 0x14027B138 (PopCalculateIdleInformation.c)
 *     PopCurrentPowerState @ 0x1405222E4 (PopCurrentPowerState.c)
 *     PopMeasureEnergyChange @ 0x140764728 (PopMeasureEnergyChange.c)
 */

__int64 __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  char v3; // di
  LARGE_INTEGER InterruptTimePrecise; // r14
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // r15
  unsigned int v7; // eax
  int v8; // ecx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  LONGLONG v13; // r14
  unsigned __int64 v14; // r14
  char v15; // r10
  __int64 v16; // r8
  __int64 v17; // r11
  __int128 v18; // xmm0
  char v19; // al
  char v20; // cl
  __int64 result; // rax
  int v22; // [rsp+20h] [rbp-D8h]
  int v23; // [rsp+24h] [rbp-D4h]
  int v24; // [rsp+28h] [rbp-D0h]
  __int64 v25; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v26; // [rsp+30h] [rbp-C8h]
  __int64 v27; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-B0h]
  __int64 v30; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v31; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v32; // [rsp+60h] [rbp-98h]
  _QWORD v33[2]; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 v34; // [rsp+78h] [rbp-80h]
  int v35; // [rsp+80h] [rbp-78h]
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp-70h] BYREF
  __int128 v37; // [rsp+90h] [rbp-68h] BYREF
  _BYTE v38[8]; // [rsp+A0h] [rbp-58h] BYREF
  int v39; // [rsp+A8h] [rbp-50h]
  unsigned int v40; // [rsp+ACh] [rbp-4Ch]
  int v42; // [rsp+108h] [rbp+10h]
  char v43; // [rsp+110h] [rbp+18h]
  int v44; // [rsp+118h] [rbp+20h]

  v3 = 0;
  PopCalculateIdleInformation(v33);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v5 = InterruptTimePrecise.QuadPart - qword_1403CD9C8;
  v6 = (InterruptTimePrecise.QuadPart - qword_1403CD9C8) / 0xAuLL;
  if ( PopPdcLastCsExitTime <= (unsigned __int64)qword_1403CD9C8 )
    v29 = 0LL;
  else
    v29 = (InterruptTimePrecise.QuadPart - PopPdcLastCsExitTime) / 0xAuLL;
  PopCurrentPowerState(v38);
  if ( v6 && (xmmword_1403AA2B4 & 0x40000000) == 0 && v40 < PopCsConsumption && v40 )
    v42 = PopBatteryCapacityToRate(PopCsConsumption - v40, v5 / 0xA);
  else
    v42 = 0;
  PopMeasureEnergyChange(&v37, &CsSessionEnergyCounter);
  v44 = HIDWORD(xmmword_1403AA2B4);
  if ( HIDWORD(xmmword_1403AA2B4) )
    v7 = (unsigned int)(100 * xmmword_1403AA2C4) / HIDWORD(xmmword_1403AA2B4);
  else
    LOBYTE(v7) = 0;
  v8 = 0;
  v43 = v7;
  if ( (xmmword_1403AA2B4 & 0x40000000) == 0 )
    v8 = xmmword_1403AA2C4;
  v9 = -1LL;
  v30 = v33[1] - qword_1403CD9D0;
  v22 = v8;
  v23 = v35 - dword_1403CD9E0;
  if ( qword_1403CDA48 != -1 && v34 != -1LL )
  {
    if ( v34 < qword_1403CDA48 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = v5 / 0xA;
      if ( v34 - qword_1403CDA48 <= v6 )
        v9 = v34 - qword_1403CDA48;
    }
  }
  v10 = v6 + qword_1403CD9D8 - v33[0];
  v11 = _InterlockedExchangeAdd64(&qword_1403CDAC0, 0LL);
  if ( v11 )
    v11 = (v11 - qword_1403CD9C8) / 0xA;
  v25 = qword_1403CDA10;
  v26 = v25 - PpmConvertTime(qword_1403CDA00, PopQpcFrequency, 0xF4240uLL);
  v12 = qword_1403CDA20;
  if ( qword_1403CDA18 )
  {
    if ( qword_1403CD9C8 <= (unsigned __int64)qword_1403CDA18 )
      v13 = InterruptTimePrecise.QuadPart - qword_1403CDA18;
    else
      v13 = InterruptTimePrecise.QuadPart - qword_1403CD9C8;
    v12 = v13 + qword_1403CDA20;
  }
  v14 = v12 / 0xA;
  v31 = PpmConvertTime(qword_1403CDA30, PopQpcFrequency, 0xF4240uLL);
  v32 = PpmConvertTime(qword_1403CDA40, PopQpcFrequency, 0xF4240uLL);
  v24 = PopPdcLastCsExitReason;
  v27 = 0LL;
  v28 = 0LL;
  PpmGetPlatformSelectionVetoCounts(dword_1403CDB00, &v27, &v28);
  v16 = v28 - qword_1403CDA58;
  v17 = v27 - qword_1403CDA50;
  if ( qword_1403CD9E8 )
    v3 = 100 * qword_1403CD9F0 / (unsigned __int64)qword_1403CD9E8;
  v18 = v37;
  *(_DWORD *)a1 = v42;
  *(_DWORD *)(a1 + 24) = v44;
  *(_DWORD *)(a1 + 28) = v22;
  *(_QWORD *)(a1 + 40) = v30;
  *(_DWORD *)(a1 + 56) = v23;
  *(_QWORD *)(a1 + 72) = v26;
  *(_QWORD *)(a1 + 88) = v31;
  *(_QWORD *)(a1 + 96) = v32;
  *(_DWORD *)(a1 + 108) = v24;
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 144) = v29;
  v19 = *(_BYTE *)(a1 + 117);
  *(_OWORD *)(a1 + 8) = v18;
  *(_QWORD *)(a1 + 64) = v11;
  *(_QWORD *)(a1 + 80) = v14;
  *(_DWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = v9;
  *(_QWORD *)(a1 + 128) = v17;
  *(_QWORD *)(a1 + 136) = v16;
  *(_BYTE *)(a1 + 152) = v3;
  *(_BYTE *)(a1 + 116) = (2 * v43) ^ v15 & 1;
  *(_BYTE *)(a1 + 117) ^= (byte_1403CDA6D ^ v19) & 1;
  v20 = *(_BYTE *)(a1 + 117) ^ (byte_1403CDA6D ^ *(_BYTE *)(a1 + 117)) & 2;
  *(_BYTE *)(a1 + 117) = v20;
  *(_BYTE *)(a1 + 117) = v20 ^ (byte_1403CDA6D ^ v20) & 4;
  *(_DWORD *)(a1 + 156) = dword_1403CDA60;
  *(_DWORD *)(a1 + 160) = dword_1403CDA64;
  *(_DWORD *)(a1 + 164) = dword_1403CDA68;
  *(_DWORD *)(a1 + 168) = dword_1403CDA70;
  *(_DWORD *)(a1 + 172) = dword_1403CDA74;
  *(_BYTE *)(a1 + 176) = byte_1403CDA78;
  *(_DWORD *)(a1 + 180) = v40;
  *(_DWORD *)(a1 + 184) = v39;
  *(_BYTE *)(a1 + 192) = byte_1403CDA80;
  *(_DWORD *)(a1 + 196) = dword_1403CDA84;
  result = (unsigned int)dword_1403CDA88;
  *(_DWORD *)(a1 + 200) = dword_1403CDA88;
  return result;
}
