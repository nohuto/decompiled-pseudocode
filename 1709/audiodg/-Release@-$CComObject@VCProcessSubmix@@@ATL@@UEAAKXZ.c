/*
 * XREFs of ?Release@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x1400161F0
 * Callers:
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x14001F160 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14001F170 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x1400129A0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x140015EF0 (--_G-$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CProcessSubmix>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi
  char *(__fastcall *v4)(char *, char); // rax
  void (*v5)(void); // rax

  v2 = _InterlockedDecrement(Block + 74);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v4 = *(char *(__fastcall **)(char *, char))(*(_QWORD *)Block + 88LL);
      if ( v4 == ATL::CComObject<CProcessSubmix>::`scalar deleting destructor' )
        ATL::CComObject<CProcessSubmix>::`scalar deleting destructor'((char *)Block, 1);
      else
        v4((char *)Block, 1);
    }
    v5 = *(void (**)(void))(*(_QWORD *)ATL::_pAtlModule + 16LL);
    if ( (char *)v5 == (char *)CAudioDGModule::Unlock )
      CAudioDGModule::Unlock(ATL::_pAtlModule);
    else
      v5();
  }
  return v2;
}
