/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C00F1334
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     NtUserDeleteMenu @ 0x1C00F7C10 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x1C01104E0 (NtUserRemoveMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0016430 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     MNLookUpItem @ 0x1C004192C (MNLookUpItem.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     MNGetPopupFromMenu @ 0x1C00424E4 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     DesktopAlloc @ 0x1C0042C20 (DesktopAlloc.c)
 *     MNFreeItem @ 0x1C0042C60 (MNFreeItem.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C02128DC (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0212964 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(struct tagMENU *a1, unsigned int a2, __int16 a3, int a4)
{
  int v7; // r14d
  unsigned int v8; // edi
  unsigned int v9; // r15d
  _DWORD *v10; // rbx
  struct tagMENU *v11; // r10
  struct tagMENU *v12; // r8
  int v13; // ecx
  int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  struct tagMENU *v18; // rcx
  PVOID v19; // rbx
  PVOID v21; // rax
  _QWORD *v22; // rcx
  _QWORD **v23; // rdx
  _QWORD **v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 *v29; // rcx
  int ClassStyle; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  void *v35; // rax
  __int64 *v36; // [rsp+20h] [rbp-50h] BYREF
  __int64 v37; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-38h] BYREF
  _QWORD **v39; // [rsp+40h] [rbp-30h]
  _QWORD v40[4]; // [rsp+50h] [rbp-20h] BYREF
  struct tagMENU *v41; // [rsp+A0h] [rbp+30h] BYREF

  v41 = a1;
  SmartObjStackRef<tagPOPUPMENU>::Init(&v37, 0LL);
  v7 = a3 & 0x400;
  v8 = 0;
  v9 = 0;
  v10 = (_DWORD *)MNLookUpItem((__int64)v41, a2, v7, &v41);
  if ( !v10 )
  {
    if ( a2 < 0xFFFFF000 )
      goto LABEL_16;
    if ( v7 )
      goto LABEL_16;
    v41 = v11;
    v10 = (_DWORD *)MNLookUpItem((__int64)v11, (unsigned __int16)a2, 0, &v41);
    if ( !v10 )
      goto LABEL_16;
  }
  v12 = v41;
  v13 = *((_DWORD *)v41 + 14);
  if ( (v13 & 0x100) == 0 || (v14 = 1, v10[2] != 61536) )
    v14 = 0;
  if ( (v10[1] & 0x1000) != 0 )
  {
    *((_DWORD *)v41 + 14) = v13 & 0xFFFFFBFF;
    v12 = v41;
  }
  v15 = MNGetPopupFromMenu((__int64)v12, &v36);
  v16 = v37;
  if ( v37 == v15 )
    goto LABEL_7;
  if ( v37 )
  {
    v22 = v38;
    v23 = v39;
    if ( (_QWORD **)v38[1] != &v38 || *v39 != &v38 )
      __fastfail(3u);
    *v39 = v38;
    v22[1] = v23;
  }
  v37 = v15;
  if ( v15 )
  {
    v24 = (_QWORD **)(v15 + 88);
    v25 = *v24;
    if ( (_QWORD **)(*v24)[1] != v24 )
      __fastfail(3u);
    v38 = *v24;
    v39 = v24;
    v25[1] = &v38;
    *v24 = &v38;
    v16 = v37;
LABEL_7:
    if ( v16 )
    {
      v9 = MNGetpItemIndex((__int64)v41, (__int64)v10);
      SmartObjStackRef<tagPOPUPMENU>::Init(v40, v26);
      MNDeleteAdjustIndexes(v36, v40, v9);
    }
  }
  MNFreeItem(v41, (__int64)v10, a4);
  *((_DWORD *)v41 + 18) = 0;
  *((_DWORD *)v41 + 19) = 0;
  v17 = *((_DWORD *)v41 + 17);
  if ( v17 == 1 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)v41 + 3) + 128LL), 0, *((PVOID *)v41 + 12));
    v19 = 0LL;
    *((_DWORD *)v41 + 16) = 0;
  }
  else
  {
    memmove(v10, v10 + 38, (unsigned int)(*((_DWORD *)v41 + 24) + 152 * v17 - (_DWORD)v10 - 152));
    v18 = v41;
    if ( (unsigned int)(*((_DWORD *)v41 + 16) - *((_DWORD *)v41 + 17)) < 9 )
    {
LABEL_11:
      v19 = (PVOID)*((_QWORD *)v18 + 12);
      goto LABEL_12;
    }
    v21 = DesktopAlloc(*((_QWORD *)v41 + 3), 152 * *((_DWORD *)v41 + 16) - 1520);
    v19 = v21;
    if ( !v21 )
    {
      v18 = v41;
      goto LABEL_11;
    }
    memmove(v21, *((const void **)v41 + 12), 152LL * (unsigned int)(*((_DWORD *)v41 + 16) - 10));
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)v41 + 3) + 128LL), 0, *((PVOID *)v41 + 12));
    *((_DWORD *)v41 + 16) -= 10;
  }
  v18 = v41;
LABEL_12:
  *((_QWORD *)v18 + 12) = v19;
  --*((_DWORD *)v41 + 17);
  if ( v14 )
  {
    v27 = *((_QWORD *)v41 + 11);
    if ( v27 )
    {
      if ( (unsigned int)IsWindowDesktopComposed(v27) )
      {
        v28 = 0LL;
        v29 = (__int64 *)*((_QWORD *)v41 + 11);
        if ( v29 )
          v28 = *v29;
        ClassStyle = DwmGetClassStyle((__int64)v29);
        v35 = (void *)ReferenceDwmApiPort(v32, v31, v33, v34);
        DwmAsyncChildStyleChange(v35, v28, -26, ClassStyle);
      }
    }
  }
  if ( v37 )
  {
    SmartObjStackRef<tagPOPUPMENU>::Init(v40, v37);
    xxxMNUpdateShownMenu(v40, *((_QWORD *)v41 + 12) + 152LL * v9, 2LL);
  }
  v8 = 1;
LABEL_16:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v37);
  return v8;
}
