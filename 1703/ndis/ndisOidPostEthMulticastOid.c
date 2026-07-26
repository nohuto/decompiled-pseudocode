/*
 * XREFs of ndisOidPostEthMulticastOid @ 0x1C0012BA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisPostOpenSetMulticastList @ 0x1C001DAB0 (ndisPostOpenSetMulticastList.c)
 *     ndisIfGetRcvAddressFromMiniport @ 0x1C001DB5C (ndisIfGetRcvAddressFromMiniport.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 */

__int64 __fastcall ndisOidPostEthMulticastOid(__int64 *a1)
{
  __int64 result; // rax
  _DWORD *v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v2 = (_DWORD *)a1[4];
  v4 = *a1;
  v5 = a1[3];
  if ( v2[1] == 1 && (!v4 || !*(_DWORD *)(v4 + 464)) )
  {
    if ( !v5 || (result = *(_QWORD *)(v5 + 16), !*(_DWORD *)(result + 464)) )
    {
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 + 464) && *((_DWORD *)a1 + 10) )
        {
          v6 = *(_QWORD *)(v4 + 400);
          memmove(*(void **)(v6 + 376), *(const void **)(v6 + 392), (unsigned int)(6 * *(_DWORD *)(v6 + 400)));
          *(_DWORD *)(v6 + 384) = *(_DWORD *)(v6 + 400);
        }
        result = ndisIfGetRcvAddressFromMiniport(v4);
      }
      if ( v5 )
      {
        result = *(_QWORD *)(v5 + 16);
        if ( !*(_DWORD *)(result + 464) && *((_DWORD *)a1 + 10) != -1073741637 )
        {
          result = ndisPostOpenSetMulticastList(v5, v2);
          if ( v2[8] == 16843011 )
          {
            result = (unsigned int)v2[36];
            v2[8] = result;
            v2[36] = 0;
          }
        }
      }
    }
  }
  return result;
}
