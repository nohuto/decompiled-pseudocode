/*
 * XREFs of RtlpHpSegSetExtraPresent @ 0x140299200
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140294984 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpVsChunkSetExtraPresent @ 0x1402978CC (RtlpHpVsChunkSetExtraPresent.c)
 *     RtlpHpSegDescriptorValidate @ 0x140297D48 (RtlpHpSegDescriptorValidate.c)
 */

__int64 __fastcall RtlpHpSegSetExtraPresent(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // rcx

  result = RtlpHpSegDescriptorValidate(a1, a2);
  if ( (*(_BYTE *)(result + 24) & 0xCu) < 8 )
  {
    *(_WORD *)(result + 8) |= 1u;
  }
  else if ( (*(_BYTE *)(result + 24) & 0xC) == 8 )
  {
    v5 = ((result - (result & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) + (result & *(_QWORD *)a1);
    v6 = (unsigned __int16)qword_1403A5F28 ^ *(unsigned __int16 *)(v5 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v5 >> 12);
    result = 0x4000LL;
    *(_WORD *)(v6 + a2 - 2) |= 0x4000u;
  }
  else
  {
    return RtlpHpVsChunkSetExtraPresent(*(_QWORD *)(a1 + 88), a2);
  }
  return result;
}
