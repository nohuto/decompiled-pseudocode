/*
 * XREFs of RtlStringCbCopyUnicodeString @ 0x1C00743D8
 * Callers:
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0073E20 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 * Callees:
 *     RtlUnicodeStringValidateSrcWorker @ 0x1C0065AAC (RtlUnicodeStringValidateSrcWorker.c)
 */

__int64 __fastcall RtlStringCbCopyUnicodeString(
        wchar_t *pszDest,
        unsigned __int64 cbDest,
        const _UNICODE_STRING *SourceString)
{
  unsigned __int64 v3; // rdi
  int v5; // ecx
  unsigned __int64 v6; // rdx
  signed __int64 v7; // r8
  unsigned __int64 cchSrcLength; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *pszSrc; // [rsp+58h] [rbp+20h] BYREF

  v3 = cbDest >> 1;
  v5 = 0;
  if ( (cbDest >> 1) - 1 > 0x7FFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    v5 = RtlUnicodeStringValidateSrcWorker(SourceString, &pszSrc, &cchSrcLength, (const unsigned __int64)SourceString);
    if ( v5 >= 0 )
    {
      v5 = 0;
      if ( !v3 )
        goto LABEL_10;
      v6 = cchSrcLength - v3;
      v7 = (char *)pszSrc - (char *)pszDest;
      do
      {
        if ( !(v6 + v3) )
          break;
        *pszDest = *(wchar_t *)((char *)pszDest + v7);
        ++pszDest;
        --v3;
      }
      while ( v3 );
      if ( !v3 )
      {
LABEL_10:
        --pszDest;
        v5 = -2147483643;
      }
    }
    *pszDest = 0;
  }
  return (unsigned int)v5;
}
