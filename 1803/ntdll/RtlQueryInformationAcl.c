/*
 * XREFs of RtlQueryInformationAcl @ 0x18007AED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 */

__int64 __fastcall RtlQueryInformationAcl(__int64 a1, _DWORD *a2, unsigned int a3, int a4)
{
  unsigned __int8 v6; // cl
  int v7; // r9d
  char v8; // al
  int v9; // edx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v6 = *(_BYTE *)a1;
  if ( (unsigned __int8)(v6 - 2) <= 2u )
  {
    v7 = a4 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 3221225475LL;
      if ( a3 >= 0xC )
      {
        v8 = RtlFirstFreeAce(a1, &v13);
        v9 = 0;
        if ( v8 )
        {
          v10 = v13;
          *a2 = *(unsigned __int16 *)(a1 + 4);
          if ( v10 )
          {
            v11 = v10 - a1;
            a2[1] = v11;
            v9 = *(unsigned __int16 *)(a1 + 2) - v11;
          }
          else
          {
            a2[1] = *(unsigned __int16 *)(a1 + 2);
          }
          a2[2] = v9;
          return 0LL;
        }
        return 3221225485LL;
      }
    }
    else if ( a3 >= 4 )
    {
      *a2 = v6;
      return 0LL;
    }
    return 3221225507LL;
  }
  return 3221225485LL;
}
