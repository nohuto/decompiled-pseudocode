/*
 * XREFs of ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180096B60
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

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphObjectsStore::GetConnectedStreamGroups(
        Microsoft::WRL::Details::WeakReferenceImpl ***a1,
        __int64 a2)
{
  Microsoft::WRL::Details::WeakReferenceImpl *v4; // rsi
  Microsoft::WRL::Details::WeakReferenceImpl *v5; // rbx
  __int64 v6; // r14
  const char *v7; // r9
  __int64 (__fastcall *v8)(volatile signed __int32 *); // rax
  Microsoft::WRL::Details::WeakReferenceImpl **i; // rdi
  __int64 result; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v11[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64); // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v11[1] = (Microsoft::WRL::Details::WeakReferenceImpl *)-2LL;
  try
  {
    v4 = (Microsoft::WRL::Details::WeakReferenceImpl *)(a1 + 2);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 2));
    v11[2] = v4;
    for ( i = a1[7]; i != a1[8]; ++i )
    {
      v5 = *i;
      v11[0] = v5;
      if ( v5 )
        (*(void (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v5 + 8LL))(v5);
      v13 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v11, (struct IInspectable **)&v13) < 0 || !v13 )
        goto LABEL_13;
      v14 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v13, (__int64)&v14) < 0 )
      {
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v14);
LABEL_13:
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((CProcessSubmixProxy **)&v13);
        goto LABEL_14;
      }
      v15 = 0LL;
      v6 = v14;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v15);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 208LL))(v6, &v15) >= 0 && v15 )
        std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_back<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
          a2,
          &v14);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((CProcessSubmixProxy **)&v13);
LABEL_14:
      if ( v5 )
      {
        v8 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL);
        if ( v8 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)v5);
        else
          v8((volatile signed __int32 *)v5);
      }
    }
    if ( v4 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v4);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v13) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x207,
                     (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                     v7);
    return (unsigned int)v13;
  }
  return result;
}
