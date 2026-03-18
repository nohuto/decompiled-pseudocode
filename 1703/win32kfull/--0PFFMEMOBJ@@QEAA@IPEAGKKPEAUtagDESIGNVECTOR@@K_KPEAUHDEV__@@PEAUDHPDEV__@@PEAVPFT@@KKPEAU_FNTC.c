/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00296A8
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C005B974 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C0249B10 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0249CE0 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C024A094 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00082B0 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ComputeFileviewCheckSum @ 0x1C0008400 (ComputeFileviewCheckSum.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C0106A54 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     GetFontIntensityCorrectionTable @ 0x1C0252374 (GetFontIntensityCorrectionTable.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C029769C (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 */

PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(
        PFFMEMOBJ *this,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *Src,
        size_t Size,
        unsigned __int64 a8,
        HDEV a9,
        struct DHPDEV__ *a10,
        struct PFT *a11,
        unsigned int a12,
        unsigned int a13,
        struct _FNTCHECKSUM *a14,
        struct _FONTFILEVIEW **a15,
        struct _UNIVERSAL_FONT_ID *a16)
{
  int v17; // r8d
  unsigned __int64 v18; // rax
  __int64 v19; // rbp
  unsigned int v21; // r13d
  unsigned int v22; // r12d
  unsigned int v23; // ebx
  unsigned int v24; // eax
  int v25; // edx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rbx
  unsigned int v34; // eax
  wchar_t *v35; // rax
  __int64 v36; // rbx

  v17 = -1;
  v18 = 8LL * a2;
  v19 = a4;
  *(_QWORD *)this = 0LL;
  *((_WORD *)this + 8) = 0;
  v21 = 0;
  *((_DWORD *)this + 5) = a13;
  v22 = 0;
  *((_DWORD *)this + 2) = 0;
  v23 = -1;
  if ( v18 > 0xFFFFFFFF || (v24 = v18 + 224, v25 = 1, v24 < 0xE0) )
    v25 = 0;
  else
    v23 = v24;
  if ( a3 && v25 )
  {
    v22 = v23;
    v26 = -1;
    v27 = v23 + ((2 * a4 + 3) & 0xFFFFFFFC);
    v25 = 0;
    if ( v27 >= v23 )
      v26 = v23 + ((2 * a4 + 3) & 0xFFFFFFFC);
    v23 = v26;
    LOBYTE(v25) = v27 >= v22;
  }
  v28 = v23;
  if ( (_DWORD)Size )
  {
    if ( !v25 )
      return this;
    v34 = v23 + Size;
    v25 = 0;
    v21 = v23;
    if ( v23 + (unsigned int)Size >= v23 )
      v17 = v23 + Size;
    v23 = v17;
    LOBYTE(v25) = v34 >= v28;
  }
  if ( v25 )
  {
    v29 = PALLOCMEM2(v23);
    *(_QWORD *)this = v29;
    if ( v29 )
    {
      PushThreadGuardedObject(v29 + 176, v29, CleanUpPFF);
      **(_QWORD **)this = v23;
      *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 8LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 80LL) = a8;
      *(_QWORD *)(*(_QWORD *)this + 88LL) = a9;
      *(_QWORD *)(*(_QWORD *)this + 96LL) = a10;
      *(_QWORD *)(*(_QWORD *)this + 128LL) = a11;
      *(_DWORD *)(*(_QWORD *)this + 36LL) = a5;
      *(_DWORD *)(*(_QWORD *)this + 32LL) = v19;
      if ( (_DWORD)v19 )
      {
        *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this + v22;
        memmove(*(void **)(*(_QWORD *)this + 24LL), a3, 2 * v19);
        if ( a9 == (HDEV)gppdevTrueType )
        {
          v35 = wcsstr(*(const wchar_t **)(*(_QWORD *)this + 24LL), L"YUGOTH");
          if ( v35 )
            *(_QWORD *)(*(_QWORD *)this + 208LL) = GetFontIntensityCorrectionTable(v35);
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)this + 48LL) = Size;
      if ( (_DWORD)Size )
      {
        *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v21;
        memmove(*(void **)(*(_QWORD *)this + 40LL), Src, (unsigned int)Size);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
      }
      if ( gbNetworkFontsLoaded && gbAttemptedEnableEUDC && gbFntCacheClosed )
        v30 = a12;
      else
        v30 = a12 | 0x200;
      *(_QWORD *)(*(_QWORD *)this + 152LL) = a15;
      *(_DWORD *)(*(_QWORD *)this + 144LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 52LL) = v30;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
      v31 = *(_QWORD *)this;
      if ( (a13 & 0x1C) != 0 )
      {
        *(_DWORD *)(v31 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
        PFFOBJ::bAddPvtData(this, a13);
      }
      else if ( (a13 & 0x20) != 0 )
      {
        *(_DWORD *)(v31 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
      }
      else
      {
        *(_DWORD *)(v31 + 56) = 1;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      }
      *(_QWORD *)(*(_QWORD *)this + 168LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 136LL) = 0;
      if ( a16 )
      {
        *(_DWORD *)(*(_QWORD *)this + 136LL) = *(_DWORD *)a16;
      }
      else if ( a15 )
      {
        *(_DWORD *)(*(_QWORD *)this + 136LL) = *((_DWORD *)a14 + 1);
        if ( !*(_DWORD *)(*(_QWORD *)this + 136LL) )
        {
          v32 = *(_QWORD *)this;
          *(_DWORD *)(v32 + 136) += ComputeFileviewCheckSumInFontDriverAddressSpace(a15, a5);
          if ( (a13 & 0x10) == 0 )
            PutFNTCacheCheckSum(*(_DWORD *)a14, *(_DWORD *)(*(_QWORD *)this + 136LL));
        }
        if ( *(_DWORD *)(*(_QWORD *)this + 48LL) )
        {
          v36 = *(_QWORD *)this;
          *(_DWORD *)(v36 + 136) += ComputeFileviewCheckSum(Src, Size);
        }
      }
    }
  }
  return this;
}
