/*
 * XREFs of ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140015460
 * Callers:
 *     ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x14001B194 (-RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x140031AE4 (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComObjectCached<ATL::CComClassFactory>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx
  CAudioDGModule *v2; // rcx
  void (*v3)(void); // rax
  __int64 result; // rax

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
  {
    if ( a1 )
      ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'((void *)a1);
    return v1;
  }
  if ( v1 != 1 )
    return v1;
  v2 = ATL::_pAtlModule;
  v3 = *(void (**)(void))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( (char *)v3 != (char *)CAudioDGModule::Unlock )
  {
    v3();
    return v1;
  }
  result = 1LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)ATL::_pAtlModule + 3, 0xFFFFFFFF) == 1 )
    *((_BYTE *)v2 + 97) = 1;
  return result;
}
