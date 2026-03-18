/*
 * XREFs of ??1ENUMAREAS@@QEAA@XZ @ 0x1C00A7510
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A55D0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025A680 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C025BA68 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F154 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0260F10 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02623A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02628B0 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02647DC (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0266BB0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C02661D0 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall ENUMAREAS::~ENUMAREAS(ENUMAREAS *this)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(*((_QWORD *)this + 11) + 1088LL); i; i = *(_QWORD *)(i + 32) )
  {
    if ( *(_DWORD *)(i + 80) < *((_DWORD *)this + 7)
      && *(_DWORD *)(i + 84) < *((_DWORD *)this + 8)
      && *(_DWORD *)(i + 88) > *((_DWORD *)this + 5)
      && *(_DWORD *)(i + 92) > *((_DWORD *)this + 6) )
    {
      SINGLEREADERLOCK::vUnlock((SINGLEREADERLOCK *)(i + 248));
    }
    if ( i == *(_QWORD *)(*((_QWORD *)this + 11) + 1096LL) )
      break;
  }
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(*((_QWORD *)this + 11) + 128LL));
}
