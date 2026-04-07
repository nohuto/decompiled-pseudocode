/*
 * XREFs of ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18008F4E0
 * Callers:
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000C994 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x180074B3C (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CTransitionVisualController::TransitionBitmap,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = 56LL * (v4 + 1);
        v8 = v4++;
        v9 = 56 * v8;
        v10 = *(_OWORD *)(v7 + v6 + 16);
        *(_OWORD *)(v9 + v6) = *(_OWORD *)(v7 + v6);
        v11 = *(_OWORD *)(v7 + v6 + 32);
        *(_OWORD *)(v9 + v6 + 16) = v10;
        *(_QWORD *)&v10 = *(_QWORD *)(v7 + v6 + 48);
        *(_OWORD *)(v9 + v6 + 32) = v11;
        *(_QWORD *)(v9 + v6 + 48) = v10;
      }
      while ( v4 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u);
  }
  return v3;
}
