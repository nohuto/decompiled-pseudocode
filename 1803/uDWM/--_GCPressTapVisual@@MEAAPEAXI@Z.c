/*
 * XREFs of ??_GCPressTapVisual@@MEAAPEAXI@Z @ 0x1800927F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180017CE4 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?StopTimer@CPressTapVisual@@MEAAJXZ @ 0x180092E10 (-StopTimer@CPressTapVisual@@MEAAJXZ.c)
 */

CPressTapVisual *__fastcall CPressTapVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx

  *this = (CBaseObject *)&CPressTapVisual::`vftable';
  CPressTapVisual::StopTimer((CPressTapVisual *)this);
  v4 = this[37];
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = this[43];
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = this[44];
  if ( v6 )
    CBaseObject::Release(v6);
  *this = (CBaseObject *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual((volatile signed __int32 **)this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return (CPressTapVisual *)this;
}
