/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0097220
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C007C974 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C0096D20 (xxxInsertMenuItem.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0045A3C (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0097364 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     MNGetPopupFromMenu @ 0x1C0097378 (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     MNIspItemValid @ 0x1C0205948 (MNIspItemValid.c)
 *     xxxMNUpdateShownMenu @ 0x1C0213EAC (xxxMNUpdateShownMenu.c)
 */

void __fastcall xxxRedrawForSetLPITEMInfo(struct tagMENU *a1, struct tagITEM *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rcx
  int ClassStyle; // ebx
  __int64 v14; // rcx
  void *v15; // rax
  _QWORD *v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v18[24]; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v17 = 0LL;
  v16 = (_QWORD *)gSmartObjNullRef;
  v17 = *(_QWORD *)(v6 + 1432);
  *(_QWORD *)(v6 + 1432) = &v17;
  v10 = MNGetPopupFromMenu(a1, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v16, v10);
  if ( !*v16
    || (SmartObjStackRefBase<tagPOPUPMENU>::Init(v18),
        xxxMNUpdateShownMenu(v18, a2, 1LL),
        (unsigned __int8)MNIspItemValid(a1, a2)) )
  {
    if ( (*((_DWORD *)a1 + 14) & 0x100) != 0 && *((_DWORD *)a2 + 2) == 61536 )
    {
      v11 = *((_QWORD *)a1 + 11);
      if ( v11 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v11) )
        {
          v12 = (__int64 *)*((_QWORD *)a1 + 11);
          if ( v12 )
            v5 = *v12;
          ClassStyle = DwmGetClassStyle((__int64)v12);
          v15 = (void *)ReferenceDwmApiPort(v14);
          DwmAsyncChildStyleChange(v15, v5, -26, ClassStyle);
        }
      }
    }
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v16);
}
