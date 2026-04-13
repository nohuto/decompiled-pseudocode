/*
 * XREFs of DllGetClassObject @ 0x180022F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x1800222B4 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800231F0 (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  const struct Microsoft::WRL::Details::CreatorMap **i; // r9
  Microsoft::WRL::Details *v7; // rcx
  const struct _GUID *v8; // r9
  HRESULT result; // eax
  int v10; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetModule();
  *ppv = 0LL;
  for ( i = _minATLObjMap_ActivityToastNotificationCallback_COM; i < &_pobjectentrymid; ++i )
  {
    if ( *i )
    {
      v7 = (Microsoft::WRL::Details *)*((_QWORD *)*i + 1);
      if ( *(_QWORD *)v7 == *(_QWORD *)&rclsid->Data1 && *((_QWORD *)v7 + 1) == *(_QWORD *)rclsid->Data4 )
      {
        v8 = (const struct _GUID *)*i;
        v10 = 1;
        result = Microsoft::WRL::Details::GetCacheEntry(
                   v7,
                   (struct Microsoft::WRL::Details::ModuleBase *)&v10,
                   &riid->Data1,
                   v8,
                   (const struct Microsoft::WRL::Details::CreatorMap *)ppv);
        goto LABEL_9;
      }
    }
  }
  result = -2147221231;
LABEL_9:
  if ( result == -2147221231 )
    return NdrDllGetClassObject(
             rclsid,
             riid,
             ppv,
             (const ProxyFileInfo **)&aProxyFileList,
             &CLSID_PSFactoryBuffer,
             &gPFactory);
  return result;
}
