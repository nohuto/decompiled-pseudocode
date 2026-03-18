/*
 * XREFs of DwmAsyncShowSprite @ 0x1C0103F58
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C006D400 (GreUpdateSpriteVisRgn.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00A1144 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncShowSprite(PVOID Object, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[16]; // [rsp+20h] [rbp-48h] BYREF

  v6 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset((char *)v8 + 2, 0, 0x36uLL);
    v8[0] = 3670032;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741831;
    *(_QWORD *)&v8[11] = a2;
    v8[13] = a3;
    EtwUpdateEvent(a2, 1073741831LL);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
