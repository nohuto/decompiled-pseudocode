/*
 * XREFs of sub_180013038 @ 0x180013038
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180013038(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdx

  *(_DWORD *)(a2 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_QWORD *)(a2 + 48) = a1;
  RtlAcquireSRWLockExclusive(a1 + 72);
  v4 = (_QWORD *)(a2 + 16);
  v5 = *(_QWORD **)(a1 + 104);
  if ( *v5 != a1 + 96 )
    __fastfail(3u);
  *v4 = a1 + 96;
  *(_QWORD *)(a2 + 24) = v5;
  *v5 = v4;
  *(_QWORD *)(a1 + 104) = v4;
  return RtlReleaseSRWLockExclusive(a1 + 72);
}
