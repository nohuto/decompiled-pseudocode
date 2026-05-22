/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800AA76C
 * Callers:
 *     ?erase@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x1800AA1A8 (-erase@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@Spat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>>(
        __int64 **a1,
        __int64 a2,
        __int64 **a3,
        __int64 a4)
{
  __int64 ***v4; // rax
  __int64 **v5; // rbx
  __int64 *v7; // r9
  __int64 v8; // r13
  __int64 *v9; // r8
  __int64 **v10; // rcx
  __int64 v11; // r15
  __int64 *v12; // rsi
  __int64 *v13; // r12
  __int64 *v14; // rbx
  _QWORD *v15; // r8
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  volatile signed __int32 *v19; // rdi
  __int64 **v20; // rax

  v4 = *(__int64 ****)a4;
  v5 = a1;
  v7 = *(__int64 **)(a4 + 16);
  if ( *a3 )
    v8 = **a3;
  else
    v8 = 0LL;
  v9 = a3[2];
  if ( v4 && (v10 = *v4) != 0LL && *v10 )
    v11 = **v10;
  else
    v11 = 0LL;
  v12 = v7;
  if ( *(__int64 **)(a2 + 16) != v9 )
  {
    v13 = v9;
    v14 = *(__int64 **)(a2 + 16);
    do
    {
      v12 = (__int64 *)((char *)v12 - 1);
      v13 = (__int64 *)((char *)v13 - 1);
      v15 = *(_QWORD **)(*(_QWORD *)(v11 + 8) + 8 * ((unsigned __int64)v12 & (*(_QWORD *)(v11 + 16) - 1LL)));
      v16 = *(__int64 **)(*(_QWORD *)(v8 + 8) + 8 * ((unsigned __int64)v13 & (*(_QWORD *)(v8 + 16) - 1LL)));
      v17 = v16[1];
      v16[1] = 0LL;
      v18 = *v16;
      *v16 = 0LL;
      *v15 = v18;
      v19 = (volatile signed __int32 *)v15[1];
      v15[1] = v17;
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
    while ( v13 != v14 );
    v4 = *(__int64 ****)a4;
    v5 = a1;
  }
  *v5 = 0LL;
  v5[1] = 0LL;
  *(_QWORD *)(a4 + 16) = v12;
  if ( v4 )
  {
    v20 = *v4;
    if ( v20 )
      *v5 = *v20;
  }
  v5[2] = v12;
  return v5;
}
