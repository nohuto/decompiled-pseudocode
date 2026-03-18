/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C004FB80
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@IEBA_NXZ @ 0x1C004F1B4 (-ExecutingOnSensorHostingThread@CBaseInput@@IEBA_NXZ.c)
 *     ?WaitForMarshalingCompletion@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C004FF74 (-WaitForMarshalingCompletion@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // ecx
  LARGE_INTEGER v14; // rbx
  int v15; // r8d

  if ( a2 < 4 )
  {
    v3 = 3LL * a2;
    if ( *((_DWORD *)&unk_1C0159740 + 6 * a2 + 4) >= 0xBu || CBaseInput::ExecutingOnSensorHostingThread(a1) )
    {
      (*((void (__fastcall **)(CBaseInput *))&unk_1C0159740 + v3 + 1))(a1);
    }
    else
    {
      KeSetEvent(*((PRKEVENT *)a1 + 5 * *((unsigned int *)&unk_1C0159740 + 2 * v3 + 4) + 22), 1, 0);
      UserSessionSwitchLeaveCrit();
      CRIMBase::WaitForMarshalingCompletion(a1, *((unsigned int *)&unk_1C0159740 + 2 * v3 + 4));
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v4, v6);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
      if ( v12 )
      {
        v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LOBYTE(v13) = byte_1C0186D98 - 1;
          Template_xqx(
            v13,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v15,
            v14.LowPart,
            0,
            (char)gullUserCritAcquireToken);
        }
        if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          Template_xqx(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v15,
            0,
            1000 * v14.QuadPart / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v8;
      gbValidateHandleForIL = 1;
    }
  }
}
