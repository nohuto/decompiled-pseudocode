/*
 * XREFs of ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x18000220C
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180007CFC (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x1800092C8 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z @ 0x1800022D0 (-_IsOwnedByWindow@CTransitionVisualController@@IEAA_NPEBVCWindowData@@QEAUHWND__@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006A38 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CTransitionVisualController::_CleanupHighZOrderClone(
        CTransitionVisualController *this,
        struct CTopLevelWindow **a2)
{
  struct CTopLevelWindow *v2; // rbp
  __int64 v3; // rdi
  const struct CWindowData *v6; // r13
  __int64 v7; // r12
  __int64 v8; // r15
  HWND v9; // r8
  CBaseObject *v10; // rax
  __int64 v11; // rcx

  v2 = *a2;
  v3 = 0LL;
  v6 = (const struct CWindowData *)*((_QWORD *)*a2 + 90);
  if ( *((_DWORD *)this + 34) )
  {
    v7 = *((_QWORD *)this + 14);
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 8 * v3);
      v9 = *(HWND *)(v8 + 16);
      if ( v9 == *((HWND *)v6 + 5)
        || CTransitionVisualController::_IsOwnedByWindow(this, v6, v9) && (*(_DWORD *)(v8 + 24) & 0x10000000) != 0 )
      {
        break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 34) )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    CTransitionVisualController::_MoveWindowOffscreen(v2, 0);
  }
  v10 = a2[1];
  v11 = *((_QWORD *)v10 + 3);
  if ( v11 )
  {
    VisualCollection::Remove((VisualCollection *)(v11 + 32), a2[1]);
    v10 = a2[1];
  }
  if ( v10 )
  {
    CBaseObject::Release(v10);
    a2[1] = 0LL;
  }
  if ( *a2 )
  {
    CBaseObject::Release(*a2);
    *a2 = 0LL;
  }
}
