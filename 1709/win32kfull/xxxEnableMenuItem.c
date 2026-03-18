/*
 * XREFs of xxxEnableMenuItem @ 0x1C007ABB8
 * Callers:
 *     xxxSetSysMenu @ 0x1C007AD30 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x1C011FB40 (NtUserEnableMenuItem.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0045A3C (DwmGetClassStyle.c)
 *     xxxRedrawTitle @ 0x1C0053FC0 (xxxRedrawTitle.c)
 *     ?MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z @ 0x1C007AB6C (-MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     MNGetPopupFromMenu @ 0x1C0097378 (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxMNUpdateShownMenu @ 0x1C0213EAC (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(struct tagMENU *a1, unsigned int a2, int a3)
{
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-20h] BYREF
  struct tagMENU *v18; // [rsp+90h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v15);
  v6 = MenuItemState(a1, a2, a3, 3LL, &v18);
  if ( (*((_DWORD *)a1 + 14) & 0x100) != 0 )
  {
    v9 = *((_QWORD *)a1 + 11);
    if ( v9 )
    {
      if ( a3 != v6 && (a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728) )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v17[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v17;
        v17[1] = v9;
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
        xxxRedrawTitle(*((_QWORD **)a1 + 11), 0x1000u);
        if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v9) )
        {
          DwmGetClassStyle(v9);
          v14 = (void *)ReferenceDwmApiPort(v13);
          DwmAsyncChildStyleChange(v14);
        }
        ThreadUnlock1(v12, v11);
      }
    }
  }
  if ( v18 )
  {
    v7 = MNGetPopupFromMenu(v18, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v15, v7);
    if ( *(_QWORD *)v15[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v16);
      xxxMNUpdateShownMenu(v16, 0LL, 1LL);
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15);
  return v6;
}
