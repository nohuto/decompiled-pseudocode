/*
 * XREFs of KiFlushQueueApc @ 0x1400A9BF4
 * Callers:
 *     KeRundownApcQueues @ 0x1404D6A74 (KeRundownApcQueues.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 */

_QWORD *__fastcall KiFlushQueueApc(__int64 a1, char a2)
{
  _QWORD *result; // rax
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // rdx
  int v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v9);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(_QWORD *)(a1 + 168) == a1 + 168 )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16LL * a2 + 152) == a1 + 16LL * a2 + 152 )
      return 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  v6 = (_QWORD *)(16LL * a2 + a1 + 152);
  result = (_QWORD *)*v6;
  if ( (_QWORD *)*v6 == v6 )
  {
    result = 0LL;
  }
  else
  {
    if ( (_QWORD *)result[1] != v6 || (v7 = (_QWORD *)v6[1], (_QWORD *)*v7 != v6) )
      __fastfail(3u);
    *v7 = result;
    v8 = result;
    result[1] = v7;
    do
    {
      *((_BYTE *)v8 + 66) = 0;
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != result );
    v6[1] = v6;
    *v6 = v6;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  __writecr8(CurrentIrql);
  return result;
}
