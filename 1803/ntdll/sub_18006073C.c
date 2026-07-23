/*
 * XREFs of sub_18006073C @ 0x18006073C
 * Callers:
 *     sub_1800603AC @ 0x1800603AC (sub_1800603AC.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_1800607D4 @ 0x1800607D4 (sub_1800607D4.c)
 */

PSLIST_ENTRY __fastcall sub_18006073C(_RTL_SRWLOCK *a1, unsigned int a2)
{
  int v4; // esi
  _RTL_SRWLOCK *v5; // rdi
  __int64 v6; // r14

  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 12);
  v5 = a1 + 28;
  v6 = 129LL;
  do
  {
    if ( ((__int64)v5->Ptr & 1) == 0 )
      sub_1800607D4(a1, v5->Ptr, a2 | 1);
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( !v4 )
    RtlReleaseSRWLockShared(a1 + 12);
  return sub_1800605B4((__int64)&a1[14], (unsigned __int64)a1, a2);
}
