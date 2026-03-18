/*
 * XREFs of NtGdiGetCertificateSizeByHandle @ 0x1C00A0660
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     SafelyCopyKernelModeDataToUserModeData_unsigned_long_ @ 0x1C00A06D4 (SafelyCopyKernelModeDataToUserModeData_unsigned_long_.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00A1070 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A1C90 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 */

__int64 __fastcall NtGdiGetCertificateSizeByHandle(void *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, __int64 a3)
{
  __int64 result; // rax
  COPM *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int CertificateSize; // edi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // [rsp+48h] [rbp+20h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v8 = 0;
  if ( (int)result >= 0 )
  {
    CertificateSize = COPM::GetCertificateSize(v7, a1, a2, &v14);
    if ( CertificateSize >= 0 )
      CertificateSize = SafelyCopyKernelModeDataToUserModeData_unsigned_long_(a3, &v14);
    UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
    if ( CertificateSize < 0 )
      return (unsigned int)CertificateSize;
    return v8;
  }
  return result;
}
