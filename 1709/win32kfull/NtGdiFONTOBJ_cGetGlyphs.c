/*
 * XREFs of NtGdiFONTOBJ_cGetGlyphs @ 0x1C028F3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000750C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C00B99CC (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C00B9A64 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00BAEDC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C00BB08C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C014320C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C026FCF0 (FONTOBJ_cGetGlyphs.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0270070 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     ?CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z @ 0x1C02700FC (-CacheGlyphPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU2@@Z.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetGlyphs(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, ULONG64 a5)
{
  ULONG v5; // r14d
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v9; // rbx
  struct PFT *v10; // r15
  HGLYPH *v11; // rsi
  ULONG Glyphs; // edi
  __int64 v13; // r9
  struct _GLYPHBITS **v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  struct _GLYPHBITS *v17; // rdx
  struct _GLYPHBITS *v18; // rax
  struct _PATHOBJ *v19; // rax
  PVOID *v20; // rdx
  HGLYPH v22; // [rsp+34h] [rbp-44h] BYREF
  PVOID ppvGlyph[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v24[48]; // [rsp+48h] [rbp-30h] BYREF

  v5 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  ppvGlyph[1] = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v10 = (struct PFT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  if ( !v10 || v5 - 1 > 1 )
  {
    --*((_DWORD *)v9 + 108);
    return 0LL;
  }
  v11 = (HGLYPH *)a4;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      v11 = (HGLYPH *)MmUserProbeAddress;
    v22 = *v11;
    v11 = &v22;
  }
  PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v24, v10);
  UMPDAcquireRFONTSem((struct RFONTOBJ *)v24, v9, 0, 0, 0LL);
  Glyphs = FONTOBJ_cGetGlyphs((FONTOBJ *)v10, v5, 1u, v11, ppvGlyph);
  if ( Glyphs == 1 )
  {
    v14 = (struct _GLYPHBITS **)ppvGlyph[0];
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, (const void **)ppvGlyph, 0x40u, v13) )
    {
      v17 = *v14;
      if ( v5 == 1 )
      {
        if ( v17 )
        {
          v18 = UMPDOBJ::CacheGlyphBits(v9, v17, v15, v16);
          *(_QWORD *)ppvGlyph[0] = v18;
          Glyphs = v18 != 0LL;
        }
      }
      else if ( v17 )
      {
        v19 = UMPDOBJ::CacheGlyphPath(v9, (struct _PATHOBJ *)v17);
        *(_QWORD *)ppvGlyph[0] = v19;
        Glyphs = v19 != 0LL;
      }
    }
    else
    {
      Glyphs = 0;
    }
  }
  UMPDReleaseRFONTSem((struct RFONTOBJ *)v24, v9, 0LL, 0LL, 0LL);
  if ( Glyphs )
  {
    v20 = (PVOID *)a5;
    if ( a5 >= MmUserProbeAddress )
      v20 = (PVOID *)MmUserProbeAddress;
    *v20 = ppvGlyph[0];
  }
  RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v24);
  if ( v9 )
    --*((_DWORD *)v9 + 108);
  return Glyphs;
}
