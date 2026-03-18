/*
 * XREFs of Command_HandleCommandRingStoppedEvent @ 0x1C000CF74
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000CADC (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C000D228 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_xx @ 0x1C000EA24 (WPP_RECORDER_SF_xx.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C000EAF0 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C000EF3C (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     XilCommand_WriteDoorbell @ 0x1C000F6D0 (XilCommand_WriteDoorbell.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C0038270 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

__int64 __fastcall Command_HandleCommandRingStoppedEvent(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rsi
  __int64 v5; // rdx
  __int64 CommandRingBufferLogicalAddress; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 **v14; // rbx
  int v15; // eax
  _QWORD *v16; // rdx
  _QWORD *v17; // rdx
  __int64 *v18; // rax
  __int64 **v19; // rcx
  int v20; // edx
  __int64 v21; // rax
  _QWORD *i; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v23; // [rsp+48h] [rbp-8h]

  v3 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  *(_BYTE *)(a1 + 121) = 0;
  CommandRingBufferLogicalAddress = XilCommand_GetCommandRingBufferLogicalAddress(a1, v5);
  v7 = *a2;
  v8 = CommandRingBufferLogicalAddress + 16LL * *(unsigned int *)(a1 + 44);
  WPP_RECORDER_SF_xx(*(_QWORD *)(a1 + 16), v9, v10, v11);
  if ( v7 == v8 || v7 == *(_QWORD *)(a1 + 56) && !*(_DWORD *)(a1 + 44) )
  {
    v14 = (__int64 **)(a1 + 80);
    if ( *v14 != (__int64 *)v14 )
    {
      v3 = *v14;
      v15 = *((_DWORD *)*v14 + 14);
      if ( v15 )
      {
        if ( v15 == 5 || v15 == 10 )
          v3 = 0LL;
      }
      else
      {
        v18 = (__int64 *)*v3;
        if ( *(__int64 **)(*v3 + 8) != v3 || (v19 = (__int64 **)v3[1], *v19 != v3) )
          __fastfail(3u);
        *v19 = v18;
        v18[1] = (__int64)v19;
        v20 = ++*(_DWORD *)(a1 + 44);
        if ( v20 == *(_DWORD *)(a1 + 48) )
          v20 = 0;
        *(_DWORD *)(a1 + 44) = v20;
        XilCommand_AdvanceCommandRingControlDequeuePointer(a1);
      }
      if ( *v14 != (__int64 *)v14 )
      {
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 7u, 0x27u, (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
        XilCommand_WriteDoorbell(a1);
      }
    }
    v16 = *(_QWORD **)(a1 + 96);
    if ( v16 != (_QWORD *)(a1 + 96) )
    {
      v23 = *(_QWORD **)(a1 + 104);
      i = v16;
      v16[1] = &i;
      *v23 = &i;
      *(_QWORD *)(a1 + 104) = a1 + 96;
      *(_QWORD *)(a1 + 96) = a1 + 96;
      goto LABEL_24;
    }
    v17 = &i;
    v23 = &i;
    for ( i = &i; v17 != &i; v17 = i )
    {
      if ( (_QWORD **)v17[1] != &i || (v21 = *v17, *(_QWORD **)(*v17 + 8LL) != v17) )
        __fastfail(3u);
      i = (_QWORD *)*v17;
      *(_QWORD *)(v21 + 8) = &i;
      Command_InternalSendCommand(a1);
LABEL_24:
      ;
    }
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 7u, 0x28u, (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(a1 + 8),
      0,
      0,
      0x8000,
      (__int64)"After command abort completion, software and hardware dequeue pointers do not match",
      *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 44),
      (__int64)a2);
    Controller_ReportFatalError(*(_QWORD *)(a1 + 8), 2, 4115, 0, 0LL, 0LL);
    *(_DWORD *)(a1 + 36) = 2;
  }
  result = DynamicLock_Release(*(_QWORD *)(a1 + 112));
  if ( v3 )
  {
    *((_BYTE *)v3 + 60) = 25;
    Etw_CommandCompleteError(v13, a1, v3, 2LL);
    return ((__int64 (__fastcall *)(__int64 *, __int64))v3[5])(v3, 2LL);
  }
  return result;
}
