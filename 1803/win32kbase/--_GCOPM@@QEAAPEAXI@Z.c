/*
 * XREFs of ??_GCOPM@@QEAAPEAXI@Z @ 0x1C00C5154
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00A90D0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ??1CMutex@@QEAA@XZ @ 0x1C00BFFA0 (--1CMutex@@QEAA@XZ.c)
 */

void **__fastcall COPM::`scalar deleting destructor'(void **P)
{
  __int64 i; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  CMutex::~CMutex(P + 4);
  CMutex::~CMutex(P + 3);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 3); i = (unsigned int)(i + 1) )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)*P + i);
    if ( v3 )
    {
      (**v3)(v3, 1LL);
      *((_QWORD *)*P + i) = 0LL;
    }
  }
  if ( *P )
    ExFreePoolWithTag(*P, 0x4D504F47u);
  ExFreePoolWithTag(P, 0x4D504F47u);
  return P;
}
