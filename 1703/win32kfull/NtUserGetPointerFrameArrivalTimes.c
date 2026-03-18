/*
 * XREFs of NtUserGetPointerFrameArrivalTimes @ 0x1C01DA0E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GetPointerFrameArrivalTimesInternal @ 0x1C01BAF48 (GetPointerFrameArrivalTimesInternal.c)
 */

__int64 __fastcall NtUserGetPointerFrameArrivalTimes(unsigned int a1, unsigned int a2, volatile void *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r15
  int PointerFrameArrivalTimesInternal; // ebx
  __int64 v10; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9

  v8 = EnterSharedCrit(0LL, 1LL);
  PointerFrameArrivalTimesInternal = 0;
  if ( !a1 || HIWORD(a1) || (v10 = a2 - 1, (unsigned int)v10 > 0x63) || !a3 || a1 == 1 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v10, v6, v7, HIWORD(a1));
    ProbeForWrite(a3, 8LL * a2, CurrentProcessWow64Process != 0 ? 1 : 4);
    PointerFrameArrivalTimesInternal = GetPointerFrameArrivalTimesInternal(v8, a1, a2, (unsigned __int64 *)a3);
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return PointerFrameArrivalTimesInternal;
}
