/*
 * XREFs of EtwpQueryTokenPackageInfo @ 0x1404F8DC4
 * Callers:
 *     EtwpBuildProcessEvent @ 0x1404F8968 (EtwpBuildProcessEvent.c)
 *     EtwTraceAppStateChange @ 0x140510E74 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140561188 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1407AFB10 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14006E7F0 (RtlQueryPackageIdentity.c)
 *     PsQueryProcessAttributesByToken @ 0x1404F8FA0 (PsQueryProcessAttributesByToken.c)
 */

__int64 __fastcall EtwpQueryTokenPackageInfo(HANDLE TokenHandle, WCHAR *PackageSize, _DWORD *a3)
{
  PSIZE_T AppIdSize; // rdi
  __int64 result; // rax
  char v8; // [rsp+58h] [rbp+10h] BYREF
  char v9; // [rsp+68h] [rbp+20h] BYREF

  AppIdSize = (PSIZE_T)(PackageSize + 4);
  *(_QWORD *)PackageSize = 0LL;
  *((_QWORD *)PackageSize + 1) = 0LL;
  PsQueryProcessAttributesByToken(TokenHandle, &v8, &v9);
  if ( v8 )
  {
    *a3 |= 1u;
    *(_QWORD *)PackageSize = 256LL;
    *AppIdSize = 130LL;
    if ( RtlQueryPackageIdentity(TokenHandle, PackageSize + 8, (PSIZE_T)PackageSize, PackageSize + 136, AppIdSize, 0LL) < 0 )
    {
      *(_QWORD *)PackageSize = 0LL;
      *AppIdSize = 0LL;
    }
    if ( v9 )
      *a3 |= 8u;
  }
  result = 2LL;
  if ( !*(_QWORD *)PackageSize )
  {
    *(_QWORD *)PackageSize = 2LL;
    PackageSize[8] = 0;
  }
  if ( !*AppIdSize )
  {
    *AppIdSize = 2LL;
    PackageSize[136] = 0;
  }
  return result;
}
