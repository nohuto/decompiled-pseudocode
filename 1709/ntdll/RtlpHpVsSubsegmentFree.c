/*
 * XREFs of RtlpHpVsSubsegmentFree @ 0x180061818
 * Callers:
 *     RtlpHpVsContextFree @ 0x18003E180 (RtlpHpVsContextFree.c)
 *     RtlpHpHeapDestroy @ 0x1800615DC (RtlpHpHeapDestroy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 (__fastcall *v4)(__int64, unsigned __int64, __int64, char); // rax
  __int64 v5; // r8
  __int64 v6; // rcx

  v3 = a3;
  v4 = (__int64 (__fastcall *)(__int64, unsigned __int64, __int64, char))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 72));
  v5 = 16 * ((unsigned int)*(unsigned __int16 *)(a2 + 32) + 3);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v4 == RtlpHpSegLfhVsFree )
    return RtlpHpSegLfhVsFree(v6, a2, v5, v3);
  else
    return v4(v6, a2, v5, v3);
}
