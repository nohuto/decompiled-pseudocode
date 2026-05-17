/*
 * XREFs of RtlpHpSegDescriptorValidate @ 0x180048670
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180047E80 (RtlpHpReAllocateHeap.c)
 *     RtlpHpSegFree @ 0x1800481C0 (RtlpHpSegFree.c)
 *     RtlpHpSegLfhVsCommit @ 0x180048300 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegReAlloc @ 0x180048744 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180049050 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpExtrasGet @ 0x180049278 (RtlpHpExtrasGet.c)
 *     RtlpHpSegSetExtraPresent @ 0x180049344 (RtlpHpSegSetExtraPresent.c)
 *     RtlpHpSegSize @ 0x180108A9C (RtlpHpSegSize.c)
 * Callees:
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1801088E8 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegDescriptorValidate(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 result; // rax

  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    result = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
  }
  else
  {
    v4 = a2 & *(_QWORD *)a1;
    if ( (a1 ^ v4 ^ RtlpHeapKey ^ *(_QWORD *)(v4 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      result = v4 + 32 * ((unsigned __int64)(unsigned int)(a2 - v4) >> *(_BYTE *)(a1 + 8));
    else
      result = 0LL;
  }
  if ( !result || (*(_BYTE *)(result + 24) & 1) == 0 )
    return 0LL;
  if ( (*(_BYTE *)(result + 24) & 2) == 0 )
  {
    result += -32LL * *(unsigned __int8 *)(result + 31);
    if ( (*(_BYTE *)(result + 24) & 1) != 0
      && (*(_BYTE *)(result + 24) & 2) != 0
      && (*(_BYTE *)(result + 24) & 0xC) != 0 )
    {
      return result;
    }
    return 0LL;
  }
  if ( (*(_BYTE *)(result + 24) & 0xC) == 0
    && a2 != (result & *(_QWORD *)a1) + ((result - (result & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) )
  {
    return 0LL;
  }
  return result;
}
