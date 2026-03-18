/*
 * XREFs of PopCallPowerSettingCallback @ 0x1404C5114
 * Callers:
 *     PopDispatchPowerSettingCallbacks @ 0x1404C5030 (PopDispatchPowerSettingCallbacks.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopDiagTracePowerSettingStop @ 0x1404C5230 (PopDiagTracePowerSettingStop.c)
 *     PopDiagTracePowerSettingStart @ 0x1404C52E0 (PopDiagTracePowerSettingStart.c)
 */

void __fastcall PopCallPowerSettingCallback(_QWORD *a1, __int64 a2)
{
  _DWORD *v3; // rsi
  unsigned __int8 CurrentIrql; // r14
  unsigned __int8 v5; // al
  _DWORD *v6; // rax
  bool v7; // bl

  if ( a2 )
  {
    if ( a1 )
    {
      a1[9] = a2;
      if ( !a1[3] )
      {
        a1[3] = KeGetCurrentThread();
        do
        {
          v3 = (_DWORD *)a1[9];
          ++*v3;
          KeReleaseGuardedMutex(&PopSettingLock);
          PopDiagTracePowerSettingStart(a1[10], (char *)a1 + 36, (unsigned int)v3[1], v3 + 3);
          CurrentIrql = KeGetCurrentIrql();
          ((void (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD))a1[10])(
            (__int64)a1 + 52,
            v3 + 3,
            (unsigned int)v3[1],
            a1[11]);
          v5 = KeGetCurrentIrql();
          if ( v5 != CurrentIrql )
            KeBugCheckEx(0xA0u, 0x900uLL, a1[10], CurrentIrql, v5);
          PopDiagTracePowerSettingStop(a1[10], (char *)a1 + 36);
          if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
            __fastfail(0x20u);
          ExAcquireFastMutex(&PopSettingLock);
          v6 = (_DWORD *)a1[9];
          v7 = v6 && v3 != v6;
          if ( (*v3)-- == 1 )
            ExFreePoolWithTag(v3, 0x74655350u);
        }
        while ( v7 );
        a1[3] = 0LL;
      }
    }
  }
}
