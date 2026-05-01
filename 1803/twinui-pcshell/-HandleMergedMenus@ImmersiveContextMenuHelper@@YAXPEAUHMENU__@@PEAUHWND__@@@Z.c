/*
 * XREFs of ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18030E7D0
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18030CC18 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x18030E2F0 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x18030E2F0 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x18030E770 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?_RetrieveParentArrayFromWindow@ImmersiveContextMenuHelper@@YAPEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUHWND__@@@Z @ 0x18030EF30 (-_RetrieveParentArrayFromWindow@ImmersiveContextMenuHelper@@YAPEAV-$CSimplePointerArrayNewMem@UC.c)
 */

void __fastcall ImmersiveContextMenuHelper::HandleMergedMenus(ImmersiveContextMenuHelper *this, HWND a2, HWND a3)
{
  char v3; // r14
  struct ContextMenuRenderingData *v4; // rdi
  char v5; // si
  UINT v6; // ebp
  signed int Error; // ebx
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  int v11; // eax
  struct ContextMenuRenderingData *hData; // rbx
  char v13; // bp
  LPARAM v14; // rsi
  unsigned int v15; // r9d
  struct tagMENUITEMINFOW mii; // [rsp+30h] [rbp-68h] BYREF

  v3 = 1;
  v4 = 0LL;
  v5 = 1;
  v6 = 0;
  do
  {
    memset_0(&mii, 0, sizeof(mii));
    mii.cbSize = 80;
    mii.fMask = 290;
    if ( GetMenuItemInfoW((HMENU)this, v6, 1, &mii) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        goto LABEL_11;
    }
    if ( (mii.fType & 0x100) == 0 )
      goto LABEL_9;
    if ( mii.dwItemData )
    {
      ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(a2, (HWND)mii.dwItemData, mii.wID);
      if ( ContextMenuDataForItem )
      {
        v4 = ContextMenuDataForItem;
        goto LABEL_11;
      }
LABEL_9:
      v5 = 0;
      goto LABEL_11;
    }
    v3 = 0;
LABEL_11:
    ++v6;
  }
  while ( Error >= 0 );
  v11 = 0;
  if ( Error != -2147023440 )
    v11 = Error;
  if ( v11 >= 0 && !v5 && v3 )
  {
    hData = v4 ? (struct ContextMenuRenderingData *)*((_QWORD *)v4 + 10) : 0LL;
    if ( hData
      || (hData = (struct ContextMenuRenderingData *)ImmersiveContextMenuHelper::_RetrieveParentArrayFromWindow(a2)) != 0LL )
    {
      if ( *((_QWORD *)hData + 1) && (*(_BYTE *)(**(_QWORD **)hData + 56LL) & 4) != 0 )
      {
        v13 = 1;
        v14 = SetMessageExtraInfo(4283520896LL);
      }
      else
      {
        v14 = 0LL;
        v13 = 0;
      }
      v15 = 18;
      if ( v4 )
      {
        v15 = 19 - (*((_DWORD *)v4 + 15) != 1);
        if ( *((_BYTE *)v4 + 68) )
          v15 |= 8u;
      }
      ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu((HMENU)this, a2, 0LL, v15, hData);
      if ( v13 )
        SetMessageExtraInfo(v14);
    }
  }
}
