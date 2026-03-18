/*
 * XREFs of ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C00E3B34
 * Callers:
 *     DwmDestroyDeviceSpecificResources @ 0x1C0047000 (DwmDestroyDeviceSpecificResources.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00E4100 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C008F260 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C01083FC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 */

void __fastcall vSpDwmDestroyCursorSprites(HDEV a1)
{
  HSPRITE v2; // rdi
  HSPRITE NeighborSprite; // rbx

  v2 = (HSPRITE)*((_QWORD *)g_pDwmState + 18);
  if ( v2 )
  {
    do
    {
      NeighborSprite = hspGetNeighborSprite(v2, 1, 0);
      GreDeleteSpriteInternal(a1, 0LL, v2, 1);
      v2 = NeighborSprite;
    }
    while ( NeighborSprite );
  }
  *((_QWORD *)g_pDwmState + 17) = 0LL;
  *((_QWORD *)g_pDwmState + 18) = 0LL;
  *((_DWORD *)g_pDwmState + 40) = 0;
}
