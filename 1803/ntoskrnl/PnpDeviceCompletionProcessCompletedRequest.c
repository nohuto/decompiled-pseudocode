/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x1405D39C8
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1405CE2B8 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PipEnumerateDevice @ 0x1405D3D70 (PipEnumerateDevice.c)
 *     PnpStartDeviceNode @ 0x1405D5A08 (PnpStartDeviceNode.c)
 * Callees:
 *     PnpDeviceCompletionRequestDestroy @ 0x1401467B0 (PnpDeviceCompletionRequestDestroy.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     PoFxIdleDevice @ 0x140146A58 (PoFxIdleDevice.c)
 *     PipUpdatePostStartCharacteristics @ 0x14014C824 (PipUpdatePostStartCharacteristics.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     PiSwProcessParentStartIrp @ 0x1405CA9E0 (PiSwProcessParentStartIrp.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequest(PVOID P)
{
  ULONG_PTR v2; // rbx
  int v3; // eax

  v2 = *((_QWORD *)P + 2);
  *(_QWORD *)(v2 + 528) = *((_QWORD *)P + 6);
  *(_DWORD *)(v2 + 392) = *((_DWORD *)P + 10);
  PipSetDevNodeState(v2, *((_DWORD *)P + 8));
  if ( *((int *)P + 10) >= 0 )
  {
    v3 = *((_DWORD *)P + 8);
    if ( v3 == 774 || v3 == 779 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(v2 + 32));
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(v2 + 48),
        1u,
        0LL,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(v2 + 32));
    }
  }
  if ( *((_DWORD *)P + 8) == 781 )
  {
    if ( (*(_DWORD *)(v2 + 704) & 0x80u) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, v2, 0x80uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(v2 + 32));
    *(_DWORD *)(v2 + 704) &= ~0x80u;
  }
  PnpDeviceCompletionRequestDestroy(P);
  return *(unsigned int *)(v2 + 392);
}
