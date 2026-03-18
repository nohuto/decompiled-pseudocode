/*
 * XREFs of UsbhFdoGetMsDescriptorPdo @ 0x1C00290E0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     memmove @ 0x1C0029500 (memmove.c)
 */

__int64 __fastcall UsbhFdoGetMsDescriptorPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v5; // rsi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  int v10; // eax
  unsigned int v11; // esi
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v13; // rcx
  unsigned __int16 *v14; // rdx
  unsigned int AccessState_high; // ebx

  v5 = (PDEVICE_OBJECT *)FdoExt(a1);
  v6 = PdoExt(a2);
  v7 = v6;
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( WORD2(SecurityContext[5].AccessState) == 7 )
  {
    if ( (v6[704] & 2) == 0 )
    {
      HIDWORD(SecurityContext->SecurityQos) = -1073738240;
      a3->IoStatus.Status = -1073741637;
      IofCompleteRequest(a3, 0);
      UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
      return 3221225659LL;
    }
    SecurityQos = SecurityContext[2].SecurityQos;
    v11 = 0;
    if ( SecurityQos )
    {
      if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
        v13 = *(PVOID *)&SecurityQos[2].Length;
      else
        v13 = MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
    }
    else
    {
      v13 = *(PVOID *)&SecurityContext[1].DesiredAccess;
    }
    if ( v13 )
    {
      v14 = (unsigned __int16 *)*((_QWORD *)v7 + 354);
      AccessState_high = HIDWORD(SecurityContext[1].AccessState);
      if ( v14[4] < AccessState_high )
        AccessState_high = v14[4];
      memmove(v13, v14, AccessState_high);
      HIDWORD(SecurityContext[1].AccessState) = AccessState_high;
      HIDWORD(SecurityContext->SecurityQos) = 0;
    }
    else
    {
      v11 = -1073741811;
      HIDWORD(SecurityContext->SecurityQos) = -2147482880;
    }
    a3->IoStatus.Status = v11;
    IofCompleteRequest(a3, 0);
    goto LABEL_19;
  }
  v10 = v6[356];
  if ( (v10 & 0x400) != 0 )
  {
    BYTE1(SecurityContext[5].AccessState) = v10;
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v11 = IofCallDriver(v5[152], a3);
LABEL_19:
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return v11;
  }
  HIDWORD(SecurityContext->SecurityQos) = -1073738240;
  a3->IoStatus.Status = -1073741637;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return (unsigned int)-1073741637;
}
