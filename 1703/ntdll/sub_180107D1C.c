/*
 * XREFs of sub_180107D1C @ 0x180107D1C
 * Callers:
 *     sub_1801077AC @ 0x1801077AC (sub_1801077AC.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 */

void __fastcall sub_180107D1C(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rsi
  __int64 v3; // rdi

  if ( a1 )
  {
    do
    {
      v1 = (__int64)a1 + 12;
      v2 = (__int64 *)*a1;
      if ( *((_WORD *)a1 + 5) )
      {
        v3 = *((unsigned __int16 *)a1 + 5);
        do
        {
          ZwClose();
          v1 += 4LL;
          --v3;
        }
        while ( v3 );
      }
      ZwFreeVirtualMemory();
      a1 = v2;
    }
    while ( v2 );
  }
}
