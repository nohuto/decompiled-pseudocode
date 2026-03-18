/*
 * XREFs of ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180188EE8
 * Callers:
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180189F38 (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x18018A48C (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800A23EC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x18018947C (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

__int64 __fastcall CScrollAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  int v6; // ebp
  char v7; // r14
  signed int WeakReferenceBase; // eax
  unsigned int v9; // edi
  int v10; // ebx
  int v11; // r9d
  __int64 v12; // rax
  signed int v13; // eax
  const void *retaddr; // [rsp+58h] [rbp+0h]

  v6 = 0;
  v7 = 0;
  WeakReferenceBase = CComposition::GetWeakReferenceBase(
                        *(CComposition **)(a1 + 16),
                        (struct CResource *)a2,
                        (struct CWeakReferenceBase **)(a1 + 280));
  v9 = WeakReferenceBase;
  if ( WeakReferenceBase < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WeakReferenceBase, 0x3Du);
    goto LABEL_14;
  }
  *(_DWORD *)(a1 + 276) = a3;
  if ( a3 )
  {
    v10 = a3 - 1;
    if ( !v10 )
    {
      v11 = 1;
      v6 = 1;
      v7 = 1;
      v12 = 1LL;
      goto LABEL_10;
    }
    if ( v10 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v11 = 2;
  }
  else
  {
    v11 = 1;
    v6 = 1;
    v7 = 1;
  }
  v12 = 0LL;
LABEL_10:
  v13 = CBaseExpression::SetTarget(a1, a2[84], (struct CResource *)a2, v11, 0x12u, v6, v7, v12);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x6Bu);
LABEL_14:
    CScrollAnimation::Stop((CScrollAnimation *)a1);
    return v9;
  }
  *(_BYTE *)(a1 + 296) |= 1u;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL) + 376LL) |= 2u;
  return 0;
}
