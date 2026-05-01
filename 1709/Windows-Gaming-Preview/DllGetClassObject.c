/*
 * XREFs of DllGetClassObject @ 0x180008A70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180008CF0 (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180008DC0 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  const struct Microsoft::WRL::Details::CreatorMap **i; // r9
  Microsoft::WRL::Details *v7; // rcx
  const struct _GUID *v8; // r9
  struct IUnknown **v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetModule();
  *ppv = 0LL;
  for ( i = &_minATLObjMap_GameListEntryProxy_COM; i < &_pobjectentrymid; ++i )
  {
    if ( *i )
    {
      v7 = (Microsoft::WRL::Details *)*((_QWORD *)*i + 1);
      if ( *(_QWORD *)v7 == *(_QWORD *)&rclsid->Data1 && *((_QWORD *)v7 + 1) == *(_QWORD *)rclsid->Data4 )
      {
        v8 = (const struct _GUID *)*i;
        v11 = 1;
        return Microsoft::WRL::Details::GetCacheEntry(
                 v7,
                 (struct Microsoft::WRL::Details::ModuleBase *)&v11,
                 &riid->Data1,
                 v8,
                 (const struct Microsoft::WRL::Details::CreatorMap *)ppv,
                 v10);
      }
    }
  }
  return -2147221231;
}
