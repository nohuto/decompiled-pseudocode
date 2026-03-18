/*
 * XREFs of RtlStringCbCatW @ 0x1C0052298
 * Callers:
 *     UsbhBuildContainerID @ 0x1C00523B0 (UsbhBuildContainerID.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C0052314 (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x1C0052368 (RtlStringLengthWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbCatW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  int v3; // r9d
  size_t v4; // r11
  size_t v7; // rax
  size_t v9; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v4 = cbDest >> 1;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    v3 = RtlStringLengthWorkerW(pszDest, cbDest >> 1, &pcchLength);
    v7 = pcchLength;
  }
  if ( v3 >= 0 )
    return RtlStringCopyWorkerW(&pszDest[v7], v4 - v7, (size_t *)pszSrc, pszSrc, v9);
  return v3;
}
