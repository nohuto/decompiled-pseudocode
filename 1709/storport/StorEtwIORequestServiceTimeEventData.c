/*
 * XREFs of StorEtwIORequestServiceTimeEventData @ 0x1C0041978
 * Callers:
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D904 (GetSrbScsiData.c)
 *     McTemplateK0xpccpcccccqxx @ 0x1C004112C (McTemplateK0xpccpcccccqxx.c)
 */

int __fastcall StorEtwIORequestServiceTimeEventData(__int64 a1, char a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  char v5; // r15
  unsigned __int64 v6; // r14
  LARGE_INTEGER v10; // rax
  __int64 QuadPart; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned __int64 v17; // rtt
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rtt
  __int64 v22; // r8
  char *SrbScsiData; // rax
  int v24; // r10d
  char v25; // r11
  char v26; // dl
  char v27; // r9
  const EVENT_DESCRIPTOR *v28; // rdx
  __int64 v30; // [rsp+28h] [rbp-80h]
  char v31; // [rsp+50h] [rbp-58h]
  char v32; // [rsp+58h] [rbp-50h]
  char v33; // [rsp+60h] [rbp-48h]
  int v34; // [rsp+68h] [rbp-40h]
  unsigned __int64 v35; // [rsp+70h] [rbp-38h]
  unsigned __int64 v36; // [rsp+78h] [rbp-30h]
  union _LARGE_INTEGER v37; // [rsp+B0h] [rbp+8h] BYREF
  char v38; // [rsp+B8h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v4 = 0LL;
  v5 = 0;
  v38 = 0;
  v6 = 0LL;
  if ( UseQPCTime )
    v10 = KeQueryPerformanceCounter(&v37);
  else
    v10.QuadPart = KeQueryUnbiasedInterruptTime();
  QuadPart = v37.QuadPart;
  if ( !a2 )
  {
    if ( v10.QuadPart <= 0 || (v12 = *(_QWORD *)(a1 + 696), v10.QuadPart >= v12) )
      v13 = v10.QuadPart - *(_QWORD *)(a1 + 696);
    else
      v13 = v10.QuadPart - v12 - 1;
    if ( UseQPCTime )
    {
      a3 = 0LL;
      if ( v37.QuadPart && v13 )
        a3 = 10000 * (1000 * (v13 % v37.QuadPart) % v37.QuadPart) / v37.QuadPart
           + 10000 * (1000 * (v13 % v37.QuadPart) / v37.QuadPart + 1000 * (v13 / v37.QuadPart));
    }
    else
    {
      a3 = v13;
    }
  }
  LODWORD(v14) = StorRequestThresholdTime;
  if ( StorRequestThresholdTime && a3 < StorRequestThresholdTime )
    return v14;
  v15 = *(_QWORD *)(a1 + 704);
  v16 = *(_QWORD *)(a1 + 696);
  if ( v15 >= v16 )
  {
    if ( v15 <= 0 || v15 >= v16 )
      v14 = v15 - v16;
    else
      v14 = v15 - v16 - 1;
    if ( UseQPCTime )
    {
      if ( v37.QuadPart && v14 )
      {
        v17 = 1000 * (v14 % v37.QuadPart);
        v18 = v17 / v37.QuadPart + 1000 * (v14 / v37.QuadPart);
        v14 = 10000 * (v17 % v37.QuadPart) / v37.QuadPart;
        v6 = v14 + 10000 * v18;
      }
    }
    else
    {
      v6 = v14;
    }
  }
  if ( v15 && *(_QWORD *)(a1 + 712) >= v15 )
  {
    v19 = *(_QWORD *)(a1 + 712);
    if ( v19 <= 0 || (v20 = *(_QWORD *)(a1 + 704), v19 >= v15) )
    {
      v14 = v19 - v15;
      goto LABEL_36;
    }
    goto LABEL_34;
  }
  if ( *(_QWORD *)(a1 + 712) < v16 )
    goto LABEL_41;
  v19 = *(_QWORD *)(a1 + 712);
  if ( v19 > 0 )
  {
    v20 = *(_QWORD *)(a1 + 696);
    if ( v19 < v16 )
    {
LABEL_34:
      v14 = v19 - v20 - 1;
      goto LABEL_36;
    }
  }
  v14 = v19 - v16;
LABEL_36:
  if ( UseQPCTime )
  {
    if ( v37.QuadPart && v14 )
    {
      v21 = 1000 * (v14 % v37.QuadPart);
      v22 = v21 / v37.QuadPart + 1000 * (v14 / v37.QuadPart);
      v14 = 10000 * (v21 % v37.QuadPart) / v37.QuadPart;
      v4 = v14 + 10000 * v22;
    }
  }
  else
  {
    v4 = v14;
  }
LABEL_41:
  if ( *(_BYTE *)(v3 + 2) == 40 )
  {
    SrbScsiData = (char *)GetSrbScsiData(v3, 0LL, 0LL, &v38, 0LL, 0LL);
    if ( SrbScsiData )
      v5 = *SrbScsiData;
    v14 = *(unsigned int *)(v3 + 52);
    v24 = *(_DWORD *)(v3 + 60);
    v25 = v38;
    LOBYTE(QuadPart) = *(_BYTE *)(v14 + v3 + 8);
    v26 = *(_BYTE *)(v14 + v3 + 9);
    v27 = *(_BYTE *)(v14 + v3 + 10);
  }
  else
  {
    v5 = *(_BYTE *)(v3 + 72);
    v25 = *(_BYTE *)(v3 + 4);
    LOBYTE(QuadPart) = *(_BYTE *)(v3 + 5);
    v26 = *(_BYTE *)(v3 + 6);
    v27 = *(_BYTE *)(v3 + 7);
    v24 = *(_DWORD *)(v3 + 16);
  }
  if ( a2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100) != 0 )
    {
      v36 = v4;
      v35 = v6;
      v34 = v24;
      v33 = v25;
      v32 = v27;
      v31 = v26;
      v28 = (const EVENT_DESCRIPTOR *)&EventIOPerformanceMeasurementTarget;
      goto LABEL_51;
    }
  }
  else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100) != 0 )
  {
    v36 = v4;
    v35 = v6;
    v34 = v24;
    v33 = v25;
    v32 = v27;
    v31 = v26;
    v28 = (const EVENT_DESCRIPTOR *)&EventIOPerformanceMeasurement;
LABEL_51:
    LOBYTE(v30) = v5;
    LODWORD(v14) = McTemplateK0xpccpcccccqxx(
                     QuadPart,
                     v28,
                     (const GUID *)(a1 + 728),
                     a3,
                     *(_QWORD *)(a1 + 160),
                     v30,
                     *(_BYTE *)(v3 + 3),
                     *(_QWORD *)(a1 + 768),
                     *(_BYTE *)(*(_QWORD *)(a1 + 216) + 56LL),
                     QuadPart,
                     v31,
                     v32,
                     v33,
                     v34,
                     v35,
                     v36);
  }
  return v14;
}
