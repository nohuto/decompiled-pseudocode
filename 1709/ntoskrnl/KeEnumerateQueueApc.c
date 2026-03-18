/*
 * XREFs of KeEnumerateQueueApc @ 0x140207A40
 * Callers:
 *     DbgkpLkmdSnapThread @ 0x1401E6464 (DbgkpLkmdSnapThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeEnumerateQueueApc(
        __int64 a1,
        void (__fastcall *a2)(_QWORD *, __int64, __int64),
        __int64 a3,
        char *a4)
{
  char v7; // bl
  char v8; // bp
  unsigned __int8 CurrentIrql; // r15
  _QWORD **v10; // r14
  _QWORD *i; // rsi
  __int64 result; // rax
  int v13; // [rsp+50h] [rbp+8h] BYREF

  if ( a4 )
  {
    v7 = *a4;
    v8 = *a4;
  }
  else
  {
    v7 = 0;
    v8 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v13);
    while ( *(_QWORD *)(a1 + 64) );
  }
  do
  {
    v10 = (_QWORD **)(16LL * v7 + a1 + 152);
    for ( i = *v10; i != v10; i = (_QWORD *)*i )
      a2(i - 2, 88LL, a3);
    ++v7;
  }
  while ( v7 <= v8 );
  *(_QWORD *)(a1 + 64) = 0LL;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
