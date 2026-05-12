/*
 * XREFs of StorEtwLogoRequestServiceTimeEventData @ 0x1C0041CA4
 * Callers:
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 *     RaidUnitCompleteRequest @ 0x1C000A210 (RaidUnitCompleteRequest.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001D904 (GetSrbScsiData.c)
 *     McTemplateK0ccccxqbcppxxx @ 0x1C0040C24 (McTemplateK0ccccxqbcppxxx.c)
 */

int __fastcall StorEtwLogoRequestServiceTimeEventData(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 SrbScsiData; // rax
  __int64 v4; // rdi
  int v5; // ebp
  char v6; // r14
  char v7; // r12
  char v8; // si
  __int64 v9; // r15
  LARGE_INTEGER v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rtt
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned __int64 v18; // rtt
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rtt
  __int64 v23; // r8
  __int64 v24; // rcx
  char v25; // dl
  char v26; // r9
  char v27; // r10
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h] BYREF
  union _LARGE_INTEGER v30; // [rsp+C0h] [rbp+8h] BYREF
  int v31; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v32; // [rsp+D0h] [rbp+18h]

  SrbScsiData = (unsigned __int64)&retaddr;
  v32 = a3;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = 0;
  v6 = 0;
  v31 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( a2 )
    goto LABEL_39;
  if ( UseQPCTime )
    v12 = KeQueryPerformanceCounter(&v30);
  else
    v12.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( v12.QuadPart <= 0 || (v13 = *(_QWORD *)(a1 + 696), v12.QuadPart >= v13) )
    SrbScsiData = v12.QuadPart - *(_QWORD *)(a1 + 696);
  else
    SrbScsiData = v12.QuadPart - v13 - 1;
  if ( UseQPCTime )
  {
    if ( v30.QuadPart && SrbScsiData )
    {
      v14 = 1000 * (SrbScsiData % v30.QuadPart);
      v15 = v14 / v30.QuadPart + 1000 * (SrbScsiData / v30.QuadPart);
      SrbScsiData = 10000 * (v14 % v30.QuadPart) / v30.QuadPart;
      v6 = SrbScsiData + 16 * v15;
    }
  }
  else
  {
    v6 = SrbScsiData;
  }
  v16 = *(_QWORD *)(a1 + 704);
  v17 = *(_QWORD *)(a1 + 696);
  if ( v16 >= v17 )
  {
    if ( v16 <= 0 || v16 >= v17 )
      SrbScsiData = v16 - v17;
    else
      SrbScsiData = v16 - v17 - 1;
    if ( UseQPCTime )
    {
      if ( v30.QuadPart && SrbScsiData )
      {
        v18 = 1000 * (SrbScsiData % v30.QuadPart);
        v19 = v18 / v30.QuadPart + 1000 * (SrbScsiData / v30.QuadPart);
        SrbScsiData = 10000 * (v18 % v30.QuadPart) / v30.QuadPart;
        v7 = SrbScsiData + 16 * v19;
      }
    }
    else
    {
      v7 = SrbScsiData;
    }
  }
  if ( v16 && *(_QWORD *)(a1 + 712) >= v16 )
  {
    v20 = *(_QWORD *)(a1 + 712);
    if ( v20 <= 0 || (v21 = *(_QWORD *)(a1 + 704), v20 >= v16) )
    {
      SrbScsiData = v20 - v16;
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  if ( *(_QWORD *)(a1 + 712) < v17 )
    goto LABEL_39;
  v20 = *(_QWORD *)(a1 + 712);
  if ( v20 > 0 )
  {
    v21 = *(_QWORD *)(a1 + 696);
    if ( v20 < v17 )
    {
LABEL_32:
      SrbScsiData = v20 - v21 - 1;
      goto LABEL_34;
    }
  }
  SrbScsiData = v20 - v17;
LABEL_34:
  if ( UseQPCTime )
  {
    if ( v30.QuadPart && SrbScsiData )
    {
      v22 = 1000 * (SrbScsiData % v30.QuadPart);
      v23 = v22 / v30.QuadPart + 1000 * (SrbScsiData / v30.QuadPart);
      SrbScsiData = 10000 * (v22 % v30.QuadPart) / v30.QuadPart;
      v8 = SrbScsiData + 16 * v23;
    }
  }
  else
  {
    v8 = SrbScsiData;
  }
LABEL_39:
  if ( *(_BYTE *)(v4 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v4 + 20) )
    {
      SrbScsiData = GetSrbScsiData(v4, &v31, &v31, 0LL, 0LL, 0LL);
      v5 = v31;
      v9 = SrbScsiData;
    }
    v24 = *(unsigned int *)(v4 + 52);
    v25 = *(_BYTE *)(v24 + v4 + 8);
    v26 = *(_BYTE *)(v24 + v4 + 9);
    v27 = *(_BYTE *)(v24 + v4 + 10);
  }
  else
  {
    v25 = *(_BYTE *)(v4 + 5);
    v9 = v4 + 72;
    v26 = *(_BYTE *)(v4 + 6);
    v5 = 16;
    v27 = *(_BYTE *)(v4 + 7);
  }
  if ( a2 )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000000) != 0 )
      LODWORD(SrbScsiData) = McTemplateK0ccccxqbcppxxx(
                               *(_QWORD *)(a1 + 216),
                               &EventLogoPerformanceMeasurementTarget,
                               (const GUID *)(a1 + 728),
                               *(_BYTE *)(*(_QWORD *)(a1 + 216) + 56LL),
                               v25,
                               v26,
                               v27,
                               v32,
                               v5,
                               v9,
                               *(_BYTE *)(v4 + 3),
                               *(_QWORD *)(a1 + 160),
                               *(_QWORD *)(a1 + 768),
                               0,
                               0,
                               0);
  }
  else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x2000000) != 0 )
  {
    LODWORD(SrbScsiData) = McTemplateK0ccccxqbcppxxx(
                             *(_QWORD *)(a1 + 216),
                             &EventLogoPerformanceMeasurement,
                             (const GUID *)(a1 + 728),
                             *(_BYTE *)(*(_QWORD *)(a1 + 216) + 56LL),
                             v25,
                             v26,
                             v27,
                             v6,
                             v5,
                             v9,
                             *(_BYTE *)(v4 + 3),
                             *(_QWORD *)(a1 + 160),
                             *(_QWORD *)(a1 + 768),
                             v7,
                             v8,
                             *(_QWORD *)(a1 + 720));
  }
  return SrbScsiData;
}
