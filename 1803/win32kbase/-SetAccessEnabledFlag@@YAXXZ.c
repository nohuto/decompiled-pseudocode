/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C010A700
 * Callers:
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C010AA50 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C010BC40 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  int v0; // eax

  if ( (dword_1C01A4E8C & 1) != 0
    || (dword_1C01A4E8C & 4) != 0
    || (dword_1C01A4E84 & 1) != 0
    || (dword_1C01A4E84 & 4) != 0
    || (dword_1C01A4E04 & 4) != 0
    || (dword_1C01A4E64 & 1) != 0
    || (dword_1C01A4E64 & 4) != 0
    || (dword_1C01A4E4C & 1) != 0
    || (dword_1C01A4E4C & 4) != 0
    || (dword_1C01A4E14 & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v0 = gdwPUDFlags | 0x100;
  }
  else
  {
    v0 = gdwPUDFlags & 0xFFFFFEFF;
  }
  gdwPUDFlags = v0;
}
