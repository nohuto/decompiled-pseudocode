/*
 * XREFs of ??_GCMonitorAPI@@QEAAPEAXI@Z @ 0x1C00FADD4
 * Callers:
 *     DDCCICleanUpWrap @ 0x1C00FACB0 (DDCCICleanUpWrap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall CMonitorAPI::`scalar deleting destructor'(char *P)
{
  __int64 i; // rdi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  CMutex::~CMutex((CMutex *)(P + 32));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 5); i = (unsigned int)(i + 1) )
  {
    v4 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)P + 1) + 8 * i);
    if ( v4 )
    {
      (**v4)(v4, 1LL);
      *(_QWORD *)(*((_QWORD *)P + 1) + 8 * i) = 0LL;
    }
  }
  OPMFreeMemory(*((void **)P + 1));
  CMutex::~CMutex((CMutex *)P);
  if ( P )
    ExFreePoolWithTag(P, 0x63326947u);
  return P;
}
