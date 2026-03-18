/*
 * XREFs of ??1CCompositionBuffer@@UEAA@XZ @ 0x1C000A104
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C0013D74 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ??_GCCompositionBuffer@@UEAAPEAXI@Z @ 0x1C004C8F0 (--_GCCompositionBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ @ 0x1C000A044 (-RemoveAllRealizations@CCompositionBuffer@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionBuffer::~CCompositionBuffer(CCompositionBuffer *this)
{
  void (__fastcall ***v2)(_QWORD); // rcx

  *(_QWORD *)this = &CCompositionBuffer::`vftable';
  CCompositionBuffer::RemoveAllRealizations(this);
  v2 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 31);
  if ( v2 )
    (**v2)(v2);
}
