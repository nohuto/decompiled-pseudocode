/*
 * XREFs of TpCallbackLeaveCriticalSectionOnCompletion @ 0x18008A500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackLeaveCriticalSectionOnCompletion(
        PTP_CALLBACK_INSTANCE Instance,
        PRTL_CRITICAL_SECTION CriticalSection)
{
  if ( Instance && CriticalSection && !*((_QWORD *)Instance + 24) )
  {
    *((_QWORD *)Instance + 24) = CriticalSection;
    *((_DWORD *)Instance + 36) |= 1u;
  }
  else
  {
    sub_1801058B8(Instance);
  }
}
