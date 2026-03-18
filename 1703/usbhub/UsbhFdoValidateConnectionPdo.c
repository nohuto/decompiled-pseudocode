/*
 * XREFs of UsbhFdoValidateConnectionPdo @ 0x1C003A8EC
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012450 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C00130E0 (UsbhQueryPortState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0020BD0 (UsbhDecPdoIoCount.c)
 */

__int64 __fastcall UsbhFdoValidateConnectionPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v6; // r13
  _DWORD *v7; // rbx
  __int64 PortData; // rsi
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  unsigned int v10; // ebx
  int v11; // eax
  int v13; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0;
  v6 = (PDEVICE_OBJECT *)FdoExt(a1);
  v7 = PdoExt(a2);
  PortData = UsbhGetPortData(a1, *((_WORD *)v7 + 710));
  Log(a1, 8, 1667973963, PortData, *((unsigned __int16 *)v7 + 710));
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( *((_DWORD *)v6 + 340) == 5 )
  {
    if ( PortData )
    {
      v10 = UsbhQueryPortState(a1, *(_WORD *)(PortData + 4), (__int64)&v14, &v13);
      v11 = v13;
    }
    else
    {
      v10 = -1073741811;
      v11 = -2147482880;
    }
  }
  else
  {
    v10 = -1073741810;
    v11 = -1073713152;
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
    HIDWORD(SecurityContext->SecurityQos) = v11;
    a3->IoStatus.Status = v10;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1667973937, PortData, (int)v10);
    return v10;
  }
  if ( (v14 & 1) != 0 && (v14 & 3) != 0 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v10 = IofCallDriver(v6[152], a3);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return v10;
  }
  HIDWORD(SecurityContext->SecurityQos) = -1073713152;
  a3->IoStatus.Status = -1073741810;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  Log(a1, 8, 1667973938, PortData, -1073741810LL);
  return 3221225486LL;
}
