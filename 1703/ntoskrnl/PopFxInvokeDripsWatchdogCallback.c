/*
 * XREFs of PopFxInvokeDripsWatchdogCallback @ 0x1406C7C70
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x1406D4DDC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

char __fastcall PopFxInvokeDripsWatchdogCallback(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5
    && *(_QWORD *)(v5 + 168)
    && (a1 == a2 || (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 624), 0, 0) & 8) != 0) )
  {
    v6 = *(_QWORD *)(v5 + 664);
    v7 = *(_QWORD *)(a2 + 32);
    if ( !v6 || v6 == *(_QWORD *)(v7 + 8) )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(v5 + 168))(*(_QWORD *)(v5 + 176), v7, a3, 0LL);
      return 1;
    }
  }
  return v4;
}
