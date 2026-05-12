/*
 * XREFs of StorpLogPhysicalTopologyInfo @ 0x1C001E380
 * Callers:
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C000C8A0 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0003A20 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x1C0003A5C (_TlgCreateSz.c)
 *     RtlStringCchPrintfW @ 0x1C0013308 (RtlStringCchPrintfW.c)
 *     RaidDriverGetName @ 0x1C0018680 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memset @ 0x1C001F680 (memset.c)
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
  unsigned int v20; // edi
  char *v21; // rcx
  __int128 v22; // xmm1
  _DWORD *v23; // rcx
  const GUID *v24; // r8
  const GUID *v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  const struct _TlgProvider_t *v31; // rcx
  unsigned int v32; // edi
  __int64 v33; // r9
  __int128 v34; // xmm1
  __int64 v35; // r9
  LPCGUID v36; // r8
  LPCGUID v37; // r9
  struct _TlgProvider_t hProvider; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  char *p_hProvider; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  const unsigned __int16 **v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  unsigned int *p_ProviderMetadataPtr; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  struct _TlgProvider_t *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 *p_KeywordAny; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  char *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  unsigned __int64 *p_KeywordAll; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  CHAR psz[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v61; // [rsp+138h] [rbp+38h]
  __int128 v62; // [rsp+140h] [rbp+40h] BYREF
  char v63; // [rsp+150h] [rbp+50h]
  _OWORD v64[3]; // [rsp+158h] [rbp+58h] BYREF
  wchar_t pszDest[32]; // [rsp+190h] [rbp+90h] BYREF

  v3 = a3;
  *(_QWORD *)psz = 0LL;
  v61 = 0LL;
  memset(pszDest, 0, sizeof(pszDest));
  v6 = 0;
  v7 = 0;
  RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)psz);
  RtlStringCchPrintfW(pszDest, 0x20uLL, L"%s", v61);
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
    v40 = a1 + 5192;
    *(&hProvider.LevelPlus1 + 1) = v6;
    LODWORD(hProvider.ProviderMetadataPtr) = v7;
    v41 = 16LL;
    TlgCreateWsz(&pDesc, pszDest);
    v44 = 4LL;
    v45 = (const unsigned __int16 **)(&hProvider.LevelPlus1 + 1);
    p_hProvider = (char *)&hProvider;
    p_ProviderMetadataPtr = (unsigned int *)&hProvider.ProviderMetadataPtr;
    v46 = 4LL;
    v48 = 4LL;
    TlgWrite(&hProvider, &unk_1C004C9AC, v12, v13, 7u, (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
  }
  v14 = *(unsigned int *)(a2 + 8);
  v15 = 40 * v14 + 16;
  if ( v3 >= v15 )
  {
    *(_QWORD *)psz = 0LL;
    LOBYTE(v61) = 0;
    memset(v64, 0, 0x29uLL);
    LOBYTE(v15) = 0;
    v16 = 0;
    v62 = 0uLL;
    v63 = 0;
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
                  LOBYTE(v61) = 0;
                  v64[0] = *(_OWORD *)(v21 + 24);
                  v64[1] = *(_OWORD *)(v21 + 40);
                  *(_QWORD *)&v64[2] = *((_QWORD *)v21 + 7);
                  BYTE8(v64[2]) = 0;
                  v22 = *((_OWORD *)v21 + 4);
                  v63 = 0;
                  v62 = v22;
                  if ( (unsigned int)dword_1C0056060 > 5 )
                  {
                    LOBYTE(v15) = TlgKeywordOn((TraceLoggingHProvider)v21, 0x400000000000uLL);
                    if ( (_BYTE)v15 )
                    {
                      LODWORD(hProvider.ProviderMetadataPtr) = *v23;
                      *(&hProvider.LevelPlus1 + 1) = v23[1];
                      hProvider.LevelPlus1 = v23[2];
                      HIDWORD(hProvider.ProviderMetadataPtr) = v23[3];
                      v40 = a1 + 5192;
                      v41 = 16LL;
                      TlgCreateWsz(&pDesc, pszDest);
                      v44 = 4LL;
                      v45 = (const unsigned __int16 **)(&hProvider.LevelPlus1 + 1);
                      p_hProvider = (char *)&hProvider.ProviderMetadataPtr;
                      p_ProviderMetadataPtr = (unsigned int *)&hProvider;
                      v46 = 4LL;
                      v49 = (struct _TlgProvider_t *)((char *)&hProvider.ProviderMetadataPtr + 4);
                      v26 = -1LL;
                      v48 = 4LL;
                      v50 = 4LL;
                      do
                        ++v26;
                      while ( psz[v26] );
                      v51.Reserved = 0;
                      v51.Ptr = (unsigned __int64)psz;
                      v51.Size = v26 + 1;
                      v27 = -1LL;
                      do
                        ++v27;
                      while ( *((_BYTE *)v64 + v27) );
                      v52.Reserved = 0;
                      v52.Ptr = (unsigned __int64)v64;
                      v52.Size = v27 + 1;
                      v28 = -1LL;
                      do
                        ++v28;
                      while ( *((_BYTE *)&v62 + v28) );
                      v53.Reserved = 0;
                      v53.Ptr = (unsigned __int64)&v62;
                      v53.Size = v28 + 1;
                      LOBYTE(v15) = TlgWrite(
                                      (TraceLoggingHProvider)&v62,
                                      &unk_1C004DA4B,
                                      v24,
                                      v25,
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
        v29 = (unsigned int)v17[4];
        if ( (_DWORD)v29 )
        {
          v30 = (unsigned int)v17[6];
          if ( (unsigned int)v30 >= 0x28 )
          {
            v15 = (unsigned int)v17[3];
            if ( v30 >= v15 + ((unsigned __int64)(unsigned int)v17[1] << 7) )
            {
              v15 = (unsigned int)v17[5];
              v31 = (const struct _TlgProvider_t *)(136 * v29);
              if ( v15 >= 136 * v29 )
              {
                LODWORD(v15) = v30 + 8 * (v16 + 4 * v16 + 2) + 136 * v29;
                if ( (unsigned int)v15 <= (unsigned int)v3 )
                {
                  v32 = 0;
                  do
                  {
                    v33 = (__int64)&v17[34 * v32] + (unsigned int)v17[6];
                    v15 = *(_QWORD *)(v33 + 24);
                    *(_QWORD *)psz = v15;
                    LOBYTE(v61) = 0;
                    v64[0] = *(_OWORD *)(v33 + 32);
                    v64[1] = *(_OWORD *)(v33 + 48);
                    *(_QWORD *)&v64[2] = *(_QWORD *)(v33 + 64);
                    BYTE8(v64[2]) = 0;
                    v34 = *(_OWORD *)(v33 + 72);
                    v63 = 0;
                    v62 = v34;
                    if ( (unsigned int)dword_1C0056060 > 5 )
                    {
                      LOBYTE(v15) = TlgKeywordOn(v31, 0x400000000000uLL);
                      if ( (_BYTE)v15 )
                      {
                        HIDWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)v35;
                        LODWORD(hProvider.ProviderMetadataPtr) = *(_DWORD *)(v35 + 8);
                        *(&hProvider.LevelPlus1 + 1) = *(_DWORD *)(v35 + 12);
                        hProvider.LevelPlus1 = *(_DWORD *)(v35 + 16);
                        LODWORD(hProvider.KeywordAny) = *(_DWORD *)(v35 + 4);
                        HIDWORD(hProvider.KeywordAny) = *(_DWORD *)(v35 + 20);
                        hProvider.KeywordAll = *(_QWORD *)(v35 + 88);
                        v40 = a1 + 5192;
                        v41 = 16LL;
                        TlgCreateWsz(&pDesc, pszDest);
                        v44 = 4LL;
                        v45 = &hProvider.ProviderMetadataPtr;
                        p_hProvider = (char *)&hProvider.ProviderMetadataPtr + 4;
                        p_ProviderMetadataPtr = &hProvider.LevelPlus1 + 1;
                        v46 = 4LL;
                        v49 = &hProvider;
                        v48 = 4LL;
                        v50 = 4LL;
                        TlgCreateSz(&v51, psz);
                        TlgCreateSz(&v52, (LPCSTR)v64);
                        TlgCreateSz(&v53, (LPCSTR)&v62);
                        v55 = 4LL;
                        v56 = (char *)&hProvider.KeywordAny + 4;
                        p_KeywordAny = &hProvider.KeywordAny;
                        p_KeywordAll = &hProvider.KeywordAll;
                        v57 = 4LL;
                        v59 = 8LL;
                        LOBYTE(v15) = TlgWrite(
                                        (TraceLoggingHProvider)&hProvider.KeywordAny,
                                        &unk_1C004C734,
                                        v36,
                                        v37,
                                        0xEu,
                                        (EVENT_DATA_DESCRIPTOR *)&hProvider.RegHandle);
                      }
                    }
                    ++v32;
                  }
                  while ( v32 < v17[4] );
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
