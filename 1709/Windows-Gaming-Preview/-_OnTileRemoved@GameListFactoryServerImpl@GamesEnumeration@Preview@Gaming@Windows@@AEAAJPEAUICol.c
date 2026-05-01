/*
 * XREFs of ?_OnTileRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUICollectionTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180019CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_ @ 0x18001D04C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Wind.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileRemoved(
        RTL_SRWLOCK *this,
        struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *a2)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  volatile signed __int32 *Ptr; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HSTRING string; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v13[1] = -2LL;
  if ( a2 )
  {
    v12 = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::ICollectionTile *, __int64 *))(*(_QWORD *)a2 + 64LL))(
           a2,
           &v12);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v16 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 48LL))(v12, &v16);
      v5 = v6;
      if ( v6 >= 0 )
      {
        string = 0LL;
        v7 = v16;
        WindowsDeleteString(0LL);
        string = 0LL;
        v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v7 + 56LL))(v7, &string);
        v5 = v8;
        if ( v8 >= 0 )
        {
          v13[0] = string;
          v5 = 0;
          Ptr = 0LL;
          AcquireSRWLockExclusive(this + 14);
          if ( this[13].Ptr )
          {
            Ptr = (volatile signed __int32 *)this[13].Ptr;
            _InterlockedIncrement(Ptr + 3);
          }
          if ( this != (RTL_SRWLOCK *)-112LL )
            ReleaseSRWLockExclusive(this + 14);
          if ( Ptr )
          {
            v5 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_bfab945f95f9db2e18b4a82b65eae1b3__Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_(
                   v13,
                   Ptr,
                   &this[13]);
            if ( _InterlockedExchangeAdd(Ptr + 3, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)Ptr + 24LL))(Ptr, 1LL);
              if ( Microsoft::WRL::Details::ModuleBase::module_ )
                _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
            }
            if ( v5 < 0 )
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x180,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
                (const char *)(unsigned int)v5);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x17E,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
            (const char *)(unsigned int)v8);
        }
        WindowsDeleteString(string);
        string = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x17B,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)v6);
      }
      v10 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x178,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v4);
    }
    v11 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return (unsigned int)v5;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
