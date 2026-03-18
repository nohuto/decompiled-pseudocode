/*
 * XREFs of _CmRemoveDeviceFromContainer @ 0x1407EA6A4
 * Callers:
 *     PiDcUpdateDeviceContainerMembership @ 0x1405D5280 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDcResetChildDeviceContainers @ 0x140729724 (PiDcResetChildDeviceContainers.c)
 *     _CmDeleteDeviceWorker @ 0x1407E8498 (_CmDeleteDeviceWorker.c)
 *     _CmMoveBaseContainer @ 0x1407EA5C4 (_CmMoveBaseContainer.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x1405E6CB4 (_PnpObjectRaiseDevicesChangeEvent.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1407EA7E4 (_CmRemoveDeviceFromContainerWorker.c)
 */

__int64 __fastcall CmRemoveDeviceFromContainer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rsi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  _QWORD v14[12]; // [rsp+40h] [rbp-51h] BYREF

  memset(v14, 0, 0x58uLL);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  v14[3] = a4;
  v14[2] = a3;
  if ( v8 )
  {
    v9 = v8(a1, a2, 5LL);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        return LODWORD(v14[0]);
      if ( v9 )
        return (unsigned int)-1073741595;
    }
  }
  v10 = CmRemoveDeviceFromContainerWorker(a1, a2, v14[2], v14[3], &v14[4]);
  v11 = v10;
  if ( v8 )
  {
    LODWORD(v14[0]) = v10;
    v12 = v8(a1, a2, 5LL);
    if ( v12 != -1073741822 )
    {
      if ( v12 != -1073741536 )
      {
        if ( !v12 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
      return LODWORD(v14[0]);
    }
  }
LABEL_8:
  if ( !LOBYTE(v14[4]) )
    PnpObjectRaiseDevicesChangeEvent(a1, a2, 5LL);
  return v11;
}
