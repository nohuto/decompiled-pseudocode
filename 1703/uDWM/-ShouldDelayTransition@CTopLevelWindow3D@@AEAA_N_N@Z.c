/*
 * XREFs of ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x18002EA50
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18002E784 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002E828 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180013248 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180013270 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     Template_pq @ 0x180081B64 (Template_pq.c)
 */

bool __fastcall CTopLevelWindow3D::ShouldDelayTransition(CTopLevelWindow3D *this, unsigned __int8 a2)
{
  __int64 v2; // rdi
  bool v3; // bl
  __int64 v5; // rdx
  __int64 v7; // rcx
  int v8; // r9d
  int v9; // eax
  int v10; // eax
  int SnapshotIndex; // eax
  CTransitionVisualController *v12; // rcx
  struct CTransitionWindowSnapshot *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 41);
  v3 = 0;
  v5 = v2;
  if ( (*(_BYTE *)(v2 + 596) & 1) != 0 )
    return v3;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(v2 + 600) & 0xFFF) == 0xFFF )
      return 0;
    SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(
                      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
                      *(HWND *)(v2 + 40));
    if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v12, SnapshotIndex, &v13) < 0 )
      return 0;
    v3 = 1;
    goto LABEL_13;
  }
  v7 = 0x100000LL;
  do
  {
    v8 = v7;
    if ( !v5 )
      break;
    v9 = *(_DWORD *)(v5 + 600);
    v5 = *(_QWORD *)(v5 + 544);
    v10 = v7 & v9;
    LODWORD(v7) = v7 | 0x10000000;
    v3 = v10 == v8;
  }
  while ( v10 != v8 );
  if ( v3 )
  {
LABEL_13:
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_pq(v7, &UdwmSystemAnimation_DelayShowHide, *(_QWORD *)(v2 + 40), a2);
  }
  return v3;
}
