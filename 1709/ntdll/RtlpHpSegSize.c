/*
 * XREFs of RtlpHpSegSize @ 0x180108A9C
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x180103004 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlpHpSegSizeInternal @ 0x18004662C (RtlpHpSegSizeInternal.c)
 *     RtlpHpSegDescriptorValidate @ 0x180048670 (RtlpHpSegDescriptorValidate.c)
 */

unsigned __int64 __fastcall RtlpHpSegSize(__int64 a1, unsigned __int64 a2, __int64 a3, int *a4)
{
  __int64 v7; // rax
  __int64 v8; // r9

  v7 = RtlpHpSegDescriptorValidate(a1, a2);
  if ( v7 )
    return RtlpHpSegSizeInternal(a1, v7, a2, v8, a4);
  else
    return -1LL;
}
