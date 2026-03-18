/*
 * XREFs of PipProcessRestartPhase1 @ 0x1406AAEE0
 * Callers:
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 * Callees:
 *     PnpUnlockMountableDevice @ 0x1401F8BE4 (PnpUnlockMountableDevice.c)
 *     Template_qz @ 0x1401FAC80 (Template_qz.c)
 *     PipClearDevNodeFlags @ 0x1404A770C (PipClearDevNodeFlags.c)
 *     PnpStartDeviceNode @ 0x1404A7788 (PnpStartDeviceNode.c)
 */

__int64 __fastcall PipProcessRestartPhase1(__int64 a1, int a2, __int64 a3)
{
  int v3; // edi
  unsigned int started; // edi

  v3 = a3;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    Template_qz(a1, &KMPnPEvt_ProcessDeviceRestart_Start, a3, 1, *(const wchar_t **)(a1 + 48));
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
    Template_qz(a1, &KMPnPEvt_ProcessDeviceRestart_Stop, a3, 1, *(const wchar_t **)(a1 + 48));
  return started;
}
