/*
 * XREFs of ??_E?$RuntimeClass@U?$IIterator@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180018660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IIterator<HSTRING__ *>>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rcx

  v4 = a1[3];
  if ( v4 < 0 )
  {
    v5 = (volatile signed __int32 *)(2 * v4);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v5 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 32LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x20uLL);
  return a1;
}
