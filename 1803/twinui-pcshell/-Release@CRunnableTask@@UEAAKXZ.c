/*
 * XREFs of ?Release@CRunnableTask@@UEAAKXZ @ 0x1802679D0
 * Callers:
 *     ?Release@CRunnableTask@@W7EAAKXZ @ 0x1800ADD00 (-Release@CRunnableTask@@W7EAAKXZ.c)
 *     ?Release@CRunnableTask@@WBA@EAAKXZ @ 0x1800ADD10 (-Release@CRunnableTask@@WBA@EAAKXZ.c)
 *     ?Release@CRunnableTask@@WBI@EAAKXZ @ 0x1800ADD20 (-Release@CRunnableTask@@WBI@EAAKXZ.c)
 *     ?Release@CRunnableTask@@WCA@EAAKXZ @ 0x1800ADD30 (-Release@CRunnableTask@@WCA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRunnableTask::Release(CRunnableTask *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v1 && this )
    (*(void (__fastcall **)(CRunnableTask *, __int64))(*(_QWORD *)this + 128LL))(this, 1LL);
  return v1;
}
