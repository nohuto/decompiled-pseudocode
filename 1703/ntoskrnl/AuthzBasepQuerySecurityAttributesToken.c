/*
 * XREFs of AuthzBasepQuerySecurityAttributesToken @ 0x14008A070
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140065DA4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140089FD0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1400891D0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x14008A1B0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributesToken(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        size_t Size,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  __int64 result; // rax
  __int64 v12; // rcx
  unsigned __int16 v13; // dx
  int v14; // ebp
  size_t v15; // r15
  unsigned __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v6 = a6;
  result = 0LL;
  v16 = 0LL;
  *a6 = 0;
  if ( *a1 )
  {
    if ( a3 )
    {
      v12 = a2 + 2;
      while ( 1 )
      {
        v13 = *(_WORD *)(v12 - 2);
        if ( !v13 || !*(_WORD *)v12 || v13 > *(_WORD *)v12 || !*(_QWORD *)(v12 + 6) )
          return 3221225485LL;
        LODWORD(result) = result + 1;
        v12 += 16LL;
        if ( (unsigned int)result >= a3 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      result = AuthzBasepGetSecurityAttributesCopyoutBufferSize(a1, a2, a3, &v16);
      if ( (int)result >= 0 )
      {
        v14 = v16;
        if ( v16 )
        {
          v15 = (unsigned int)Size;
          if ( (unsigned int)Size < v16 )
          {
            result = 3221225507LL;
            *v6 = v16;
          }
          else
          {
            memset(a4, 0, (unsigned int)Size);
            result = AuthzBasepCopyoutSecurityAttributes((__int64)a1, a2, a3, a4, v15);
            *v6 = v14;
          }
        }
        else
        {
          return 3221225485LL;
        }
      }
    }
  }
  else
  {
    if ( (unsigned int)Size < 0x10 )
    {
      result = 3221225507LL;
    }
    else
    {
      *a4 = 0LL;
      a4[1] = 0LL;
      *(_WORD *)a4 = 1;
    }
    *v6 = 16;
  }
  return result;
}
