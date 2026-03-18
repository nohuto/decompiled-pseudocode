/*
 * XREFs of AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14008A1B0
 * Callers:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14008A070 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14008A4C0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x14008A6D0 (AuthzBasepGetSecurityAttributeValueCopyoutBufferSize.c)
 */

__int64 __fastcall AuthzBasepGetSecurityAttributesCopyoutBufferSize(
        unsigned int *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned __int64 v9; // rbx
  unsigned int v10; // r15d
  __int64 SecurityAttribute; // rax
  __int64 v12; // r11
  unsigned int *v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 *v15; // r11
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
  {
    if ( is_mul_ok(0x28uLL, *a1) )
    {
      result = 0LL;
      v9 = 40LL * *a1 + 16;
      if ( v9 >= 0x10 )
      {
        v12 = *((_QWORD *)a1 + 1);
        v13 = a1 + 2;
        if ( (unsigned int *)v12 == a1 + 2 )
          goto LABEL_15;
        while ( 1 )
        {
          v14 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v14 < v9 || v14 + *(unsigned __int16 *)(v12 + 32) < v14 )
            break;
          v17 = v14 + *(unsigned __int16 *)(v12 + 32);
          result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(v12, &v17);
          if ( (int)result < 0 )
            return result;
          v12 = *v15;
          v9 = v17;
          if ( (unsigned int *)v12 == v13 )
            goto LABEL_15;
        }
      }
    }
    return 3221225621LL;
  }
  if ( !is_mul_ok(0x28uLL, a3) )
    return 3221225621LL;
  result = 0LL;
  v9 = 40LL * a3 + 16;
  if ( v9 < 0x10 )
    return 3221225621LL;
  v10 = 0;
  if ( !a3 )
  {
LABEL_15:
    *a4 = v9;
    return result;
  }
  while ( 1 )
  {
    SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, a2 + 16LL * v10);
    if ( !SecurityAttribute )
      return 3221226021LL;
    v16 = (v9 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v16 < v9 || v16 + *(unsigned __int16 *)(SecurityAttribute + 32) < v16 )
      return 3221225621LL;
    v17 = v16 + *(unsigned __int16 *)(SecurityAttribute + 32);
    result = AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(SecurityAttribute, &v17);
    if ( (int)result < 0 )
      return result;
    v9 = v17;
    if ( ++v10 >= a3 )
      goto LABEL_15;
  }
}
