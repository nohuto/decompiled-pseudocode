/*
 * XREFs of GreEnumFonts @ 0x1C00B17BC
 * Callers:
 *     NtGdiEnumFonts @ 0x1C01021A0 (NtGdiEnumFonts.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003E0AC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C003E0E8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C003E690 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C00AF92C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00F7C3C (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C0292FBC (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
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
  void *v7; // rdi
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rdx
  struct PFF *v14; // rax
  unsigned int v15; // edx
  bool v16; // al
  BOOL v17; // ebx
  struct _FONTHASH **v19; // [rsp+68h] [rbp-31h] BYREF
  struct _FONTHASH **v20; // [rsp+70h] [rbp-29h] BYREF
  __int64 v21; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v22[2]; // [rsp+80h] [rbp-19h] BYREF
  struct PFF *v23; // [rsp+90h] [rbp-9h] BYREF
  _DWORD v24[10]; // [rsp+A0h] [rbp+7h] BYREF

  v7 = a7;
  if ( !a7 )
    *a6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  if ( v22[0] )
  {
    a7 = *(_DWORD **)(v22[0] + 48LL);
    if ( (a7[8] & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&a7);
    v21 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v24[3] = 0;
    v24[9] = a5;
    v11 = a7[539];
    v24[6] = v11 == 0;
    v24[5] = v11 == 4;
    v12 = *(_QWORD *)(v22[0] + 80LL);
    v24[0] = (*(_DWORD *)(v12 + 104) & 1) != 0 || (a7[8] & 1) == 0;
    v24[1] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a7, v12);
    v24[2] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a7, v13);
    v24[7] = a3 & 0x200;
    v19 = (struct _FONTHASH **)gpPFTDevice;
    v24[4] = gulFontInformation & 1;
    v14 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v19, *(_QWORD *)(v22[0] + 48LL), 0LL);
    if ( !v14
      || (v23 = v14,
          v20 = gpPFTPublic,
          v19 = gpPFTPrivate,
          !(v16 = EnumDeviceAndEngine(
                    a4,
                    v15,
                    a2,
                    (struct _EFFILTER_INFO *)v24,
                    (struct PUBLIC_PFTOBJ *)&v20,
                    (struct PUBLIC_PFTOBJ *)&v19,
                    (struct PFFOBJ *)&v23,
                    (struct PDEVOBJ *)&a7,
                    (struct DCOBJ *)v22,
                    a6,
                    v7))) )
    {
      v19 = gpPFTPublic;
      v20 = gpPFTPrivate;
      v16 = EnumEngineOnly(
              a4,
              v15,
              a2,
              (struct _EFFILTER_INFO *)v24,
              (struct PUBLIC_PFTOBJ *)&v19,
              (struct PUBLIC_PFTOBJ *)&v20,
              (struct DCOBJ *)v22,
              a6,
              v7);
    }
    v17 = v16;
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
  }
  else
  {
    EngSetLastError(6u);
    v17 = 0;
  }
  if ( v22[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v22);
  return v17;
}
