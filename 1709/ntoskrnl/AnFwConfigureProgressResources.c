/*
 * XREFs of AnFwConfigureProgressResources @ 0x1407CE39C
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     BgpTxtRegionSize @ 0x14013B550 (BgpTxtRegionSize.c)
 *     BgpGxRectangleSize @ 0x14013B5B0 (BgpGxRectangleSize.c)
 *     BgpGetBitsPerPixel @ 0x14013C074 (BgpGetBitsPerPixel.c)
 *     BgpTxtCreateRegion @ 0x1407CF494 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x1407D00EC (BgpFoGetFontHandle.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(int *a1)
{
  int BitsPerPixel; // eax
  _DWORD v4[10]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  KeInitializeEvent(&stru_1403A2A70, NotificationEvent, 1u);
  if ( !a1 )
    return 0LL;
  if ( (a1[6] & 1) == 0 )
    return 0LL;
  if ( (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_14035A320);
  v4[1] = dword_14035A328;
  v4[4] = a1[5];
  v4[5] = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (unsigned int)&v5, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_14035A1D4 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_14035A1D0 = 122 * dword_14035A1D4;
  dword_14035A1D8 = BgpTxtRegionSize(v5);
  return v5;
}
