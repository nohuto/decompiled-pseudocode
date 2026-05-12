/*
 * XREFs of StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0003E70
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000314C (StorpLogPerUnitStatistics.c)
 * Callees:
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C000E238 (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetrySendAdaptiveIdleCounters(__int64 a1)
{
  int v2; // ecx
  signed __int64 v3; // rcx
  const GUID *v4; // r9
  int v5; // r10d
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // ecx
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  char v11; // [rsp+32h] [rbp-CEh] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  int *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  char *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  char *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  char *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  unsigned int *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  int *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  int *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  int *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  int *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx() )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL);
    if ( (v2 & 0x80u) != 0 && (v2 & 0x100) != 0 )
    {
      RaidUnitGetMinimumPowerCyclePeriod(a1);
      v18 = MEMORY[0xFFFFF78000000014];
      v3 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 2568);
      if ( v3 > 0 )
        v3 = (unsigned __int64)((unsigned __int128)(v3 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
      if ( (unsigned int)dword_1C0055010 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)v3, 0x400000000000uLL) )
        {
          v6 = *(_QWORD *)(a1 + 24);
          v7 = *(_QWORD *)(a1 + 1456);
          v8 = *(_DWORD *)(v6 + 56);
          v9 = *(_BYTE *)(a1 + 88);
          v10 = *(_BYTE *)(a1 + 89);
          v11 = *(_BYTE *)(a1 + 90);
          v12 = v8;
          v13 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 12LL);
          v14 = *(_DWORD *)(v7 + 24);
          v15 = *(_DWORD *)(a1 + 2560);
          v20 = v6 + 5192;
          v22 = a1 + 1688;
          v24 = &v12;
          v26 = &v9;
          v28 = &v10;
          v30 = &v11;
          v32 = &v13;
          v34 = &v14;
          v36 = &v15;
          v38 = &v16;
          v40 = &v17;
          v16 = v5;
          v17 = (int)v4;
          v21 = 16LL;
          v23 = 16LL;
          v25 = 4LL;
          v27 = 1LL;
          v29 = 1LL;
          v31 = 1LL;
          v33 = 4LL;
          v35 = 4LL;
          v37 = 4LL;
          v39 = 4LL;
          v41 = 4LL;
          TlgWrite((TraceLoggingHProvider)v13, &unk_1C004D83A, (LPCGUID)v6, v4, 0xDu, &pData);
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
}
