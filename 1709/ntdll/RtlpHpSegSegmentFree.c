/*
 * XREFs of RtlpHpSegSegmentFree @ 0x1800620C0
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1800036E8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegContextCleanup @ 0x18006172C (RtlpHpSegContextCleanup.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlCSparseBitmapBitsClear @ 0x18006213C (RtlCSparseBitmapBitsClear.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     RtlpHeapLogRangeRelease @ 0x1800FFA98 (RtlpHeapLogRangeRelease.c)
 *     RtlpHpTlLogVAChange @ 0x180106054 (RtlpHpTlLogVAChange.c)
 */

int __fastcall RtlpHpSegSegmentFree(_DWORD *a1, unsigned __int64 a2, int a3)
{
  struct _PEB *v4; // rax
  __int64 v5; // rcx
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+20h] BYREF

  BaseAddress = (PVOID)a2;
  if ( a3 )
    RtlCSparseBitmapBitsClear(a1, 2 * (a2 >> 20), 2 * ((unsigned __int64)(unsigned int)-*a1 >> 20));
  RegionSize = 0LL;
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(0x8000LL, RegionSize, BaseAddress);
  LODWORD(v4) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v4 )
  {
    v4 = NtCurrentPeb();
    v5 = (__int64)v4->SharedData + 558;
  }
  else
  {
    v5 = 2147353480LL;
  }
  if ( *(_BYTE *)v5 )
    LODWORD(v4) = RtlpHeapLogRangeRelease(a1, BaseAddress, RegionSize);
  return (int)v4;
}
