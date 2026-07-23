/*
 * XREFs of RtlpHpSegPageRangeDecommit @ 0x18004A1DC
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x180037818 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegAlloc @ 0x18003827C (RtlpHpSegAlloc.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180049050 (RtlpHpSegLfhVsDecommit.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpSegPageRangeHandleCommit @ 0x1800484A0 (RtlpHpSegPageRangeHandleCommit.c)
 *     RtlpHpSegUpdateCommit @ 0x18004A9CC (RtlpHpSegUpdateCommit.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     RtlpLogHeapDecommit @ 0x1801015B0 (RtlpLogHeapDecommit.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpSegPageRangeDecommit(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-8h] BYREF
  int v12; // [rsp+70h] [rbp+30h] BYREF
  int v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = a4;
  v12 = a3;
  v6 = RtlpHpSegPageRangeHandleCommit(a1, a2, &v12, &v13, 2);
  if ( v6 )
  {
    v7 = a2 & *(_QWORD *)a1;
    RegionSize = (unsigned int)(v13 << 12);
    BaseAddress = (PVOID)(v7 + ((a2 - v7) >> 5 << *(_BYTE *)(a1 + 8)) + (unsigned int)(v12 << 12));
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogVAChange(0x4000LL, RegionSize, BaseAddress);
    RtlpHpSegUpdateCommit(a1, a2, v6);
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v8 = 2147353472LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapDecommit(*(_QWORD *)(a1 + 96), BaseAddress, RegionSize, 13LL);
  }
  return -v6;
}
