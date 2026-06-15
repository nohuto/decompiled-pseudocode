/*
 * XREFs of ??1CAPOWrapperSrv@@QEAA@XZ @ 0x1801082AC
 * Callers:
 *     _ATL::CComObject_CAPOWrapperSrv_::CComObject_CAPOWrapperSrv__::_1_::dtor$0 @ 0x1800EDC32 (_ATL--CComObject_CAPOWrapperSrv_--CComObject_CAPOWrapperSrv__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x1800EDC40 (--1-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@QEAA@XZ @ 0x1800EDC88 (--1-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x1800EDC90 (--1-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAPOWrapperSrv::~CAPOWrapperSrv(struct _RTL_CRITICAL_SECTION *this)
{
  char *LockSemaphore; // rcx
  HANDLE OwningThread; // rcx
  __int64 v4; // rcx

  LockSemaphore = (char *)this[2].LockSemaphore;
  if ( (unsigned __int64)(LockSemaphore - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(LockSemaphore);
    this[2].LockSemaphore = 0LL;
  }
  OwningThread = this[2].OwningThread;
  if ( OwningThread )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  v4 = *(_QWORD *)&this[2].LockCount;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( LOBYTE(this[2].DebugInfo) )
  {
    LOBYTE(this[2].DebugInfo) = 0;
    DeleteCriticalSection(this + 1);
  }
}
