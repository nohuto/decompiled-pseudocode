/*
 * XREFs of RtlpHpSegReportPageRange @ 0x180108A2C
 * Callers:
 *     RtlpHpSegWalk @ 0x180061ADC (RtlpHpSegWalk.c)
 * Callees:
 *     RtlpHpSegSizeInternal @ 0x18004662C (RtlpHpSegSizeInternal.c)
 *     RtlpHpSegReportBusyBlock @ 0x180061EAC (RtlpHpSegReportBusyBlock.c)
 */

__int64 __fastcall RtlpHpSegReportPageRange(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // r9
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2 & *(_QWORD *)a1;
  v5 = v2 + 32 * ((unsigned __int64)(unsigned int)(*(_DWORD *)a2 - v2) >> *(_BYTE *)(a1 + 8));
  v6 = RtlpHpSegSizeInternal(a1, v5, *a2, v2, &v8);
  return RtlpHpSegReportBusyBlock((__int64 *)a1, (__int64 *)a2, v6, *(unsigned int *)(v5 + 4), v8);
}
