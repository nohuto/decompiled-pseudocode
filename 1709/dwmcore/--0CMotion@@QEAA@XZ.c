/*
 * XREFs of ??0CMotion@@QEAA@XZ @ 0x18018CB04
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016B5C0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180189B6C (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x180192758 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 */

CMotion *__fastcall CMotion::CMotion(CMotion *this)
{
  struct IAccelerator *v1; // rbx
  CScalarForce *v3; // rax
  CScalarForce *v4; // rbx
  __int64 v5; // rcx

  v1 = (CMotion *)((char *)this + 88);
  *(_QWORD *)this = &CMotion::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 11) = &CSpringAccelerator::`vftable'{for `IAccelerator'};
  *((_QWORD *)this + 12) = &CAttractionAccelerator::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 17) = 0LL;
  (**(void (__fastcall ***)(struct IAccelerator *))v1)(v1);
  v3 = (CScalarForce *)operator new(0x78uLL);
  if ( v3 )
    v4 = CScalarForce::CScalarForce(v3, v1);
  else
    v4 = 0LL;
  if ( *((CScalarForce **)this + 10) != v4 )
  {
    if ( v4 )
      (**(void (__fastcall ***)(CScalarForce *))v4)(v4);
    v5 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = v4;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return this;
}
