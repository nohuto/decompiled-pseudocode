/*
 * XREFs of StorpLogPhysicalTopologyInfo @ 0x1C001D574
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C000D38C (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C0002B58 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0002B94 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0002BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0002C68 (_TlgKeywordOn.c)
 *     RtlStringCchPrintfW @ 0x1C001828C (RtlStringCchPrintfW.c)
 *     RaidDriverGetName @ 0x1C0018C0C (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 */

char __fastcall StorpLogPhysicalTopologyInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r15
  unsigned int v6; // ebx
  int v7; // esi
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
  unsigned int v20; // esi
  char *v21; // rcx
  __int128 v22; // xmm1
  _DWORD *v23; // rcx
  TraceLoggingHProvider v24; // rcx
  LPCGUID v25; // r8
  LPCGUID v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  const struct _TlgProvider_t *v29; // rcx
  unsigned int v30; // esi
  __int64 v31; // r9
  __int128 v32; // xmm1
  __int64 v33; // r9
  LPCGUID v34; // r8
  LPCGUID v35; // r9
  struct _TlgProvider_t hProvider; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  void *p_hProvider; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  unsigned int *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  void *p_ProviderMetadataPtr; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  char *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  __int64 v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+130h] [rbp+30h] BYREF
  char *v56; // [rsp+140h] [rbp+40h]
  __int64 v57; // [rsp+148h] [rbp+48h]
  const unsigned __int16 **v58; // [rsp+150h] [rbp+50h]
  __int64 v59; // [rsp+158h] [rbp+58h]
  unsigned int *v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  struct _TlgProvider_t *v62; // [rsp+170h] [rbp+70h]
  __int64 v63; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int64 *p_KeywordAny; // [rsp+1B0h] [rbp+B0h]
  __int64 v68; // [rsp+1B8h] [rbp+B8h]
  char *v69; // [rsp+1C0h] [rbp+C0h]
  __int64 v70; // [rsp+1C8h] [rbp+C8h]
  unsigned __int64 *p_KeywordAll; // [rsp+1D0h] [rbp+D0h]
  __int64 v72; // [rsp+1D8h] [rbp+D8h]
  CHAR psz[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v74; // [rsp+1F8h] [rbp+F8h]
  CHAR v75[16]; // [rsp+200h] [rbp+100h] BYREF
  char v76; // [rsp+210h] [rbp+110h]
  CHAR v77[56]; // [rsp+218h] [rbp+118h] BYREF
  wchar_t pszDest[32]; // [rsp+250h] [rbp+150h] BYREF

  v3 = a3;
  *(_QWORD *)psz = 0LL;
  v74 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  v6 = 0;
  v7 = 0;
  RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)psz);
  RtlStringCchPrintfW(pszDest, 0x20uLL, L"%s", v74);
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
  if ( (unsigned int)dword_1C0055010 > 5 && TlgKeywordOn(v8, 0x400000000000uLL) )
  {
    hProvider.LevelPlus1 = v11;
    v38 = a1 + 5192;
    *(&hProvider.LevelPlus1 + 1) = v6;
    LODWORD(hProvider.ProviderMetadataPtr) = v7;
    v39 = 16LL;
    TlgCreateWsz(&pDesc, pszDest);
    v42 = 4LL;
    v43 = &hProvider.LevelPlus1 + 1;
    p_hProvider = &hProvider;
    p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
    v44 = 4LL;
    v46 = 4LL;
    TlgWrite(&hProvider, &unk_1C004C72C, v12, v13, 7u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
  }
  v14 = *(unsigned int *)(a2 + 8);
  v15 = 40 * v14 + 16;
  if ( v3 >= v15 )
  {
    *(_QWORD *)psz = 0LL;
    LOBYTE(v74) = 0;
    memset(v77, 0, 0x29uLL);
    LOBYTE(v15) = 0;
    v16 = 0;
    memset(v75, 0, sizeof(v75));
    v76 = 0;
    if ( (_DWORD)v14 )
    {
      do
      {
        LOBYTE(v15) = v16;
        v17 = (_DWORD *)(a2 + 8 * (v16 + 4LL * v16 + 2));
        v18 = v17[1];
        if ( v18 )
        {
          v19 = v17[3];
          if ( v19 >= 0x28 )
          {
            v15 = (unsigned int)v17[2];
            if ( v15 >= (unsigned __int64)v18 << 7 )
            {
              LODWORD(v15) = v19 + 8 * (v16 + 4 * v16 + 2) + (v18 << 7);
              if ( (unsigned int)v15 <= (unsigned int)v3 )
              {
                v20 = 0;
                do
                {
                  v21 = (char *)v17 + (unsigned int)v17[3];
                  v15 = *((_QWORD *)v21 + 2);
                  *(_QWORD *)psz = v15;
                  LOBYTE(v74) = 0;
                  *(_OWORD *)v77 = *(_OWORD *)(v21 + 24);
                  *(_OWORD *)&v77[16] = *(_OWORD *)(v21 + 40);
                  *(_QWORD *)&v77[32] = *((_QWORD *)v21 + 7);
                  v77[40] = 0;
                  v22 = *((_OWORD *)v21 + 4);
                  v76 = 0;
                  *(_OWORD *)v75 = v22;
                  if ( (unsigned int)dword_1C0055010 > 5 )
                  {
                    LOBYTE(v15) = TlgKeywordOn((TraceLoggingHProvider)v21, 0x400000000000uLL);
                    if ( (_BYTE)v15 )
                    {
                      LODWORD(hProvider.ProviderMetadataPtr) = *v23;
                      *(&hProvider.LevelPlus1 + 1) = v23[1];
                      hProvider.LevelPlus1 = v23[2];
                      HIDWORD(hProvider.ProviderMetadataPtr) = v23[3];
                      v38 = a1 + 5192;
                      v39 = 16LL;
                      TlgCreateWsz(&pDesc, pszDest);
                      v42 = 4LL;
                      v43 = &hProvider.LevelPlus1 + 1;
                      p_hProvider = &hProvider.ProviderMetadataPtr;
                      p_ProviderMetadataPtr = &hProvider;
                      v44 = 4LL;
                      v47 = (char *)&hProvider.ProviderMetadataPtr + 4;
                      v46 = 4LL;
                      v48 = 4LL;
                      TlgCreateSz(&v49, psz);
                      TlgCreateSz(&v50, v77);
                      TlgCreateSz(&v51, v75);
                      LOBYTE(v15) = TlgWrite(
                                      v24,
                                      &unk_1C004D637,
                                      v25,
                                      v26,
                                      0xBu,
                                      (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
                    }
                  }
                  ++v20;
                }
                while ( v20 < v17[1] );
              }
            }
          }
        }
        v27 = (unsigned int)v17[4];
        if ( (_DWORD)v27 )
        {
          v28 = (unsigned int)v17[6];
          if ( (unsigned int)v28 >= 0x28 )
          {
            v15 = (unsigned int)v17[3];
            if ( v28 >= v15 + ((unsigned __int64)(unsigned int)v17[1] << 7) )
            {
              v15 = (unsigned int)v17[5];
              v29 = (const struct _TlgProvider_t *)(136 * v27);
              if ( v15 >= 136 * v27 )
              {
                LODWORD(v15) = v28 + 8 * (v16 + 4 * v16 + 2) + 136 * v27;
                if ( (unsigned int)v15 <= (unsigned int)v3 )
                {
                  v30 = 0;
                  do
                  {
                    v31 = (__int64)&v17[34 * v30] + (unsigned int)v17[6];
                    v15 = *(_QWORD *)(v31 + 24);
                    *(_QWORD *)psz = v15;
                    LOBYTE(v74) = 0;
                    *(_OWORD *)v77 = *(_OWORD *)(v31 + 32);
                    *(_OWORD *)&v77[16] = *(_OWORD *)(v31 + 48);
                    *(_QWORD *)&v77[32] = *(_QWORD *)(v31 + 64);
                    v77[40] = 0;
                    v32 = *(_OWORD *)(v31 + 72);
                    v76 = 0;
                    *(_OWORD *)v75 = v32;
                    if ( (unsigned int)dword_1C0055010 > 5 )
                    {
                      LOBYTE(v15) = TlgKeywordOn(v29, 0x400000000000uLL);
                      if ( (_BYTE)v15 )
                      {
                        HIDWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)v33;
                        LODWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)(v33 + 8);
                        *(&hProvider.LevelPlus1 + 1) = *(_DWORD *)(v33 + 12);
                        hProvider.LevelPlus1 = *(_DWORD *)(v33 + 16);
                        LODWORD(hProvider.KeywordAny) = *(_DWORD *)(v33 + 4);
                        HIDWORD(hProvider.KeywordAny) = *(_DWORD *)(v33 + 20);
                        hProvider.KeywordAll = *(_QWORD *)(v33 + 88);
                        v53 = a1 + 5192;
                        v54 = 16LL;
                        TlgCreateWsz(&v55, pszDest);
                        v57 = 4LL;
                        v58 = &hProvider.ProviderMetadataPtr;
                        v56 = (char *)&hProvider.ProviderMetadataPtr + 4;
                        v60 = &hProvider.LevelPlus1 + 1;
                        v59 = 4LL;
                        v62 = &hProvider;
                        v61 = 4LL;
                        v63 = 4LL;
                        TlgCreateSz(&v64, psz);
                        TlgCreateSz(&v65, v77);
                        TlgCreateSz(&v66, v75);
                        v68 = 4LL;
                        v69 = (char *)&hProvider.KeywordAny + 4;
                        p_KeywordAny = &hProvider.KeywordAny;
                        p_KeywordAll = &hProvider.KeywordAll;
                        v70 = 4LL;
                        v72 = 8LL;
                        LOBYTE(v15) = TlgWrite(
                                        (TraceLoggingHProvider)&hProvider.KeywordAny,
                                        &unk_1C004C4B4,
                                        v34,
                                        v35,
                                        0xEu,
                                        &pData);
                      }
                    }
                    ++v30;
                  }
                  while ( v30 < v17[4] );
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
