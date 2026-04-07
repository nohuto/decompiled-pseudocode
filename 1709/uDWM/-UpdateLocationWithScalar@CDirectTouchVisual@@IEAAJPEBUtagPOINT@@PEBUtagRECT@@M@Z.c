/*
 * XREFs of ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800397BC
 * Callers:
 *     ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180039908 (-StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180083130 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008427C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x1800844B0 (-UpdateTransition@CDirectTouchVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800193BC (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x1800193F0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x180039CC0 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateLocationWithScalar(
        CDirectTouchVisual *this,
        const struct tagPOINT *a2,
        const struct tagRECT *a3,
        float a4)
{
  int v7; // edx
  _DWORD *v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // ebx

  *((float *)this + 87) = a4;
  v7 = a3->right - a3->left;
  if ( v7 <= a3->bottom - a3->top )
    v7 = a3->bottom - a3->top;
  v8 = (_DWORD *)((char *)this + 320);
  v9 = (int)(float)((float)CContactManager::GetBoundedContactWidth(this, v7, *a2) * a4);
  *((_DWORD *)this + 80) = v9;
  if ( v9 < 1 )
    *v8 = 1;
  *((_DWORD *)this + 81) = *v8;
  CVisual::SetSize(*((struct tagSIZE **)this + 51), (const struct tagSIZE *)this + 40);
  v10 = *v8 / 2;
  *((struct tagPOINT *)this + 37) = *a2;
  *((struct tagRECT *)this + 19) = *a3;
  v11 = a2->y - *((_DWORD *)this + 81) / 2;
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 51), a2->x - v10);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 51), v11);
  return 0LL;
}
