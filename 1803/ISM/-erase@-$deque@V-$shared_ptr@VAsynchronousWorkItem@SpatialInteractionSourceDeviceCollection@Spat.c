/*
 * XREFs of ?erase@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x1800AA1A8
 * Callers:
 *     ?DeleteWorkItemsForSourceDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEBVSpatialInteractionSourceDevice@234@@Z @ 0x1800A67D4 (-DeleteWorkItemsForSourceDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Int.c)
 * Callees:
 *     ?pop_back@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x1800AA488 (-pop_back@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@S.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800AA76C (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$shared_ptr@VAsynchro.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800AA8D8 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$shared_ptr@VAsynchronousWorkI.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r10
  _QWORD **v6; // r8
  __int64 v8; // rdx
  _QWORD **v9; // rcx
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r15
  __int64 v13; // r14
  _QWORD **v14; // rax
  __int64 v15; // rax
  volatile signed __int32 *v16; // rdi
  _QWORD **v18; // rax
  _QWORD **v19; // rax
  __int64 v20; // rdx
  _QWORD ***v21; // rcx
  _QWORD *v22; // rax
  __int128 v24; // [rsp+28h] [rbp-79h] BYREF
  __int64 v25; // [rsp+38h] [rbp-69h]
  __int128 v26; // [rsp+40h] [rbp-61h] BYREF
  __int64 v27; // [rsp+50h] [rbp-51h]
  _QWORD v28[3]; // [rsp+58h] [rbp-49h] BYREF
  __int128 v29; // [rsp+70h] [rbp-31h] BYREF
  __int64 v30; // [rsp+80h] [rbp-21h]
  _QWORD v31[3]; // [rsp+88h] [rbp-19h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+Fh]
  _BYTE v34[24]; // [rsp+B8h] [rbp+17h] BYREF
  _BYTE v35[24]; // [rsp+D0h] [rbp+2Fh] BYREF

  v4 = *(_QWORD *)(a3 + 16);
  v6 = 0LL;
  if ( a1 )
    v6 = *(_QWORD ***)a1;
  v8 = *(_QWORD *)(a4 + 16);
  v9 = 0LL;
  if ( a1 )
    v9 = *(_QWORD ***)a1;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = v10 + *(_QWORD *)(a1 + 32);
  v12 = v4 - v10;
  v13 = v8 - v4;
  if ( v4 - v10 >= (unsigned __int64)(v11 - v8) )
  {
    v29 = 0LL;
    if ( v6 && *v6 )
      *(_QWORD *)&v29 = **v6;
    v31[1] = 0LL;
    v18 = *(_QWORD ***)a1;
    v30 = v4;
    v31[2] = v11;
    v31[0] = v18;
    v32 = 0LL;
    if ( v9 && *v9 )
      *(_QWORD *)&v32 = **v9;
    v33 = v8;
    std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>>(
      v35,
      &v32,
      v31,
      &v29);
    for ( ; v13; --v13 )
      std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::pop_back(a1);
  }
  else
  {
    v24 = 0LL;
    if ( v9 && *v9 )
      *(_QWORD *)&v24 = **v9;
    v25 = v8;
    v26 = 0LL;
    if ( v6 && *v6 )
      *(_QWORD *)&v26 = **v6;
    v14 = *(_QWORD ***)a1;
    v28[1] = 0LL;
    v28[0] = v14;
    v27 = v4;
    v28[2] = v10;
    ((void (__fastcall *)(_BYTE *, _QWORD *, __int128 *, __int128 *))std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>>)(
      v34,
      v28,
      &v26,
      &v24);
    if ( v13 )
    {
      v15 = *(_QWORD *)(a1 + 24);
      do
      {
        v16 = *(volatile signed __int32 **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * (v15 & (*(_QWORD *)(a1 + 16) - 1LL)))
                                          + 8LL);
        if ( v16 )
        {
          if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
            if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          }
        }
        if ( (*(_QWORD *)(a1 + 32))-- == 1LL )
        {
          *(_QWORD *)(a1 + 24) = 0LL;
          v15 = 0LL;
        }
        else
        {
          v15 = ++*(_QWORD *)(a1 + 24);
        }
        --v13;
      }
      while ( v13 );
    }
  }
  v19 = 0LL;
  v20 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    v21 = **(_QWORD *****)a1;
    if ( v21 )
      v19 = *v21;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v19 )
  {
    v22 = *v19;
    if ( v22 )
      *a2 = *v22;
  }
  a2[2] = v20 + v12;
  return a2;
}
