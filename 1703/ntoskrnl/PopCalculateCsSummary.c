/*
 * XREFs of PopCalculateCsSummary @ 0x14022FD3C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 *     PpmConvertTime @ 0x1400890C4 (PpmConvertTime.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x140227CF4 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmQueryPlatformStateResidency @ 0x140229004 (PpmQueryPlatformStateResidency.c)
 *     PopBatteryCapacityToRate @ 0x14022FD18 (PopBatteryCapacityToRate.c)
 *     PopCalculateIdleInformation @ 0x1402300FC (PopCalculateIdleInformation.c)
 */

char __fastcall PopCalculateCsSummary(__int64 a1, int a2)
{
  char v4; // si
  LARGE_INTEGER InterruptTimePrecise; // r15
  unsigned __int64 v6; // kr00_8
  unsigned __int64 v7; // r12
  int v8; // r10d
  int v9; // r9d
  unsigned int v10; // eax
  int v11; // eax
  unsigned __int64 PlatformStateResidency; // rcx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  LONGLONG v16; // r15
  unsigned __int64 v17; // r15
  char v18; // r10
  __int64 v19; // r8
  __int64 v20; // r11
  char v21; // al
  char result; // al
  int v23; // [rsp+20h] [rbp-A8h]
  __int64 v24; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v25; // [rsp+28h] [rbp-A0h]
  __int64 v26; // [rsp+30h] [rbp-98h] BYREF
  __int64 v27; // [rsp+38h] [rbp-90h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-88h]
  __int64 v29; // [rsp+48h] [rbp-80h]
  __int64 v30; // [rsp+50h] [rbp-78h]
  unsigned __int64 v31; // [rsp+58h] [rbp-70h]
  unsigned __int64 v32; // [rsp+60h] [rbp-68h]
  unsigned __int64 v33; // [rsp+68h] [rbp-60h]
  _QWORD v34[2]; // [rsp+70h] [rbp-58h] BYREF
  int v35; // [rsp+80h] [rbp-48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp-40h] BYREF
  char v37; // [rsp+D0h] [rbp+8h]
  int v38; // [rsp+D8h] [rbp+10h]
  int v39; // [rsp+E0h] [rbp+18h]
  int v40; // [rsp+E8h] [rbp+20h]

  v4 = 0;
  PopCalculateIdleInformation(v34);
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v6 = InterruptTimePrecise.QuadPart - qword_14036E148;
  v7 = (InterruptTimePrecise.QuadPart - qword_14036E148) / 0xAuLL;
  if ( PopPdcLastCsExitTime <= (unsigned __int64)qword_14036E148 )
    v28 = 0LL;
  else
    v28 = (InterruptTimePrecise.QuadPart - PopPdcLastCsExitTime) / 0xAuLL;
  v8 = 0x40000000;
  v9 = xmmword_14034B3D4;
  if ( !v7 || (xmmword_14034B3D4 & 0x40000000) != 0 || DWORD1(xmmword_14034B3C0) >= PopCsConsumption )
    v38 = 0;
  else
    v38 = PopBatteryCapacityToRate(PopCsConsumption - DWORD1(xmmword_14034B3C0), v6 / 0xA);
  v29 = *(_QWORD *)((char *)&xmmword_14034B3D4 + 12);
  if ( HIDWORD(xmmword_14034B3D4) )
    v10 = (unsigned int)(100 * xmmword_14034B3E4) / HIDWORD(xmmword_14034B3D4);
  else
    LOBYTE(v10) = 0;
  v37 = v10;
  v11 = 0;
  if ( (v9 & v8) == 0 )
    v11 = xmmword_14034B3E4;
  v39 = v11;
  v30 = v34[1] - qword_14036E150;
  v40 = v35 - dword_14036E160;
  PlatformStateResidency = PpmQueryPlatformStateResidency(dword_14036E240);
  v13 = -1LL;
  if ( qword_14036E1C8 != -1 && PlatformStateResidency != -1LL )
  {
    if ( PlatformStateResidency < qword_14036E1C8 )
    {
      v13 = 0LL;
    }
    else
    {
      v13 = v6 / 0xA;
      if ( (PlatformStateResidency - qword_14036E1C8) / 0xA <= v7 )
        v13 = (PlatformStateResidency - qword_14036E1C8) / 0xA;
    }
  }
  v31 = v7 + qword_14036E158 - v34[0];
  v14 = _InterlockedExchangeAdd64(&qword_14036E200, 0LL);
  if ( v14 )
    v14 = (v14 - qword_14036E148) / 0xA;
  v24 = qword_14036E190;
  v25 = v24 - PpmConvertTime(qword_14036E180, PopQpcFrequency, 0xF4240uLL);
  v15 = qword_14036E1A0;
  if ( qword_14036E198 )
  {
    if ( qword_14036E148 <= (unsigned __int64)qword_14036E198 )
      v16 = InterruptTimePrecise.QuadPart - qword_14036E198;
    else
      v16 = InterruptTimePrecise.QuadPart - qword_14036E148;
    v15 = v16 + qword_14036E1A0;
  }
  v17 = v15 / 0xA;
  v32 = PpmConvertTime(qword_14036E1B0, PopQpcFrequency, 0xF4240uLL);
  v33 = PpmConvertTime(qword_14036E1C0, PopQpcFrequency, 0xF4240uLL);
  v23 = PopPdcLastCsExitReason;
  v26 = 0LL;
  v27 = 0LL;
  PpmGetPlatformSelectionVetoCounts(dword_14036E240, &v26, &v27);
  v19 = v27 - qword_14036E1D8;
  v20 = v26 - qword_14036E1D0;
  if ( qword_14036E168 )
    v4 = 100 * qword_14036E170 / (unsigned __int64)qword_14036E168;
  *(_DWORD *)a1 = v38;
  *(_DWORD *)(a1 + 4) = v29;
  *(_DWORD *)(a1 + 8) = v39;
  *(_QWORD *)(a1 + 24) = v30;
  *(_QWORD *)(a1 + 32) = v31;
  *(_DWORD *)(a1 + 40) = v40;
  *(_QWORD *)(a1 + 56) = v25;
  *(_QWORD *)(a1 + 72) = v32;
  *(_QWORD *)(a1 + 80) = v33;
  *(_DWORD *)(a1 + 92) = v23;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 48) = v14;
  *(_QWORD *)(a1 + 128) = v28;
  v21 = (*(_BYTE *)(a1 + 101) ^ byte_14036E1ED) & 7;
  *(_QWORD *)(a1 + 64) = v17;
  *(_BYTE *)(a1 + 101) ^= v21;
  *(_DWORD *)(a1 + 140) = dword_14036E1E0;
  *(_DWORD *)(a1 + 144) = dword_14036E1E4;
  *(_DWORD *)(a1 + 148) = dword_14036E1E8;
  *(_DWORD *)(a1 + 152) = dword_14036E1F0;
  *(_DWORD *)(a1 + 156) = dword_14036E1F4;
  result = byte_14036E1F8;
  *(_BYTE *)(a1 + 160) = byte_14036E1F8;
  *(_DWORD *)(a1 + 96) = a2;
  *(_QWORD *)(a1 + 104) = v13;
  *(_QWORD *)(a1 + 112) = v20;
  *(_QWORD *)(a1 + 120) = v19;
  *(_BYTE *)(a1 + 136) = v4;
  *(_BYTE *)(a1 + 100) = (2 * v37) ^ v18 & 1;
  return result;
}
