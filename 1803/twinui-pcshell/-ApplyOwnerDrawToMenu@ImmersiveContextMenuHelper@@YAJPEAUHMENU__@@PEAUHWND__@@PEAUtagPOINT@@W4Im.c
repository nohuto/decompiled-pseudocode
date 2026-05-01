/*
 * XREFs of ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x18030E2F0
 * Callers:
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x18029D988 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x18030E2F0 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18030E7D0 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F7AFC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x18029D01C (--_GContextMenuRenderingData@@QEAAPEAXI@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x18030E2F0 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18030E6C0 (-CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x18030E770 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18030E7D0 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveContextMenuOptions@@@Z @ 0x18030E960 (-OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveCont.c)
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x18030EAB4 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRenderingData@@@Z @ 0x18030EB70 (-StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRender.c)
 *     ?_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagMENUITEMINFOW@@PEBGPEAUtagPOINT@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUContextMenuRenderingData@@W4ImmersiveContextMenuOptions@@PEAPEAU7@@Z @ 0x18030EC58 (-_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagME.c)
 *     ?_StoreParentArrayOnWindow@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@PEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x18030EF90 (-_StoreParentArrayOnWindow@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@PEAV-$CSimplePointerArrayN.c)
 */

__int64 __fastcall ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu(
        HMENU a1,
        HWND a2,
        HWND a3,
        unsigned int a4,
        struct ContextMenuRenderingData *hData)
{
  struct ContextMenuRenderingData *v5; // rsi
  char v7; // al
  int Error; // ebx
  int v9; // eax
  HWND v10; // r8
  _DWORD *v11; // rdi
  unsigned int v12; // r9d
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  HWND v14; // rsi
  struct ContextMenuRenderingData *v15; // rax
  __int64 v16; // rdx
  HWND *v17; // rdx
  HWND dwItemData; // rdx
  HWND v19; // rdi
  struct ContextMenuRenderingData *v20; // rdi
  struct ContextMenuRenderingData *v22; // [rsp+20h] [rbp-E0h]
  char v23; // [rsp+40h] [rbp-C0h]
  INPUT_MESSAGE_SOURCE inputMessageSource; // [rsp+58h] [rbp-A8h] BYREF
  HWND hWnd; // [rsp+60h] [rbp-A0h]
  int pvParam; // [rsp+68h] [rbp-98h] BYREF
  HMENU hmenu; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  int v30[4]; // [rsp+80h] [rbp-80h]
  struct tagMENUITEMINFOW mii; // [rsp+90h] [rbp-70h] BYREF
  HWND v32; // [rsp+E0h] [rbp-20h]
  MENUITEMINFOW v33; // [rsp+F0h] [rbp-10h] BYREF
  struct tagMENUITEMINFOW v34; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v35[528]; // [rsp+190h] [rbp+90h] BYREF

  v5 = hData;
  hWnd = a2;
  v7 = a4;
  *(_QWORD *)v30 = a3;
  v29 = a4 & 2;
  Error = 1;
  hmenu = a1;
  if ( (a4 & 2) == 0 )
  {
    if ( !ImmersiveContextMenuHelper::CanApplyOwnerDrawToMenu(a1, (HMENU)a2, a3) )
      return (unsigned int)Error;
    v7 = a4;
  }
  if ( (v7 & 4) == 0 && GetCurrentInputMessageSource(&inputMessageSource) && inputMessageSource.deviceType == IMDT_TOUCH
    || (v23 = 0, (GetMessageExtraInfo() & 0xFF515780LL) == 0xFF515780LL) )
  {
    v23 = 1;
  }
  v9 = ImmersiveContextMenuHelper::_StoreParentArrayOnWindow(a2, hData);
  pvParam = 0;
  Error = v9;
  SystemParametersInfoW(0x100Au, 0, &pvParam, 0);
  v11 = 0LL;
  inputMessageSource.deviceType = IMDT_UNAVAILABLE;
  while ( Error >= 0 )
  {
    memset_0(&mii, 0, sizeof(mii));
    mii.cbSize = 80;
    mii.fMask = 495;
    memset_0(v35, 0, 0x208uLL);
    mii.dwTypeData = (LPWSTR)v35;
    mii.cch = 260;
    if ( GetMenuItemInfoW(hmenu, inputMessageSource.deviceType, 1, &mii) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        goto LABEL_44;
    }
    ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                               hWnd,
                               (HWND)mii.dwItemData,
                               mii.wID,
                               v12);
    v11 = ContextMenuDataForItem;
    if ( ((mii.fType & 0x100) == 0 || !mii.dwItemData)
      && (!ContextMenuDataForItem || v23 != ((*((_DWORD *)ContextMenuDataForItem + 14) & 4) != 0)) )
    {
      v34 = mii;
      v22 = v5;
      Error = ImmersiveContextMenuHelper::_GetRenderingDataForMenuItem(a4 & 1, &v34, v35, *(_QWORD *)v30);
      if ( Error >= 0 )
      {
        Error = 0;
        v14 = v32;
        *((_DWORD *)v32 + 18) = pvParam;
        v15 = hData;
        v16 = *((_QWORD *)hData + 1);
        if ( v16 == *((_QWORD *)hData + 3) )
        {
          Error = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                    (__int64)hData,
                    v16 + 1,
                    v10);
          if ( Error >= 0 )
          {
            v15 = hData;
            goto LABEL_21;
          }
        }
        else
        {
LABEL_21:
          v17 = (HWND *)(*(_QWORD *)v15 + 8 * (*((_QWORD *)v15 + 1))++);
          if ( v17 )
            *v17 = v14;
        }
        if ( Error < 0 )
        {
          ContextMenuRenderingData::`scalar deleting destructor'((ContextMenuRenderingData *)v14);
        }
        else
        {
          memset_0(&v33, 0, sizeof(v33));
          v33.hbmpItem = 0LL;
          dwItemData = (HWND)mii.dwItemData;
          v19 = hWnd;
          v33.hbmpChecked = mii.hbmpChecked;
          v33.hbmpUnchecked = mii.hbmpUnchecked;
          v33.cbSize = 80;
          v33.fMask = 392;
          v33.fType = mii.fType | 0x100;
          if ( !mii.dwItemData )
          {
            v33.fMask = 424;
            dwItemData = v14;
            v33.dwItemData = (ULONG_PTR)v14;
          }
          Error = ImmersiveContextMenuHelper::StoreContextMenuDataForItem(
                    hWnd,
                    dwItemData,
                    mii.wID,
                    (unsigned int)v14,
                    v22);
          if ( Error < 0 )
            goto LABEL_33;
          if ( SetMenuItemInfoW(hmenu, inputMessageSource.deviceType, 1, &v33) )
          {
            Error = 0;
            goto LABEL_30;
          }
          Error = ResultFromKnownLastError();
          if ( Error < 0 )
          {
LABEL_33:
            v20 = hData;
          }
          else
          {
LABEL_30:
            if ( !mii.hSubMenu )
              goto LABEL_33;
            if ( v29 )
            {
              ImmersiveContextMenuHelper::HandleMergedMenus((ImmersiveContextMenuHelper *)mii.hSubMenu, (HMENU)v19, v10);
              goto LABEL_33;
            }
            v20 = hData;
            ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu((int)mii.hSubMenu, (int)hWnd, v30[0], a4 | 0x10, hData);
          }
          *((_QWORD *)v14 + 10) = v20;
          v11 = v14;
          if ( v23 )
            *((_DWORD *)v14 + 14) |= 4u;
        }
        v5 = hData;
      }
    }
    if ( v11 )
    {
      if ( inputMessageSource.deviceType )
        v11[14] &= ~1u;
      else
        v11[14] |= 1u;
      v11[14] &= ~2u;
    }
LABEL_44:
    ++inputMessageSource.deviceType;
  }
  if ( Error != -2147023440 )
    goto LABEL_52;
  if ( !*((_QWORD *)v5 + 1) )
    goto LABEL_53;
  Error = 0;
  if ( v11 )
    v11[14] |= 2u;
  if ( (a4 & 0x10) == 0 )
  {
    ImmersiveContextMenuHelper::OverrideBackgroundColor(hmenu, hWnd, a4);
LABEL_52:
    if ( Error < 0 )
LABEL_53:
      ImmersiveContextMenuHelper::RemoveOwnerDrawFromMenu(hmenu, (HMENU)hWnd, v10);
  }
  return (unsigned int)Error;
}
