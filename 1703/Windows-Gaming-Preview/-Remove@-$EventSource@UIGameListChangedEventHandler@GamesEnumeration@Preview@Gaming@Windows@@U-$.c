/*
 * XREFs of ?Remove@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000BC98
 * Callers:
 *     ?remove_GameAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000B380 (-remove_GameAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegi.c)
 *     ?remove_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000B480 (-remove_GameRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRe.c)
 *     ?remove_GameUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x18000B500 (-remove_GameUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRe.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_926821de02ebfb79fb8ab29bc72c01bf__Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler_ @ 0x18000D01C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_926821de02ebfb79fb8ab29bc72c01bf__Wind.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x18000C5C0 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x1800128E8 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18001296C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        volatile signed __int32 **a1,
        struct IUnknown *a2)
{
  volatile signed __int32 *v4; // rdi
  volatile signed __int32 *v5; // rax
  int v6; // ebx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // r12
  bool v9; // cl
  volatile signed __int32 *v10; // rax
  struct IUnknown **v11; // r13
  void **v12; // r14
  volatile signed __int32 *v13; // rax
  volatile signed __int32 *v14; // rcx
  void **v16; // [rsp+20h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int32 *v18; // [rsp+30h] [rbp-10h]
  PSRWLOCK v19; // [rsp+38h] [rbp-8h] BYREF
  char v20; // [rsp+80h] [rbp+40h]
  Microsoft::WRL::Details::EventTargetArray *v21; // [rsp+90h] [rbp+50h] BYREF
  __int64 v22; // [rsp+98h] [rbp+58h] BYREF

  v4 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 2, &SRWLock);
  v5 = *a1;
  if ( !*a1 )
  {
    v6 = 0;
LABEL_10:
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    return (unsigned int)v6;
  }
  v7 = 0LL;
  v8 = ((__int64)(*((_QWORD *)v5 + 3) - *((_QWORD *)v5 + 2)) >> 3) - 1;
  v21 = 0LL;
  v22 = v8;
  v20 = 0;
  if ( v8 )
  {
    v6 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
           &v21,
           &v22);
    if ( v6 < 0 )
    {
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v21 + 3, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v21 + 24LL))(
            v21,
            1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
        }
      }
      goto LABEL_10;
    }
    v10 = *a1;
    v7 = (volatile signed __int32 *)v21;
    v11 = (struct IUnknown **)*((_QWORD *)*a1 + 2);
    v16 = (void **)*((_QWORD *)*a1 + 4);
    if ( v11 == *((struct IUnknown ***)v10 + 3) )
      goto LABEL_30;
    v12 = v16;
    v9 = 0;
    do
    {
      if ( v9 || a2 != *v11 )
      {
        if ( !v8 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail((Microsoft::WRL::Details::EventTargetArray *)v7, *v11, *v12);
        v9 = v20;
        ++v12;
        v22 = --v8;
      }
      else
      {
        v9 = 1;
        v20 = 1;
      }
      ++v11;
    }
    while ( v11 != *((struct IUnknown ***)*a1 + 3) );
  }
  else
  {
    v9 = **((_QWORD **)v5 + 2) == (_QWORD)a2;
  }
  if ( v9 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 1, &v19);
    v16 = 0LL;
    if ( &v16 != (void ***)a1 )
    {
      v4 = *a1;
      *a1 = 0LL;
      v16 = (void **)v4;
    }
    v14 = v7;
    v7 = 0LL;
    v18 = *a1;
    v13 = v18;
    v21 = 0LL;
    *a1 = v14;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
      }
      v7 = (volatile signed __int32 *)v21;
    }
    if ( !v19 )
      goto LABEL_34;
    ReleaseSRWLockExclusive(v19);
  }
LABEL_30:
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v21 + 24LL))(v21, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
    }
  }
LABEL_34:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v6 = 0;
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 0xFFFFFFFF);
    }
  }
  return (unsigned int)v6;
}
