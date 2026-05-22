/*
 * XREFs of ?erase@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@2@0@Z @ 0x180097D28
 * Callers:
 *     ?DeleteWorkItemsForController@SpatialInputControllerCollection@@AEAAXPEBVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x1800961D0 (-DeleteWorkItemsForController@SpatialInputControllerCollection@@AEAAXPEBVSpatialInteractionContr.c)
 * Callees:
 *     ?pop_back@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@QEAAXXZ @ 0x180097FA4 (-pop_back@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V-.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@0@V10@00@Z @ 0x180098788 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$shared_ptr@VAsynchro.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800988E4 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$shared_ptr@VAsynchronousWorkI.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::deque<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD **v5; // r10
  __int64 v6; // rcx
  __int64 v8; // r8
  _QWORD **v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // r15
  __int64 v13; // rdi
  _QWORD **v14; // rax
  volatile signed __int32 *v15; // rsi
  _QWORD **v17; // rax
  _QWORD **v18; // rax
  __int64 v19; // rdx
  _QWORD ***v20; // rcx
  _QWORD *v21; // rax
  __int128 v23; // [rsp+28h] [rbp-79h] BYREF
  __int64 v24; // [rsp+38h] [rbp-69h]
  __int128 v25; // [rsp+40h] [rbp-61h] BYREF
  __int64 v26; // [rsp+50h] [rbp-51h]
  _QWORD v27[3]; // [rsp+58h] [rbp-49h] BYREF
  __int128 v28; // [rsp+70h] [rbp-31h] BYREF
  __int64 v29; // [rsp+80h] [rbp-21h]
  _QWORD v30[3]; // [rsp+88h] [rbp-19h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+Fh]
  _BYTE v33[24]; // [rsp+B8h] [rbp+17h] BYREF
  _BYTE v34[24]; // [rsp+D0h] [rbp+2Fh] BYREF

  v5 = 0LL;
  v6 = *(_QWORD *)(a3 + 16);
  if ( a1 )
    v5 = *(_QWORD ***)a1;
  v8 = *(_QWORD *)(a4 + 16);
  v9 = 0LL;
  if ( a1 )
    v9 = *(_QWORD ***)a1;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = v10 + *(_QWORD *)(a1 + 32);
  v12 = v6 - v10;
  v13 = v8 - v6;
  if ( v6 - v10 >= (unsigned __int64)(v11 - v8) )
  {
    v28 = 0LL;
    if ( v5 && *v5 )
      *(_QWORD *)&v28 = **v5;
    v30[1] = 0LL;
    v17 = *(_QWORD ***)a1;
    v29 = v6;
    v30[2] = v11;
    v30[0] = v17;
    v31 = 0LL;
    if ( v9 && *v9 )
      *(_QWORD *)&v31 = **v9;
    v32 = v8;
    std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>>>>(
      v34,
      &v31,
      v30,
      &v28);
    for ( ; v13; --v13 )
      std::deque<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>::pop_back(a1);
  }
  else
  {
    v23 = 0LL;
    if ( v9 && *v9 )
      *(_QWORD *)&v23 = **v9;
    v24 = v8;
    v25 = 0LL;
    if ( v5 && *v5 )
      *(_QWORD *)&v25 = **v5;
    v14 = *(_QWORD ***)a1;
    v27[1] = 0LL;
    v26 = v6;
    v27[2] = v10;
    v27[0] = v14;
    ((void (__fastcall *)(_BYTE *, _QWORD *, __int128 *, __int128 *))std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>>>>)(
      v33,
      v27,
      &v25,
      &v23);
    for ( ; v13; --v13 )
    {
      v15 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                                    + 8 * (*(_QWORD *)(a1 + 24) & (*(_QWORD *)(a1 + 16) - 1LL)))
                                        + 8LL);
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        }
      }
      if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
        *(_QWORD *)(a1 + 24) = 0LL;
      else
        ++*(_QWORD *)(a1 + 24);
    }
  }
  v18 = 0LL;
  v19 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    v20 = **(_QWORD *****)a1;
    if ( v20 )
      v18 = *v20;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v18 )
  {
    v21 = *v18;
    if ( v21 )
      *a2 = *v21;
  }
  a2[2] = v19 + v12;
  return a2;
}
