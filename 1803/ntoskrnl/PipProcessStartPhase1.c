/*
 * XREFs of PipProcessStartPhase1 @ 0x1405D5C5C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 * Callees:
 *     PiDmaGuardProcessPreStart @ 0x14014714C (PiDmaGuardProcessPreStart.c)
 *     McTemplateK0qz @ 0x14023D790 (McTemplateK0qz.c)
 *     PnpStartDeviceNode @ 0x1405D5A08 (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x1405D5CF4 (IopUncacheInterfaceInformation.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140731D34 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140731FDC (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1407320E4 (PpProfileQueryHardwareProfileChange.c)
 */

__int64 __fastcall PipProcessStartPhase1(ULONG_PTR BugCheckParameter4, int a2, __int64 a3)
{
  int v3; // edi
  int started; // edi
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    McTemplateK0qz(
      BugCheckParameter4,
      &KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      1,
      *(const wchar_t **)(BugCheckParameter4 + 48));
  if ( v3 && (*(_DWORD *)(BugCheckParameter4 + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    IopUncacheInterfaceInformation(*(_QWORD *)(BugCheckParameter4 + 32), 1LL);
    if ( !*(_DWORD *)(BugCheckParameter4 + 568)
      || (PpProfileBeginHardwareProfileTransition(0LL),
          PpProfileIncludeInHardwareProfileTransition(BugCheckParameter4, 2LL),
          started = PpProfileQueryHardwareProfileChange(0LL, 2LL, &v8, 0LL),
          started >= 0) )
    {
      PiDmaGuardProcessPreStart(BugCheckParameter4);
      started = PnpStartDeviceNode(BugCheckParameter4, 0, a2);
    }
  }
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x10000000) != 0 )
    McTemplateK0qz(
      BugCheckParameter4,
      &KMPnPEvt_ProcessDeviceStart_Stop,
      a3,
      1,
      *(const wchar_t **)(BugCheckParameter4 + 48));
  return (unsigned int)started;
}
