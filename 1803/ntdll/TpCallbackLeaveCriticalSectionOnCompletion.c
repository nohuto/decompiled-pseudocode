/*
 * XREFs of TpCallbackLeaveCriticalSectionOnCompletion @ 0x180083920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCallbackLeaveCriticalSectionOnCompletion(
        PTP_CALLBACK_INSTANCE Instance,
        PRTL_CRITICAL_SECTION CriticalSection)
{
  __int64 v2; // r8

  if ( Instance && CriticalSection && !*((_QWORD *)Instance + 24) )
  {
    *((_QWORD *)Instance + 24) = CriticalSection;
    *((_DWORD *)Instance + 36) |= 1u;
  }
  else
  {
    sub_1801086C8(Instance, CriticalSection, v2);
  }
}
