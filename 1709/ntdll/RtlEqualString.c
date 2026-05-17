/*
 * XREFs of RtlEqualString @ 0x180076E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180076F20 (RtlUpperChar.c)
 */

char __fastcall RtlEqualString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // r9
  _BYTE *v5; // rdi
  __int64 v6; // r14
  _BYTE *v7; // rsi
  __int64 v8; // r14
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // r14

  v3 = *a1;
  if ( (_DWORD)v3 != *a2 )
    return 0;
  v5 = (_BYTE *)*((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a2 + 1);
  v7 = &v5[v3];
  if ( a3 )
  {
    if ( v5 < v7 )
    {
      v8 = v6 - (_QWORD)v5;
      while ( 1 )
      {
        LOBYTE(a1) = v5[v8];
        if ( *v5 != (_BYTE)a1 )
        {
          v9 = RtlUpperChar(a1);
          LOBYTE(v10) = *v5;
          if ( (unsigned __int8)RtlUpperChar(v10) != v9 )
            break;
        }
        if ( ++v5 >= v7 )
          return 1;
      }
      return 0;
    }
  }
  else if ( v5 < v7 )
  {
    v11 = v6 - (_QWORD)v5;
    while ( *v5 == v5[v11] )
    {
      if ( ++v5 >= v7 )
        return 1;
    }
    return 0;
  }
  return 1;
}
