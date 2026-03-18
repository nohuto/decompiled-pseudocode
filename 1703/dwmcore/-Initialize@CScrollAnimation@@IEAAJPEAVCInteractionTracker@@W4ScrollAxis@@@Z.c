/*
 * XREFs of ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180181B78
 * Callers:
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801830EC (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1801836C4 (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x18002F284 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801823DC (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

__int64 __fastcall CScrollAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  int v6; // ebp
  char v7; // r14
  unsigned __int8 v8; // r15
  int WeakReferenceBase; // eax
  unsigned int v10; // edi
  int v11; // ebx
  int v12; // r9d
  int v13; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v6 = 0;
  v7 = 0;
  v8 = 0;
  WeakReferenceBase = CComposition::GetWeakReferenceBase(
                        *(struct _RTL_GENERIC_TABLE **)(a1 + 16),
                        (struct CResource *)a2,
                        (struct CWeakReferenceBase **)(a1 + 232));
  v10 = WeakReferenceBase;
  if ( WeakReferenceBase < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0x45u);
    goto LABEL_14;
  }
  *(_DWORD *)(a1 + 228) = a3;
  if ( !a3 )
  {
    v6 = 1;
    v8 = 0;
    goto LABEL_9;
  }
  v11 = a3 - 1;
  if ( !v11 )
  {
    v6 = 1;
    v8 = 1;
LABEL_9:
    v7 = 1;
    v12 = 1;
    goto LABEL_10;
  }
  if ( v11 != 1 )
  {
    ModuleFailFastForHRESULT(-2147024809, retaddr);
    __debugbreak();
  }
  v12 = 2;
LABEL_10:
  v13 = CBaseExpression::SetTarget(a1, a2[81], (struct CResource *)a2, v12, 0x12u, v6, v7, v8);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x73u);
LABEL_14:
    CScrollAnimation::Stop((CScrollAnimation *)a1);
    return v10;
  }
  *(_BYTE *)(a1 + 248) |= 1u;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 376LL) |= 2u;
  return 0;
}
