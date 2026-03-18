/*
 * XREFs of PopEstimateChargeTime @ 0x1406CADB0
 * Callers:
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopBatteryEstimatesSpoiled @ 0x1406CA52C (PopBatteryEstimatesSpoiled.c)
 */

unsigned __int64 PopEstimateChargeTime()
{
  unsigned __int64 v0; // r15
  __int64 v1; // r14
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // rsi
  int v4; // edi
  unsigned __int64 v5; // rcx
  char v6; // bl
  __int64 i; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rax
  char v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v19; // [rsp+98h] [rbp-70h]
  int v20; // [rsp+A0h] [rbp-68h]
  int v21; // [rsp+A4h] [rbp-64h]
  unsigned __int64 *v22; // [rsp+A8h] [rbp-60h]
  int v23; // [rsp+B0h] [rbp-58h]
  int v24; // [rsp+B4h] [rbp-54h]
  __int64 *v25; // [rsp+B8h] [rbp-50h]
  int v26; // [rsp+C0h] [rbp-48h]
  int v27; // [rsp+C4h] [rbp-44h]
  char *v28; // [rsp+C8h] [rbp-40h]
  int v29; // [rsp+D0h] [rbp-38h]
  int v30; // [rsp+D4h] [rbp-34h]
  unsigned __int64 *v31; // [rsp+D8h] [rbp-30h]
  int v32; // [rsp+E0h] [rbp-28h]
  int v33; // [rsp+E4h] [rbp-24h]
  int *v34; // [rsp+E8h] [rbp-20h]
  int v35; // [rsp+F0h] [rbp-18h]
  int v36; // [rsp+F4h] [rbp-14h]

  v0 = -1LL;
  v1 = 0LL;
  v2 = -1LL;
  v3 = 0LL;
  v4 = 0;
  if ( PopBatteryEstimatesSpoiled() )
  {
    v5 = PopMaxChargeRate;
    v6 = 83;
  }
  else
  {
    for ( i = qword_14034B3B0; (__int64 *)i != &qword_14034B3B0; i = *(_QWORD *)i )
    {
      v8 = *(_DWORD *)(i + 64);
      v9 = *(_DWORD *)(i + 88);
      if ( v8 != -1 && v9 != -1 && v9 < v8 )
        v1 += v8 - v9;
      v10 = *(int *)(i + 96);
      if ( (_DWORD)v10 != 0x80000000 && (int)v10 > 0 )
        v3 += v10;
      v4 |= *(_DWORD *)(i + 84);
    }
    v5 = PopMaxChargeRate;
    v4 &= 7u;
    if ( v4 == 5 )
    {
      if ( PopMaxChargeRate < v3 )
      {
        v5 = v3;
        PopMaxChargeRate = v3;
      }
      if ( v1 && v5 )
      {
        v2 = 4000 * v1 / v5;
        if ( v2 > 0x5460 )
        {
          v6 = 76;
        }
        else
        {
          v0 = 4000 * v1 / v5;
          v6 = 79;
        }
      }
      else
      {
        v6 = 90;
      }
    }
    else
    {
      v6 = 80;
    }
  }
  DbgPrintEx(0x92u, 3u, "Charge time: Rate=%lld CapToChg=%lld MaxRate=%lld Est=%lld\n", v3, v1, v5, v0);
  if ( hProvider.LevelPlus1 > 5 )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v16 = PopMaxChargeRate;
    v19 = &v14;
    v22 = &v15;
    v25 = &v16;
    v28 = &v12;
    v31 = &v17;
    v34 = &v13;
    v14 = v1;
    v15 = v2;
    v12 = v6;
    v17 = v3;
    v13 = v4;
    v20 = 8;
    v23 = 8;
    v26 = 8;
    v29 = 1;
    v32 = 8;
    v35 = 4;
    TlgWrite(&hProvider, &unk_1402ACE7C, 0LL, 0LL, 8u, &pData);
  }
  return v0;
}
