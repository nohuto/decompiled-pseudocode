/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@0@V10@00@Z @ 0x180098788
 * Callers:
 *     ?erase@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@2@0@Z @ 0x180097D28 (-erase@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V-$al.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>>>>(
        __int64 **a1,
        __int64 a2,
        __int64 **a3,
        __int64 a4)
{
  __int64 ***v5; // rcx
  __int64 *v7; // r9
  __int64 *v8; // r12
  __int64 v9; // r13
  __int64 *v10; // r15
  __int64 *v11; // rax
  __int64 **v12; // rcx
  __int64 v13; // rbp
  __int64 *v14; // rsi
  _QWORD *v15; // r8
  __int64 *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  volatile signed __int32 *v19; // rdi
  __int64 ***v20; // rax
  __int64 **v21; // rax
  __int64 **result; // rax

  v5 = *(__int64 ****)a4;
  v7 = *(__int64 **)(a4 + 16);
  v8 = *(__int64 **)(a2 + 16);
  if ( *a3 )
    v9 = **a3;
  else
    v9 = 0LL;
  v10 = a3[2];
  v11 = 0LL;
  if ( v5 )
  {
    v12 = *v5;
    if ( v12 )
      v11 = *v12;
  }
  if ( v11 )
    v13 = *v11;
  else
    v13 = 0LL;
  v14 = v7;
  while ( v10 != v8 )
  {
    v14 = (__int64 *)((char *)v14 - 1);
    v10 = (__int64 *)((char *)v10 - 1);
    v15 = *(_QWORD **)(*(_QWORD *)(v13 + 8) + 8 * ((unsigned __int64)v14 & (*(_QWORD *)(v13 + 16) - 1LL)));
    v16 = *(__int64 **)(*(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)v10 & (*(_QWORD *)(v9 + 16) - 1LL)));
    v17 = v16[1];
    v16[1] = 0LL;
    v18 = *v16;
    *v16 = 0LL;
    v19 = (volatile signed __int32 *)v15[1];
    v15[1] = v17;
    *v15 = v18;
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  v20 = *(__int64 ****)a4;
  *(_QWORD *)(a4 + 16) = v14;
  if ( v20 )
  {
    v21 = *v20;
    if ( v21 )
      *a1 = *v21;
  }
  result = a1;
  a1[2] = v14;
  return result;
}
