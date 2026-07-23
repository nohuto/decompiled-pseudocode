/*
 * XREFs of SepVerifyDesktopAppPolicyOverrideCaller @ 0x140246E14
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140066484 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140088710 (RtlQueryPackageClaims.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     PsReferenceEffectiveToken @ 0x14050B1D0 (PsReferenceEffectiveToken.c)
 */

char __fastcall SepVerifyDesktopAppPolicyOverrideCaller(HANDLE TokenHandle)
{
  bool v2; // si
  __int64 v3; // rbx
  _KPROCESS *Process; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  char v8; // [rsp+48h] [rbp-C0h] BYREF
  int v9; // [rsp+4Ch] [rbp-BCh] BYREF
  _PS_PKG_CLAIM PkgClaim; // [rsp+50h] [rbp-B8h] BYREF
  ULONG_PTR PackageSize; // [rsp+58h] [rbp-B0h] BYREF
  ULONG_PTR v12; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v13; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String2; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-88h] BYREF
  WCHAR PackageFullName[128]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR v17[128]; // [rsp+198h] [rbp+90h] BYREF

  PkgClaim = 0LL;
  v9 = 0;
  v12 = 256LL;
  v2 = 0;
  PackageSize = 256LL;
  v8 = 0;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return 1;
  if ( RtlQueryPackageClaims(TokenHandle, PackageFullName, &PackageSize, 0LL, 0LL, 0LL, 0LL, 0LL) >= 0 )
  {
    v3 = PsReferenceEffectiveToken(
           (unsigned int)KeGetCurrentThread(),
           (unsigned int)&v9,
           (unsigned int)&v8,
           (unsigned int)&v13,
           0LL);
    if ( RtlQueryPackageClaims((HANDLE)v3, v17, &v12, 0LL, 0LL, 0LL, &PkgClaim, 0LL) >= 0 && (PkgClaim.Flags & 4) != 0 )
    {
      String1.Length = PackageSize - 2;
      String1.MaximumLength = PackageSize - 2;
      String1.Buffer = PackageFullName;
      String2.Length = v12 - 2;
      String2.MaximumLength = v12 - 2;
      String2.Buffer = v17;
      v2 = RtlCompareUnicodeString(&String1, &String2, 0) == 0;
    }
    if ( v3 )
    {
      if ( v9 == 1 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        _m_prefetchw(&Process[1].Affinity.Bitmap[5]);
        v5 = Process[1].Affinity.Bitmap[5];
        while ( (v3 ^ (unsigned __int64)v5) < 0xF )
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[5], v5 + 1, v5);
          if ( v6 == v5 )
            return v2;
        }
        ObfDereferenceObject((PVOID)v3);
      }
      else
      {
        ObfDereferenceObjectWithTag((PVOID)v3, 0x746C6644u);
      }
    }
  }
  return v2;
}
