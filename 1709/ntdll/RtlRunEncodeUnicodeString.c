/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x18008FD30
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x1800A0C00 (ZwQuerySystemTime.c)
 */

void __cdecl RtlRunEncodeUnicodeString(PUCHAR Seed, PUNICODE_STRING String)
{
  unsigned int i; // r9d
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // al
  unsigned int v8; // r8d
  __int64 v9; // rax
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !*Seed )
  {
    ZwQuerySystemTime(&SystemTime);
    v7 = BYTE1(SystemTime.LowPart);
    v8 = 1;
    *Seed = BYTE1(SystemTime.LowPart);
    if ( !v7 )
    {
      do
      {
        if ( v8 >= 8 )
          break;
        v9 = v8++;
        *Seed |= *((_BYTE *)&SystemTime.LowPart + v9);
      }
      while ( !*Seed );
    }
    if ( !*Seed )
      *Seed = 1;
  }
  if ( String->Length )
    *(_BYTE *)String->Buffer ^= *Seed | 0x43;
  for ( i = 1; i < String->Length; *((_BYTE *)String->Buffer + v6) ^= *Seed ^ *((_BYTE *)String->Buffer + v5) )
  {
    v5 = i - 1;
    v6 = i++;
  }
}
