/*
 * XREFs of MiPrefetchDriverPages @ 0x140507470
 * Callers:
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 * Callees:
 *     MiPrefetchVirtualMemory @ 0x140109C80 (MiPrefetchVirtualMemory.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiPrefetchDriverPages(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  result = MiMakeDemandZeroPte(4);
  v5 = 0LL;
  v6 = result;
  v10 = 0LL;
  v7 = 0LL;
  v9 = 0LL;
  if ( v4 <= v8 )
  {
    do
    {
      result = *(_QWORD *)v4;
      if ( v4 >= 0xFFFFF6FB7DBED000uLL && v4 <= 0xFFFFF6FB7DBED7F8uLL )
        result = MiReadPteShadow();
      if ( (result & 1) == 0 && ((result & 0x400) != 0 || (result & 0x800) == 0 && result != v6) )
      {
        if ( !v5 )
        {
          v7 = (__int64)(v4 << 25) >> 16;
          v9 = v7;
        }
        result = 0LL;
        v5 = ((__int64)((v4 << 25) + 0x10000000) >> 16) - v7;
        v10 = v5;
      }
      v4 += 8LL;
    }
    while ( v4 <= a2 );
    if ( v5 > 0x1000 )
      return MiPrefetchVirtualMemory(1uLL, (__int64)&v9, 1LL, 45);
  }
  return result;
}
