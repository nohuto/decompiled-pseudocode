/*
 * XREFs of sub_180107D1C @ 0x180107D1C
 * Callers:
 *     sub_1801077AC @ 0x1801077AC (sub_1801077AC.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 */

void __fastcall sub_180107D1C(unsigned __int16 *a1)
{
  unsigned int *v1; // rbx
  unsigned __int16 *v2; // rsi
  __int64 v3; // rdi
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    BaseAddress = a1;
    do
    {
      v1 = (unsigned int *)(a1 + 6);
      v2 = *(unsigned __int16 **)a1;
      if ( a1[5] )
      {
        v3 = a1[5];
        do
        {
          ZwClose((HANDLE)*v1++);
          --v3;
        }
        while ( v3 );
      }
      RegionSize = 1LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      a1 = v2;
      BaseAddress = v2;
    }
    while ( v2 );
  }
}
