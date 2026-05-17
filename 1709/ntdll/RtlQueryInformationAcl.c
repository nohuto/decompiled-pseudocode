/*
 * XREFs of RtlQueryInformationAcl @ 0x18007DCE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x18002D790 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlQueryInformationAcl(unsigned __int8 *a1, _DWORD *a2, unsigned int a3, int a4)
{
  int v6; // r9d
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)(*a1 - 2) <= 2u )
  {
    v6 = a4 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 3221225475LL;
      if ( a3 >= 0xC )
      {
        if ( RtlFirstFreeAce((__int64)a1, &v10) )
        {
          v7 = v10;
          *a2 = *((unsigned __int16 *)a1 + 2);
          if ( v7 )
          {
            v8 = v7 - (_DWORD)a1;
            a2[1] = v8;
            a2[2] = *((unsigned __int16 *)a1 + 1) - v8;
          }
          else
          {
            *(_QWORD *)(a2 + 1) = *((unsigned __int16 *)a1 + 1);
          }
          return 0LL;
        }
        return 3221225485LL;
      }
    }
    else if ( a3 >= 4 )
    {
      *a2 = *a1;
      return 0LL;
    }
    return 3221225507LL;
  }
  return 3221225485LL;
}
