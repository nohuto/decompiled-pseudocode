/*
 * XREFs of PaintScreenBackground @ 0x1C0124DC0
 * Callers:
 *     <none>
 * Callees:
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 */

__int64 PaintScreenBackground()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  HDC v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  RECT v6; // [rsp+30h] [rbp-18h] BYREF

  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v1, v0);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  v2 = *(HDC *)(gpDispInfo + 48LL);
  v6 = *(RECT *)(*gpDispInfo + 24LL);
  FillRect(v2, &v6, *(HBRUSH *)(gpsi + 4688LL));
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v4, v3);
  return EnterCrit(0LL, 1LL);
}
