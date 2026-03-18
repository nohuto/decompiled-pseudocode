/*
 * XREFs of UsbhFdoGetMsDescriptorPdo @ 0x1C003A3B4
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0012450 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0020BD0 (UsbhDecPdoIoCount.c)
 *     memmove @ 0x1C0028680 (memmove.c)
 */

__int64 __fastcall UsbhFdoGetMsDescriptorPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v5; // rsi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  unsigned int v11; // esi
  PVOID v12; // rcx
  unsigned __int16 *v13; // rdx
  unsigned int AccessState_high; // ebx
  int v15; // eax

  v5 = (PDEVICE_OBJECT *)FdoExt(a1);
  v6 = PdoExt(a2);
  v7 = v6;
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( WORD2(SecurityContext[5].AccessState) == 7 )
  {
    if ( (v6[700] & 2) == 0 )
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
        v12 = *(PVOID *)&SecurityQos[2].Length;
      else
        v12 = MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
    }
    else
    {
      v12 = *(PVOID *)&SecurityContext[1].DesiredAccess;
    }
    if ( v12 )
    {
      v13 = (unsigned __int16 *)*((_QWORD *)v7 + 352);
      AccessState_high = HIDWORD(SecurityContext[1].AccessState);
      if ( v13[4] < AccessState_high )
        AccessState_high = v13[4];
      memmove(v12, v13, AccessState_high);
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
  }
  else
  {
    v15 = v6[356];
    if ( (v15 & 0x400) == 0 )
    {
      HIDWORD(SecurityContext->SecurityQos) = -1073738240;
      a3->IoStatus.Status = -1073741637;
      IofCompleteRequest(a3, 0);
      UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
      return (unsigned int)-1073741637;
    }
    BYTE1(SecurityContext[5].AccessState) = v15;
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v11 = IofCallDriver(v5[152], a3);
  }
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v11;
}
