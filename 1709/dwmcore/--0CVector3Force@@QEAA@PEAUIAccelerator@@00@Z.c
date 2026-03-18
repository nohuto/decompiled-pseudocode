/*
 * XREFs of ??0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z @ 0x18017268C
 * Callers:
 *     ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1801734D4 (-InitializeForces@CNaturalAnimation@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0CVector3ForceEvaluator@@QEAA@XZ @ 0x18017271C (--0CVector3ForceEvaluator@@QEAA@XZ.c)
 */

CVector3Force *__fastcall CVector3Force::CVector3Force(
        CVector3Force *this,
        struct IAccelerator *a2,
        struct IAccelerator *a3,
        struct IAccelerator *a4)
{
  __int64 v7; // r10
  CVector3Force *result; // rax

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CVector3Force::`vftable';
  CVector3ForceEvaluator::CVector3ForceEvaluator((CVector3Force *)((char *)this + 16));
  *((_QWORD *)this + 36) = v7;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 36);
  *((_QWORD *)this + 37) = a3;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 37);
  *((_QWORD *)this + 38) = a4;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 38);
  *((_BYTE *)this + 352) &= 0xF8u;
  result = this;
  *((_DWORD *)this + 89) = 1084227584;
  return result;
}
