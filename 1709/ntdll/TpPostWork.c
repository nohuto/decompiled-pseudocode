/*
 * XREFs of TpPostWork @ 0x180047120
 * Callers:
 *     LdrpQueueWork @ 0x18004B450 (LdrpQueueWork.c)
 * Callees:
 *     <none>
 */

void __cdecl TpPostWork(PTP_WORK Work)
{
  PTP_WORK v1; // rdx
  int v2; // eax

  v1 = Work;
  if ( !Work
    || (v2 = *((_DWORD *)Work + 42), (v2 & 0x10000) != 0)
    || (v2 & 0x20000) != 0
    || *((__int64 (__fastcall ***)(PVOID))Work + 1) != &TppWorkpCleanupGroupMemberVFuncs
    || (Work = (PTP_WORK)NtCurrentPeb()->Ldr, *((_BYTE *)Work + 72)) )
  {
    TppRaiseInvalidParameter(Work, v1);
  }
  else
  {
    TppWorkPost(v1);
  }
}
