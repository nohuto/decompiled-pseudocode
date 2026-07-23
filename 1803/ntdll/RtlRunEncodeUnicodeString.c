/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x1800894B0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x18009B600 (ZwQuerySystemTime.c)
 */

void __cdecl RtlRunEncodeUnicodeString(PUCHAR Seed, PUNICODE_STRING String)
{
  UCHAR v2; // r8
  USHORT Length; // ax
  unsigned int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // al
  unsigned int v10; // r8d
  __int64 v11; // rax
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp+8h] BYREF

  v2 = *Seed;
  if ( !*Seed )
  {
    ZwQuerySystemTime(&SystemTime);
    v9 = BYTE1(SystemTime.LowPart);
    v10 = 1;
    *Seed = BYTE1(SystemTime.LowPart);
    if ( !v9 )
    {
      do
      {
        if ( v10 >= 8 )
          break;
        v11 = v10++;
        *Seed |= *((_BYTE *)&SystemTime.LowPart + v11);
      }
      while ( !*Seed );
    }
    v2 = *Seed;
    if ( !*Seed )
    {
      *Seed = 1;
      v2 = 1;
    }
  }
  Length = String->Length;
  if ( String->Length )
  {
    *(_BYTE *)String->Buffer ^= v2 | 0x43;
    Length = String->Length;
  }
  v6 = 1;
  if ( Length > 1u )
  {
    do
    {
      v7 = v6 - 1;
      v8 = v6++;
      *((_BYTE *)String->Buffer + v8) ^= *Seed ^ *((_BYTE *)String->Buffer + v7);
    }
    while ( v6 < String->Length );
  }
}
