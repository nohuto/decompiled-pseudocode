/*
 * XREFs of ??1CAPOWrapperSrv@@QEAA@XZ @ 0x1800CE3F4
 * Callers:
 *     _ATL::CComObject_CAPOWrapperSrv_::CComObject_CAPOWrapperSrv__::_1_::dtor$0 @ 0x1800BF786 (_ATL--CComObject_CAPOWrapperSrv_--CComObject_CAPOWrapperSrv__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x1800BF794 (--1-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@QEAA@XZ @ 0x1800BF7DC (--1-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x1800BF7E4 (--1-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
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
