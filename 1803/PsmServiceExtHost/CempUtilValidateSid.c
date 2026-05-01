/*
 * XREFs of CempUtilValidateSid @ 0x180028968
 * Callers:
 *     ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x180028918 (-HampAppInfoValidate@@YAJPEBGPEAEKK@Z.c)
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x18004138C (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 *     ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x18006308C (-HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempUtilValidateSid(PSID Sid, unsigned int a2)
{
  unsigned int v4; // ebx

  if ( a2 < 0xC )
  {
    return (unsigned int)-1073741584;
  }
  else
  {
    v4 = 0;
    if ( !RtlValidSid(Sid) || RtlLengthSid(Sid) != a2 )
      return (unsigned int)-1073741585;
  }
  return v4;
}
