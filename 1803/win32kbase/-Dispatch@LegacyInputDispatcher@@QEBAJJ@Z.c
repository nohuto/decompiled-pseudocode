/*
 * XREFs of ?Dispatch@LegacyInputDispatcher@@QEBAJJ@Z @ 0x1C0030A68
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0030B40 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0124680 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C0030A3C (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::Dispatch(LegacyInputDispatcher *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx

  v2 = (int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 13)
    || !LegacyInputDispatcher::HasInputDispatcherObjects(this)
    || (unsigned int)v2 < *((_DWORD *)this + 10) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  }
  if ( !*((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( (int)v2 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( !LegacyInputDispatcher::HasInputDispatcherObjects(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( (unsigned int)v2 >= *((_DWORD *)this + 13) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  v6 = *((unsigned int *)this + 10);
  if ( (unsigned int)v2 < (unsigned int)v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v4);
    v6 = *((unsigned int *)this + 10);
  }
  v7 = *((_QWORD *)this + 4);
  v8 = 2LL * (unsigned int)(v2 - v6);
  if ( !*(_QWORD *)(v7 + 16LL * (unsigned int)(v2 - v6)) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v7);
    v7 = *((_QWORD *)this + 4);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v7 + 8 * v8))(
          *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v2),
          *(_QWORD *)(v7 + 8 * v8 + 8));
  if ( v11 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  return (unsigned int)v11;
}
