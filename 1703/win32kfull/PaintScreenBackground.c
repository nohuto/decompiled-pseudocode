/*
 * XREFs of PaintScreenBackground @ 0x1C011B2A0
 * Callers:
 *     <none>
 * Callees:
 *     FillRect @ 0x1C0029210 (FillRect.c)
 */

__int64 PaintScreenBackground()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  FillRect(*(HDC *)(gpDispInfo + 48LL), (LPCRECT)(*gpDispInfo + 24LL), *(HBRUSH *)(gpsi + 5096LL));
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return EnterCrit(0LL, 1LL);
}
