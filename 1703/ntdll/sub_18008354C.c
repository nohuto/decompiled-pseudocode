/*
 * XREFs of sub_18008354C @ 0x18008354C
 * Callers:
 *     EtwEventSetInformation @ 0x180019E30 (EtwEventSetInformation.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180083608 @ 0x180083608 (sub_180083608.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

__int64 __fastcall sub_18008354C(__int64 a1)
{
  __int64 v1; // rdi
  NTSTATUS v2; // eax
  unsigned __int32 v3; // esi
  int UniqueThread; // r8d
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  if ( !HIWORD(a1)
    || (v1 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v3 = 6;
    goto LABEL_11;
  }
  v7 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x58);
  v2 = ZwTraceControl(EtwTrackBinaryCode, &v7, 8u, 0LL, 0, &v6);
  if ( v2 )
  {
    v3 = RtlNtStatusToDosError(v2);
    if ( !v3 )
      goto LABEL_6;
LABEL_11:
    RtlSetLastWin32Error(v3);
    return v3;
  }
  v3 = 0;
LABEL_6:
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v1 + 64));
  UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
  *(_WORD *)(v1 + 98) |= 0x8000u;
  *(_DWORD *)(v1 + 80) = UniqueThread;
  sub_180083608(v1);
  *(_DWORD *)(v1 + 80) = 0;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v1 + 64));
  return v3;
}
