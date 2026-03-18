/*
 * XREFs of RtlStringCbPrintfExW @ 0x140019CFC
 * Callers:
 *     RtlQueryPackageClaims @ 0x140019A60 (RtlQueryPackageClaims.c)
 *     PiNormalizeDeviceText @ 0x1405854E0 (PiNormalizeDeviceText.c)
 *     WmipGenerateBinaryMofNotification @ 0x140742F28 (WmipGenerateBinaryMofNotification.c)
 *     EtwpQueryPsmKey @ 0x14074391C (EtwpQueryPsmKey.c)
 *     ConvertDevpropcompkeyToString @ 0x140787F9C (ConvertDevpropcompkeyToString.c)
 *     ConvertDevpropertyToString @ 0x1407880DC (ConvertDevpropertyToString.c)
 *     PipCreateComputerId @ 0x140847C04 (PipCreateComputerId.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140019E0C (RtlStringVPrintfWorkerW.c)
 *     RtlStringExValidateDestW @ 0x1400DF9A4 (RtlStringExValidateDestW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1401FD728 (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1401FD754 (RtlStringExHandleOtherFlagsW.c)
 */

NTSTATUS RtlStringCbPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  size_t v7; // rdi
  int v10; // ebx
  wchar_t *v11; // r12
  NTSTRSAFE_PCWSTR v12; // r9
  size_t v13; // rax
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v7 = cbDest >> 1;
  v10 = RtlStringExValidateDestW(pszDest, cbDest >> 1, (const size_t)ppszDestEnd, dwFlags);
  if ( v10 < 0 )
  {
    if ( v7 )
      *pszDest = 0;
    return v10;
  }
  ppszDestEnda = pszDest;
  v11 = pszDest;
  pcchNewDestLength[0] = v7;
  if ( (dwFlags & 0x100) != 0 )
  {
    v12 = (NTSTRSAFE_PCWSTR)&pwsz;
    if ( pszFormat )
      v12 = pszFormat;
  }
  else
  {
    v12 = pszFormat;
  }
  v10 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v10 = -1073741811;
    if ( v7 )
      *pszDest = 0;
  }
  else
  {
    if ( !v7 )
    {
      if ( !*v12 )
        goto LABEL_11;
      v10 = pszDest != 0LL ? -2147483643 : -1073741811;
LABEL_10:
      if ( v10 >= 0 )
      {
LABEL_11:
        if ( ppszDestEnd )
          *ppszDestEnd = v11;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v7;
        return v10;
      }
      goto LABEL_19;
    }
    pcchNewDestLength[0] = 0LL;
    v10 = RtlStringVPrintfWorkerW(pszDest, v7, pcchNewDestLength, v12, va);
    v13 = pcchNewDestLength[0];
    v7 -= pcchNewDestLength[0];
    pcchNewDestLength[0] = v7;
    v11 = &pszDest[v13];
    ppszDestEnda = v11;
    if ( v10 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 )
        RtlStringExHandleFillBehindNullW(v11, (cbDest & 1) + 2 * v7, dwFlags);
      goto LABEL_10;
    }
  }
LABEL_19:
  if ( (dwFlags & 0x1C00) != 0 && cbDest )
  {
    RtlStringExHandleOtherFlagsW(pszDest, cbDest, 0LL, &ppszDestEnda, pcchNewDestLength, dwFlags);
    v11 = ppszDestEnda;
    v7 = pcchNewDestLength[0];
  }
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
    goto LABEL_11;
  return v10;
}
