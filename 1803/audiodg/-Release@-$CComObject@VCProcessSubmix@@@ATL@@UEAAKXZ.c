/*
 * XREFs of ?Release@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x140015680
 * Callers:
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x14001E330 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14001E340 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x1400155C0 (--_G-$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001D4E0 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CProcessSubmix>::Release(int *Block)
{
  unsigned int v2; // edi
  char *(__fastcall *v3)(char *, char); // rax

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(Block + 74);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v3 = *(char *(__fastcall **)(char *, char))(*(_QWORD *)Block + 88LL);
      if ( v3 == ATL::CComObject<CProcessSubmix>::`scalar deleting destructor' )
        ATL::CComObject<CProcessSubmix>::`scalar deleting destructor'((char *)Block, v2 + 1);
      else
        v3((char *)Block, v2 + 1);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
