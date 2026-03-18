/*
 * XREFs of MiPrefetchDriverPages @ 0x1405BB2D0
 * Callers:
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 * Callees:
 *     MiPrefetchVirtualMemory @ 0x14007F6B0 (MiPrefetchVirtualMemory.c)
 *     MiReadPteShadow @ 0x140122630 (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiPrefetchDriverPages(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  result = MiMakeDemandZeroPte(4);
  v5 = 0LL;
  v6 = result;
  v11 = 0LL;
  v7 = 0LL;
  v10 = 0LL;
  if ( v4 <= v8 )
  {
    do
    {
      result = *(_QWORD *)v4;
      if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
        result = MiReadPteShadow(v4, *(_QWORD *)v4);
      if ( (result & 1) == 0 && ((result & 0x400) != 0 || (result & 0x800) == 0 && result != v6) )
      {
        v9 = v4 << 25;
        result = 0LL;
        if ( !v5 )
        {
          v7 = v9 >> 16;
          v10 = v9 >> 16;
        }
        v5 = ((v9 + 0x10000000) >> 16) - v7;
        v11 = v5;
      }
      v4 += 8LL;
    }
    while ( v4 <= a2 );
    if ( v5 > 0x1000 )
      return MiPrefetchVirtualMemory(1uLL, (__int64)&v10, 1LL, 45);
  }
  return result;
}
