/*
 * XREFs of ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18019C424
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18019552C (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x18019BF10 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18019D8EC (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CNaturalAnimation::GetForceForAxis(__int64 a1, int a2, float a3, float a4, _QWORD *a5)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  int WeakReferenceBase; // esi
  CComposition *v10; // rcx
  unsigned int v11; // eax
  const void *retaddr; // [rsp+58h] [rbp+0h]

  *a5 = 0LL;
  v7 = operator new(0x30uLL);
  v8 = v7;
  if ( v7 )
  {
    v7[1] = &CMILRefCountBase::`vftable';
    *((_DWORD *)v7 + 4) = 0;
    *v7 = &CNaturalAnimationScalarForceAdapater::`vftable'{for `IScalarForce'};
    v7[1] = &CNaturalAnimationScalarForceAdapater::`vftable'{for `CMILRefCountBase'};
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))*v8)(v8);
  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    *(float *)(a1 + 328) = a4;
    *(float *)(a1 + 292) = a3;
  }
  else
  {
    *(float *)(a1 + 324) = a4;
    *(float *)(a1 + 288) = a3;
  }
  *(_BYTE *)(a1 + 540) |= 0x10u;
  CNaturalAnimation::ClearState((CNaturalAnimation *)a1);
  WeakReferenceBase = CNaturalAnimation::SetupAnimationIfNecessary((CNaturalAnimation *)a1);
  if ( WeakReferenceBase < 0 )
  {
    v11 = 919;
  }
  else
  {
    v10 = *(CComposition **)(a1 + 16);
    v8[4] = v10;
    *((_DWORD *)v8 + 6) = a2;
    WeakReferenceBase = CComposition::GetWeakReferenceBase(
                          v10,
                          (struct CResource *)a1,
                          (struct CWeakReferenceBase **)v8 + 5);
    if ( WeakReferenceBase >= 0 )
    {
      *a5 = v8;
      return (unsigned int)WeakReferenceBase;
    }
    v11 = 921;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WeakReferenceBase, v11);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  return (unsigned int)WeakReferenceBase;
}
