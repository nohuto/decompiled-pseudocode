/*
 * XREFs of StorpLogPhysicalTopologyInfo @ 0x1C0043788
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C00040B4 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00015D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00016B0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     RaidDriverGetName @ 0x1C0011818 (RaidDriverGetName.c)
 *     RtlStringCchPrintfW @ 0x1C00161B8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

char __fastcall StorpLogPhysicalTopologyInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r15
  unsigned int v6; // ebx
  int v7; // edi
  const struct _TlgProvider_t *v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned int v16; // r14d
  _DWORD *v17; // rbx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  unsigned int v21; // edi
  char *v22; // rcx
  __int128 v23; // xmm1
  _DWORD *v24; // rcx
  TraceLoggingHProvider v25; // rcx
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // r9
  const struct _TlgProvider_t *v30; // rcx
  unsigned int v31; // edi
  __int64 v32; // r9
  __int128 v33; // xmm1
  __int64 v34; // r9
  LPCGUID v35; // r8
  LPCGUID v36; // r9
  struct _TlgProvider_t hProvider; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  char *p_hProvider; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  const unsigned __int16 **v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  unsigned int *p_ProviderMetadataPtr; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  struct _TlgProvider_t *v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 *p_KeywordAny; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  char *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  unsigned __int64 *p_KeywordAll; // [rsp+120h] [rbp+20h]
  __int64 v58; // [rsp+128h] [rbp+28h]
  CHAR psz[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v60; // [rsp+138h] [rbp+38h]
  CHAR v61[16]; // [rsp+140h] [rbp+40h] BYREF
  char v62; // [rsp+150h] [rbp+50h]
  CHAR v63[56]; // [rsp+158h] [rbp+58h] BYREF
  wchar_t pszDest[32]; // [rsp+190h] [rbp+90h] BYREF

  v3 = a3;
  *(_QWORD *)psz = 0LL;
  v60 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  v6 = 0;
  v7 = 0;
  RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)psz);
  RtlStringCchPrintfW(pszDest, 0x20uLL, L"%s", v60);
  v8 = (const struct _TlgProvider_t *)*(unsigned int *)(a2 + 8);
  if ( v3 >= 40 * (__int64)v8 + 16 && (_DWORD)v8 )
  {
    v9 = (_DWORD *)(a2 + 32);
    v10 = (unsigned int)v8;
    do
    {
      v6 += *(v9 - 3);
      v7 += *v9;
      v9 += 10;
      --v10;
    }
    while ( v10 );
  }
  if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn(v8, 0x400000000000uLL) )
  {
    hProvider.LevelPlus1 = v11;
    v39 = a1 + 5192;
    *(&hProvider.LevelPlus1 + 1) = v6;
    LODWORD(hProvider.ProviderMetadataPtr) = v7;
    v40 = 16LL;
    TlgCreateWsz(&pDesc, pszDest);
    v43 = 4LL;
    v44 = (const unsigned __int16 **)(&hProvider.LevelPlus1 + 1);
    p_hProvider = (char *)&hProvider;
    p_ProviderMetadataPtr = (unsigned int *)&hProvider.ProviderMetadataPtr;
    v45 = 4LL;
    v47 = 4LL;
    TlgWrite(&hProvider, &unk_1C004D26D, v12, v13, 7u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
  }
  v14 = *(unsigned int *)(a2 + 8);
  v15 = 40 * v14 + 16;
  if ( v3 >= v15 )
  {
    *(_QWORD *)psz = 0LL;
    LOBYTE(v60) = 0;
    memset(v63, 0, 0x29uLL);
    LOBYTE(v15) = 0;
    v16 = 0;
    memset(v61, 0, sizeof(v61));
    v62 = 0;
    if ( (_DWORD)v14 )
    {
      do
      {
        LOBYTE(v15) = v16;
        v17 = (_DWORD *)(a2 + 8 * (v16 + 4LL * v16 + 2));
        v18 = v17[1];
        v19 = v18;
        if ( v18 )
        {
          v20 = v17[3];
          if ( v20 >= 0x28 )
          {
            v15 = (unsigned int)v17[2];
            if ( v15 >= (unsigned __int64)v18 << 7 )
            {
              LODWORD(v15) = v20 + 8 * (v16 + 4 * v16 + 2) + (v18 << 7);
              if ( (unsigned int)v15 <= (unsigned int)v3 )
              {
                v21 = 0;
                do
                {
                  v22 = (char *)v17 + (unsigned int)v17[3];
                  v15 = *((_QWORD *)v22 + 2);
                  *(_QWORD *)psz = v15;
                  LOBYTE(v60) = 0;
                  *(_OWORD *)v63 = *(_OWORD *)(v22 + 24);
                  *(_OWORD *)&v63[16] = *(_OWORD *)(v22 + 40);
                  *(_QWORD *)&v63[32] = *((_QWORD *)v22 + 7);
                  v63[40] = 0;
                  v23 = *((_OWORD *)v22 + 4);
                  v62 = 0;
                  *(_OWORD *)v61 = v23;
                  if ( (unsigned int)dword_1C0056060 > 5 )
                  {
                    LOBYTE(v15) = TlgKeywordOn((TraceLoggingHProvider)v22, 0x400000000000uLL);
                    if ( (_BYTE)v15 )
                    {
                      LODWORD(hProvider.ProviderMetadataPtr) = *v24;
                      *(&hProvider.LevelPlus1 + 1) = v24[1];
                      hProvider.LevelPlus1 = v24[2];
                      HIDWORD(hProvider.ProviderMetadataPtr) = v24[3];
                      v39 = a1 + 5192;
                      v40 = 16LL;
                      TlgCreateWsz(&pDesc, pszDest);
                      v43 = 4LL;
                      v44 = (const unsigned __int16 **)(&hProvider.LevelPlus1 + 1);
                      p_hProvider = (char *)&hProvider.ProviderMetadataPtr;
                      p_ProviderMetadataPtr = (unsigned int *)&hProvider;
                      v45 = 4LL;
                      v48 = (struct _TlgProvider_t *)((char *)&hProvider.ProviderMetadataPtr + 4);
                      v47 = 4LL;
                      v49 = 4LL;
                      TlgCreateSz(&v50, psz);
                      TlgCreateSz(&v51, v63);
                      TlgCreateSz(&v52, v61);
                      LOBYTE(v15) = TlgWrite(
                                      v25,
                                      &unk_1C004E30C,
                                      v26,
                                      v27,
                                      0xBu,
                                      (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
                    }
                  }
                  v19 = v17[1];
                  ++v21;
                }
                while ( v21 < v19 );
              }
            }
          }
        }
        v28 = (unsigned int)v17[4];
        if ( (_DWORD)v28 )
        {
          v29 = (unsigned int)v17[6];
          if ( (unsigned int)v29 >= 0x28 )
          {
            v15 = (unsigned int)v17[3];
            if ( v29 >= v15 + ((unsigned __int64)v19 << 7) )
            {
              v15 = (unsigned int)v17[5];
              v30 = (const struct _TlgProvider_t *)(136 * v28);
              if ( v15 >= 136 * v28 )
              {
                LODWORD(v15) = v29 + 8 * (v16 + 4 * v16 + 2) + 136 * v28;
                if ( (unsigned int)v15 <= (unsigned int)v3 )
                {
                  v31 = 0;
                  do
                  {
                    v32 = (__int64)&v17[34 * v31] + (unsigned int)v17[6];
                    v15 = *(_QWORD *)(v32 + 24);
                    *(_QWORD *)psz = v15;
                    LOBYTE(v60) = 0;
                    *(_OWORD *)v63 = *(_OWORD *)(v32 + 32);
                    *(_OWORD *)&v63[16] = *(_OWORD *)(v32 + 48);
                    *(_QWORD *)&v63[32] = *(_QWORD *)(v32 + 64);
                    v63[40] = 0;
                    v33 = *(_OWORD *)(v32 + 72);
                    v62 = 0;
                    *(_OWORD *)v61 = v33;
                    if ( (unsigned int)dword_1C0056060 > 5 )
                    {
                      LOBYTE(v15) = TlgKeywordOn(v30, 0x400000000000uLL);
                      if ( (_BYTE)v15 )
                      {
                        HIDWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)v34;
                        LODWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)(v34 + 8);
                        *(&hProvider.LevelPlus1 + 1) = *(_DWORD *)(v34 + 12);
                        hProvider.LevelPlus1 = *(_DWORD *)(v34 + 16);
                        LODWORD(hProvider.KeywordAny) = *(_DWORD *)(v34 + 4);
                        HIDWORD(hProvider.KeywordAny) = *(_DWORD *)(v34 + 20);
                        hProvider.KeywordAll = *(_QWORD *)(v34 + 88);
                        v39 = a1 + 5192;
                        v40 = 16LL;
                        TlgCreateWsz(&pDesc, pszDest);
                        v43 = 4LL;
                        v44 = &hProvider.ProviderMetadataPtr;
                        p_hProvider = (char *)&hProvider.ProviderMetadataPtr + 4;
                        p_ProviderMetadataPtr = &hProvider.LevelPlus1 + 1;
                        v45 = 4LL;
                        v48 = &hProvider;
                        v47 = 4LL;
                        v49 = 4LL;
                        TlgCreateSz(&v50, psz);
                        TlgCreateSz(&v51, v63);
                        TlgCreateSz(&v52, v61);
                        v54 = 4LL;
                        v55 = (char *)&hProvider.KeywordAny + 4;
                        p_KeywordAny = &hProvider.KeywordAny;
                        p_KeywordAll = &hProvider.KeywordAll;
                        v56 = 4LL;
                        v58 = 8LL;
                        LOBYTE(v15) = TlgWrite(
                                        (TraceLoggingHProvider)&hProvider.KeywordAny,
                                        &unk_1C004CFF5,
                                        v35,
                                        v36,
                                        0xEu,
                                        (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
                      }
                    }
                    ++v31;
                  }
                  while ( v31 < v17[4] );
                }
              }
            }
          }
        }
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a2 + 8) );
    }
  }
  return v15;
}
