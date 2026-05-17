/*
 * XREFs of RtlConvertSRWLockExclusiveToShared @ 0x1800E7040
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180077520 @ 0x180077520 (sub_180077520.c)
 */

char __fastcall RtlConvertSRWLockExclusiveToShared(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedCompareExchange64(a1, 17LL, 1LL);
  if ( v1 != 1 )
  {
    if ( (v1 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 2uLL) )
      return 0;
    sub_180077520(a1, v1 | 4, 1);
  }
  return 1;
}
