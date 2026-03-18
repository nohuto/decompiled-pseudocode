/*
 * XREFs of xxxEnableMenuItem @ 0x1C00C2158
 * Callers:
 *     xxxSetSysMenu @ 0x1C00C1FC0 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x1C00C6040 (NtUserEnableMenuItem.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0016430 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     xxxRedrawTitle @ 0x1C003D3F0 (xxxRedrawTitle.c)
 *     MNGetPopupFromMenu @ 0x1C00424E4 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z @ 0x1C00C22B0 (-MenuItemState@@YAKPEAUtagMENU@@IKKPEAPEAU1@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0212964 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(struct tagMENU *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  int ClassStyle; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rax
  _QWORD *v20; // rcx
  _QWORD **v21; // rdx
  _QWORD **v22; // rax
  _QWORD *v23; // rcx
  _QWORD v24[4]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  _QWORD *v26; // [rsp+58h] [rbp-18h] BYREF
  _QWORD **v27; // [rsp+60h] [rbp-10h]
  struct tagMENU *v28; // [rsp+A0h] [rbp+30h] BYREF

  SmartObjStackRef<tagPOPUPMENU>::Init(&v25, 0LL);
  v6 = MenuItemState(a1, a2, a3, 3u, &v28);
  if ( (*((_DWORD *)a1 + 14) & 0x100) != 0 )
  {
    v10 = *((_QWORD *)a1 + 11);
    if ( v10 )
    {
      if ( a3 != v6 && (a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728) )
      {
        v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v24;
        v24[1] = v10;
        ++*(_DWORD *)(v10 + 8);
        xxxRedrawTitle(*((_QWORD **)a1 + 11), 0x1000u);
        if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v10) )
        {
          v13 = *(_QWORD *)v10;
          ClassStyle = DwmGetClassStyle(v10);
          v19 = (void *)ReferenceDwmApiPort(v16, v15, v17, v18);
          DwmAsyncChildStyleChange(v19, v13, -26, ClassStyle);
        }
        ThreadUnlock1(v12, v11);
      }
    }
  }
  if ( v28 )
  {
    v7 = MNGetPopupFromMenu((__int64)v28, 0LL);
    v8 = v25;
    if ( v25 == v7 )
    {
LABEL_4:
      if ( v8 )
      {
        SmartObjStackRef<tagPOPUPMENU>::Init(v24, v8);
        xxxMNUpdateShownMenu(v24, 0LL, 1LL);
      }
      goto LABEL_6;
    }
    if ( v25 )
    {
      v20 = v26;
      v21 = v27;
      if ( (_QWORD **)v26[1] != &v26 || *v27 != &v26 )
        __fastfail(3u);
      *v27 = v26;
      v20[1] = v21;
    }
    v25 = v7;
    if ( v7 )
    {
      v22 = (_QWORD **)(v7 + 88);
      v23 = *v22;
      if ( (_QWORD **)(*v22)[1] != v22 )
        __fastfail(3u);
      v26 = *v22;
      v27 = v22;
      v23[1] = &v26;
      *v22 = &v26;
      v8 = v25;
      goto LABEL_4;
    }
  }
LABEL_6:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v25);
  return v6;
}
