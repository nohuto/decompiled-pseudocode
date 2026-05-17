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

unsigned int *__fastcall RtlpHpSegSegmentFree(_DWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned int *result; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v6 = a2;
  if ( a3 )
    RtlCSparseBitmapBitsClear(a1, 2 * (a2 >> 20), 2 * ((unsigned __int64)(unsigned int)-*a1 >> 20));
  v7 = 0LL;
  ZwFreeVirtualMemory(-1LL, &v6, &v7, 0x8000LL);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(0x8000LL, v7, v6);
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v5 = *((_QWORD *)result + 18) + 558LL;
  }
  else
  {
    v5 = 2147353480LL;
  }
  if ( *(_BYTE *)v5 )
    return (unsigned int *)RtlpHeapLogRangeRelease(a1, v6, v7);
  return result;
}
