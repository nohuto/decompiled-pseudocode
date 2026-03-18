/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x140298150
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x140297D48 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeCommit @ 0x140298980 (RtlpHpSegPageRangeCommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v4; // edi
  __int64 v6; // rax

  v4 = a2;
  v6 = RtlpHpSegDescriptorValidate(a1, a2);
  return RtlpHpSegPageRangeCommit(
           a1,
           v6,
           (v4
          - ((unsigned int)v6 & *(_DWORD *)a1)
          - (unsigned int)((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8))) >> 12,
           a3 >> 12);
}
