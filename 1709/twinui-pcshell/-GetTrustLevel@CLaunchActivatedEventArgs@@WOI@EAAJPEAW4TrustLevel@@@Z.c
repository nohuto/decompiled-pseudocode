/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WOI@EAAJPEAW4TrustLevel@@@Z @ 0x1801CEF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, int *a2)
{
  return StubImmersiveApplication::IsRunning((StubImmersiveApplication *)(a1 - 232), a2);
}
