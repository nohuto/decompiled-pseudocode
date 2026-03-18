/*
 * XREFs of UsbhSelectConfigOrInterfaceComplete @ 0x1C0009CB0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C000A2D8 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhCalculateInterfaceBandwidth @ 0x1C003B2AC (UsbhCalculateInterfaceBandwidth.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003C970 (UsbhSetOutOfBandwidthTimer.c)
 */

__int64 __fastcall UsbhSelectConfigOrInterfaceComplete(PDEVICE_OBJECT DeviceObject, ULONG_PTR Irp, ULONG_PTR Context)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _IO_SECURITY_CONTEXT *v9; // rsi
  __int64 PortData; // r15
  unsigned int *v11; // rbp
  unsigned int *i; // rsi

  v5 = PdoExt(Context);
  FdoExt(*(_QWORD *)(v5 + 1176));
  v6 = *(unsigned __int16 *)(v5 + 1420);
  v7 = *(_QWORD *)(v5 + 1176);
  if ( *(int *)(Irp + 48) < 0 )
  {
    v9 = *(_IO_SECURITY_CONTEXT **)(*(_QWORD *)(Irp + 184) + 8LL);
    PortData = UsbhGetPortData(v7, v6);
    UsbhCancelOutOfBandwidthTimer(*(_QWORD *)(v5 + 1176), *(unsigned __int16 *)(v5 + 1420));
    if ( PortData && HIDWORD(v9->SecurityQos) == -2147481856 )
    {
      UsbhSetOutOfBandwidthTimer(*(_QWORD *)(v5 + 1176), *(unsigned __int16 *)(v5 + 1420), *(unsigned int *)(Irp + 48));
      *(_DWORD *)(PortData + 436) = 0;
      if ( WORD1(v9->SecurityQos) )
      {
        if ( WORD1(v9->SecurityQos) == 1 )
          *(_DWORD *)(PortData + 436) = UsbhCalculateInterfaceBandwidth(
                                          *(_QWORD *)(v5 + 1176),
                                          Context,
                                          &v9[1].AccessState);
      }
      else
      {
        v11 = (unsigned int *)((char *)v9 + LOWORD(v9->SecurityQos));
        for ( i = &v9[1].DesiredAccess; i < v11; i = (unsigned int *)((char *)i + *(unsigned __int16 *)i) )
          *(_DWORD *)(PortData + 436) += UsbhCalculateInterfaceBandwidth(*(_QWORD *)(v5 + 1176), Context, i);
      }
    }
  }
  else
  {
    UsbhCancelOutOfBandwidthTimer(v7, v6);
  }
  UsbhDecPdoIoCount(Context, Irp);
  if ( *(_BYTE *)(Irp + 65) )
    *(_BYTE *)(*(_QWORD *)(Irp + 184) + 3LL) |= 1u;
  return 0LL;
}
