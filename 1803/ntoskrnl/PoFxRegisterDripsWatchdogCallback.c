/*
 * XREFs of PoFxRegisterDripsWatchdogCallback @ 0x140184230
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxRegisterDripsWatchdogCallback(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rdi
  KIRQL v9; // r15
  __int64 result; // rax

  v4 = *(_QWORD *)(BugCheckParameter2 + 48);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 88));
  if ( *(_QWORD *)(BugCheckParameter2 + 168) )
    PopFxBugCheck(0x622uLL, BugCheckParameter2, 0LL, 0LL);
  if ( a3 )
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 704), 8u);
  *(_QWORD *)(BugCheckParameter2 + 744) = a4;
  *(_QWORD *)(BugCheckParameter2 + 168) = a2;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 88));
  result = v9;
  __writecr8(v9);
  return result;
}
