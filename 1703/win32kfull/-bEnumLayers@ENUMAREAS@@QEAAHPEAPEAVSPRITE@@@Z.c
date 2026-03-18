/*
 * XREFs of ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C025A168
 * Callers:
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025A680 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0260F10 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02623A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02628B0 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02647DC (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0266BB0 (vSpUnTearDownSprites.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENUMAREAS::bEnumLayers(ENUMAREAS *this, struct SPRITE **a2)
{
  unsigned int v2; // r9d
  _DWORD *v4; // r10
  _DWORD *v5; // rdx
  __int64 result; // rax

  v2 = 0;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    v5 = (_DWORD *)*((_QWORD *)this + 9);
    if ( (unsigned __int64)v5 > *((_QWORD *)this + 8) + 24LL && *(v5 - 4) == *v5 )
    {
      *((_QWORD *)this + 9) = v5 - 4;
      goto LABEL_8;
    }
  }
  else
  {
    v4 = (_DWORD *)*((_QWORD *)this + 9);
    if ( (unsigned __int64)v4 < *(_QWORD *)(*((_QWORD *)this + 8) + 8LL) + *((_QWORD *)this + 8) - 16LL && v4[4] == *v4 )
    {
      *((_QWORD *)this + 9) = v4 + 4;
LABEL_8:
      v2 = 1;
    }
  }
  result = v2;
  *a2 = *(struct SPRITE **)(*((_QWORD *)this + 9) + 8LL);
  return result;
}
