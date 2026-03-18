/*
 * XREFs of FinishStockFontInit @ 0x1C000A820
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0009CFC (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     FinishStockFontReinit @ 0x1C000B490 (FinishStockFontReinit.c)
 * Callees:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C000B910 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     GreSetLFONTOwner @ 0x1C000C7F0 (GreSetLFONTOwner.c)
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0022778 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreCreateFontIndirectW @ 0x1C002B45C (GreCreateFontIndirectW.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C005C0F4 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 */

void __fastcall FinishStockFontInit(unsigned int c)
{
  __int64 v2; // rbx
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __m128i v5; // xmm2
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  void *v8; // rcx
  int v9; // edx
  void **v10; // rax
  struct PFF *v11; // r15
  __int64 i; // rsi
  __int64 v13; // rdi
  struct PFF *v14; // [rsp+30h] [rbp-39h] BYREF
  INT a[4]; // [rsp+40h] [rbp-29h] BYREF
  __int128 v16; // [rsp+50h] [rbp-19h]
  __int128 v17; // [rsp+60h] [rbp-9h]
  __int128 v18; // [rsp+70h] [rbp+7h]
  __int128 v19; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  unsigned int v22; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+E0h] [rbp+77h] BYREF
  struct _FONTHASH **v24; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( UmfdHostLifeTimeManager::s_SessionRasterizerInitialized
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
    || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread() )
  {
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v23, (struct HLFONT__ *)gahStockObjects[17], 0LL);
    v2 = v23;
    if ( v23 )
    {
      *(_DWORD *)(v23 + 276) = -((*(_DWORD *)(v23 + 276) * c + 36) / 0x48);
      v3 = *(_OWORD *)(v2 + 292);
      v4 = *(_OWORD *)(v2 + 308);
      v21 = *(_DWORD *)(v2 + 364);
      v5 = *(__m128i *)(v2 + 276);
      v16 = v3;
      v6 = *(_OWORD *)(v2 + 324);
      v17 = v4;
      v7 = *(_OWORD *)(v2 + 340);
      v18 = v6;
      v20 = *(_QWORD *)(v2 + 356);
      *(_QWORD *)&a[2] = v5.m128i_i64[1];
      v19 = v7;
      a[0] = EngMulDiv(_mm_cvtsi128_si32(v5), 96, c);
      a[1] = EngMulDiv(v5.m128i_i32[1], 96, c);
      gahStockObjects96[17] = (void *)GreCreateFontIndirectW(a);
      v8 = gahStockObjects96[17];
      if ( v8 )
        GreSetLFONTOwner(v8, 0LL);
    }
    v9 = 0;
    if ( c > 0x6C )
    {
      FinishStockFontInitInternal(
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\LargeFont",
        0);
      v9 = 1;
    }
    FinishStockFontInitInternal(
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize\\SmallFont",
      v9);
    v24 = gpPFTPublic;
    if ( !gppfeMapperDefault )
    {
      if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                           (PUBLIC_PFTOBJ *)&v24,
                           L"\\SystemRoot\\System32\\winsrv.dll",
                           &v22,
                           2u,
                           &v14,
                           0LL) )
      {
        if ( v22 )
        {
          v11 = v14;
          if ( v14 )
          {
            for ( i = 0LL; (unsigned int)i < v22; i = (unsigned int)(i + 1) )
            {
              if ( gppfeMapperDefault )
                break;
              v13 = *((_QWORD *)v11 + i + 28);
              if ( v13
                && !_wcsicmp(
                      (const wchar_t *)(*(_QWORD *)(v13 + 32) + *(int *)(*(_QWORD *)(v13 + 32) + 16LL)),
                      L"SYSTEM") )
              {
                gppfeMapperDefault = (struct PFE *)v13;
              }
            }
          }
        }
      }
    }
    v10 = gahStockObjects;
    if ( !gahStockObjects[16] )
    {
      bSetStockObject(gahStockObjects[13], 16, 0);
      v10 = gahStockObjects;
    }
    DcAttrDefault[22] = *((_QWORD *)*v10 + 13);
    if ( v2 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v2);
  }
}
