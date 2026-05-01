/*
 * XREFs of ?AddInternal@?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAUIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18001B5D4
 * Callers:
 *     ?add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListRemovedEventHandler@2345@PEAUEventRegistrationToken@@@Z @ 0x18001A580 (-add_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGa.c)
 *     ?Add@?$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18001B450 (-Add@-$AgileEventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18001C0EC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x180025778 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  RTL_SRWLOCK *v4; // r14
  _QWORD *Ptr; // rcx
  int v9; // r15d
  _QWORD *v10; // rax
  Microsoft::WRL::Details::EventTargetArray *v11; // rdi
  void **v12; // r15
  struct IUnknown **i; // rbx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rax
  Microsoft::WRL::Details::EventTargetArray *v17; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int32 *v19; // [rsp+30h] [rbp-10h]
  volatile signed __int32 *v21; // [rsp+98h] [rbp+58h] BYREF

  *a4 = 0LL;
  v4 = a1 + 2;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  v17 = 0LL;
  if ( Ptr )
    v18 = ((__int64)(Ptr[3] - Ptr[2]) >> 3) + 1;
  else
    v18 = 1LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
         &v17,
         &v18);
  if ( v9 >= 0 )
  {
    v10 = a1->Ptr;
    v11 = v17;
    if ( a1->Ptr )
    {
      v12 = (void **)v10[4];
      for ( i = (struct IUnknown **)v10[2]; i != (struct IUnknown **)v10[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v11, *i, *v12);
        v10 = a1->Ptr;
        ++v12;
      }
    }
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v11, a2, a3);
    AcquireSRWLockExclusive(a1 + 1);
    v14 = 0LL;
    v21 = 0LL;
    if ( &v21 != (volatile signed __int32 **)a1 )
    {
      v14 = (volatile signed __int32 *)a1->Ptr;
      a1->Ptr = 0LL;
      v21 = v14;
    }
    v15 = (volatile signed __int32 *)a1->Ptr;
    a1->Ptr = v11;
    v19 = v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v19 + 24LL))(v19, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
      v14 = v21;
    }
    if ( a1 != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(a1 + 1);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v9 = 0;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v21 + 24LL))(v21, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
    }
  }
  else
  {
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v17 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v17 + 24LL))(v17, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  return (unsigned int)v9;
}
