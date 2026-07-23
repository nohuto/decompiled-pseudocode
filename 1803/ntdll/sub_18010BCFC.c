/*
 * XREFs of sub_18010BCFC @ 0x18010BCFC
 * Callers:
 *     sub_18010B78C @ 0x18010B78C (sub_18010B78C.c)
 * Callees:
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

void __fastcall sub_18010BCFC(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rbx
  unsigned int *v2; // rbx
  unsigned __int16 *v3; // rsi
  __int64 v4; // rdi
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 )
  {
    BaseAddress = a1;
    v1 = a1;
    do
    {
      v2 = (unsigned int *)(v1 + 6);
      v3 = *(unsigned __int16 **)a1;
      if ( a1[5] )
      {
        v4 = a1[5];
        do
        {
          ZwClose((HANDLE)*v2++);
          --v4;
        }
        while ( v4 );
      }
      RegionSize = 1LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      a1 = v3;
      v1 = v3;
      BaseAddress = v3;
    }
    while ( v3 );
  }
}
