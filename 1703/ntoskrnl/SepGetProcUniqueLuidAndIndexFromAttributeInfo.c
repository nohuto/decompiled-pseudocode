/*
 * XREFs of SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140247DB4
 * Callers:
 *     SepGetProcUniqueLuidAndIndexFromToken @ 0x140247E80 (SepGetProcUniqueLuidAndIndexFromToken.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140248040 (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14008A590 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall SepGetProcUniqueLuidAndIndexFromAttributeInfo(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int SecurityAttributeAndValues; // r9d
  _QWORD v8[10]; // [rsp+20h] [rbp-78h] BYREF

  SecurityAttributeAndValues = -1073741275;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    LODWORD(v8[0]) = 0;
    memset(&v8[1], 0, 0x40uLL);
    LODWORD(v8[2]) = SepProcUniqueAttributeName;
    v8[3] = off_14033DDD8;
    v8[1] = a1;
    SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)v8);
    if ( SecurityAttributeAndValues >= 0 )
    {
      *a2 = *(_DWORD *)v8[6];
      SecurityAttributeAndValues = AuthzBasepQuerySecurityAttributeAndValues((__int64)v8);
      if ( SecurityAttributeAndValues >= 0 )
        *a3 = *(_QWORD *)v8[6];
    }
  }
  return (unsigned int)SecurityAttributeAndValues;
}
