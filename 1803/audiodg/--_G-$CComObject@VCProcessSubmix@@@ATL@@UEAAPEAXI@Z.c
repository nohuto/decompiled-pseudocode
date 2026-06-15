/*
 * XREFs of ??_G?$CComObject@VCProcessSubmix@@@ATL@@UEAAPEAXI@Z @ 0x1400155C0
 * Callers:
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x140015680 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140006360 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140014800 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall ATL::CComObject<CProcessSubmix>::`scalar deleting destructor'(char *Block, char a2)
{
  __int64 (__fastcall *v4)(CAudioDGModule *); // rax

  *(_QWORD *)Block = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
  *((_QWORD *)Block + 1) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
  *((_QWORD *)Block + 2) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
  *((_DWORD *)Block + 74) = -1073741823;
  v4 = *(__int64 (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v4 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v4(ATL::_pAtlModule);
  CSubmixImpl::~CSubmixImpl((CSubmixImpl *)(Block + 16));
  if ( Block[344] )
  {
    Block[344] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 304));
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
