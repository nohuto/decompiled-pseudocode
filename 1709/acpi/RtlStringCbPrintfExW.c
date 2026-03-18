/*
 * XREFs of RtlStringCbPrintfExW @ 0x1C001127C
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C008D524 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0093D74 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C00940AC (ACPIBusIrpQueryDeviceId.c)
 * Callees:
 *     memset @ 0x1C002C4C0 (memset.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C00428F4 (RtlStringExHandleOtherFlagsW.c)
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
  NTSTATUS v9; // ebx
  NTSTRSAFE_PWSTR v10; // r13
  NTSTRSAFE_PCWSTR v11; // r8
  unsigned __int64 v12; // rsi
  int v13; // eax
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchRemaining[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list Args; // [rsp+C0h] [rbp+78h] BYREF

  va_start(Args, pszFormat);
  v7 = cbDest >> 1;
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v7 || v7 > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( v7 )
      *pszDest = 0;
    return v9;
  }
  ppszDestEnda = pszDest;
  v10 = pszDest;
  pcchRemaining[0] = cbDest >> 1;
  if ( (dwFlags & 0x100) != 0 )
  {
    v11 = &word_1C00682B8;
    if ( pszFormat )
      v11 = pszFormat;
  }
  else
  {
    v11 = pszFormat;
  }
  v9 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v9 = -1073741811;
    if ( v7 )
      *pszDest = 0;
    goto LABEL_31;
  }
  if ( !v7 )
  {
    if ( !*v11 )
      goto LABEL_16;
    v9 = pszDest != 0LL ? -2147483643 : -1073741811;
LABEL_15:
    if ( v9 >= 0 )
    {
LABEL_16:
      if ( ppszDestEnd )
        *ppszDestEnd = v10;
      if ( pcbRemaining )
        *pcbRemaining = (cbDest & 1) + 2 * v7;
      return v9;
    }
    goto LABEL_31;
  }
  v12 = v7 - 1;
  v13 = _vsnwprintf(pszDest, v7 - 1, v11, Args);
  if ( v13 < 0 || v13 > v12 )
  {
    v9 = -2147483643;
  }
  else if ( v13 != v12 )
  {
    v12 = v13;
    goto LABEL_13;
  }
  pszDest[v12] = 0;
LABEL_13:
  v7 -= v12;
  v10 = &pszDest[v12];
  ppszDestEnda = v10;
  pcchRemaining[0] = v7;
  if ( v9 >= 0 )
  {
    if ( (dwFlags & 0x200) != 0 )
    {
      v11 = (NTSTRSAFE_PCWSTR)((cbDest & 1) + 2 * v7);
      if ( (unsigned __int64)v11 > 2 )
        memset(v10 + 1, (unsigned __int8)dwFlags, (size_t)(v11 - 1));
    }
    goto LABEL_15;
  }
LABEL_31:
  if ( (dwFlags & 0x1C00) != 0 && cbDest )
  {
    RtlStringExHandleOtherFlagsW(pszDest, cbDest, (size_t)v11, &ppszDestEnda, pcchRemaining, dwFlags);
    v10 = ppszDestEnda;
    v7 = pcchRemaining[0];
  }
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    goto LABEL_16;
  return v9;
}
