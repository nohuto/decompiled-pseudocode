/*
 * XREFs of ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800967F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000C800 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x180095E40 (--$emplace_back@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIStreamGro.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CDeviceGraphObjectsStore::GetAllStreamGroups(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl *v5; // rbx
  const char *v6; // r9
  __int64 (__fastcall *v7)(volatile signed __int32 *); // rax
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rdi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64); // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  Microsoft::WRL::Details::WeakReferenceImpl *v13; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
    for ( i = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 56);
          i != *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 64);
          ++i )
    {
      v5 = *i;
      v13 = v5;
      if ( v5 )
        (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v5 + 8LL))(v5);
      v11 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v13, (struct IInspectable **)&v11) >= 0 && v11 )
      {
        v12 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v11, (__int64)&v12) >= 0 )
          std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_back<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
            a2,
            &v12);
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v12);
      }
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((CProcessSubmixProxy **)&v11);
      if ( v5 )
      {
        v7 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL);
        if ( v7 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)v5);
        else
          v7((volatile signed __int32 *)v5);
      }
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1E7,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v6);
  }
  return result;
}
