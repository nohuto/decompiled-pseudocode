/*
 * XREFs of ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1400152D0
 * Callers:
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x14001E470 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x14001E480 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x14001E490 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x1400151E0 (--_G-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001D4E0 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned int __fastcall ATL::CComObject<CAPOWrapperSrv>::Release(int *Block)
{
  unsigned int result; // eax
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *(__fastcall *v4)(struct _RTL_CRITICAL_SECTION *, char); // rax

  result = ATL::CComMultiThreadModel::SafeDecrementReference(Block + 8);
  v3 = result;
  if ( !result )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v4 = *(struct _RTL_CRITICAL_SECTION *(__fastcall **)(struct _RTL_CRITICAL_SECTION *, char))(*(_QWORD *)Block + 56LL);
      if ( v4 == ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor' )
        ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor'((struct _RTL_CRITICAL_SECTION *)Block, v3 + 1);
      else
        v4((struct _RTL_CRITICAL_SECTION *)Block, v3 + 1);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
    return v3;
  }
  return result;
}
