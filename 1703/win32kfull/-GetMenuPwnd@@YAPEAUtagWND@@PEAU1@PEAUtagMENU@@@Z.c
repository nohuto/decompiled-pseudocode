/*
 * XREFs of ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0217528
 * Callers:
 *     xxxGetMenuItemRect @ 0x1C021794C (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C0217B68 (xxxMenuItemFromPoint.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C00424E4 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 */

struct tagWND *__fastcall GetMenuPwnd(struct tagWND *a1, struct tagMENU *a2)
{
  struct tagWND *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  _QWORD **v7; // rdx
  _QWORD **v8; // rax
  _QWORD *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v12; // [rsp+28h] [rbp-18h] BYREF
  _QWORD **v13; // [rsp+30h] [rbp-10h]

  v3 = a1;
  if ( (*((_DWORD *)a2 + 14) & 1) != 0 && (!a1 || (*((_WORD *)a1 + 41) & 0x3FFF) != 0x29C) )
  {
    SmartObjStackRef<tagPOPUPMENU>::Init(&v11, 0LL);
    v4 = MNGetPopupFromMenu((__int64)a2, 0LL);
    v5 = v11;
    if ( v11 != v4 )
    {
      if ( v11 )
      {
        v6 = v12;
        v7 = v13;
        if ( (_QWORD **)v12[1] != &v12 || *v13 != &v12 )
          __fastfail(3u);
        *v13 = v12;
        v6[1] = v7;
      }
      v11 = v4;
      if ( !v4 )
        goto LABEL_16;
      v8 = (_QWORD **)(v4 + 88);
      v9 = *v8;
      if ( (_QWORD **)(*v8)[1] != v8 )
        __fastfail(3u);
      v12 = *v8;
      v13 = v8;
      v9[1] = &v12;
      *v8 = &v12;
      v5 = v11;
    }
    if ( v5 )
      v3 = *(struct tagWND **)(v5 + 16);
LABEL_16:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v11);
  }
  return v3;
}
