/*
 * XREFs of AnFwConfigureProgressResources @ 0x14083B6D8
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     BgpTxtRegionSize @ 0x140164FE8 (BgpTxtRegionSize.c)
 *     BgpGxRectangleSize @ 0x140165048 (BgpGxRectangleSize.c)
 *     BgpGetBitsPerPixel @ 0x140165560 (BgpGetBitsPerPixel.c)
 *     BgpTxtCreateRegion @ 0x14083C0D0 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x14083C534 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(int *a1)
{
  int BitsPerPixel; // eax
  _DWORD v4[10]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  KeInitializeEvent(&stru_1403E9090, NotificationEvent, 1u);
  if ( !a1 )
    return 0LL;
  if ( (a1[6] & 1) == 0 )
    return 0LL;
  if ( (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_14039D970);
  v4[1] = dword_14039D978;
  v4[4] = a1[5];
  v4[5] = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (unsigned int)&v5, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_14039D814 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_14039D810 = 122 * dword_14039D814;
  dword_14039D818 = BgpTxtRegionSize(v5);
  return v5;
}
