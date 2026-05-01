/*
 * XREFs of CempUtilPackageInfoInitialize @ 0x18002B7EC
 * Callers:
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x18004138C (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800288A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

NTSTATUS __fastcall CempUtilPackageInfoInitialize(char *a1, PSID SourceSid, __int64 a3, int a4, unsigned __int16 *a5)
{
  NTSTATUS result; // eax

  memset_0(a5, 0, 0xCCuLL);
  StringCchCopyW((char *)a5, 65LL, a1);
  result = RtlCopySid(0x44u, a5 + 66, SourceSid);
  *((_DWORD *)a5 + 50) = a4;
  return result;
}
