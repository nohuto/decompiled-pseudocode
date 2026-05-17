/*
 * XREFs of sub_18007AF64 @ 0x18007AF64
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_18007AF64(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *UniqueThread_low; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rdx

  UniqueThread_low = (unsigned __int64 *)LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  *(_DWORD *)(a2 + 40) = (_DWORD)UniqueThread_low;
  *(_QWORD *)(a2 + 48) = a1;
  RtlAcquireSRWLockExclusive(a1 + 72, a2, UniqueThread_low, a4);
  v7 = (_QWORD *)(a2 + 16);
  v8 = *(_QWORD **)(a1 + 104);
  if ( *v8 != a1 + 96 )
    __fastfail(3u);
  *v7 = a1 + 96;
  *(_QWORD *)(a2 + 24) = v8;
  *v8 = v7;
  *(_QWORD *)(a1 + 104) = v7;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
}
