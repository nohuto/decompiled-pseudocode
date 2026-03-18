/*
 * XREFs of ??_GCScalarForce@@UEAAPEAXI@Z @ 0x1801927BC
 * Callers:
 *     ??_ECScalarForce@@W7EAAPEAXI@Z @ 0x1800C6730 (--_ECScalarForce@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CScalarForce *__fastcall CScalarForce::`scalar deleting destructor'(CScalarForce *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 14);
  if ( v4 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
