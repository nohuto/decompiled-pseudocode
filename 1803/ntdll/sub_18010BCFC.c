/*
 * XREFs of sub_18010BCFC @ 0x18010BCFC
 * Callers:
 *     sub_18010B78C @ 0x18010B78C (sub_18010B78C.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

void __fastcall sub_18010BCFC(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (__int64)v1 + 12;
      v3 = (__int64 *)*a1;
      if ( *((_WORD *)a1 + 5) )
      {
        v4 = *((unsigned __int16 *)a1 + 5);
        do
        {
          ZwClose();
          v2 += 4LL;
          --v4;
        }
        while ( v4 );
      }
      ZwFreeVirtualMemory();
      a1 = v3;
      v1 = v3;
    }
    while ( v3 );
  }
}
