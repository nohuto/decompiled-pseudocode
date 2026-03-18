/*
 * XREFs of ?OkToClose@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX1D@Z @ 0x1C0011F30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011C18 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011C5C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::OkToClose(CCompositionSurface *this, struct _EPROCESS *a2, void *a3, void *a4)
{
  CPushLock *v6; // rsi
  char *v7; // rdi
  char *i; // rbx

  if ( a2 == *((struct _EPROCESS **)this + 6)
    && _InterlockedExchangeAdd((volatile signed __int32 *)this + 11, 0xFFFFFFFF) == 1 )
  {
    *((_QWORD *)this + 6) = 0LL;
    if ( (unsigned __int8)PsGetProcessExitProcessCalled(a2) )
    {
      v6 = (CCompositionSurface *)((char *)this + 16);
      CPushLock::AcquireLockExclusive((CCompositionSurface *)((char *)this + 16));
      if ( *((_DWORD *)this + 22) )
      {
        v7 = (char *)this + 72;
        for ( i = (char *)*((_QWORD *)this + 9); i != v7; i = *(char **)i )
          (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)i - 3) + 48LL))((_QWORD *)i - 3);
      }
      CPushLock::ReleaseLock(v6);
    }
  }
  return 0LL;
}
