/*
 * XREFs of ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18030EE00
 * Callers:
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18030EAB4 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18030EE00 (-_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x18030E770 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?RemoveContextMenuDataForItem@ImmersiveContextMenuHelper@@YAXPEAUHWND__@@_KI@Z @ 0x18030EA60 (-RemoveContextMenuDataForItem@ImmersiveContextMenuHelper@@YAXPEAUHWND__@@_KI@Z.c)
 *     ?_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18030EE00 (-_RemoveOwnerDrawFromMenuWorker@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 */

void __fastcall ImmersiveContextMenuHelper::_RemoveOwnerDrawFromMenuWorker(
        ImmersiveContextMenuHelper *this,
        HWND a2,
        HWND a3)
{
  HMENU v3; // rbx
  HMENU v4; // rdi
  UINT v5; // esi
  signed int Error; // edi
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  struct ContextMenuRenderingData *v8; // rbx
  HWND v9; // r8
  bool v10; // sf
  struct tagMENUITEMINFOW mii; // [rsp+28h] [rbp-59h] BYREF
  MENUITEMINFOW v12; // [rsp+78h] [rbp-9h] BYREF

  v3 = (HMENU)a2;
  v4 = (HMENU)this;
  v5 = 0;
  do
  {
    memset_0(&mii, 0, sizeof(mii));
    mii.cbSize = 80;
    mii.fMask = 422;
    if ( GetMenuItemInfoW(v4, v5, 1, &mii) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        goto LABEL_14;
    }
    memset_0(&v12, 0, sizeof(v12));
    v12.cbSize = 80;
    v12.fMask = 384;
    v12.fType = mii.fType & 0xFFFFFEFF;
    if ( mii.dwItemData )
    {
      ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                                 (HWND)v3,
                                 (HWND)mii.dwItemData,
                                 mii.wID);
      v8 = ContextMenuDataForItem;
      if ( ContextMenuDataForItem )
      {
        if ( ContextMenuDataForItem == (struct ContextMenuRenderingData *)mii.dwItemData )
        {
          v12.dwItemData = 0LL;
          v12.fMask |= 0x20u;
        }
        ImmersiveContextMenuHelper::RemoveContextMenuDataForItem(a2, (HWND)mii.dwItemData, mii.wID);
        if ( *((_QWORD *)v8 + 4) )
        {
          v12.hbmpItem = (HBITMAP)*((_QWORD *)v8 + 4);
          *((_QWORD *)v8 + 4) = 0LL;
        }
      }
      v3 = (HMENU)a2;
    }
    SetMenuItemInfoW((HMENU)this, v5, 1, &v12);
    if ( mii.hSubMenu )
      ImmersiveContextMenuHelper::_RemoveOwnerDrawFromMenuWorker((ImmersiveContextMenuHelper *)mii.hSubMenu, v3, v9);
LABEL_14:
    ++v5;
    v10 = Error < 0;
    v4 = (HMENU)this;
  }
  while ( !v10 );
}
