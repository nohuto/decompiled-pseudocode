/*
 * XREFs of MiLocateCombineBlock @ 0x1400E9FE0
 * Callers:
 *     MiAllocateCombineProto @ 0x1400E6D7C (MiAllocateCombineProto.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall MiLocateCombineBlock(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 **result; // rax
  unsigned int v4; // r8d
  unsigned __int64 v5; // rcx
  unsigned int v6; // ecx

  result = *(__int64 ***)(a1 + 16 * ((a2 & 0xF) + 6));
  if ( result )
  {
    v4 = a3 & 0x1F;
    while ( 1 )
    {
      v5 = (unsigned __int64)result[3];
      if ( a2 > v5 )
        break;
      if ( a2 >= v5 )
      {
        v6 = (_DWORD)result[5] & 0x1F;
        if ( v4 > v6 )
          break;
        if ( v4 >= v6 )
          return result;
      }
      result = (__int64 **)*result;
LABEL_7:
      if ( !result )
        return 0LL;
    }
    result = (__int64 **)result[1];
    goto LABEL_7;
  }
  return 0LL;
}
