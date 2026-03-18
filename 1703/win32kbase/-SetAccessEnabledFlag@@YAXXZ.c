/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0074910
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0072AD0 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0119030 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void SetAccessEnabledFlag(void)
{
  int v0; // ecx

  if ( (dword_1C018AD6C & 1) != 0
    || (dword_1C018AD6C & 4) != 0
    || (dword_1C018AD64 & 1) != 0
    || (dword_1C018AD64 & 4) != 0
    || (dword_1C018AD1C & 4) != 0
    || (dword_1C018AD44 & 1) != 0
    || (dword_1C018AD44 & 4) != 0
    || (dword_1C018AD2C & 1) != 0
    || (dword_1C018AD2C & 4) != 0
    || (dword_1C018DE04 & 1) != 0
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
