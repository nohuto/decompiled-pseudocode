/*
 * XREFs of AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize @ 0x14045CAF8
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x14045CA70 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x140014328 (AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize.c)
 */

__int64 __fastcall AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize(unsigned int *a1, unsigned int *a2)
{
  unsigned __int64 v4; // r8
  int v5; // eax
  signed int InternalSecurityAttributeValueCopyoutBufferSize; // edx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int *v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 && a2 )
  {
    v4 = 112LL * *a1;
    v5 = -1;
    if ( v4 <= 0xFFFFFFFF )
      v5 = 112 * *a1;
    InternalSecurityAttributeValueCopyoutBufferSize = v4 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v4 <= 0xFFFFFFFF )
    {
      v7 = v5 + 48;
      v8 = -1;
      if ( v7 >= 0x30 )
        v8 = v7;
      InternalSecurityAttributeValueCopyoutBufferSize = v7 < 0x30 ? 0xC0000095 : 0;
      if ( v7 >= 0x30 )
      {
        v9 = a1 + 2;
        v10 = *((_QWORD *)a1 + 1);
        while ( (unsigned int *)v10 != v9 )
        {
          v11 = (v8 + 1) & 0xFFFFFFFE;
          if ( v11 < v8 )
            return (unsigned int)-1073741675;
          v12 = -1;
          v13 = v11 + *(unsigned __int16 *)(v10 + 32);
          if ( v13 >= v11 )
            v12 = v11 + *(unsigned __int16 *)(v10 + 32);
          InternalSecurityAttributeValueCopyoutBufferSize = v13 < v11 ? 0xC0000095 : 0;
          v15 = v12;
          if ( v13 < v11 )
            return (unsigned int)InternalSecurityAttributeValueCopyoutBufferSize;
          InternalSecurityAttributeValueCopyoutBufferSize = AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(
                                                              v10,
                                                              &v15);
          if ( InternalSecurityAttributeValueCopyoutBufferSize < 0 )
            return (unsigned int)InternalSecurityAttributeValueCopyoutBufferSize;
          v10 = *(_QWORD *)v10;
          v8 = v15;
        }
        if ( InternalSecurityAttributeValueCopyoutBufferSize >= 0 )
          *a2 = v8;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)InternalSecurityAttributeValueCopyoutBufferSize;
}
