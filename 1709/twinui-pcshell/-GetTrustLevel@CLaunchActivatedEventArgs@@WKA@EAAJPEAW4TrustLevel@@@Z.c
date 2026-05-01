/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WKA@EAAJPEAW4TrustLevel@@@Z @ 0x1801CF4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return StubImmersiveApplication::IsRunning((StubImmersiveApplication *)(a1 - 160), a2);
}
