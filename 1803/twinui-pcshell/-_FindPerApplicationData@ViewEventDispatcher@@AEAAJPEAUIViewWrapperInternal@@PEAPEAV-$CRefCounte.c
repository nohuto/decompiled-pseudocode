/*
 * XREFs of ?_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x18003152C
 * Callers:
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180031E9C (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18003208C (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsEqualByAppId@ViewWrapperBase@@UEAA_NPEBG@Z @ 0x180051C40 (-IsEqualByAppId@ViewWrapperBase@@UEAA_NPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindPerApplicationData(__int64 a1, ViewWrapperBase *a2, __int64 *a3)
{
  __int64 v3; // rbx
  const unsigned __int16 *StringRawBuffer; // rdx
  char v8; // al
  __int64 *v10; // rbx

  *a3 = 0LL;
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 592) )
    return 2147647531LL;
  while ( 1 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 584) + 8 * v3) + 8LL), 0LL);
    v8 = *(bool (**)(ViewWrapperBase *__hidden, const unsigned __int16 *))(*(_QWORD *)a2 + 608LL) == ViewWrapperBase::IsEqualByAppId
       ? ViewWrapperBase::IsEqualByAppId(a2, StringRawBuffer)
       : (*(unsigned __int64 (__fastcall **)(ViewWrapperBase *, const unsigned __int16 *))(*(_QWORD *)a2 + 608LL))(
           a2,
           StringRawBuffer);
    if ( v8 )
      break;
    if ( (unsigned __int64)++v3 >= *(_QWORD *)(a1 + 592) )
      return 2147647531LL;
  }
  v10 = (__int64 *)(*(_QWORD *)(a1 + 584) + 8 * v3);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v10);
  *a3 = *v10;
  return 0LL;
}
