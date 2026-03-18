/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C01DAF70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserGetWindowCompositionInfo(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v6; // rdx
  __int64 v7; // rdi
  NTSTATUS v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // sf
  ULONG v15; // eax
  _OWORD v17[4]; // [rsp+50h] [rbp-48h] BYREF

  if ( ((PsGetCurrentProcessWow64Process(a1, a2, a3, a4) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (_BYTE *)a2;
  if ( a2 >= W32UserProbeAddress )
    v6 = (_BYTE *)W32UserProbeAddress;
  *v6 = *v6;
  v6[39] = v6[39];
  v7 = 0LL;
  v8 = 0;
  memset(v17, 0, 0x28uLL);
  EnterSharedCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 && (unsigned int)GetWindowCompositionInfo(v9, (__int64)v17) )
  {
    *(_OWORD *)a2 = v17[0];
    *(_OWORD *)(a2 + 16) = v17[1];
    *(_QWORD *)(a2 + 32) = *(_QWORD *)&v17[2];
  }
  else
  {
    v8 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  v14 = v8 < 0;
  if ( v8 < 0 )
  {
    v15 = RtlNtStatusToDosError(v8);
    UserSetLastError(v15);
    v14 = v8 < 0;
  }
  LOBYTE(v7) = !v14;
  return v7;
}
