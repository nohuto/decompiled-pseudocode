/*
 * XREFs of ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1400126C0
 * Callers:
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x14001F2A0 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x14001F2B0 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x14001F2C0 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x1400125B0 (--_G-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x1400129A0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CAPOWrapperSrv>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // ebx
  struct _RTL_CRITICAL_SECTION *(__fastcall *v4)(struct _RTL_CRITICAL_SECTION *, char); // rax
  void (*v5)(void); // rax

  v2 = _InterlockedDecrement(Block + 8);
  if ( v2 )
    return v2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  if ( Block )
  {
    v4 = *(struct _RTL_CRITICAL_SECTION *(__fastcall **)(struct _RTL_CRITICAL_SECTION *, char))(*(_QWORD *)Block + 56LL);
    if ( v4 == ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor' )
      ATL::CComObject<CAPOWrapperSrv>::`scalar deleting destructor'((struct _RTL_CRITICAL_SECTION *)Block, 1);
    else
      v4((struct _RTL_CRITICAL_SECTION *)Block, 1);
  }
  v5 = *(void (**)(void))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( (char *)v5 != (char *)CAudioDGModule::Unlock )
  {
    v5();
    return v2;
  }
  CAudioDGModule::Unlock(ATL::_pAtlModule);
  return 0LL;
}
