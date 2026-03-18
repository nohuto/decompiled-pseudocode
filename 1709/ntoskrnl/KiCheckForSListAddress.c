/*
 * XREFs of KiCheckForSListAddress @ 0x1401034E0
 * Callers:
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KxIsrLinkage @ 0x140183F10 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x1401853F0 (KiHvInterrupt.c)
 *     KiSwInterrupt @ 0x1401859A0 (KiSwInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140185ED0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140186460 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401869F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140186F80 (KiVmbusInterrupt3.c)
 *     KiIpiInterrupt @ 0x140187990 (KiIpiInterrupt.c)
 *     KiDispatchInterrupt @ 0x140188000 (KiDispatchInterrupt.c)
 *     KiNmiInterruptStart @ 0x14018BDC0 (KiNmiInterruptStart.c)
 *     KiPageFault @ 0x14018E600 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14018F280 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckForSListAddress(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = *(unsigned __int16 *)(a1 + 368);
  v2 = *(_QWORD *)(a1 + 360);
  if ( (_WORD)result == 51 )
  {
    result = KeUserPopEntrySListResume;
    if ( v2 > KeUserPopEntrySListResume && v2 <= KeUserPopEntrySListEnd )
      *(_QWORD *)(a1 + 360) = KeUserPopEntrySListResume;
  }
  else if ( (_WORD)result == 16 && v2 > (unsigned __int64)&ExpInterlockedPopEntrySListResume )
  {
    result = (__int64)&ExpInterlockedPopEntrySListEnd;
    if ( v2 <= (unsigned __int64)&ExpInterlockedPopEntrySListEnd )
      *(_QWORD *)(a1 + 360) = &ExpInterlockedPopEntrySListResume;
  }
  return result;
}
