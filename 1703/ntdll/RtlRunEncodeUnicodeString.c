/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x1800E5920
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x1800A5E40 (ZwQuerySystemTime.c)
 */

char __fastcall RtlRunEncodeUnicodeString(_BYTE *a1, unsigned __int16 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*a1 )
  {
    ZwQuerySystemTime(v9);
    LOBYTE(v4) = BYTE1(v9[0]);
    v5 = 1;
    *a1 = BYTE1(v9[0]);
    if ( !(_BYTE)v4 )
    {
      do
      {
        if ( v5 >= 8 )
          break;
        v4 = v5++;
        *a1 |= *((_BYTE *)v9 + v4);
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
  v6 = 1;
  if ( *a2 > 1u )
  {
    do
    {
      v4 = v6 - 1;
      v7 = v6++;
      *(_BYTE *)(v7 + *((_QWORD *)a2 + 1)) ^= *a1 ^ *(_BYTE *)(v4 + *((_QWORD *)a2 + 1));
      LODWORD(v4) = *a2;
    }
    while ( v6 < (unsigned int)v4 );
  }
  return v4;
}
