/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C009B5F0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C005F450 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0117EA0 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  if ( (dword_1C018F8EC & 1) != 0
    || (dword_1C018F8EC & 4) != 0
    || (dword_1C018F8E4 & 1) != 0
    || (dword_1C018F8E4 & 4) != 0
    || (dword_1C018F89C & 4) != 0
    || (dword_1C018F8C4 & 1) != 0
    || (dword_1C018F8C4 & 4) != 0
    || (dword_1C018F8AC & 1) != 0
    || (dword_1C018F8AC & 4) != 0
    || (dword_1C0192CB4 & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    gdwPUDFlags |= 0x100u;
  }
  else
  {
    gdwPUDFlags &= ~0x100u;
  }
}
