/*
 * XREFs of ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x14001A814
 * Callers:
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001ADA0 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140014740 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14001A8C0 (-CreateInstance@-$CComCreator@V-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(
        ATL::_ATL_OBJMAP_ENTRY30 *this))(__int64, GUID *, LPUNKNOWN *)
{
  __int64 (__fastcall *result)(__int64, GUID *, LPUNKNOWN *); // rax
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  void (*Release)(void); // rax
  LPUNKNOWN pUnk; // [rsp+40h] [rbp+8h] BYREF

  pUnk = 0LL;
  result = (__int64 (__fastcall *)(__int64, GUID *, LPUNKNOWN *))*((_QWORD *)this + 2);
  if ( result )
  {
    v3 = *((_QWORD *)this + 3);
    if ( (char *)result == (char *)ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance )
      v4 = ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             &pUnk);
    else
      v4 = result(v3, &GUID_00000000_0000_0000_c000_000000000046, &pUnk);
    v5 = v4;
    if ( v4 >= 0 )
      v5 = CoRegisterClassObject(*(const IID *const *)this, pUnk, 4u, 5u, (LPDWORD)this + 10);
    if ( pUnk )
    {
      Release = (void (*)(void))pUnk->lpVtbl->Release;
      if ( (char *)Release == (char *)ATL::CComObjectCached<ATL::CComClassFactory>::Release )
        ATL::CComObjectCached<ATL::CComClassFactory>::Release((__int64)pUnk);
      else
        Release();
    }
    return (__int64 (__fastcall *)(__int64, GUID *, LPUNKNOWN *))v5;
  }
  return result;
}
