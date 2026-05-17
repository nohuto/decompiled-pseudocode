/*
 * XREFs of RtlCreateAcl @ 0x180030680
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002EB0 (RtlDefaultNpAcl.c)
 *     sub_18002E668 @ 0x18002E668 (sub_18002E668.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800302AC @ 0x1800302AC (sub_1800302AC.c)
 *     RtlCheckTokenCapability @ 0x180030720 (RtlCheckTokenCapability.c)
 *     RtlCheckSandboxedToken @ 0x18006B8E0 (RtlCheckSandboxedToken.c)
 *     RtlCreateAndSetSD @ 0x18006BEC0 (RtlCreateAndSetSD.c)
 *     sub_180086C80 @ 0x180086C80 (sub_180086C80.c)
 *     sub_1800E0748 @ 0x1800E0748 (sub_1800E0748.c)
 *     sub_1800E0A40 @ 0x1800E0A40 (sub_1800E0A40.c)
 *     sub_1800E1800 @ 0x1800E1800 (sub_1800E1800.c)
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
