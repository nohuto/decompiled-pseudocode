/*
 * XREFs of ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800256A0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180025614 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWRLObjectWithGITSite::GetSite(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  unsigned int Ptr; // ebp
  int v7; // ebx

  *a3 = 0LL;
  Ptr = 0;
  AcquireSRWLockShared(this + 1);
  if ( this[3].Ptr )
  {
    v7 = (**(__int64 (__fastcall ***)(PVOID, const struct _GUID *, void **))this[3].Ptr)(this[3].Ptr, a2, a3);
  }
  else
  {
    Ptr = (unsigned int)this[2].Ptr;
    v7 = -2147467259;
  }
  ReleaseSRWLockShared(this + 1);
  if ( Ptr )
  {
    *a3 = 0LL;
    v7 = GlobalInterfaceTable::s_Retrieve();
    if ( v7 >= 0 )
      return ((unsigned int (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD, const struct _GUID *, void **))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->GetInterfaceFromGlobal)(
               GlobalInterfaceTable::s_pGlobalInterfaceTable,
               Ptr,
               a2,
               a3);
  }
  return (unsigned int)v7;
}
