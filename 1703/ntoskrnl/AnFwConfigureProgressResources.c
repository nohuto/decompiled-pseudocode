/*
 * XREFs of AnFwConfigureProgressResources @ 0x140755880
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140756D58 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     BgpTxtRegionSize @ 0x14014041C (BgpTxtRegionSize.c)
 *     BgpGxRectangleSize @ 0x14014047C (BgpGxRectangleSize.c)
 *     BgpGetBitsPerPixel @ 0x140140DD4 (BgpGetBitsPerPixel.c)
 *     BgpTxtCreateRegion @ 0x140756A9C (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x140757E80 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(int *a1)
{
  int BitsPerPixel; // eax
  _DWORD v4[10]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  KeInitializeEvent(&stru_140387580, NotificationEvent, 1u);
  if ( !a1 )
    return 0LL;
  if ( (a1[6] & 1) == 0 )
    return 0LL;
  if ( (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_140341BA0);
  v4[1] = dword_140341BA8;
  v4[4] = a1[5];
  v4[5] = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (unsigned int)&v5, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_140341A54 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_140341A50 = 122 * dword_140341A54;
  dword_140341A58 = BgpTxtRegionSize(v5);
  return v5;
}
