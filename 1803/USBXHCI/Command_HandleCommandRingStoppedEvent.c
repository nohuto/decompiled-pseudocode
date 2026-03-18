/*
 * XREFs of Command_HandleCommandRingStoppedEvent @ 0x1C0003D70
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C0003908 (Command_HandleCommandCompletionEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C0004020 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_xx @ 0x1C00057AC (WPP_RECORDER_SF_xx.c)
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C00058C8 (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 *     XilCommand_GetCommandRingBufferLogicalAddress @ 0x1C0005D40 (XilCommand_GetCommandRingBufferLogicalAddress.c)
 *     XilCommand_WriteDoorbell @ 0x1C00064C8 (XilCommand_WriteDoorbell.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     Etw_CommandCompleteError @ 0x1C0035E50 (Etw_CommandCompleteError.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall Command_HandleCommandRingStoppedEvent(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 CommandRingBufferLogicalAddress; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 *v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // rcx
  int v17; // edx
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  _QWORD *i; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-8h]

  v4 = 0LL;
  DynamicLock_Acquire(*(_QWORD *)(a1 + 112));
  *(_BYTE *)(a1 + 121) = 0;
  CommandRingBufferLogicalAddress = XilCommand_GetCommandRingBufferLogicalAddress(a1, v5);
  v7 = *a2;
  v8 = CommandRingBufferLogicalAddress + 16LL * *(unsigned int *)(a1 + 44);
  WPP_RECORDER_SF_xx(*(_QWORD *)(a1 + 16), v9, v10, v11);
  if ( v7 == v8 || v7 == *(_QWORD *)(a1 + 56) && !*(_DWORD *)(a1 + 44) )
  {
    v14 = (__int64 *)(a1 + 80);
    v15 = *(__int64 **)(a1 + 80);
    v16 = v15;
    if ( v15 != (__int64 *)(a1 + 80) )
    {
      v17 = *((_DWORD *)v15 + 14);
      v4 = *(_QWORD *)(a1 + 80);
      if ( v17 )
      {
        if ( v17 == 5 || v17 == 10 )
          v4 = 0LL;
      }
      else
      {
        v20 = *v15;
        if ( *(_QWORD *)(v20 + 8) != v4 || (v21 = *(_QWORD **)(v4 + 8), *v21 != v4) )
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        v22 = (unsigned int)++*(_DWORD *)(a1 + 44);
        if ( (_DWORD)v22 == *(_DWORD *)(a1 + 48) )
        {
          *(_DWORD *)(a1 + 44) = 0;
          v22 = 0LL;
        }
        XilCommand_AdvanceCommandRingControlDequeuePointer(a1, v22);
        v16 = (__int64 *)*v14;
      }
    }
    if ( v16 != v14 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 7u, 0x27u, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids);
      XilCommand_WriteDoorbell(a1);
    }
    v18 = *(_QWORD **)(a1 + 96);
    if ( v18 != (_QWORD *)(a1 + 96) )
    {
      v25 = *(_QWORD **)(a1 + 104);
      i = v18;
      v18[1] = &i;
      *v25 = &i;
      *(_QWORD *)(a1 + 104) = a1 + 96;
      *(_QWORD *)(a1 + 96) = a1 + 96;
      goto LABEL_24;
    }
    v19 = &i;
    v25 = &i;
    for ( i = &i; v19 != &i; v19 = i )
    {
      if ( (_QWORD **)v19[1] != &i || (v23 = *v19, *(_QWORD **)(*v19 + 8LL) != v19) )
        __fastfail(3u);
      i = (_QWORD *)*v19;
      *(_QWORD *)(v23 + 8) = &i;
      Command_InternalSendCommand(a1);
LABEL_24:
      ;
    }
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 16), 4u, 7u, 0x28u, (__int64)&WPP_8c5920aaffa63697f6f37ad3f7e721cb_Traceguids);
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
  if ( v4 )
  {
    *(_BYTE *)(v4 + 60) = 25;
    Etw_CommandCompleteError(v13, a1, v4, 2LL);
    return (*(__int64 (__fastcall **)(__int64, __int64))(v4 + 40))(v4, 2LL);
  }
  return result;
}
