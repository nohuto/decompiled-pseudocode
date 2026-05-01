/*
 * XREFs of ?_ShutdownChildServices@CMultitaskingViewServiceProvider@@AEAAXXZ @ 0x180268510
 * Callers:
 *     ?UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802681D0 (-UnsubscribeFromServices@CMultitaskingViewServiceProvider@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewServiceProvider::_ShutdownChildServices(CMultitaskingViewServiceProvider *this)
{
  __int64 *v1; // rbx
  _QWORD *v3; // rbx

  v1 = (__int64 *)((char *)this + 184);
  IUnknown_SetSite(*((IUnknown **)this + 23), 0LL);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v1 + 24LL))(*v1, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 24) + 24LL))(*((_QWORD *)this + 24), 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  v3 = (_QWORD *)((char *)this + 176);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 24LL))(*((_QWORD *)this + 22), 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 32LL))(*v3, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 40LL))(*v3, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26), 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
}
