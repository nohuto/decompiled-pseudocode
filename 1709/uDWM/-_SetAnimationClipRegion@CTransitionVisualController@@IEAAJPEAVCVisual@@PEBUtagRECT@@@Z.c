/*
 * XREFs of ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800073A0
 * Callers:
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180005F60 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180009148 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::_SetAnimationClipRegion(
        CTransitionVisualController *this,
        struct CVisual *a2,
        const struct tagRECT *a3)
{
  unsigned int v4; // ebx
  int v5; // edi
  CBaseObject *v6; // rsi
  __int64 v7; // rax
  CBaseObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v9 = 0LL;
  v5 = ResourceHelper::CreateRectangleGeometry(a3, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
    v7 = *((_QWORD *)a2 + 2);
    if ( v7 )
      v4 = *(_DWORD *)(v7 + 24);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4)
                                                           + 384LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
           v4,
           *((unsigned int *)v9 + 6));
    CBaseObject::Release(v6);
  }
  return (unsigned int)v5;
}
