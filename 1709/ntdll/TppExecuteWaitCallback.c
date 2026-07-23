/*
 * XREFs of TppExecuteWaitCallback @ 0x18000CB00
 * Callers:
 *     TppWaitCompletion @ 0x18000CA10 (TppWaitCompletion.c)
 *     TppExecuteWaitTimerCallback @ 0x180087650 (TppExecuteWaitTimerCallback.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800019E0 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001A60 (RtlpTpETWCallbackStart.c)
 *     RtlpWnfNotificationThread @ 0x18000B950 (RtlpWnfNotificationThread.c)
 *     TppStartThreadData @ 0x18000CE14 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18000CEA0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppCompleteThreadData @ 0x18000F478 (TppCompleteThreadData.c)
 *     LdrAddRefDll @ 0x1800117D0 (LdrAddRefDll.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     TppWorkCallbackPrologRelease @ 0x180048C9C (TppWorkCallbackPrologRelease.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppExecuteWaitCallback(PTP_CALLBACK_INSTANCE Instance, char *a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rcx
  void (__fastcall *v9)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT); // rax
  void *v10; // rdx
  __int64 result; // rax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( a3 == 258 )
  {
    result = TppWorkCallbackPrologRelease(Instance);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *((_QWORD *)a2 + 17);
  if ( !v6 )
  {
LABEL_3:
    TppCleanupGroupMemberCallbackProlog(Instance);
LABEL_4:
    v7 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      RtlpTpETWCallbackStart(
        *((_QWORD *)a2 + 18),
        (__int64)(a2 + 392),
        *((_QWORD *)a2 + 10),
        *((_QWORD *)a2 + 11),
        *((_QWORD *)a2 + 13));
    TppStartThreadData(&v12, *((_QWORD *)a2 + 10), *((_QWORD *)a2 + 11), *((_QWORD *)a2 + 13));
    *((_QWORD *)Instance + 11) = *((_QWORD *)a2 + 10);
    *((_QWORD *)Instance + 12) = *((_QWORD *)a2 + 11);
    v9 = (void (__fastcall *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_WAIT))*((_QWORD *)a2 + 10);
    v10 = (void *)*((_QWORD *)a2 + 11);
    if ( v9 == RtlpWnfNotificationThread )
      RtlpWnfNotificationThread(Instance, v10, (PTP_WAIT)a2);
    else
      ((void (__fastcall *)(PTP_CALLBACK_INSTANCE, void *, char *, _QWORD))v9)(Instance, v10, a2, a3);
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v7 )
      RtlpTpETWCallbackStop(
        *((_QWORD *)a2 + 18),
        (__int64)(a2 + 392),
        *((_QWORD *)a2 + 10),
        *((_QWORD *)a2 + 11),
        *((_QWORD *)a2 + 13));
    return TppCompleteThreadData(v12);
  }
  if ( LdrAddRefDll(0, *((PVOID *)a2 + 17)) >= 0 )
  {
    *((_DWORD *)Instance + 36) |= 0x100u;
    *((_QWORD *)Instance + 21) = v6;
    goto LABEL_3;
  }
  TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL, 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a2);
  if ( !(_DWORD)result )
    return (**((__int64 (__fastcall ***)(char *))a2 + 1))(a2);
  return result;
}
