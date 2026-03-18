/*
 * XREFs of PopFxScheduleDeviceIdleTimer @ 0x1400FDF74
 * Callers:
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1401550A4 (PopFxUpdateDeviceIdleTimer.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400E1E80 (KeSetCoalescableTimer.c)
 */

char __fastcall PopFxScheduleDeviceIdleTimer(__int64 a1)
{
  char v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r10
  ULONG v6; // r9d

  v2 = 0;
  _m_prefetchw((const void *)(a1 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 32), 0) & 8) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 480);
    v4 = v3 + *(_QWORD *)(a1 + 472);
    if ( MEMORY[0xFFFFF78000000008] < v4 && v4 >= v3 && v4 >= MEMORY[0xFFFFF78000000008] )
    {
      v5 = v4 - MEMORY[0xFFFFF78000000008];
      if ( v5 / 0x186A0 > 0xFFFFFFFF )
        v6 = -1;
      else
        v6 = v5 / 0x186A0;
      KeSetCoalescableTimer((PKTIMER)(a1 + 344), (LARGE_INTEGER)-(__int64)v5, 0, v6, (PKDPC)(a1 + 408));
      _InterlockedOr((volatile signed __int32 *)(a1 + 32), 4u);
      return 1;
    }
  }
  return v2;
}
