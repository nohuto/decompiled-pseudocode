/*
 * XREFs of KiWakePriQueueWaiter @ 0x140068B20
 * Callers:
 *     KeInsertPriQueue @ 0x1400689F0 (KeInsertPriQueue.c)
 *     KiActivateWaiterPriQueue @ 0x140115EEC (KiActivateWaiterPriQueue.c)
 * Callees:
 *     KiTryUnwaitThreadWithPriority @ 0x1400FD8B0 (KiTryUnwaitThreadWithPriority.c)
 */

__int64 __fastcall KiWakePriQueueWaiter(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // r10
  _QWORD *v11; // rax
  __int64 result; // rax

  v4 = (_QWORD *)(a2 + 8);
  v6 = *(_QWORD **)(a2 + 8);
  do
  {
    v9 = v6;
    v6 = (_QWORD *)*v6;
    v10 = *v9;
    v11 = (_QWORD *)v9[1];
    if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v11 != v9 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    result = KiTryUnwaitThreadWithPriority(a1, v9, a3, a4);
  }
  while ( !(_BYTE)result && v6 != v4 );
  return result;
}
