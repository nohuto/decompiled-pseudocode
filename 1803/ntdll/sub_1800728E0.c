/*
 * XREFs of sub_1800728E0 @ 0x1800728E0
 * Callers:
 *     EtwEventSetInformation @ 0x180072750 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18007299C @ 0x18007299C (sub_18007299C.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 */

__int64 __fastcall sub_1800728E0(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS v2; // eax
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // r8
  __int64 v5; // r9
  ULONG v6; // esi
  int UniqueThread; // r8d
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  if ( !HIWORD(a1)
    || (v1 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v6 = 6;
    goto LABEL_11;
  }
  v9 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x58);
  v2 = ZwTraceControl(26LL, &v9, 8LL);
  if ( v2 )
  {
    v6 = RtlNtStatusToDosError(v2);
    if ( !v6 )
      goto LABEL_6;
LABEL_11:
    RtlSetLastWin32Error(v6);
    return v6;
  }
  v6 = 0;
LABEL_6:
  RtlAcquireSRWLockExclusive(v1 + 64, v3, v4, v5);
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v1 + 98) |= 0x8000u;
  *(_DWORD *)(v1 + 80) = UniqueThread;
  sub_18007299C(v1);
  *(_DWORD *)(v1 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v1 + 64));
  return v6;
}
