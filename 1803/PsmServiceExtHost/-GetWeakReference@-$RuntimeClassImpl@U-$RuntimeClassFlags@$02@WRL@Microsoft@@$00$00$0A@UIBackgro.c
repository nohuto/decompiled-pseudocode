/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBackgroundAccessStateChangeHandler@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x180067B70
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F5B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x1800679DC (--0WeakReferenceImpl@Details@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180067A70 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180067AB0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180067C78 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakRefe.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>::GetWeakReference(
        __int64 a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  __int64 v2; // rax
  signed __int64 v4; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v6; // r10
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v9; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v10; // rdx
  unsigned __int64 v11; // r8
  bool i; // zf
  signed __int64 v13; // rax
  signed __int64 v14; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl *v15; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  v4 = v2;
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::InternalAddRef(2 * v2);
    *a2 = v6;
    return 0LL;
  }
  v8 = (Microsoft::WRL::Details::WeakReferenceImpl *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = Microsoft::WRL::Details::WeakReferenceImpl::WeakReferenceImpl(v8, (struct IUnknown *)(a1 - 16));
    v15 = v9;
    v10 = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 4) = v4;
      v11 = ((__int64)v9 >> 1) | 0x8000000000000000uLL;
      v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v11, v4);
      for ( i = v4 == v13; ; i = v13 == v14 )
      {
        v14 = v13;
        if ( i )
        {
          *a2 = v15;
          return 0LL;
        }
        if ( v13 < 0 )
          break;
        *((_DWORD *)v10 + 4) = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v11, v13);
      }
      Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(v15, 1);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::AddRef();
      *a2 = (Microsoft::WRL::Details::WeakReferenceImpl *)(2 * v14);
      return 0LL;
    }
  }
  return 2147942414LL;
}
