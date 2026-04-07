/*
 * XREFs of ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800096B8
 * Callers:
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800080E8 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180006C10 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::_SetAnimationClipRegion(
        CTransitionVisualController *this,
        struct CVisual *a2,
        const struct tagRECT *a3)
{
  int v4; // eax
  CBaseObject *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  CBaseObject *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v4 = ResourceHelper::CreateRectangleGeometry(a3, &v10);
  v5 = v10;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = *((_QWORD *)a2 + 2);
    if ( v7 )
      v8 = *(unsigned int *)(v7 + 24);
    else
      v8 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 4)
                                                            + 400LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
           v8,
           *((unsigned int *)v10 + 6));
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v6;
}
