/*
 * XREFs of ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x180016F10
 * Callers:
 *     AudioServerDisconnect @ 0x180049220 (AudioServerDisconnect.c)
 * Callees:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x180047B70 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x180063940 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CVADServer>::Release(int *a1)
{
  unsigned int v2; // edi
  __int64 (__fastcall *v3)(void *); // rax

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
    {
      v3 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)a1 + 232LL);
      if ( v3 == ATL::CComObject<CVADServer>::`vector deleting destructor' )
        ATL::CComObject<CVADServer>::`vector deleting destructor'(a1);
      else
        ((void (__fastcall *)(int *, _QWORD))v3)(a1, v2 + 1);
    }
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
