/*
 * XREFs of ?_CompletePendingActivation@CAppViewManager@@AEAAJ_K@Z @ 0x1800093D8
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18000A1F8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_K.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x180033D90 (-RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::_CompletePendingActivation(IUnknown **this, unsigned __int64 a2)
{
  HRESULT v4; // ebx
  __int64 (__fastcall *v5)(ViewEventDispatcher *__hidden, unsigned __int64); // rax
  HRESULT v6; // eax
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(this[15], &SID_ViewEventDispatcher, &GUID_f36451a9_014a_43ea_9492_ff81c012e15f, &ppvOut);
  if ( v4 >= 0 )
  {
    v5 = *(__int64 (__fastcall **)(ViewEventDispatcher *__hidden, unsigned __int64))(*(_QWORD *)ppvOut + 56LL);
    if ( v5 == ViewEventDispatcher::RemovePendingActivation )
      v6 = ViewEventDispatcher::RemovePendingActivation((ViewEventDispatcher *)ppvOut, a2);
    else
      v6 = v5((ViewEventDispatcher *)ppvOut, a2);
    v4 = v6;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v4;
}
