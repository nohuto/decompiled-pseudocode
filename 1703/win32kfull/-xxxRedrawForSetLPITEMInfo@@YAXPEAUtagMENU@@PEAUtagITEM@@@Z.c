/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0042360
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0041F78 (xxxInsertMenuItem.c)
 *     xxxSetMenuItemInfo @ 0x1C00C3360 (xxxSetMenuItemInfo.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0016430 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     MNGetPopupFromMenu @ 0x1C00424E4 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNIspItemValid @ 0x1C0203E8C (MNIspItemValid.c)
 *     xxxMNUpdateShownMenu @ 0x1C0212964 (xxxMNUpdateShownMenu.c)
 */

void __fastcall xxxRedrawForSetLPITEMInfo(struct tagMENU *a1, struct tagITEM *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD **v10; // rdx
  _QWORD **v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rcx
  int ClassStyle; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rax
  __int64 v21; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-38h] BYREF
  _QWORD **v23; // [rsp+30h] [rbp-30h]
  __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v25[32]; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v24 = 0LL;
  v23 = &v22;
  v21 = 0LL;
  v22 = &v22;
  v24 = *(_QWORD *)(v4 + 1344);
  *(_QWORD *)(v4 + 1344) = &v24;
  v7 = MNGetPopupFromMenu(a1, 0LL);
  v8 = v21;
  if ( v21 == v7 )
  {
LABEL_13:
    if ( v8 )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v25, v8);
      xxxMNUpdateShownMenu(v25, a2, 1LL);
      if ( !(unsigned __int8)MNIspItemValid(a1, a2) )
        goto LABEL_22;
    }
    goto LABEL_15;
  }
  if ( v21 )
  {
    v9 = v22;
    v10 = v23;
    if ( (_QWORD **)v22[1] != &v22 || *v23 != &v22 )
      __fastfail(3u);
    *v23 = v22;
    v9[1] = v10;
  }
  v21 = v7;
  if ( v7 )
  {
    v11 = (_QWORD **)(v7 + 88);
    v12 = *v11;
    if ( (_QWORD **)(*v11)[1] != v11 )
      __fastfail(3u);
    v22 = *v11;
    v23 = v11;
    v12[1] = &v22;
    *v11 = &v22;
    v8 = v21;
    goto LABEL_13;
  }
LABEL_15:
  if ( (*((_DWORD *)a1 + 14) & 0x100) != 0 && *((_DWORD *)a2 + 2) == 61536 )
  {
    v13 = *((_QWORD *)a1 + 11);
    if ( v13 )
    {
      if ( (unsigned int)IsWindowDesktopComposed(v13) )
      {
        v14 = (__int64 *)*((_QWORD *)a1 + 11);
        if ( v14 )
          v3 = *v14;
        ClassStyle = DwmGetClassStyle((__int64)v14);
        v20 = (void *)ReferenceDwmApiPort(v17, v16, v18, v19);
        DwmAsyncChildStyleChange(v20, v3, -26, ClassStyle);
      }
    }
  }
LABEL_22:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v21);
}
