/*
 * XREFs of UsbDevice_UpdateUsbDevice @ 0x1C00373D4
 * Callers:
 *     UsbDevice_UcxEvtUpdate @ 0x1C0037000 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C0037250 (UsbDevice_UpdateCompletion.c)
 * Callees:
 *     RootHub_SetPortResumeTime @ 0x1C0020858 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C00214D8 (RootHub_Update20HardwareLpmParameters.c)
 *     Etw_DeviceUpdate @ 0x1C00387F0 (Etw_DeviceUpdate.c)
 */

__int64 __fastcall UsbDevice_UpdateUsbDevice(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned __int8 v5; // r9

  if ( (*(_DWORD *)(a2 + 24) & 8) != 0 && *(_BYTE *)(a2 + 52) )
    *(_BYTE *)(a1 + 136) = 1;
  if ( (*(_DWORD *)(a2 + 24) & 1) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)v4;
    *(_WORD *)(a1 + 132) = *(_WORD *)(v4 + 16);
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x20) != 0 )
  {
    v5 = *(_BYTE *)(a1 + 135);
    *(_BYTE *)(a1 + 552) = *(_BYTE *)(a2 + 60) & 1;
    RootHub_Update20HardwareLpmParameters(
      *(_QWORD **)(*(_QWORD *)(a1 + 8) + 152LL),
      *(_DWORD *)(a1 + 44),
      *(_DWORD *)(a2 + 60),
      v5);
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x40) != 0 )
  {
    RootHub_SetPortResumeTime(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL), *(_DWORD *)(a1 + 44), *(_WORD *)(a2 + 64));
    *(_BYTE *)(a1 + 553) = 1;
  }
  return Etw_DeviceUpdate(a1, a1);
}
