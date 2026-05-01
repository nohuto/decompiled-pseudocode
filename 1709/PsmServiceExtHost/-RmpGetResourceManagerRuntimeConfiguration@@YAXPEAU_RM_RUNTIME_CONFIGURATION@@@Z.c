/*
 * XREFs of ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x180021E04
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180021774 (RmpCreateResourceManagerServer.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z @ 0x1800229C0 (-RmpGetResourceManagerRegistryOverrides@@YAJPEAU_RM_RUNTIME_CONFIGURATION@@0@Z.c)
 *     RtlQueryResourcePolicy @ 0x180025798 (RtlQueryResourcePolicy.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpSystemIsSdBusBased@@YAKXZ @ 0x18004103C (-RmpSystemIsSdBusBased@@YAKXZ.c)
 */

void __fastcall RmpGetResourceManagerRuntimeConfiguration(struct _RM_RUNTIME_CONFIGURATION *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  _BYTE *v5; // rbx
  bool v6; // zf
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _OWORD *v16; // rdi
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // ebx
  const struct _TlgProvider_t *v20; // rcx
  const GUID *v21; // r8
  const GUID *v22; // r9
  int v23; // [rsp+30h] [rbp-D0h] BYREF
  int ResourceManagerRegistryOverrides; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD v25[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+5Ch] [rbp-A4h]
  int v29; // [rsp+60h] [rbp-A0h]
  int v30; // [rsp+64h] [rbp-9Ch]
  int v31; // [rsp+68h] [rbp-98h]
  int v32; // [rsp+6Ch] [rbp-94h]
  int v33; // [rsp+70h] [rbp-90h]
  int v34; // [rsp+74h] [rbp-8Ch]
  int v35; // [rsp+78h] [rbp-88h]
  int v36; // [rsp+7Ch] [rbp-84h]
  int v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  int v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C4h] [rbp-3Ch]
  int v42; // [rsp+C8h] [rbp-38h]
  int v43; // [rsp+CCh] [rbp-34h]
  int v44; // [rsp+D0h] [rbp-30h]
  int v45; // [rsp+D4h] [rbp-2Ch]
  int v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+DCh] [rbp-24h]
  int v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E4h] [rbp-1Ch]
  char v50; // [rsp+E8h] [rbp-18h]
  _BYTE v51[176]; // [rsp+F0h] [rbp-10h] BYREF
  __m256i pData; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v53; // [rsp+1C0h] [rbp+C0h]

  memset_0(v25, 0, 0xB0uLL);
  memset_0(v51, 0, sizeof(v51));
  v2 = v25[0] | 1;
  v25[0] |= 1u;
  if ( (int)RtlQueryResourcePolicy(0LL, v3, &v23) >= 0
    && v23 <= 10
    && (int)RtlQueryResourcePolicy(2LL, v4, &v23) >= 0
    && v23 > 10 )
  {
    v19 = v2 | 0x1C;
    v25[0] = v19;
    if ( RmpSystemIsSdBusBased() )
      v25[0] = v19 | 0x20;
  }
  v40 = 0;
  v38 = 35;
  v39 = 5000;
  v30 = 90;
  v32 = 90;
  v41 = 5000;
  v42 = 5000;
  v47 = 5000;
  v48 = 5000;
  v43 = 60000;
  v46 = 60000;
  v26 = 52428800LL;
  v27 = 50;
  v28 = 70;
  v29 = 170;
  v31 = 75;
  v33 = 95;
  v36 = 89;
  v34 = 10;
  v35 = 65;
  v37 = 85;
  v44 = 0x200000;
  v45 = 2;
  v49 = 1000;
  v50 = 30;
  ResourceManagerRegistryOverrides = RmpGetResourceManagerRegistryOverrides(
                                       (struct _RM_RUNTIME_CONFIGURATION *)v25,
                                       (struct _RM_RUNTIME_CONFIGURATION *)v51);
  if ( ResourceManagerRegistryOverrides < 0 )
  {
    if ( hProvider > 2u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      *(_QWORD *)&v53 = &ResourceManagerRegistryOverrides;
      *((_QWORD *)&v53 + 1) = 4LL;
      TlgWrite(v20, &unk_180055A56, v21, v22, 3u, (EVENT_DATA_DESCRIPTOR *)&pData);
    }
    v5 = v25;
  }
  else
  {
    v5 = v51;
  }
  memset_0(&pData, 0, 0x30uLL);
  v6 = (*v5 & 0x10) == 0;
  *(__m128i *)((char *)pData.m256i_i64 + 4) = _mm_load_si128((const __m128i *)&_xmm);
  if ( v6 )
  {
    pData.m256i_i32[7] = 2;
    *(_QWORD *)&v53 = 0x300000003LL;
    HIDWORD(v53) = 1;
  }
  v7 = *(_OWORD *)&pData.m256i_u64[2];
  *(_OWORD *)(v5 + 72) = *(_OWORD *)pData.m256i_i8;
  v8 = v53;
  *(_OWORD *)(v5 + 88) = v7;
  *(_OWORD *)(v5 + 104) = v8;
  v9 = *((_OWORD *)v5 + 1);
  *(_OWORD *)a1 = *(_OWORD *)v5;
  v10 = *((_OWORD *)v5 + 2);
  *((_OWORD *)a1 + 1) = v9;
  v11 = *((_OWORD *)v5 + 3);
  *((_OWORD *)a1 + 2) = v10;
  v12 = *((_OWORD *)v5 + 4);
  *((_OWORD *)a1 + 3) = v11;
  v13 = *((_OWORD *)v5 + 5);
  *((_OWORD *)a1 + 4) = v12;
  v14 = *((_OWORD *)v5 + 6);
  *((_OWORD *)a1 + 5) = v13;
  v15 = *((_OWORD *)v5 + 8);
  *((_OWORD *)a1 + 6) = v14;
  v16 = (_OWORD *)((char *)a1 + 128);
  *(v16 - 1) = *((_OWORD *)v5 + 7);
  v17 = *((_OWORD *)v5 + 9);
  *v16 = v15;
  v18 = *((_OWORD *)v5 + 10);
  v16[1] = v17;
  v16[2] = v18;
}
