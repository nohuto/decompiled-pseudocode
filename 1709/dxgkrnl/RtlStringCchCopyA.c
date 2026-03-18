/*
 * XREFs of RtlStringCchCopyA @ 0x1C0028638
 * Callers:
 *     ?AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2@Z @ 0x1C01A98F0 (-AddDripsBlocker@DripsBlockerInfoList@@QEAAJW4_SLEEPSTUDY_CONNECTION_ID@@U_STRING@@_K2@Z.c)
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_K@Z @ 0x1C01ABA2C (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  NTSTATUS v3; // r9d
  __int64 v4; // rdx
  signed __int64 v5; // r8
  char v6; // al

  v3 = 0;
  v4 = 16LL;
  v5 = pszSrc - pszDest;
  do
  {
    if ( v4 == -2147483630 )
      break;
    v6 = pszDest[v5];
    if ( !v6 )
      break;
    *pszDest++ = v6;
    --v4;
  }
  while ( v4 );
  if ( !v4 )
  {
    --pszDest;
    v3 = -2147483643;
  }
  *pszDest = 0;
  return v3;
}
