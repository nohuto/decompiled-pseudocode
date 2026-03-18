/*
 * XREFs of ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801731BC
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18016D2E4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x180172CF0 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801745E4 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CNaturalAnimation::GetForceForAxis(__int64 a1, int a2, float a3, float a4, _QWORD *a5)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  signed int v9; // eax
  unsigned int v10; // esi
  CComposition *v11; // rcx
  signed int WeakReferenceBase; // eax
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
    *(float *)(a1 + 312) = a4;
    *(float *)(a1 + 276) = a3;
  }
  else
  {
    *(float *)(a1 + 308) = a4;
    *(float *)(a1 + 272) = a3;
  }
  *(_BYTE *)(a1 + 524) |= 0x10u;
  CNaturalAnimation::ClearState((CNaturalAnimation *)a1);
  v9 = CNaturalAnimation::SetupAnimationIfNecessary((CNaturalAnimation *)a1);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x39Fu);
  }
  else
  {
    v11 = *(CComposition **)(a1 + 16);
    v8[4] = v11;
    *((_DWORD *)v8 + 6) = a2;
    WeakReferenceBase = CComposition::GetWeakReferenceBase(
                          v11,
                          (struct CResource *)a1,
                          (struct CWeakReferenceBase **)v8 + 5);
    v10 = WeakReferenceBase;
    if ( WeakReferenceBase >= 0 )
    {
      *a5 = v8;
      return v10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WeakReferenceBase, 0x3A1u);
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
  return v10;
}
