/*
 * XREFs of ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0218710
 * Callers:
 *     xxxGetMenuItemRect @ 0x1C0218AD0 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C0218CF4 (xxxMenuItemFromPoint.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C0097378 (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

struct tagWND *__fastcall GetMenuPwnd(struct tagWND *a1, struct tagMENU *a2, __int64 a3, __int64 a4)
{
  struct tagWND *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  if ( (*((_DWORD *)a2 + 14) & 1) != 0 && (!a1 || (*((_WORD *)a1 + 41) & 0x3FFF) != 0x29C) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, 0LL, a3, a4);
    v8 = MNGetPopupFromMenu((__int64)a2, 0LL, v6, v7);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v13, (__int64)v8);
    if ( *(_QWORD *)v13[0] )
      v5 = *(struct tagWND **)(*(_QWORD *)v13[0] + 16LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13, v9, v10, v11);
  }
  return v5;
}
