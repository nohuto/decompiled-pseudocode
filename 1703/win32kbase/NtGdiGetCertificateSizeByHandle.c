/*
 * XREFs of NtGdiGetCertificateSizeByHandle @ 0x1C00EE4A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00E8970 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C00ECB60 (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00ED7D8 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 */

__int64 __fastcall NtGdiGetCertificateSizeByHandle(void *a1, __int64 a2, _DWORD *a3)
{
  enum _DXGKMDT_CERTIFICATE_TYPE v4; // edi
  __int64 result; // rax
  COPM *v7; // rcx
  unsigned int v8; // ebx
  int CertificateSize; // edi
  unsigned int v10; // [rsp+48h] [rbp+20h] BYREF

  v4 = (int)a2;
  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList((__int64)a1, a2, (__int64)a3);
  v8 = 0;
  if ( (int)result >= 0 )
  {
    CertificateSize = COPM::GetCertificateSize(v7, a1, v4, &v10);
    if ( CertificateSize >= 0 )
      CertificateSize = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v10);
    UserSessionSwitchLeaveCrit();
    if ( CertificateSize < 0 )
      return (unsigned int)CertificateSize;
    return v8;
  }
  return result;
}
