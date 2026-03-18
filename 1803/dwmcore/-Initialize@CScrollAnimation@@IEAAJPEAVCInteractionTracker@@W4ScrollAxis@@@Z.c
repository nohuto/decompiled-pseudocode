/*
 * XREFs of ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801BE32C
 * Callers:
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801BF55C (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1801BFB3C (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18003BD74 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801BE8C0 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

__int64 __fastcall CScrollAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  int v6; // ebp
  char v7; // r14
  int WeakReferenceBase; // esi
  int v9; // ebx
  int v10; // r9d
  __int64 v11; // rax
  unsigned int v12; // eax
  const void *retaddr; // [rsp+58h] [rbp+0h]

  v6 = 0;
  v7 = 0;
  WeakReferenceBase = CComposition::GetWeakReferenceBase(
                        *(CComposition **)(a1 + 16),
                        (struct CResource *)a2,
                        (struct CWeakReferenceBase **)(a1 + 296));
  if ( WeakReferenceBase < 0 )
  {
    v12 = 61;
    goto LABEL_14;
  }
  *(_DWORD *)(a1 + 292) = a3;
  if ( a3 )
  {
    v9 = a3 - 1;
    if ( !v9 )
    {
      v10 = 1;
      v6 = 1;
      v7 = 1;
      v11 = 1LL;
      goto LABEL_10;
    }
    if ( v9 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v10 = 2;
  }
  else
  {
    v10 = 1;
    v6 = 1;
    v7 = 1;
  }
  v11 = 0LL;
LABEL_10:
  WeakReferenceBase = CBaseExpression::SetTarget(a1, a2[87], (struct CResource *)a2, v10, 0x12u, v6, v7, v11);
  if ( WeakReferenceBase < 0 )
  {
    v12 = 107;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WeakReferenceBase, v12);
    CScrollAnimation::Stop((CScrollAnimation *)a1);
    return (unsigned int)WeakReferenceBase;
  }
  *(_BYTE *)(a1 + 312) |= 1u;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 424LL) |= 2u;
  return 0;
}
