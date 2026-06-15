/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18000CFF0
 * Callers:
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18000CA54 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000D310 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x18000D348 (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::GetWeakReference(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rax
  signed __int64 v4; // rdi
  __int64 *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rdi
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h]
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  v4 = v2;
  v15 = v2;
  if ( v2 < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(2 * v2 + 12));
    *a2 = 2 * v2;
    return 0LL;
  }
  v16 = a1 - 248;
  v7 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(&v14, &v16);
  v8 = *v7;
  *v7 = 0LL;
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v9);
  }
  if ( v8 )
  {
    *(_DWORD *)(v8 + 16) = v4;
    v10 = (v8 >> 1) | 0x8000000000000000uLL;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v10, v4);
    for ( i = v4 == v12; ; i = v12 == v13 )
    {
      v13 = v12;
      if ( i )
      {
        *a2 = v8;
        return 0LL;
      }
      if ( v12 < 0 )
        break;
      *(_DWORD *)(v8 + 16) = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v10, v12);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)v8,
      1u);
    _InterlockedIncrement((volatile signed __int32 *)(2 * v13 + 12));
    *a2 = 2 * v13;
    return 0LL;
  }
  return 2147942414LL;
}
