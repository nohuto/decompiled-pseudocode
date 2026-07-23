/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x1800E5920
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x1800A5E40 (ZwQuerySystemTime.c)
 */

void __cdecl RtlRunEncodeUnicodeString(PUCHAR Seed, PUNICODE_STRING String)
{
  char v4; // al
  unsigned int v5; // r8d
  __int64 v6; // rax
  unsigned int i; // r9d
  __int64 v8; // rax
  __int64 v9; // rdx
  LARGE_INTEGER SystemTime; // [rsp+20h] [rbp-18h] BYREF

  if ( !*Seed )
  {
    ZwQuerySystemTime(&SystemTime);
    v4 = BYTE1(SystemTime.LowPart);
    v5 = 1;
    *Seed = BYTE1(SystemTime.LowPart);
    if ( !v4 )
    {
      do
      {
        if ( v5 >= 8 )
          break;
        v6 = v5++;
        *Seed |= *((_BYTE *)&SystemTime.LowPart + v6);
      }
      while ( !*Seed );
    }
    if ( !*Seed )
      *Seed = 1;
  }
  if ( String->Length )
    *(_BYTE *)String->Buffer ^= *Seed | 0x43;
  for ( i = 1; i < String->Length; *((_BYTE *)String->Buffer + v9) ^= *Seed ^ *((_BYTE *)String->Buffer + v8) )
  {
    v8 = i - 1;
    v9 = i++;
  }
}
