/*
 * XREFs of ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18016AB58
 * Callers:
 *     ?RemoveAll@?$CMap@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$ComPtr@VCInteraction@@@23@V?$CMapEqualHelper@V?$ComPtr@VCManipulation@@@WRL@Microsoft@@V?$ComPtr@VCInteraction@@@23@@@@@QEAAXXZ @ 0x18016D170 (-RemoveAll@-$CMap@V-$ComPtr@VCManipulation@@@WRL@Microsoft@@V-$ComPtr@VCInteraction@@@23@V-$CMap.c)
 *     ??1CManipulationContext@@UEAA@XZ @ 0x1801A0EC8 (--1CManipulationContext@@UEAA@XZ.c)
 *     ?RemoveRange@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHH@Z @ 0x1801A2C78 (-RemoveRange@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCIn.c)
 *     ?SetAtIndex@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHAEBIAEBV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@Z @ 0x1801A3CA8 (-SetAtIndex@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return a1;
}
