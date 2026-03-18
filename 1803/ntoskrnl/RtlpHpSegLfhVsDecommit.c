/*
 * XREFs of RtlpHpSegLfhVsDecommit @ 0x1402981C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x140297D48 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeDecommit @ 0x140298A98 (RtlpHpSegPageRangeDecommit.c)
 */

unsigned __int64 __fastcall RtlpHpSegLfhVsDecommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v3; // edi
  __int64 v5; // rsi
  __int64 v6; // r11
  unsigned int v7; // edi
  _QWORD *v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 result; // rax

  v3 = a2;
  v5 = a3 >> 12;
  v6 = RtlpHpSegDescriptorValidate(a1, a2);
  v7 = (v3 - (unsigned int)((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) - ((unsigned int)v6 & *(_DWORD *)a1)) >> 12;
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
    return RtlpHpSegPageRangeDecommit(a1, v6, v7, (unsigned int)v5);
  v8 = *(_QWORD **)(a1 + 72);
  v9 = v8[1] >> *(_BYTE *)(a1 + 11);
  if ( v9 <= 8 )
    v9 = 8LL;
  v10 = v8[1] >> *(_BYTE *)(a1 + 12);
  v11 = v8[2];
  if ( v10 <= 8 )
    v10 = 8LL;
  if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
    v11 += v8[3];
  result = v11 + v5;
  if ( v11 + v5 > v9 || result > v10 )
    return RtlpHpSegPageRangeDecommit(a1, v6, v7, (unsigned int)v5);
  return result;
}
