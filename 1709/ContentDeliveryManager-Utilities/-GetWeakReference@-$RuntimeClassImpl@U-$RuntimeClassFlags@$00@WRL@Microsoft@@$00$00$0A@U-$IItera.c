/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180019140
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x180003FF4 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v2; // rax
  signed __int64 v5; // rdi
  __int64 v6; // rax
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v8; // rdx
  unsigned __int64 v10; // r8
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  a2->lpVtbl = 0LL;
  v5 = v2;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((Microsoft::WRL::Details *)(a1 - 8), a2);
    v8 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v5;
    v10 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v5);
    for ( i = v5 == v12; ; i = v12 == v13 )
    {
      v13 = v12;
      if ( i )
      {
        a2->lpVtbl = v8;
        return 0LL;
      }
      if ( v12 < 0 )
        break;
      LODWORD(v8->Release) = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v12);
    }
    v8->QueryInterface = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))&Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
    LODWORD(v8->Release) = -1073741823;
    HIDWORD(v8->AddRef) = -1073741823;
    operator delete(v8);
    _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 12));
    a2->lpVtbl = (struct IUnknownVtbl *)(2 * v13);
  }
  else
  {
    v6 = 2 * v2;
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
    a2->lpVtbl = (struct IUnknownVtbl *)v6;
  }
  return 0LL;
}
