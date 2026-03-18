/*
 * XREFs of ?W32kCddIncPresentUniq@@YAXXZ @ 0x1C0095FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void W32kCddIncPresentUniq(void)
{
  ++LODWORD(WPP_MAIN_CB.DeviceObjectExtension);
}
