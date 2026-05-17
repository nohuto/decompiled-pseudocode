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

__int64 __fastcall TppExecuteWaitCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64, __int64); // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  if ( a3 == 258 )
  {
    result = TppWorkCallbackPrologRelease(a1, a2, 0LL);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a2 + 136);
  if ( !v6 )
  {
LABEL_3:
    TppCleanupGroupMemberCallbackProlog(a1, a2);
LABEL_4:
    v9 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v7) )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TppStartThreadData(&v16, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 88);
    v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a2 + 80);
    v12 = *(_QWORD *)(a2 + 88);
    if ( v11 == RtlpWnfNotificationThread )
      RtlpWnfNotificationThread(a1, v12, a2);
    else
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD))v11)(a1, v12, a2, a3);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v13) )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v9 )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    return TppCompleteThreadData(v16);
  }
  if ( (int)LdrAddRefDll(0LL, *(_QWORD *)(a2 + 136)) >= 0 )
  {
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v6;
    goto LABEL_3;
  }
  TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL, 0LL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a2);
  if ( !(_DWORD)result )
    return (**(__int64 (__fastcall ***)(__int64))(a2 + 8))(a2);
  return result;
}
