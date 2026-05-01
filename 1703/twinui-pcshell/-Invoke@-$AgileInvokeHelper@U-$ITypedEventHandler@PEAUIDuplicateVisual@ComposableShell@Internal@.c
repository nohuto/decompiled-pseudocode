/*
 * XREFs of ?Invoke@?$AgileInvokeHelper@U?$ITypedEventHandler@PEAUIDuplicateVisual@ComposableShell@Internal@Windows@@PEAUIDuplicateVisualKindChangedEventArgs@234@@Foundation@Windows@@$01@Details@WRL@Microsoft@@UEAAJPEAUIDuplicateVisual@ComposableShell@Internal@Windows@@PEAUIDuplicateVisualKindChangedEventArgs@678@@Z @ 0x18016A490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::AgileInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::IDuplicateVisual *,Windows::Internal::ComposableShell::IDuplicateVisualKindChangedEventArgs *>,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 40);
  v6 = 0LL;
  v10 = 0LL;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &GUID_cf0ae9b7_5cb7_5912_ba8f_849701dc610e,
           &v10);
    if ( v7 < 0 )
      goto LABEL_5;
    v6 = v10;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2, a3);
LABEL_5:
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v7;
}
