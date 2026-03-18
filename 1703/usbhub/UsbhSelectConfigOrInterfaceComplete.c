/*
 * XREFs of UsbhSelectConfigOrInterfaceComplete @ 0x1C0020630
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0020BD0 (UsbhDecPdoIoCount.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C002104C (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhCalculateInterfaceBandwidth @ 0x1C003A018 (UsbhCalculateInterfaceBandwidth.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003B5F0 (UsbhSetOutOfBandwidthTimer.c)
 */

__int64 __fastcall UsbhSelectConfigOrInterfaceComplete(PDEVICE_OBJECT DeviceObject, ULONG_PTR Irp, __int64 Context)
{
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _IO_SECURITY_CONTEXT *v9; // rsi
  __int64 PortData; // r15
  unsigned int *v11; // rbp
  unsigned int *i; // rsi

  v5 = PdoExt(Context);
  FdoExt(*((_QWORD *)v5 + 147));
  v6 = *((unsigned __int16 *)v5 + 710);
  v7 = *((_QWORD *)v5 + 147);
  if ( *(int *)(Irp + 48) < 0 )
  {
    v9 = *(_IO_SECURITY_CONTEXT **)(*(_QWORD *)(Irp + 184) + 8LL);
    PortData = UsbhGetPortData(v7, v6);
    UsbhCancelOutOfBandwidthTimer(*((_QWORD *)v5 + 147), *((unsigned __int16 *)v5 + 710));
    if ( PortData && HIDWORD(v9->SecurityQos) == -2147481856 )
    {
      UsbhSetOutOfBandwidthTimer(*((_QWORD *)v5 + 147), *((unsigned __int16 *)v5 + 710), *(unsigned int *)(Irp + 48));
      *(_DWORD *)(PortData + 436) = 0;
      if ( WORD1(v9->SecurityQos) )
      {
        if ( WORD1(v9->SecurityQos) == 1 )
          *(_DWORD *)(PortData + 436) = UsbhCalculateInterfaceBandwidth(
                                          *((_QWORD *)v5 + 147),
                                          Context,
                                          &v9[1].AccessState);
      }
      else
      {
        v11 = (unsigned int *)((char *)v9 + LOWORD(v9->SecurityQos));
        for ( i = &v9[1].DesiredAccess; i < v11; i = (unsigned int *)((char *)i + *(unsigned __int16 *)i) )
          *(_DWORD *)(PortData + 436) += UsbhCalculateInterfaceBandwidth(*((_QWORD *)v5 + 147), Context, i);
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
