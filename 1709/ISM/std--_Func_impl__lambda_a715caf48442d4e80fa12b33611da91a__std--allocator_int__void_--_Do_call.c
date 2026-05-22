/*
 * XREFs of std::_Func_impl__lambda_a715caf48442d4e80fa12b33611da91a__std::allocator_int__void_::_Do_call @ 0x180099450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800945A4 (-GetCacheEntry@SpatialInputControllerCollection@@AEAAJKPEAV-$shared_ptr@VSpatialInteractionContr.c)
 *     ?QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z@3@_N@Z @ 0x180095E48 (-QueueWorkItem@SpatialInputControllerCollection@@AEAAJAEAV-$shared_ptr@VSpatialInteractionContro.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl__lambda_a715caf48442d4e80fa12b33611da91a__std::allocator_int__void_::_Do_call(
        __int64 a1)
{
  __int64 v1; // r14
  int CacheEntry; // eax
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rbx
  RTL_SRWLOCK *v7; // rdi
  char v8; // bl
  __int64 v9; // rbx
  __int128 v10; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v11[9]; // [rsp+38h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v1 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  CacheEntry = SpatialInputControllerCollection::GetCacheEntry(v1, *(_DWORD *)(a1 + 16), (__int64 *)&v10);
  v3 = CacheEntry;
  if ( CacheEntry < 0 )
  {
    v4 = 1739LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)CacheEntry);
    if ( *((_QWORD *)&v10 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v5 = *((_QWORD *)&v10 + 1);
        (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v5 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
      }
    }
    goto LABEL_17;
  }
  v6 = v10;
  v7 = (RTL_SRWLOCK *)(v10 + 664);
  AcquireSRWLockShared((PSRWLOCK)(v10 + 664));
  v8 = *(_BYTE *)(v6 + 656);
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( !v8 )
  {
    v11[0] = off_1800D7D18;
    v11[1] = v1;
    v11[7] = v11;
    CacheEntry = SpatialInputControllerCollection::QueueWorkItem(v1, (__int64)&v10, (__int64)v11, 1);
    v3 = CacheEntry;
    if ( CacheEntry < 0 )
    {
      v4 = 1754LL;
      goto LABEL_3;
    }
  }
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v10 + 1);
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v9 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
  }
  v3 = 0;
LABEL_17:
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x543,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v3);
}
