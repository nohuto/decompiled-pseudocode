/*
 * XREFs of GreEnumFonts @ 0x1C002C080
 * Callers:
 *     NtGdiEnumFonts @ 0x1C002BF00 (NtGdiEnumFonts.c)
 * Callees:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C002CE40 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003177C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0031818 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0031E20 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C005B780 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02968FC (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 */

_BOOL8 __fastcall GreEnumFonts(
        HDC a1,
        unsigned int a2,
        __int16 a3,
        const unsigned __int16 *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  void *v7; // rsi
  BOOL v8; // ebx
  int v12; // edx
  int v13; // ecx
  struct PFF *v14; // rax
  unsigned int v15; // edx
  bool v16; // al
  struct _FONTHASH **v18; // [rsp+68h] [rbp-31h] BYREF
  struct _FONTHASH **v19; // [rsp+70h] [rbp-29h] BYREF
  __int64 v20; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v21[2]; // [rsp+80h] [rbp-19h] BYREF
  struct PFF *v22; // [rsp+90h] [rbp-9h] BYREF
  _DWORD v23[10]; // [rsp+A0h] [rbp+7h] BYREF

  v7 = a7;
  v8 = 0;
  if ( !a7 )
    *a6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v21, a1);
  if ( v21[0] )
  {
    a7 = *(_DWORD **)(v21[0] + 48LL);
    if ( (a7[8] & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&a7);
    v20 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v23[9] = a5;
    v23[3] = 0;
    v12 = a7[539];
    v23[6] = v12 == 0;
    v23[5] = v12 == 4;
    if ( (*(_DWORD *)(*(_QWORD *)(v21[0] + 80LL) + 104LL) & 1) != 0 || (v13 = a7[8], v23[0] = 0, (v13 & 1) == 0) )
      v23[0] = 1;
    v23[1] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a7);
    v23[2] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a7);
    v23[7] = a3 & 0x200;
    v18 = (struct _FONTHASH **)gpPFTDevice;
    v23[4] = gulFontInformation & 1;
    v14 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v18, *(HDEV *)(v21[0] + 48LL), 0LL);
    if ( !v14
      || (v22 = v14,
          v19 = gpPFTPublic,
          v18 = gpPFTPrivate,
          !(v16 = EnumDeviceAndEngine(
                    a4,
                    v15,
                    a2,
                    (struct _EFFILTER_INFO *)v23,
                    (struct PUBLIC_PFTOBJ *)&v19,
                    (struct PUBLIC_PFTOBJ *)&v18,
                    (struct PFFOBJ *)&v22,
                    (struct PDEVOBJ *)&a7,
                    (struct DCOBJ *)v21,
                    a6,
                    v7))) )
    {
      v18 = gpPFTPublic;
      v19 = gpPFTPrivate;
      v16 = EnumEngineOnly(
              a4,
              v15,
              a2,
              (struct _EFFILTER_INFO *)v23,
              (struct PUBLIC_PFTOBJ *)&v18,
              (struct PUBLIC_PFTOBJ *)&v19,
              (struct DCOBJ *)v21,
              a6,
              v7);
    }
    v8 = v16;
    SEMOBJ::vUnlock((SEMOBJ *)&v20);
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v21);
  return v8;
}
