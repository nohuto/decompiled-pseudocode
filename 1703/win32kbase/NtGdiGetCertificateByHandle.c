/*
 * XREFs of NtGdiGetCertificateByHandle @ 0x1C00EE300
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00E8970 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C00ED624 (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 *     ?GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z @ 0x1C00ED7D8 (-GetCertificateSize@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAK@Z.c)
 */

__int64 __fastcall NtGdiGetCertificateByHandle(void *a1, __int64 a2, void *a3, unsigned int a4)
{
  enum _DXGKMDT_CERTIFICATE_TYPE v6; // r15d
  __int64 result; // rax
  COPM *v9; // rcx
  unsigned int v10; // ebx
  unsigned __int8 *PoolWithTag; // rsi
  int CertificateSize; // edi
  COPM *v13; // rcx
  SIZE_T NumberOfBytes[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = (int)a2;
  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList((__int64)a1, a2, (__int64)a3);
  v10 = 0;
  if ( (int)result >= 0 )
  {
    PoolWithTag = 0LL;
    CertificateSize = COPM::GetCertificateSize(v9, a1, v6, (unsigned int *)NumberOfBytes);
    if ( CertificateSize >= 0 )
    {
      if ( a4 >= LODWORD(NumberOfBytes[0]) )
      {
        PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, LODWORD(NumberOfBytes[0]), 0x4D504F47u);
        NumberOfBytes[1] = (SIZE_T)PoolWithTag;
        if ( PoolWithTag )
        {
          CertificateSize = COPM::GetCertificate(v13, a1, v6, PoolWithTag, NumberOfBytes[0]);
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
      else
      {
        CertificateSize = -1071774450;
      }
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4D504F47u);
    UserSessionSwitchLeaveCrit();
    if ( CertificateSize < 0 )
      return (unsigned int)CertificateSize;
    return v10;
  }
  return result;
}
