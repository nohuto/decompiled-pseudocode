/*
 * XREFs of ?FullScreenVisibilityChangedEvent@FullScreenPositioner@@AEAAX_N@Z @ 0x18014D5C0
 * Callers:
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18014E010 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9a93ee57caea2b3e2d042c02cff1fd50___ @ 0x18014C870 (Windows--Internal--ComTaskPool--QueueTask__lambda_9a93ee57caea2b3e2d042c02cff1fd50___.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18030A064 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall FullScreenPositioner::FullScreenVisibilityChangedEvent(FullScreenPositioner *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct IObjectArray *v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]
  struct IObjectArray *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v8);
  if ( (int)CGITRegistrationList::GetCallbackArray((FullScreenPositioner *)((char *)this + 232), &v8) >= 0 )
  {
    v6 = v8;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v6);
    v7 = a2;
    Windows::Internal::ComTaskPool::QueueTask__lambda_9a93ee57caea2b3e2d042c02cff1fd50___(
      v5,
      v4,
      *((_DWORD *)this + 56),
      &v6);
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v6);
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v8);
}
