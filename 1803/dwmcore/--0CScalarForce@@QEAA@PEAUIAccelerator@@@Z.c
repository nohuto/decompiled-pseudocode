/*
 * XREFs of ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x1801CB508
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18019552C (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ??0CMotion@@QEAA@XZ @ 0x1801C4780 (--0CMotion@@QEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180025080 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CScalarForce *__fastcall CScalarForce::CScalarForce(CScalarForce *this, struct IAccelerator *a2)
{
  __int64 (__fastcall ****v3)(_QWORD); // rcx

  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CScalarForce::`vftable'{for `IScalarForce'};
  *((_QWORD *)this + 1) = &CScalarForce::`vftable'{for `CMILRefCountBase'};
  *((_DWORD *)this + 23) = 0;
  *((float *)this + 24) = 0.0;
  *((float *)this + 25) = 0.0;
  *((_DWORD *)this + 26) = 0;
  v3 = (__int64 (__fastcall ****)(_QWORD))((char *)this + 112);
  *v3 = (__int64 (__fastcall ***)(_QWORD))a2;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v3);
  return this;
}
