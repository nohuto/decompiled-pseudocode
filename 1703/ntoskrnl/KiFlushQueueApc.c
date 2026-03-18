/*
 * XREFs of KiFlushQueueApc @ 0x140110C68
 * Callers:
 *     KeRundownApcQueues @ 0x140540148 (KeRundownApcQueues.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 */

_QWORD *__fastcall KiFlushQueueApc(__int64 a1, char a2)
{
  _QWORD *result; // rax
  unsigned __int8 CurrentIrql; // bp
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
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
    v7 = (_QWORD *)v6[1];
    if ( (_QWORD *)result[1] != v6 || (_QWORD *)*v7 != v6 )
      __fastfail(3u);
    *v7 = result;
    result[1] = v7;
    v8 = result;
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
