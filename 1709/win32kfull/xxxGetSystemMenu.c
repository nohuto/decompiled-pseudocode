/*
 * XREFs of xxxGetSystemMenu @ 0x1C007C624
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x1C007C580 (NtUserGetSystemMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0045A3C (DwmGetClassStyle.c)
 *     _GetSubMenu @ 0x1C007C554 (_GetSubMenu.c)
 *     LockWndMenu @ 0x1C007C744 (LockWndMenu.c)
 *     xxxLoadSysMenu @ 0x1C007C804 (xxxLoadSysMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0097640 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     _DestroyMenu @ 0x1C009C5C0 (_DestroyMenu.c)
 *     UnlockWndMenu @ 0x1C011598C (UnlockWndMenu.c)
 */

__int64 __fastcall xxxGetSystemMenu(__int64 a1, int a2)
{
  __int64 *v2; // r14
  __int64 v4; // rdi
  __int64 SysMenu; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 SubMenu; // rax
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rcx
  __int128 *v16; // rcx
  _QWORD v17[2]; // [rsp+28h] [rbp-29h] BYREF
  __int128 v18; // [rsp+38h] [rbp-19h]
  __int128 v19; // [rsp+48h] [rbp-9h]
  __int128 v20; // [rsp+58h] [rbp+7h]
  __int128 v21; // [rsp+68h] [rbp+17h] BYREF
  __int128 v22; // [rsp+78h] [rbp+27h] BYREF
  __int128 v23; // [rsp+88h] [rbp+37h] BYREF

  v2 = (__int64 *)(a1 + 200);
  v4 = *(_QWORD *)(a1 + 200);
  if ( a2 )
  {
    if ( v4 )
    {
      v12 = *(_QWORD *)(v4 + 88);
      if ( v12 && (unsigned int)IsWindowDesktopComposed(v12) && (DwmGetClassStyle(*(_QWORD *)(v4 + 88)) & 0x200) != 0 )
      {
        v14 = (void *)ReferenceDwmApiPort(v13);
        DwmAsyncChildStyleChange(v14);
      }
      if ( (*(_DWORD *)(v4 + 56) & 0x80u) == 0 && UnlockWndMenu(a1) )
        DestroyMenu(v4);
    }
  }
  else if ( (!v4 || (*(_DWORD *)(v4 + 56) & 0x80u) != 0) && (*(_BYTE *)(a1 + 70) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v17);
    SysMenu = xxxLoadSysMenu(*v2 != 0 ? 48 : 16);
    if ( !SysMenu )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17);
      return 0LL;
    }
    LockWndMenu(a1, v2, SysMenu);
    v6 = *v2;
    v7 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 584LL);
    if ( !v7 )
      goto LABEL_6;
    do
    {
      if ( *(_QWORD *)(*v7 + 8LL) == a1 )
        break;
      v7 = (_QWORD *)v7[6];
    }
    while ( v7 );
    if ( v7 )
      v8 = *v7;
    else
LABEL_6:
      v8 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v17, v8);
    if ( *(_QWORD *)v17[0] && (**(_DWORD **)v17[0] & 8) == 0 && *(_QWORD *)(*(_QWORD *)v17[0] + 16LL) == a1 )
    {
      v15 = *(_QWORD *)v17[0];
      if ( (**(_DWORD **)v17[0] & 4) != 0 )
      {
        *((_QWORD *)&v18 + 1) = v6;
        *(_QWORD *)&v18 = v15 + 40;
        v16 = &v21;
        v21 = v18;
      }
      else
      {
        *((_QWORD *)&v19 + 1) = v6;
        *(_QWORD *)&v19 = v15 + 48;
        v16 = &v22;
        v22 = v19;
      }
      HMAssignmentLock(v16);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v17);
  }
  if ( !*v2 )
    return 0LL;
  SubMenu = GetSubMenu(*v2);
  v10 = SubMenu;
  if ( SubMenu )
  {
    *(_DWORD *)(SubMenu + 56) |= 0x100u;
    *(_QWORD *)&v20 = SubMenu + 88;
    *((_QWORD *)&v20 + 1) = a1;
    v23 = v20;
    HMAssignmentLock(&v23);
  }
  return v10;
}
