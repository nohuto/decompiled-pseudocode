/*
 * XREFs of ?RemoveAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z @ 0x180087710
 * Callers:
 *     ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x180087960 (-ValidateVisual@CTouchDragVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<TOUCH_DRAG_POINT,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // r10
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  if ( a2 < v2 )
  {
    v5 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v6 = a2 + 1;
        v7 = 28LL * (a2 + 1);
        v8 = 28LL * a2;
        v9 = *(_OWORD *)(v7 + v5);
        v10 = *(_QWORD *)(v7 + v5 + 16);
        LODWORD(v7) = *(_DWORD *)(v7 + v5 + 24);
        *(_OWORD *)(v8 + v5) = v9;
        *(_QWORD *)(v8 + v5 + 16) = v10;
        *(_DWORD *)(v8 + v5 + 24) = v7;
        a2 = v6;
      }
      while ( v6 < *((_DWORD *)a1 + 6) - 1 );
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
