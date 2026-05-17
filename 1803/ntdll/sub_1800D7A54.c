/*
 * XREFs of sub_1800D7A54 @ 0x1800D7A54
 * Callers:
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 * Callees:
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D7D5C @ 0x1800D7D5C (sub_1800D7D5C.c)
 */

__int64 __fastcall sub_1800D7A54(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  if ( a11 )
    return (unsigned int)ZwAllocateVirtualMemory();
  else
    return 3221225485LL;
}
