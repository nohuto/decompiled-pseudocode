/*
 * XREFs of UsbDevice_UpdateUsbDevice @ 0x1C0034FB4
 * Callers:
 *     UsbDevice_UcxEvtUpdate @ 0x1C0034BC0 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C0034E40 (UsbDevice_UpdateCompletion.c)
 * Callees:
 *     RootHub_SetPortResumeTime @ 0x1C001AF94 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C001E928 (RootHub_Update20HardwareLpmParameters.c)
 *     Etw_DeviceUpdate @ 0x1C00363C4 (Etw_DeviceUpdate.c)
 */

__int64 __fastcall UsbDevice_UpdateUsbDevice(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a2 + 24);
  if ( (v2 & 8) != 0 && *(_BYTE *)(a2 + 52) )
  {
    *(_BYTE *)(a1 + 136) = 1;
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 1) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)v5;
    *(_WORD *)(a1 + 132) = *(_WORD *)(v5 + 16);
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 0x20) != 0 )
  {
    *(_BYTE *)(a1 + 552) = *(_BYTE *)(a2 + 60) & 1;
    RootHub_Update20HardwareLpmParameters(
      *(_QWORD **)(*(_QWORD *)(a1 + 8) + 152LL),
      *(_DWORD *)(a1 + 44),
      *(_DWORD *)(a2 + 60),
      *(_BYTE *)(a1 + 135));
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 0x40) != 0 )
  {
    RootHub_SetPortResumeTime(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL), *(_DWORD *)(a1 + 44), *(_WORD *)(a2 + 64));
    *(_BYTE *)(a1 + 553) = 1;
  }
  return Etw_DeviceUpdate(a1, a1);
}
