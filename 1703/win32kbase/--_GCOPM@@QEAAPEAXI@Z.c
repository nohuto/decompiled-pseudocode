/*
 * XREFs of ??_GCOPM@@QEAAPEAXI@Z @ 0x1C006D828
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0066D40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1CMutex@@QEAA@XZ @ 0x1C006D970 (--1CMutex@@QEAA@XZ.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C0092900 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

COPM *__fastcall COPM::`scalar deleting destructor'(COPM *this)
{
  __int64 i; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  CMutex::~CMutex((COPM *)((char *)this + 32));
  CMutex::~CMutex((COPM *)((char *)this + 24));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 3); i = (unsigned int)(i + 1) )
  {
    v3 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)this + 8 * i);
    if ( v3 )
    {
      (**v3)(v3, 1LL);
      *(_QWORD *)(*(_QWORD *)this + 8 * i) = 0LL;
    }
  }
  OPMFreeMemory(*(void **)this);
  OPMFreeMemory(this);
  return this;
}
