/*
 * XREFs of ?RmpCpuSetManagerApplySystemAllowedMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800240BC
 * Callers:
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180024050 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x18002417C (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpCpuSetManagerApplySystemAllowedMask(struct _RM_CPU_SET_MANAGER *a1)
{
  const GUID *v1; // r8
  const GUID *v2; // r9
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  __int16 v13; // dx
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v17; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+6Ch] [rbp-94h]
  __int16 *v22; // [rsp+70h] [rbp-90h]
  int v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+7Ch] [rbp-84h]
  _OWORD *v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+8Ch] [rbp-74h]
  _OWORD SystemInformation[10]; // [rsp+90h] [rbp-70h] BYREF

  if ( *((_DWORD *)a1 + 110) >= *((_DWORD *)a1 + 109) && *((_DWORD *)a1 + 108) == -1 )
  {
    v16 = RmpSystemSetSystemAllowedCpuSets(0LL);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v21 = 0;
      v19 = &v16;
      v20 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057F43, v1, v2, 3u, &pData);
    }
  }
  else
  {
    v4 = *(_OWORD *)((char *)a1 + 264);
    SystemInformation[0] = *(_OWORD *)((char *)a1 + 248);
    v5 = *(_OWORD *)((char *)a1 + 280);
    SystemInformation[1] = v4;
    v6 = *(_OWORD *)((char *)a1 + 296);
    SystemInformation[2] = v5;
    v7 = *(_OWORD *)((char *)a1 + 312);
    SystemInformation[3] = v6;
    v8 = *(_OWORD *)((char *)a1 + 328);
    SystemInformation[4] = v7;
    v9 = *(_OWORD *)((char *)a1 + 344);
    SystemInformation[5] = v8;
    v10 = *(_OWORD *)((char *)a1 + 376);
    SystemInformation[6] = v9;
    SystemInformation[7] = *(_OWORD *)((char *)a1 + 360);
    v11 = *(_OWORD *)((char *)a1 + 392);
    v12 = *((_DWORD *)a1 + 108);
    SystemInformation[8] = v10;
    SystemInformation[9] = v11;
    if ( v12 != -1 )
      *((_QWORD *)SystemInformation + ((unsigned __int64)(unsigned int)(v12 - 256) >> 16)) &= ~(1LL << v12);
    v16 = RmpSystemSetSystemAllowedCpuSets(SystemInformation);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v19 = &v16;
      v17 = v13 + 19;
      v22 = &v17;
      v25 = SystemInformation;
      v20 = 4;
      v23 = 2;
      v26 = 160;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005804D, v14, v15, 5u, &pData);
    }
  }
  return v16;
}
