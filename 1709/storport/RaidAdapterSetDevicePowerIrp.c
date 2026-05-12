/*
 * XREFs of RaidAdapterSetDevicePowerIrp @ 0x1C0010D00
 * Callers:
 *     RaidAdapterSetPowerIrp @ 0x1C0010C30 (RaidAdapterSetPowerIrp.c)
 * Callees:
 *     RaidAdapterPowerUpDevice @ 0x1C000FD80 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0010E6C (RaidAdapterPowerDownDevice.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     WPP_SF_DD @ 0x1C0030998 (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x1C0030BAC (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C0030BFC (WPP_SF_qqD.c)
 *     McTemplateK0qpqcqqqq @ 0x1C0037154 (McTemplateK0qpqcqqqq.c)
 */

__int64 __fastcall RaidAdapterSetDevicePowerIrp(__int64 a1, IRP *a2)
{
  int v4; // edi
  int LowPart; // ebp
  unsigned int v6; // eax
  unsigned int v7; // edi
  _QWORD v9[2]; // [rsp+60h] [rbp-38h] BYREF

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 17LL, &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids, a1, a2);
  }
  v4 = *(_DWORD *)(a1 + 268);
  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    v9[0] = 0LL;
    v9[1] = 0LL;
    IoGetActivityIdIrp(a2, v9);
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      McTemplateK0qpqcqqqq(
        a2->Tail.Overlay.CurrentStackLocation,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)v9,
        *(_DWORD *)(a1 + 56),
        (char)a2,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter,
        v4,
        LowPart,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( v4 == 1 )
  {
    if ( LowPart > 1 )
    {
      v6 = RaidAdapterPowerDownDevice(a1, a2);
      goto LABEL_9;
    }
  }
  else if ( v4 > 1 && LowPart == 1 )
  {
    v6 = RaidAdapterPowerUpDevice(a1, a2);
    goto LABEL_9;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      18LL,
      &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids,
      (unsigned int)v4,
      LowPart);
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  v6 = PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
LABEL_9:
  v7 = v6;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 19LL, &WPP_0c5c8aed4ecb3cf637873a43b49c0b60_Traceguids, a1, a2, v6);
  }
  return v7;
}
