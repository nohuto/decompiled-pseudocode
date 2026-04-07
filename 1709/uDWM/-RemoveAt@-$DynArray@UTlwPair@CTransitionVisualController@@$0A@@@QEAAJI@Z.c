/*
 * XREFs of ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000BAA4
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180005ABC (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x180007428 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000C994 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026D60 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18008F8F0 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v6; // r11
  __int64 v8; // rax
  __int64 v9; // xmm1_8
  __int64 v10; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u);
  }
  else
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v8 = v4++;
        v9 = *(_QWORD *)(v6 + 24LL * v4 + 16);
        v10 = 3 * v8;
        *(_OWORD *)(v6 + 8 * v10) = *(_OWORD *)(v6 + 24LL * v4);
        *(_QWORD *)(v6 + 8 * v10 + 16) = v9;
      }
      while ( v4 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  return v3;
}
