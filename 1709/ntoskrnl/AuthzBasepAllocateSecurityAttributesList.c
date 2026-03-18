/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x14014C0E0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140017800 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14025E908 (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x14045CE28 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1405D05F4 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140731094 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x14001A9C8 (AuthzBasepMemAlloc.c)
 *     memset @ 0x140192F40 (memset.c)
 */

_QWORD *__fastcall AuthzBasepAllocateSecurityAttributesList(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = AuthzBasepMemAlloc(0x30uLL, a2, 0x74416553u);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0x30uLL);
    v3[2] = v3 + 1;
    v3[1] = v3 + 1;
    *(_DWORD *)v3 = 0;
    v3[5] = v3 + 4;
    v3[4] = v3 + 4;
    *((_DWORD *)v3 + 6) = 0;
  }
  return v3;
}
