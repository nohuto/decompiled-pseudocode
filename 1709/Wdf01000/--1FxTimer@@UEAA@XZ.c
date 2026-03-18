/*
 * XREFs of ??1FxTimer@@UEAA@XZ @ 0x1C007E860
 * Callers:
 *     ??_EFxTimer@@UEAAPEAXI@Z @ 0x1C007E8E0 (--_EFxTimer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0017EC8 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C0062F14 (--1MxTimer@@QEAA@XZ.c)
 */

void __fastcall FxTimer::~FxTimer(FxTimer *this, __int64 a2)
{
  const void *_a1; // rdx
  unsigned int v4; // edx
  unsigned int v5; // r8d

  this->__vftable = (FxTimer_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock.OldIrql;
  if ( this->m_Object )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  MxTimer::~MxTimer(&this->m_Timer, a2);
  FxNonPagedObject::~FxNonPagedObject(this, v4, v5);
}
