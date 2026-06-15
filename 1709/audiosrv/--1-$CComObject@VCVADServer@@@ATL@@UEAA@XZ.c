/*
 * XREFs of ??1?$CComObject@VCVADServer@@@ATL@@UEAA@XZ @ 0x18002AFF4
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18002AFC0 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180027B60 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CComObject<CVADServer>::~CComObject<CVADServer>(CVADServer *this)
{
  *(_QWORD *)this = &ATL::CComObject<CVADServer>::`vftable';
  *((_DWORD *)this + 2) = -1073741823;
  CVADServer::FinalRelease(this);
  (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CVADServer::~CVADServer(this);
}
