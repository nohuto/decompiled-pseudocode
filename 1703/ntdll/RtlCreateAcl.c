/*
 * XREFs of RtlCreateAcl @ 0x1800496D0
 * Callers:
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_180049308 @ 0x180049308 (sub_180049308.c)
 *     sub_18004B0E8 @ 0x18004B0E8 (sub_18004B0E8.c)
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 *     RtlCreateAndSetSD @ 0x180075B60 (RtlCreateAndSetSD.c)
 *     RtlDefaultNpAcl @ 0x18008C000 (RtlDefaultNpAcl.c)
 *     sub_18008CB8C @ 0x18008CB8C (sub_18008CB8C.c)
 *     sub_1800902F8 @ 0x1800902F8 (sub_1800902F8.c)
 *     sub_1800E5D78 @ 0x1800E5D78 (sub_1800E5D78.c)
 *     sub_1800E6AF4 @ 0x1800E6AF4 (sub_1800E6AF4.c)
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateAcl(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a2 < 8 )
    return 3221225507LL;
  if ( (unsigned int)(a3 - 2) > 2 || a2 > 0xFFFC )
    return 3221225485LL;
  result = 0LL;
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = 0;
  *(_WORD *)(a1 + 2) = a2 & 0xFFFC;
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
