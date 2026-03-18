/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00B42B0
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z @ 0x1C024B4D8 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C024B69C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C024B9FC (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00C1BC8 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ComputeFileviewCheckSum @ 0x1C00C1D10 (ComputeFileviewCheckSum.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C011332C (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     GetFontIntensityCorrectionTable @ 0x1C0253E64 (GetFontIntensityCorrectionTable.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C0293D68 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
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
  unsigned __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rbp
  unsigned int v20; // ebx
  unsigned int v22; // r13d
  unsigned int v23; // r12d
  unsigned int v24; // eax
  bool v25; // cf
  int v26; // edx
  int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  char *v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v34; // rbx
  unsigned int v35; // eax
  wchar_t *v36; // rax
  __int64 v37; // rbx

  v17 = 8LL * a2;
  v18 = -1;
  v19 = a4;
  v20 = -1;
  *(_QWORD *)this = 0LL;
  if ( v17 <= 0xFFFFFFFF )
    v20 = 8 * a2;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 5) = a13;
  v22 = 0;
  *((_DWORD *)this + 2) = 0;
  v23 = 0;
  if ( v17 > 0xFFFFFFFF || (v24 = v20 + 224, v25 = v20 >= 0xFFFFFF20, v20 = -1, v26 = 1, v25) )
    v26 = 0;
  else
    v20 = v24;
  if ( a3 && v26 )
  {
    v23 = v20;
    v27 = -1;
    v28 = v20 + ((2 * a4 + 3) & 0xFFFFFFFC);
    v26 = 0;
    if ( v28 >= v20 )
      v27 = v20 + ((2 * a4 + 3) & 0xFFFFFFFC);
    v20 = v27;
    LOBYTE(v26) = v28 >= v23;
  }
  v29 = v20;
  if ( (_DWORD)Size )
  {
    if ( !v26 )
      return this;
    v35 = v20 + Size;
    v26 = 0;
    v22 = v20;
    if ( v20 + (unsigned int)Size >= v20 )
      v18 = v20 + Size;
    v20 = v18;
    LOBYTE(v26) = v35 >= v29;
  }
  if ( v26 )
  {
    v30 = (char *)PALLOCMEM2(v20, 1717989447LL, 1);
    *(_QWORD *)this = v30;
    if ( v30 )
    {
      PushThreadGuardedObject(v30 + 176, v30, CleanUpPFF);
      **(_QWORD **)this = v20;
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
        *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this + v23;
        memmove(*(void **)(*(_QWORD *)this + 24LL), a3, 2 * v19);
        if ( a9 == (HDEV)gppdevTrueType )
        {
          v36 = wcsstr(*(const wchar_t **)(*(_QWORD *)this + 24LL), L"YUGOTH");
          if ( v36 )
            *(_QWORD *)(*(_QWORD *)this + 208LL) = GetFontIntensityCorrectionTable(v36);
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)this + 48LL) = Size;
      if ( (_DWORD)Size )
      {
        *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v22;
        memmove(*(void **)(*(_QWORD *)this + 40LL), Src, (unsigned int)Size);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
      }
      if ( gbNetworkFontsLoaded && gbAttemptedEnableEUDC && gbFntCacheClosed )
        v31 = a12;
      else
        v31 = a12 | 0x200;
      *(_QWORD *)(*(_QWORD *)this + 152LL) = a15;
      *(_DWORD *)(*(_QWORD *)this + 144LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 52LL) = v31;
      *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 160LL) = 0LL;
      v32 = *(_QWORD *)this;
      if ( (a13 & 0x1C) != 0 )
      {
        *(_DWORD *)(v32 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
        PFFOBJ::bAddPvtData(this, a13);
      }
      else if ( (a13 & 0x20) != 0 )
      {
        *(_DWORD *)(v32 + 56) = 0;
        *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
      }
      else
      {
        *(_DWORD *)(v32 + 56) = 1;
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
          v34 = *(_QWORD *)this;
          *(_DWORD *)(v34 + 136) += ComputeFileviewCheckSumInFontDriverAddressSpace(a15, a5);
          if ( (a13 & 0x10) == 0 )
            PutFNTCacheCheckSum(*(_DWORD *)a14, *(_DWORD *)(*(_QWORD *)this + 136LL));
        }
        if ( *(_DWORD *)(*(_QWORD *)this + 48LL) )
        {
          v37 = *(_QWORD *)this;
          *(_DWORD *)(v37 + 136) += ComputeFileviewCheckSum(Src, (unsigned int)Size);
        }
      }
    }
  }
  return this;
}
