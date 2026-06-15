/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMMNotificationClient@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800940E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000D310 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x180093164 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMMNotificationClient>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v2; // rax
  signed __int64 v4; // rbx
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v7; // r8
  unsigned __int64 v9; // rdx
  bool i; // zf
  signed __int64 v11; // rax
  signed __int64 v12; // rbx

  v2 = *(_QWORD *)(a1 + 16);
  a2->lpVtbl = 0LL;
  v4 = v2;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((Microsoft::WRL::Details *)(a1 - 16), a2);
    v7 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v4;
    v9 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v9, v4);
    for ( i = v4 == v11; ; i = v11 == v12 )
    {
      v12 = v11;
      if ( i )
      {
        a2->lpVtbl = v7;
        return 0LL;
      }
      if ( v11 < 0 )
        break;
      LODWORD(v7->Release) = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v9, v11);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)v7,
      1);
    _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 12));
    a2->lpVtbl = (struct IUnknownVtbl *)(2 * v12);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 12));
    a2->lpVtbl = (struct IUnknownVtbl *)(2 * v2);
  }
  return 0LL;
}
