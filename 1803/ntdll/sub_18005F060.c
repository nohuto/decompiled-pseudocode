/*
 * XREFs of sub_18005F060 @ 0x18005F060
 * Callers:
 *     sub_18005EE4C @ 0x18005EE4C (sub_18005EE4C.c)
 *     sub_18005F008 @ 0x18005F008 (sub_18005F008.c)
 *     sub_180105B24 @ 0x180105B24 (sub_180105B24.c)
 * Callees:
 *     ZwAllocateVirtualMemoryEx @ 0x18009B930 (ZwAllocateVirtualMemoryEx.c)
 */

__int64 __fastcall sub_18005F060(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r9d
  __int64 v9; // rax
  _QWORD v11[8]; // [rsp+40h] [rbp-40h] BYREF

  v8 = a4 & 0xBFFFFFFF;
  if ( (v8 & 0x2000) != 0 )
  {
    v9 = 0LL;
    v11[2] = a3;
    v11[1] = 0LL;
    v11[4] = v11;
    v11[3] = 1LL;
    if ( (v8 & 0x40000) != 0 )
      v9 = 0x100000000LL;
    v11[0] = v9;
    if ( a8 )
    {
      v11[6] = a8;
      v11[5] = 3LL;
    }
  }
  return ZwAllocateVirtualMemoryEx(-1LL, a1, a2);
}
