/*
 * XREFs of ?_ShutdownServiceProviders@CApplicationManager@@AEAAXXZ @ 0x1801115DC
 * Callers:
 *     ?v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z @ 0x180111E60 (-v_ShutdownServices@CApplicationManager@@MEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CancelPendingComTaskPoolTasks@@YAXK_N@Z @ 0x180105954 (-CancelPendingComTaskPoolTasks@@YAXK_N@Z.c)
 */

void __fastcall CApplicationManager::_ShutdownServiceProviders(CApplicationManager *this)
{
  IUnknown *v2; // rcx
  IUnknown *v3; // rcx
  IUnknown *v4; // rcx
  IUnknown *v5; // rcx
  IUnknown *v6; // rcx
  IUnknown *v7; // rcx
  IUnknown *v8; // rcx

  CancelPendingComTaskPoolTasks(LODWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 74);
  v2 = (IUnknown *)*((_QWORD *)this + 65);
  if ( v2 )
  {
    IUnknown_SetSite(v2, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 65);
  }
  v3 = (IUnknown *)*((_QWORD *)this + 73);
  if ( v3 )
  {
    IUnknown_SetSite(v3, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 73);
  }
  v4 = (IUnknown *)*((_QWORD *)this + 70);
  if ( v4 )
  {
    IUnknown_SetSite(v4, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 70);
  }
  v5 = (IUnknown *)*((_QWORD *)this + 92);
  if ( v5 )
  {
    IUnknown_SetSite(v5, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 92);
  }
  v6 = (IUnknown *)*((_QWORD *)this + 64);
  if ( v6 )
  {
    IUnknown_SetSite(v6, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 64);
  }
  v7 = (IUnknown *)*((_QWORD *)this + 66);
  if ( v7 )
  {
    IUnknown_SetSite(v7, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 66);
  }
  v8 = (IUnknown *)*((_QWORD *)this + 75);
  if ( v8 )
  {
    IUnknown_SetSite(v8, 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 75);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 69);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 72);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 67);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 68);
}
