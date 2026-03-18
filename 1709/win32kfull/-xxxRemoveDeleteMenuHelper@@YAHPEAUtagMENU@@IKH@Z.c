/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0099798
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     NtUserDeleteMenu @ 0x1C0104010 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x1C0119450 (NtUserRemoveMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0045A3C (DwmGetClassStyle.c)
 *     MNLookUpItem @ 0x1C0077DF8 (MNLookUpItem.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     MNGetPopupFromMenu @ 0x1C0097378 (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     DesktopAlloc @ 0x1C0097C60 (DesktopAlloc.c)
 *     MNFreeItem @ 0x1C009C568 (MNFreeItem.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0213E0C (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0213EAC (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(struct tagMENU *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int16 v6; // r12
  int v7; // r12d
  unsigned int v8; // esi
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagMENU *v13; // rdx
  _DWORD *v14; // rbx
  struct tagMENU *v15; // rdi
  int v16; // ecx
  int v17; // r14d
  _DWORD *v18; // rax
  int v19; // eax
  PVOID v20; // rbx
  PVOID v22; // rax
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // r14
  int ClassStyle; // ebx
  __int64 v30; // rcx
  void *v31; // rax
  __int64 *v32; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v33[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v34[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v35[3]; // [rsp+48h] [rbp-18h] BYREF
  struct tagMENU *v36; // [rsp+A0h] [rbp+40h] BYREF
  int v37; // [rsp+B8h] [rbp+58h]

  v37 = a4;
  v6 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v33, 0LL, a3, a4);
  v7 = v6 & 0x400;
  v36 = a1;
  v8 = 0;
  v9 = 0;
  v10 = MNLookUpItem((__int64)a1, a2, v7, &v36);
  v13 = v36;
  v14 = (_DWORD *)v10;
  v15 = v36;
  if ( v10
    || a2 >= 0xFFFFF000
    && !v7
    && (v36 = a1,
        v23 = MNLookUpItem((__int64)a1, (unsigned __int16)a2, 0, &v36),
        v13 = v36,
        v14 = (_DWORD *)v23,
        v15 = v36,
        v23) )
  {
    v16 = *((_DWORD *)v13 + 14);
    if ( (v16 & 0x100) == 0 || (v17 = 1, v14[2] != 61536) )
      v17 = 0;
    if ( (v14[1] & 0x1000) != 0 )
      *((_DWORD *)v13 + 14) = v16 & 0xFFFFFBFF;
    v18 = MNGetPopupFromMenu((__int64)v15, &v32, v11, v12);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v33, (__int64)v18);
    if ( *(_QWORD *)v33[0] )
    {
      v9 = MNGetpItemIndex((__int64)v15, (__int64)v14);
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v34, *(_QWORD *)v33[0], v24, v25);
      MNDeleteAdjustIndexes(v32, v34, v9);
    }
    MNFreeItem(v15);
    v19 = *((_DWORD *)v15 + 17);
    *((_QWORD *)v15 + 9) = 0LL;
    if ( v19 == 1 )
    {
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)v15 + 3) + 128LL), 0, *((PVOID *)v15 + 12));
      *((_DWORD *)v15 + 16) = 0;
      v20 = 0LL;
    }
    else
    {
      memmove(v14, v14 + 38, (unsigned int)(152 * v19 - (_DWORD)v14 - 152 + *((_DWORD *)v15 + 24)));
      if ( (unsigned int)(*((_DWORD *)v15 + 16) - *((_DWORD *)v15 + 17)) >= 9
        && (v22 = DesktopAlloc(*((_QWORD *)v15 + 3), 152 * *((_DWORD *)v15 + 16) - 1520), (v20 = v22) != 0LL) )
      {
        memmove(v22, *((const void **)v15 + 12), 152LL * (unsigned int)(*((_DWORD *)v15 + 16) - 10));
        RtlFreeHeap(*(PVOID *)(*((_QWORD *)v15 + 3) + 128LL), 0, *((PVOID *)v15 + 12));
        *((_DWORD *)v15 + 16) -= 10;
      }
      else
      {
        v20 = (PVOID)*((_QWORD *)v15 + 12);
      }
    }
    --*((_DWORD *)v15 + 17);
    *((_QWORD *)v15 + 12) = v20;
    if ( v17 )
    {
      v26 = *((_QWORD *)v15 + 11);
      if ( v26 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v26) )
        {
          v27 = (__int64 *)*((_QWORD *)v15 + 11);
          v28 = 0LL;
          if ( v27 )
            v28 = *v27;
          ClassStyle = DwmGetClassStyle((__int64)v27);
          v31 = (void *)ReferenceDwmApiPort(v30);
          DwmAsyncChildStyleChange(v31, v28, -26, ClassStyle);
        }
      }
    }
    if ( *(_QWORD *)v33[0] )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v35, *(_QWORD *)v33[0], v11, v12);
      xxxMNUpdateShownMenu(v35, *((_QWORD *)v15 + 12) + 152LL * v9, 2LL);
    }
    v8 = 1;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v33, (__int64)v13, v11, v12);
  return v8;
}
