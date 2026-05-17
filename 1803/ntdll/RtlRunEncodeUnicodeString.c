/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x1800894B0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x18009B600 (ZwQuerySystemTime.c)
 */

__int64 __fastcall RtlRunEncodeUnicodeString(char *a1, unsigned __int16 *a2)
{
  char v2; // r8
  __int64 result; // rax
  unsigned int i; // r9d
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // al
  unsigned int v10; // r8d
  __int64 v11; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF
  char v13; // [rsp+31h] [rbp+9h]

  v2 = *a1;
  if ( !*a1 )
  {
    ZwQuerySystemTime(&v12);
    v9 = v13;
    v10 = 1;
    *a1 = v13;
    if ( !v9 )
    {
      do
      {
        if ( v10 >= 8 )
          break;
        v11 = v10++;
        *a1 |= *(&v12 + v11);
      }
      while ( !*a1 );
    }
    v2 = *a1;
    if ( !*a1 )
    {
      *a1 = 1;
      v2 = 1;
    }
  }
  result = *a2;
  if ( (_WORD)result )
  {
    **((_BYTE **)a2 + 1) ^= v2 | 0x43;
    result = *a2;
  }
  for ( i = 1; i < (unsigned int)result; result = *a2 )
  {
    v7 = i - 1;
    v8 = i++;
    *(_BYTE *)(v8 + *((_QWORD *)a2 + 1)) ^= *a1 ^ *(_BYTE *)(v7 + *((_QWORD *)a2 + 1));
  }
  return result;
}
