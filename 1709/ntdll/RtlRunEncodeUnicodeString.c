/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x18008FD30
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x1800A0C00 (ZwQuerySystemTime.c)
 */

char __fastcall RtlRunEncodeUnicodeString(_BYTE *a1, unsigned __int16 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r9d
  __int64 v6; // rdx
  unsigned int v7; // r8d
  char v9; // [rsp+30h] [rbp+8h] BYREF
  char v10; // [rsp+31h] [rbp+9h]

  if ( !*a1 )
  {
    ZwQuerySystemTime(&v9);
    LOBYTE(v4) = v10;
    v7 = 1;
    *a1 = v10;
    if ( !(_BYTE)v4 )
    {
      do
      {
        if ( v7 >= 8 )
          break;
        v4 = v7++;
        *a1 |= *(&v9 + v4);
      }
      while ( !*a1 );
    }
    if ( !*a1 )
      *a1 = 1;
  }
  if ( *a2 )
  {
    LOBYTE(v4) = *a1 | 0x43;
    **((_BYTE **)a2 + 1) ^= v4;
  }
  v5 = 1;
  if ( *a2 > 1u )
  {
    do
    {
      v4 = v5 - 1;
      v6 = v5++;
      *(_BYTE *)(v6 + *((_QWORD *)a2 + 1)) ^= *a1 ^ *(_BYTE *)(v4 + *((_QWORD *)a2 + 1));
      LODWORD(v4) = *a2;
    }
    while ( v5 < (unsigned int)v4 );
  }
  return v4;
}
