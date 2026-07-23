/*
 * XREFs of sub_180013038 @ 0x180013038
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_180013038(_RTL_SRWLOCK *a1, __int64 a2)
{
  _RTL_SRWLOCK *v4; // rax
  _RTL_SRWLOCK **Ptr; // rdx

  *(_DWORD *)(a2 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_QWORD *)(a2 + 48) = a1;
  RtlAcquireSRWLockExclusive(a1 + 9);
  v4 = (_RTL_SRWLOCK *)(a2 + 16);
  Ptr = (_RTL_SRWLOCK **)a1[13].Ptr;
  if ( *Ptr != &a1[12] )
    __fastfail(3u);
  v4->Ptr = &a1[12];
  *(_QWORD *)(a2 + 24) = Ptr;
  *Ptr = v4;
  a1[13].Ptr = v4;
  RtlReleaseSRWLockExclusive(a1 + 9);
}
