/*
 * XREFs of ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x18003A110
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180038440 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x18003AA94 (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 *     RtlQueryResourcePolicy @ 0x18003DF10 (RtlQueryResourcePolicy.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpSystemIsSdBusBased@@YAKXZ @ 0x1800618FC (-RmpSystemIsSdBusBased@@YAKXZ.c)
 */

void __fastcall RmpGetResourceManagerRuntimeConfiguration(struct _RM_RUNTIME_CONFIGURATION *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  _BYTE *v4; // rbx
  bool v5; // zf
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD *v15; // rdi
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // ebx
  const struct _TlgProvider_t *v19; // rcx
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  int ResourceManagerRegistryOverrides; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v22[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+5Ch] [rbp-A4h]
  int v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+64h] [rbp-9Ch]
  int v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+6Ch] [rbp-94h]
  int v30; // [rsp+70h] [rbp-90h]
  int v31; // [rsp+74h] [rbp-8Ch]
  int v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+7Ch] [rbp-84h]
  int v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]
  int v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C4h] [rbp-3Ch]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  int v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D4h] [rbp-2Ch]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  int v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E4h] [rbp-1Ch]
  char v47; // [rsp+E8h] [rbp-18h]
  _BYTE v48[176]; // [rsp+F0h] [rbp-10h] BYREF
  __m256i pData; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v50; // [rsp+1C0h] [rbp+C0h]

  memset_0(v22, 0, 0xB0uLL);
  memset_0(v48, 0, sizeof(v48));
  if ( (int)RtlQueryResourcePolicy(0LL, v2, &v20) >= 0
    && v20 <= 10
    && (int)RtlQueryResourcePolicy(2LL, v3, &v20) >= 0
    && v20 > 10 )
  {
    v18 = 7;
    if ( RmpSystemIsSdBusBased() )
      v18 = 15;
    v22[0] = v18;
  }
  v37 = 0;
  v35 = 35;
  v36 = 5000;
  v27 = 90;
  v29 = 90;
  v38 = 5000;
  v39 = 5000;
  v44 = 5000;
  v45 = 5000;
  v40 = 60000;
  v43 = 60000;
  v23 = 52428800LL;
  v24 = 50;
  v25 = 70;
  v26 = 170;
  v28 = 75;
  v30 = 95;
  v33 = 89;
  v31 = 10;
  v32 = 65;
  v34 = 85;
  v41 = 0x200000;
  v42 = 2;
  v46 = 1000;
  v47 = 30;
  ResourceManagerRegistryOverrides = RmpGetResourceManagerRegistryOverrides(
                                       (struct _RM_RUNTIME_CONFIGURATION *)v22,
                                       (struct _RM_RUNTIME_CONFIGURATION *)v48);
  if ( ResourceManagerRegistryOverrides < 0 )
  {
    if ( hProvider > 2u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      *(_QWORD *)&v50 = &ResourceManagerRegistryOverrides;
      *((_QWORD *)&v50 + 1) = 4LL;
      TlgWrite(v19, &unk_18007BF58, 0LL, 0LL, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
    }
    v4 = v22;
  }
  else
  {
    v4 = v48;
  }
  memset_0(&pData, 0, 0x30uLL);
  v5 = (*v4 & 4) == 0;
  *(__m128i *)((char *)pData.m256i_i64 + 4) = _mm_load_si128((const __m128i *)&_xmm);
  if ( v5 )
  {
    pData.m256i_i32[7] = 2;
    *(_QWORD *)&v50 = 0x300000003LL;
    HIDWORD(v50) = 1;
  }
  v6 = *(_OWORD *)&pData.m256i_u64[2];
  *(_OWORD *)(v4 + 72) = *(_OWORD *)pData.m256i_i8;
  v7 = v50;
  *(_OWORD *)(v4 + 88) = v6;
  *(_OWORD *)(v4 + 104) = v7;
  v8 = *((_OWORD *)v4 + 1);
  *(_OWORD *)a1 = *(_OWORD *)v4;
  v9 = *((_OWORD *)v4 + 2);
  *((_OWORD *)a1 + 1) = v8;
  v10 = *((_OWORD *)v4 + 3);
  *((_OWORD *)a1 + 2) = v9;
  v11 = *((_OWORD *)v4 + 4);
  *((_OWORD *)a1 + 3) = v10;
  v12 = *((_OWORD *)v4 + 5);
  *((_OWORD *)a1 + 4) = v11;
  v13 = *((_OWORD *)v4 + 6);
  *((_OWORD *)a1 + 5) = v12;
  v14 = *((_OWORD *)v4 + 8);
  *((_OWORD *)a1 + 6) = v13;
  v15 = (_OWORD *)((char *)a1 + 128);
  *(v15 - 1) = *((_OWORD *)v4 + 7);
  v16 = *((_OWORD *)v4 + 9);
  *v15 = v14;
  v17 = *((_OWORD *)v4 + 10);
  v15[1] = v16;
  v15[2] = v17;
}
