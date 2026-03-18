/*
 * XREFs of NtGdiGetCertificateByHandle @ 0x1C00A0720
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C00A0FDC (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00A1070 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A1C90 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall NtGdiGetCertificateByHandle(void *a1, enum _DXGKMDT_CERTIFICATE_TYPE a2, void *a3, unsigned int a4)
{
  __int64 result; // rax
  COPM *v9; // rcx
  unsigned int v10; // ebx
  unsigned __int8 *PoolWithTag; // rsi
  __int64 v12; // rdx
  COPM *v13; // rcx
  int CertificateSize; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  SIZE_T NumberOfBytes[5]; // [rsp+30h] [rbp-28h] BYREF

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v10 = 0;
  if ( (int)result >= 0 )
  {
    PoolWithTag = 0LL;
    CertificateSize = COPM::GetCertificateSize(v9, a1, a2, (unsigned int *)NumberOfBytes);
    if ( CertificateSize >= 0 )
    {
      if ( a4 < LODWORD(NumberOfBytes[0]) )
      {
        CertificateSize = -1071774450;
      }
      else
      {
        PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, LODWORD(NumberOfBytes[0]), 0x4D504F47u);
        NumberOfBytes[1] = (SIZE_T)PoolWithTag;
        if ( PoolWithTag )
        {
          CertificateSize = COPM::GetCertificate(v13, a1, a2, PoolWithTag, NumberOfBytes[0]);
          if ( CertificateSize >= 0 )
          {
            ProbeForWrite(a3, LODWORD(NumberOfBytes[0]), 1u);
            memmove(a3, PoolWithTag, LODWORD(NumberOfBytes[0]));
          }
        }
        else
        {
          CertificateSize = -1073741801;
        }
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4D504F47u);
    UserSessionSwitchLeaveCrit((__int64)v13, v12, v15, v16);
    if ( CertificateSize < 0 )
      return (unsigned int)CertificateSize;
    return v10;
  }
  return result;
}
