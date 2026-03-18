/*
 * XREFs of ??_GCExpressionForce@@UEAAPEAXI@Z @ 0x180188C24
 * Callers:
 *     ??_ECExpressionForce@@W7EAAPEAXI@Z @ 0x1800D5ED0 (--_ECExpressionForce@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CExpressionForce *__fastcall CExpressionForce::`scalar deleting destructor'(CExpressionForce *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
