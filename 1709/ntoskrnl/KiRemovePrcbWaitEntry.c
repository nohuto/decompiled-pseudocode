/*
 * XREFs of KiRemovePrcbWaitEntry @ 0x1400762E0
 * Callers:
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 */

void __fastcall KiRemovePrcbWaitEntry(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1[89];
  if ( v1 )
  {
    v5 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 22800), 0LL) )
    {
      do
        KeYieldProcessorEx(&v5);
      while ( *(_QWORD *)(v1 + 22800) );
    }
    if ( a1[89] )
    {
      v3 = a1[27];
      if ( *(_QWORD **)(v3 + 8) != a1 + 27 || (v4 = (_QWORD *)a1[28], (_QWORD *)*v4 != a1 + 27) )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      a1[89] = 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 22800), 0LL);
  }
}
