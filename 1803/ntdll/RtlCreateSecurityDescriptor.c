/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x18002ED10
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     RtlCheckTokenCapability @ 0x180030720 (RtlCheckTokenCapability.c)
 *     RtlCheckSandboxedToken @ 0x18006B8E0 (RtlCheckSandboxedToken.c)
 *     RtlCreateAndSetSD @ 0x18006BEC0 (RtlCreateAndSetSD.c)
 *     sub_180086C80 @ 0x180086C80 (sub_180086C80.c)
 *     sub_18008A0A4 @ 0x18008A0A4 (sub_18008A0A4.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall RtlCreateSecurityDescriptor(_BYTE *a1, int a2)
{
  __int64 result; // rax

  if ( a2 != 1 )
    return 3221225560LL;
  memset(a1, 0, 0x28uLL);
  result = 0LL;
  *a1 = 1;
  return result;
}
