/*
 * XREFs of NtGdiGetCertificate @ 0x1C00EE1C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00E8970 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     CallMonitor @ 0x1C00E89E0 (CallMonitor.c)
 *     GetCertificateLengthAndMonitorPDO @ 0x1C00ED750 (GetCertificateLengthAndMonitorPDO.c)
 */

__int64 __fastcall NtGdiGetCertificate(struct _UNICODE_STRING *a1, __int64 a2, volatile void *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  PVOID PoolWithTag; // rsi
  int CertificateLengthAndMonitorPDO; // edi
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+38h] [rbp-30h] BYREF
  int InputBuffer; // [rsp+78h] [rbp+10h] BYREF

  InputBuffer = a2;
  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList((__int64)a1, a2, (__int64)a3);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    Object[0] = 0LL;
    PoolWithTag = 0LL;
    CertificateLengthAndMonitorPDO = GetCertificateLengthAndMonitorPDO(
                                       a1,
                                       InputBuffer,
                                       &NumberOfBytes,
                                       (struct _DEVICE_OBJECT **)Object);
    if ( CertificateLengthAndMonitorPDO >= 0 )
    {
      if ( a4 >= (unsigned int)NumberOfBytes )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4D504F47u);
        Object[1] = PoolWithTag;
        if ( PoolWithTag )
        {
          CertificateLengthAndMonitorPDO = CallMonitor(
                                             (PDEVICE_OBJECT)Object[0],
                                             0x232487u,
                                             &InputBuffer,
                                             4u,
                                             PoolWithTag,
                                             NumberOfBytes);
          if ( CertificateLengthAndMonitorPDO >= 0 )
          {
            ProbeForWrite(a3, (unsigned int)NumberOfBytes, 1u);
            memmove((void *)a3, PoolWithTag, (unsigned int)NumberOfBytes);
          }
        }
        else
        {
          CertificateLengthAndMonitorPDO = -1073741801;
        }
      }
      else
      {
        CertificateLengthAndMonitorPDO = -1071774450;
      }
    }
    if ( Object[0] )
      ObfDereferenceObject(Object[0]);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4D504F47u);
    UserSessionSwitchLeaveCrit();
    if ( CertificateLengthAndMonitorPDO < 0 )
      return (unsigned int)CertificateLengthAndMonitorPDO;
    return v8;
  }
  return result;
}
