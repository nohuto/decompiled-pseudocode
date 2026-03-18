/*
 * XREFs of NtGdiGetCertificateSize @ 0x1C00EE420
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00E8970 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C00ECB60 (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 *     GetCertificateLengthAndMonitorPDO @ 0x1C00ED750 (GetCertificateLengthAndMonitorPDO.c)
 */

__int64 __fastcall NtGdiGetCertificateSize(struct _UNICODE_STRING *a1, __int64 a2, _DWORD *a3)
{
  int v4; // edi
  __int64 result; // rax
  unsigned int v7; // ebx
  int CertificateLengthAndMonitorPDO; // edi
  int v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = a2;
  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList((__int64)a1, a2, (__int64)a3);
  v7 = 0;
  if ( (int)result >= 0 )
  {
    CertificateLengthAndMonitorPDO = GetCertificateLengthAndMonitorPDO(a1, v4, &v9, 0LL);
    if ( CertificateLengthAndMonitorPDO >= 0 )
      CertificateLengthAndMonitorPDO = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v9);
    UserSessionSwitchLeaveCrit();
    if ( CertificateLengthAndMonitorPDO < 0 )
      return (unsigned int)CertificateLengthAndMonitorPDO;
    return v7;
  }
  return result;
}
