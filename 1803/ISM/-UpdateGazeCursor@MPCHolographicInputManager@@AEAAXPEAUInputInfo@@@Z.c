/*
 * XREFs of ?UpdateGazeCursor@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004E784
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004DF48 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x18004F5D4 (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 */

void __fastcall MPCHolographicInputManager::UpdateGazeCursor(MPCHolographicInputManager *this, struct InputInfo *a2)
{
  struct InputInfo *v2; // rbx
  __int64 v4; // rax
  _OWORD *v5; // rcx
  __int128 v6; // xmm1

  v2 = a2;
  if ( *((_DWORD *)a2 + 130) == 8 )
  {
    MPCHolographicInputManager::ProcessCursorData(
      this,
      *((_QWORD *)this + 250),
      (char *)a2 + 600,
      0LL,
      (char *)this + 2048);
    v4 = 13LL;
    v5 = (_OWORD *)((char *)this + 200);
    do
    {
      *v5 = *(_OWORD *)v2;
      v5[1] = *((_OWORD *)v2 + 1);
      v5[2] = *((_OWORD *)v2 + 2);
      v5[3] = *((_OWORD *)v2 + 3);
      v5[4] = *((_OWORD *)v2 + 4);
      v5[5] = *((_OWORD *)v2 + 5);
      v5[6] = *((_OWORD *)v2 + 6);
      v5 += 8;
      v6 = *((_OWORD *)v2 + 7);
      v2 = (struct InputInfo *)((char *)v2 + 128);
      *(v5 - 1) = v6;
      --v4;
    }
    while ( v4 );
    *v5 = *(_OWORD *)v2;
    v5[1] = *((_OWORD *)v2 + 1);
    v5[2] = *((_OWORD *)v2 + 2);
    v5[3] = *((_OWORD *)v2 + 3);
    *((_QWORD *)v5 + 8) = *((_QWORD *)v2 + 8);
  }
}
