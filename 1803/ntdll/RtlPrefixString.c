/*
 * XREFs of RtlPrefixString @ 0x1800804D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180080600 (RtlUpperChar.c)
 */

char __fastcall RtlPrefixString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // r9
  _BYTE *v4; // rdi
  _BYTE *v5; // rsi
  __int64 v6; // r14
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rcx

  v3 = *a1;
  v4 = (_BYTE *)*((_QWORD *)a1 + 1);
  if ( *a2 >= (unsigned int)v3 )
  {
    v5 = &v4[v3];
    if ( a3 )
    {
      if ( v4 < v5 )
      {
        v6 = *((_QWORD *)a2 + 1) - (_QWORD)v4;
        while ( 1 )
        {
          if ( *v4 != v4[v6] )
          {
            v8 = ((__int64 (*)(void))RtlUpperChar)();
            LOBYTE(v9) = *v4;
            if ( (unsigned __int8)RtlUpperChar(v9) != v8 )
              break;
          }
          if ( ++v4 >= v5 )
            return 1;
        }
        return 0;
      }
    }
    else if ( v4 < v5 )
    {
      v10 = *((_QWORD *)a2 + 1) - (_QWORD)v4;
      while ( *v4 == v4[v10] )
      {
        if ( ++v4 >= v5 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return 0;
}
