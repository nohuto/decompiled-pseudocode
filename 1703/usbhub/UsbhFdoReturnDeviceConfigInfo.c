/*
 * XREFs of UsbhFdoReturnDeviceConfigInfo @ 0x1C00208B0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012450 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhCopyPnpString @ 0x1C0020A50 (UsbhCopyPnpString.c)
 *     UsbhDecPdoIoCount @ 0x1C0020BD0 (UsbhDecPdoIoCount.c)
 *     UsbhFreeID @ 0x1C0022140 (UsbhFreeID.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceConfigInfo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DWORD *v9; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int AccessState; // eax
  int v12; // ecx
  int v13; // edi
  __int64 v15; // rcx

  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext || LODWORD(SecurityContext->SecurityQos) != 1 )
  {
    v13 = -1073741811;
    goto LABEL_23;
  }
  if ( HIDWORD(SecurityContext->SecurityQos) != 204 )
  {
    v13 = -1073741789;
    goto LABEL_23;
  }
  memset(CurrentStackLocation->Parameters.Create.SecurityContext, 0, 0xCCuLL);
  LODWORD(SecurityContext->AccessState) = 0;
  AccessState = (int)SecurityContext->AccessState;
  LODWORD(SecurityContext->SecurityQos) = 1;
  HIDWORD(SecurityContext->SecurityQos) = 204;
  if ( (v9[640] & 0x8000) != 0 )
    AccessState = 1;
  LODWORD(SecurityContext->AccessState) = AccessState;
  if ( (v9[640] & 0x80u) != 0 )
    LODWORD(SecurityContext->AccessState) |= 8u;
  if ( (v9[640] & 0x10000) != 0 )
    LODWORD(SecurityContext->AccessState) |= 4u;
  v12 = v9[640];
  if ( (v12 & 0x8001) == 0x8001 || (v12 & 0x40) != 0 )
    LODWORD(SecurityContext->AccessState) |= 2u;
  if ( (v9[640] & 0x80000) != 0 )
    LODWORD(SecurityContext->AccessState) |= 0x20u;
  if ( (v9[640] & 1) != 0 )
    LODWORD(SecurityContext->AccessState) |= 0x10u;
  if ( v9[758] == 100 )
    LODWORD(SecurityContext->AccessState) |= 0x40u;
  if ( (v6[353] & 0x10000) != 0 )
  {
    HIDWORD(SecurityContext[5].AccessState) |= 1u;
    *(_OWORD *)&SecurityContext[5].DesiredAccess = *((_OWORD *)v6 + 161);
    *(_OWORD *)&SecurityContext[6].AccessState = *((_OWORD *)v6 + 162);
    *(_OWORD *)&SecurityContext[7].SecurityQos = *((_OWORD *)v6 + 163);
    *(_OWORD *)&SecurityContext[7].DesiredAccess = *((_OWORD *)v6 + 164);
    LODWORD(SecurityContext[8].AccessState) = v6[660];
  }
  v13 = UsbhCopyPnpString((char *)&SecurityContext[1].SecurityQos + 4, v6 + 526);
  if ( v13 >= 0 )
  {
    v13 = UsbhCopyPnpString((char *)&SecurityContext->AccessState + 4, v6 + 522);
    if ( v13 < 0 )
    {
      v15 = (__int64)&SecurityContext[1].SecurityQos + 4;
    }
    else
    {
      v13 = UsbhCopyPnpString(&SecurityContext[1].FullCreateOptions, v6 + 550);
      if ( v13 >= 0 )
        goto LABEL_23;
      UsbhFreeID((char *)&SecurityContext[1].SecurityQos + 4);
      v15 = (__int64)&SecurityContext->AccessState + 4;
    }
    UsbhFreeID(v15);
  }
LABEL_23:
  a3->IoStatus.Status = v13;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return (unsigned int)v13;
}
