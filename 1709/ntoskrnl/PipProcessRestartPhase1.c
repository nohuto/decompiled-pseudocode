/*
 * XREFs of PipProcessRestartPhase1 @ 0x1406D6150
 * Callers:
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpUnlockMountableDevice @ 0x140158E70 (PnpUnlockMountableDevice.c)
 *     McTemplateK0qz @ 0x14020097C (McTemplateK0qz.c)
 *     PnpStartDeviceNode @ 0x140552F08 (PnpStartDeviceNode.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 */

__int64 __fastcall PipProcessRestartPhase1(__int64 a1, int a2, __int64 a3)
{
  int v3; // edi
  unsigned int started; // edi

  v3 = a3;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    McTemplateK0qz(a1, &KMPnPEvt_ProcessDeviceRestart_Start, a3, 1, *(const wchar_t **)(a1 + 48));
  if ( v3 && (*(_DWORD *)(a1 + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    started = PnpStartDeviceNode(a1, 1, a2);
    if ( (*(_DWORD *)(a1 + 396) & 0x1000000) != 0 )
    {
      PnpUnlockMountableDevice(*(_QWORD *)(a1 + 32));
      PipClearDevNodeFlags(a1, 0x1000000);
    }
  }
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    McTemplateK0qz(a1, &KMPnPEvt_ProcessDeviceRestart_Stop, a3, 1, *(const wchar_t **)(a1 + 48));
  return started;
}
