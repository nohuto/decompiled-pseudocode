/*
 * XREFs of ?_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z @ 0x1801528AC
 * Callers:
 *     ?FullScreenVisibilityChanged@CFullScreenManager@@UEAAJH@Z @ 0x180150320 (-FullScreenVisibilityChanged@CFullScreenManager@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2ade507f68d5c466c2155bc3180ec4d7___ @ 0x18014F2D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_2ade507f68d5c466c2155bc3180ec4d7___.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18030A064 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

void __fastcall CFullScreenManager::_FireFullScreenModeChangedEvent(CFullScreenManager *this, int a2)
{
  int v3; // edi
  __int64 v5; // rcx
  struct IObjectArray *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  struct IObjectArray *v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v8);
  if ( (int)CGITRegistrationList::GetCallbackArray((CFullScreenManager *)((char *)this + 136), &v8) >= 0 )
  {
    v6 = v8;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v6);
    LOBYTE(v3) = a2 != 0;
    v7 = v3;
    Windows::Internal::ComTaskPool::QueueTask__lambda_2ade507f68d5c466c2155bc3180ec4d7___(v5, &v6);
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v6);
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v8);
}
