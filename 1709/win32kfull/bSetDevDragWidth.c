/*
 * XREFs of bSetDevDragWidth @ 0x1C0045E2C
 * Callers:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C0045E70 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetDevDragWidth(__int64 a1, int a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v5, (struct PDEVOBJ *)&v4);
  *(_DWORD *)(v4 + 1248) = a2;
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v5);
  return 1LL;
}
