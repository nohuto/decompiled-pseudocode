/*
 * XREFs of RtlConvertSRWLockExclusiveToShared @ 0x1800839A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180070AAC @ 0x180070AAC (sub_180070AAC.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 */

char __fastcall RtlConvertSRWLockExclusiveToShared(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedCompareExchange64(a1, 17LL, 1LL);
  if ( v1 == 1 )
    return 1;
  if ( (v1 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  if ( !_interlockedbittestandset64((volatile signed __int32 *)a1, 2uLL) )
  {
    sub_180070AAC(a1, v1 | 4, 1);
    return 1;
  }
  return 0;
}
