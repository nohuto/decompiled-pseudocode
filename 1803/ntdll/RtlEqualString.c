/*
 * XREFs of RtlEqualString @ 0x180080560
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180080600 (RtlUpperChar.c)
 */

char __fastcall RtlEqualString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // r9
  _BYTE *v5; // rdi
  _BYTE *v6; // rsi
  __int64 v7; // r14
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rcx

  v3 = *a1;
  if ( (_DWORD)v3 != *a2 )
    return 0;
  v5 = (_BYTE *)*((_QWORD *)a1 + 1);
  v6 = &v5[v3];
  if ( a3 )
  {
    if ( v5 < v6 )
    {
      v7 = *((_QWORD *)a2 + 1) - (_QWORD)v5;
      while ( 1 )
      {
        LOBYTE(a1) = v5[v7];
        if ( *v5 != (_BYTE)a1 )
        {
          v8 = RtlUpperChar(a1);
          LOBYTE(v9) = *v5;
          if ( (unsigned __int8)RtlUpperChar(v9) != v8 )
            break;
        }
        if ( ++v5 >= v6 )
          return 1;
      }
      return 0;
    }
  }
  else if ( v5 < v6 )
  {
    v10 = *((_QWORD *)a2 + 1) - (_QWORD)v5;
    while ( *v5 == v5[v10] )
    {
      if ( ++v5 >= v6 )
        return 1;
    }
    return 0;
  }
  return 1;
}
