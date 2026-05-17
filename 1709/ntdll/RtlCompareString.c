/*
 * XREFs of RtlCompareString @ 0x18008AEF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x180076F20 (RtlUpperChar.c)
 */

__int64 __fastcall RtlCompareString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // r12d
  unsigned int v5; // eax
  char *v6; // rbx
  __int64 v7; // rdi
  char *v8; // rsi
  __int64 v9; // rdi
  char v10; // r14
  unsigned __int8 v12; // r15
  unsigned __int8 v13; // al
  int v14; // ecx
  __int64 v15; // rdi

  v3 = *a1;
  v4 = *a2;
  v5 = v3;
  v6 = (char *)*((_QWORD *)a1 + 1);
  v7 = *((_QWORD *)a2 + 1);
  if ( v3 > v4 )
    v5 = *a2;
  v8 = &v6[v5];
  if ( !a3 )
  {
    if ( v6 < v8 )
    {
      v15 = v7 - (_QWORD)v6;
      while ( 1 )
      {
        LOBYTE(v14) = *v6;
        v13 = v6[v15];
        if ( *v6 != v13 )
          break;
        if ( ++v6 >= v8 )
          return v3 - v4;
      }
      v14 = (unsigned __int8)v14;
      return v14 - (unsigned int)v13;
    }
    return v3 - v4;
  }
  if ( v6 >= v8 )
    return v3 - v4;
  v9 = v7 - (_QWORD)v6;
  while ( 1 )
  {
    v10 = v6[v9];
    if ( *v6 != v10 )
    {
      v12 = RtlUpperChar(*v6);
      v13 = RtlUpperChar(v10);
      if ( v12 != v13 )
        break;
    }
    if ( ++v6 >= v8 )
      return v3 - v4;
  }
  v14 = v12;
  return v14 - (unsigned int)v13;
}
