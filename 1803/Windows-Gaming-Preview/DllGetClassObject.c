/*
 * XREFs of DllGetClassObject @ 0x180008BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x180008E30 (-GetModule@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV-$Defau.c)
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x180008F00 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 */

HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
  const struct Microsoft::WRL::Details::CreatorMap **i; // r9
  Microsoft::WRL::Details *v7; // rcx
  _QWORD *v8; // rdx
  const struct _GUID *v9; // r9
  struct IUnknown **v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+50h] [rbp+18h] BYREF

  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetModule();
  *ppv = 0LL;
  for ( i = &_minATLObjMap_GameListEntryProxy_COM; i < &_pobjectentrymid; ++i )
  {
    v7 = *i;
    if ( *i )
    {
      v8 = (_QWORD *)*((_QWORD *)v7 + 1);
      if ( *v8 == *(_QWORD *)&rclsid->Data1 && v8[1] == *(_QWORD *)rclsid->Data4 )
      {
        v9 = (const struct _GUID *)*i;
        v12 = 1;
        return Microsoft::WRL::Details::GetCacheEntry(
                 v7,
                 (struct Microsoft::WRL::Details::ModuleBase *)&v12,
                 &riid->Data1,
                 v9,
                 (const struct Microsoft::WRL::Details::CreatorMap *)ppv,
                 v11);
      }
    }
  }
  return -2147221231;
}
