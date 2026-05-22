/*
 * XREFs of ?DeleteWorkItemsForController@SpatialInputControllerCollection@@AEAAXPEBVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x1800961D0
 * Callers:
 *     ?DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z @ 0x1800936F8 (-DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z.c)
 * Callees:
 *     ?erase@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@@std@@@std@@@2@0@Z @ 0x180097D28 (-erase@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInputControllerCollection@@@std@@V-$al.c)
 */

void __fastcall SpatialInputControllerCollection::DeleteWorkItemsForController(
        SpatialInputControllerCollection *this,
        const struct SpatialInteractionDevices::SpatialInteractionController *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  char *v4; // rsi
  __int64 v5; // r8
  _QWORD ****v6; // rbx
  _QWORD ***v7; // rax
  _QWORD *v8; // rcx
  _QWORD **v10; // rcx
  _QWORD **v11; // rax
  _QWORD *v12; // rax
  __int128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h]
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  _QWORD v17[4]; // [rsp+50h] [rbp-20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 3216);
  v4 = (char *)this + 3264;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 3216));
  v5 = *((_QWORD *)v4 + 3);
  v6 = *(_QWORD *****)v4;
  while ( v5 != *((_QWORD *)v4 + 3) + *((_QWORD *)v4 + 4) )
  {
    if ( v6 )
      v7 = *v6;
    else
      v7 = 0LL;
    v8 = v7[1][v5 & ((unsigned __int64)v7[2] - 1)];
    if ( *(const struct SpatialInteractionDevices::SpatialInteractionController **)*v8 == a2 && *(_BYTE *)(*v8 + 80LL) )
    {
      v10 = 0LL;
      if ( v6 && *v6 )
        v10 = **v6;
      v11 = 0LL;
      if ( v10 && *v10 )
        v11 = (_QWORD **)**v10;
      v13 = 0LL;
      if ( v11 )
      {
        v12 = *v11;
        if ( v12 )
          *(_QWORD *)&v13 = *v12;
      }
      v14 = v5 + 1;
      v15 = 0LL;
      if ( v10 && *v10 )
        *(_QWORD *)&v15 = **v10;
      v16 = v5;
      ((void (__fastcall *)(char *, _QWORD *, __int128 *, __int128 *))std::deque<std::shared_ptr<SpatialInputControllerCollection::AsynchronousWorkItem>>::erase)(
        v4,
        v17,
        &v15,
        &v13);
      if ( v6 != (_QWORD ****)v17[0] && v17[0] )
      {
        if ( *(_QWORD *)v17[0] )
          v6 = **(_QWORD ******)v17[0];
      }
      v5 = v17[2];
    }
    else
    {
      ++v5;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
