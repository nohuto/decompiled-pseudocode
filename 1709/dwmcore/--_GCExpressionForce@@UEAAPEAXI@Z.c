/*
 * XREFs of ??_GCExpressionForce@@UEAAPEAXI@Z @ 0x180192AD0
 * Callers:
 *     ??_ECExpressionForce@@WBA@EAAPEAXI@Z @ 0x1800C6750 (--_ECExpressionForce@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CExpressionForce *__fastcall CExpressionForce::`scalar deleting destructor'(CExpressionForce *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)this + 2) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
