/*
 * XREFs of ?ActivateApplicationForLaunch@@YAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAK@Z @ 0x180305F3C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___::Run @ 0x180192D40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5599339c690d67fb68c6b7e13742e629___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x180305FE4 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 */

__int64 __fastcall ActivateApplicationForLaunch(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  HRESULT v6; // ebx
  LPVOID ppv; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a4;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v6 = CoCreateInstance(&CLSID_ApplicationActivationManager, 0LL, 1u, &GUID_998d66a2_4a54_496c_9e18_268890860004, &ppv);
  if ( v6 >= 0 )
    v6 = ActivateApplicationForLaunchWithManager(ppv, a1, &word_18035ABCC, a3, 0, 0LL, 0LL, &v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v6;
}
