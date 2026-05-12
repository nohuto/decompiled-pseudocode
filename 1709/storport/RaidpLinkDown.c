/*
 * XREFs of RaidpLinkDown @ 0x1C00331F0
 * Callers:
 *     StorPortNotification @ 0x1C0006310 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C002B950 (McTemplateK0pqq.c)
 *     StorPortPause @ 0x1C0034070 (StorPortPause.c)
 */

__int64 __fastcall RaidpLinkDown(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-18h]
  int v4; // [rsp+28h] [rbp-10h]

  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 2) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 2152);
    v3 = *(_DWORD *)(a1 + 56);
    McTemplateK0pqq(a1, &EventLinkDown, 0LL, *(_QWORD *)(a1 + 536) + 16LL, v3, v4);
  }
  result = StorPortPause(*(_QWORD *)(a1 + 536) + 16LL, *(unsigned int *)(a1 + 2152));
  if ( (_BYTE)result )
    _InterlockedExchange((volatile __int32 *)(a1 + 2156), 0);
  return result;
}
