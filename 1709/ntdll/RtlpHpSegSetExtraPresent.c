/*
 * XREFs of RtlpHpSegSetExtraPresent @ 0x180049344
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x1800493D8 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x180048670 (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSegSetExtraPresent(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // rcx

  result = RtlpHpSegDescriptorValidate(a1, a2);
  if ( (*(_BYTE *)(result + 24) & 0xC) != 0 )
  {
    v5 = (result & *(_QWORD *)a1) + ((result - (result & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( (*(_BYTE *)(result + 24) & 4) != 0 )
    {
      result = (unsigned __int16)RtlpLFHKey;
      v6 = (unsigned __int16)RtlpLFHKey ^ *(unsigned __int16 *)(v5 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v5 >> 12);
    }
    else
    {
      result = WORD1(RtlpHeapKey);
      v6 = 16 * (WORD1(RtlpHeapKey) ^ ((unsigned int)(a2 - 16) >> 16) ^ *(unsigned __int16 *)(a2 - 16 + 2)) - 16;
    }
    *(_WORD *)(v6 + a2 - 2) |= 0x4000u;
  }
  else
  {
    *(_WORD *)(result + 8) |= 1u;
  }
  return result;
}
