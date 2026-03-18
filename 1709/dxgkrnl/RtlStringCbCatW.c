/*
 * XREFs of RtlStringCbCatW @ 0x1C0023D98
 * Callers:
 *     ?TranslateUmdFileNameToVm@@YAJPEAGI@Z @ 0x1C017F474 (-TranslateUmdFileNameToVm@@YAJPEAGI@Z.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x1C000BD2C (RtlStringLengthWorkerW.c)
 *     RtlStringCopyWorkerW_0 @ 0x1C0023DEC (RtlStringCopyWorkerW_0.c)
 */

NTSTATUS __stdcall RtlStringCbCatW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS result; // eax
  size_t *v6; // r8
  __int64 v7; // r11
  size_t v8; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+48h] [rbp+10h] BYREF

  pcchLength = cbDest;
  result = RtlStringLengthWorkerW(pszDest, 0x104uLL, &pcchLength);
  if ( result >= 0 )
    return RtlStringCopyWorkerW_0(&pszDest[pcchLength], v7 - pcchLength, v6, pszSrc, v8);
  return result;
}
