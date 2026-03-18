/*
 * XREFs of ?OkToClose@CCompositionSurface@@MEAAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C00116E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00112A0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::OkToClose(
        CCompositionSurface *this,
        struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *a2)
{
  CPushLock *v4; // rsi
  char *v5; // rdi
  char *i; // rbx

  if ( *(_QWORD *)a2 == *((_QWORD *)this + 5)
    && _InterlockedExchangeAdd((volatile signed __int32 *)this + 9, 0xFFFFFFFF) == 1 )
  {
    *((_QWORD *)this + 5) = 0LL;
    if ( (unsigned __int8)PsGetProcessExitProcessCalled(*(_QWORD *)a2) )
    {
      v4 = (CCompositionSurface *)((char *)this + 8);
      CPushLock::AcquireLockExclusive((CCompositionSurface *)((char *)this + 8));
      if ( *((_DWORD *)this + 20) )
      {
        v5 = (char *)this + 64;
        for ( i = (char *)*((_QWORD *)this + 8); i != v5; i = *(char **)i )
          (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)i - 3) + 48LL))((_QWORD *)i - 3);
      }
      CPushLock::ReleaseLock(v4);
    }
  }
  return 0LL;
}
