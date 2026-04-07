/*
 * XREFs of ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x1800977BC
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009A2C0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009BC10 (-_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@.c)
 * Callees:
 *     ?GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180013248 (-GetStoredSnapshotNoRefByIndex@CTransitionVisualController@@QEAAJHPEAPEAVCTransitionWindowSnapsh.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180013270 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

void __fastcall CStoryboard::ResizeToSnapshot(HWND a1, const struct tagRECT *a2, struct tagRECT *a3)
{
  CDesktopManager *v3; // rax
  int SnapshotIndex; // eax
  CTransitionVisualController *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // xmm0_8
  int v9; // ecx
  int v10; // r8d
  struct CTransitionWindowSnapshot *v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = CDesktopManager::s_pDesktopManagerInstance;
  *a3 = *a2;
  SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(*((CTransitionVisualController **)v3 + 23), a1);
  if ( (int)CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v6, SnapshotIndex, &v11) >= 0 )
  {
    v7 = *((_QWORD *)v11 + 40);
    v8 = _mm_srli_si128(*((__m128i *)v11 + 20), 8).m128i_u64[0];
    v9 = v8 - v7;
    if ( (int)v8 - (int)v7 < 0 )
      v9 = 0;
    v10 = HIDWORD(v8) - HIDWORD(v7);
    a3->right = a3->left + v9;
    if ( HIDWORD(v8) - HIDWORD(v7) < 0 )
      v10 = 0;
    a3->bottom = v10 + a3->top;
  }
}
