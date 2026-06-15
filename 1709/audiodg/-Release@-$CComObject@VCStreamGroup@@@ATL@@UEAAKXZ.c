/*
 * XREFs of ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140015A70
 * Callers:
 *     ?DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140001670 (-DisconnectFromStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z.c)
 *     ?ConnectToStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z @ 0x140001750 (-ConnectToStreamGroup@CProcessSubmix@@UEAAJPEAUIStreamGroup@@@Z.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140010740 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x14001E780 (-Release@-$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x14001E790 (-Release@-$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x14001E7A0 (-Release@-$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x1400129A0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??_E?$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z @ 0x140015990 (--_E-$CComObject@VCStreamGroup@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CStreamGroup>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi
  char *(__fastcall *v4)(char *, char); // rax
  void (*v5)(void); // rax

  v2 = _InterlockedDecrement(Block + 76);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v4 = *(char *(__fastcall **)(char *, char))(*(_QWORD *)Block + 96LL);
      if ( v4 == ATL::CComObject<CStreamGroup>::`vector deleting destructor' )
        ATL::CComObject<CStreamGroup>::`vector deleting destructor'((char *)Block, 1);
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
