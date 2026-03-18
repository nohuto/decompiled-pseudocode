/*
 * XREFs of ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C0249B10
 * Callers:
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0031E20 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 * Callees:
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00296A8 (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C002998C (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C0029AA0 (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C002C4C0 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C002C614 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C005B780 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C0114238 (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C0297AE0 (-bLoadDeviceFontTable@PFFMEMOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 */

_BOOL8 __fastcall DEVICE_PFTOBJ::bLoadFonts(DEVICE_PFTOBJ *this, struct PDEVOBJ *a2)
{
  BOOL v5; // r15d
  HDEV v6; // rdi
  struct DHPDEV__ *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  struct PFF **v11; // rcx
  struct PFF *v12; // rax
  size_t v13; // [rsp+30h] [rbp-39h]
  __int64 v14; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v15[3]; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+E0h] [rbp+77h] BYREF
  struct PFF **v17; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( ScrutinizeFontLoad(3LL, 0LL) < 0 )
    return 1LL;
  v16 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v5 = DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v17) != 0LL;
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  if ( !v5 )
  {
    v6 = *(HDEV *)a2;
    v16 = 0LL;
    v7 = (struct DHPDEV__ *)*((_QWORD *)v6 + 227);
    v8 = PDEVOBJ::cFonts(a2);
    LODWORD(v13) = 0;
    PFFMEMOBJ::PFFMEMOBJ(
      (PFFMEMOBJ *)v15,
      v8,
      0LL,
      0,
      0,
      0LL,
      v13,
      0LL,
      v6,
      v7,
      *(struct PFT **)this,
      0,
      0,
      (struct _FNTCHECKSUM *)&v16,
      0LL,
      0LL);
    v9 = v15[0];
    if ( v15[0] && (unsigned int)PFFMEMOBJ::bLoadDeviceFontTable((PFFMEMOBJ *)v15, a2) )
    {
      v14 = ghsemPublicPFT;
      GreAcquireSemaphore(ghsemPublicPFT);
      if ( !DEVICE_PFTOBJ::pPFFGet(this, *(_QWORD *)a2, &v17) )
      {
        if ( (unsigned int)PFFOBJ::bAddHash((PFFOBJ *)v15, 0) )
        {
          v10 = *(_QWORD *)this;
          if ( (*(_DWORD *)(v9 + 52) & 0x200) == 0 )
            ++*(_DWORD *)(v10 + 32);
          ++*(_DWORD *)(v10 + 28);
          v11 = v17;
          if ( *v17 )
            *((_QWORD *)*v17 + 2) = v9;
          v12 = *v11;
          *(_QWORD *)(v9 + 16) = 0LL;
          *(_QWORD *)(v9 + 8) = v12;
          *v11 = (struct PFF *)v9;
          PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v15);
          v5 = 1;
        }
        else
        {
          PFFOBJ::vRemoveHash((PFFOBJ *)v15);
        }
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v14);
    }
    PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v15);
  }
  return v5;
}
