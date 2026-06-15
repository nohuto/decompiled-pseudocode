/*
 * XREFs of ?PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ @ 0x18000D7A0
 * Callers:
 *     _lambda_6d8abb589d22b5930a9c9ecc0b82ece6_::operator() @ 0x18000D3E0 (_lambda_6d8abb589d22b5930a9c9ecc0b82ece6_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x18000DB18 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800919B8 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 */

void __fastcall CBaseStreamGroupProxy::PruneInactiveProcessSubmixes(Microsoft::WRL::Details::WeakReferenceImpl ***this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r14
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rdi
  Microsoft::WRL::Details::WeakReferenceImpl *v4; // rbx
  __int64 (__fastcall *v5)(volatile signed __int32 *); // rax
  __int64 v6; // [rsp+60h] [rbp+38h] BYREF
  CProcessSubmixProxy *v7; // [rsp+68h] [rbp+40h] BYREF
  Microsoft::WRL::Details::WeakReferenceImpl *v8; // [rsp+70h] [rbp+48h] BYREF
  __int64 v9; // [rsp+78h] [rbp+50h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(this + 19);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 19));
  if ( !((unsigned __int8 (__fastcall *)(Microsoft::WRL::Details::WeakReferenceImpl ***))(*this)[18])(this) )
  {
    CBaseStreamGroupProxy::PruneStaleProcessSubmixes((CBaseStreamGroupProxy *)this);
    v9 = 0LL;
    for ( i = this[27]; i != this[28]; ++i )
    {
      v4 = *i;
      v8 = v4;
      if ( v4 )
        (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v4 + 8LL))(v4);
      v7 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v8, (struct IInspectable **)&v7) >= 0 && v7 )
      {
        v6 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v7, &v6) >= 0
          && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 208LL))(v6) )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 192LL))(v6);
          (*(void (__fastcall **)(CProcessSubmixManager *, __int64))(*(_QWORD *)g_ProcessSubmixManager + 72LL))(
            g_ProcessSubmixManager,
            v6);
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v6);
      }
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v7);
      if ( v4 )
      {
        v5 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL);
        if ( v5 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)v4);
        else
          v5((volatile signed __int32 *)v4);
      }
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v9);
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
