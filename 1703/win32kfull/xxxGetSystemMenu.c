/*
 * XREFs of xxxGetSystemMenu @ 0x1C00C1EA0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x1C00C1E00 (NtUserGetSystemMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0016430 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _DestroyMenu @ 0x1C0042DC0 (_DestroyMenu.c)
 *     _GetSubMenu @ 0x1C00C283C (_GetSubMenu.c)
 *     LockWndMenu @ 0x1C00C315C (LockWndMenu.c)
 *     xxxLoadSysMenu @ 0x1C00C31F4 (xxxLoadSysMenu.c)
 *     UnlockWndMenu @ 0x1C010B5A8 (UnlockWndMenu.c)
 */

__int64 __fastcall xxxGetSystemMenu(__int64 a1, int a2)
{
  _QWORD *v2; // r15
  __int64 v4; // rdi
  __int64 SysMenu; // rax
  __int64 v6; // r8
  int **v7; // rcx
  int *v8; // rdx
  int *v9; // rax
  __int64 SubMenu; // rax
  __int64 v11; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rbx
  void *v21; // rax
  _QWORD *v22; // rax
  _QWORD **v23; // rcx
  _QWORD **v24; // rdx
  _QWORD *v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-30h] BYREF
  __int64 v29; // [rsp+28h] [rbp-28h]
  int *v30; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v31; // [rsp+38h] [rbp-18h] BYREF
  _QWORD **v32; // [rsp+40h] [rbp-10h]

  v2 = (_QWORD *)(a1 + 200);
  v4 = *(_QWORD *)(a1 + 200);
  if ( a2 )
  {
    if ( v4 )
    {
      v13 = *(_QWORD *)(v4 + 88);
      if ( v13 && (unsigned int)IsWindowDesktopComposed(v13) && (DwmGetClassStyle(*(_QWORD *)(v4 + 88)) & 0x200) != 0 )
      {
        v18 = *(__int64 **)(v4 + 88);
        if ( v18 )
          v19 = *v18;
        else
          v19 = 0LL;
        v20 = v18[21];
        v21 = (void *)ReferenceDwmApiPort(v15, v14, v16, v17);
        DwmAsyncChildStyleChange(v21, v19, -26, *(_DWORD *)(v20 + 92));
      }
      if ( (*(_DWORD *)(v4 + 56) & 0x80u) == 0 && UnlockWndMenu(a1, v2) )
        DestroyMenu((struct tagMENU *)v4);
    }
  }
  else if ( (!v4 || (*(_DWORD *)(v4 + 56) & 0x80u) != 0) && (*(_BYTE *)(a1 + 70) & 8) != 0 )
  {
    SmartObjStackRef<tagPOPUPMENU>::Init(&v30, 0LL);
    SysMenu = xxxLoadSysMenu(*v2 != 0LL ? 48 : 16);
    if ( !SysMenu )
    {
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v30);
      return 0LL;
    }
    LockWndMenu(a1, v2, SysMenu);
    v6 = *v2;
    v7 = *(int ***)(*(_QWORD *)(a1 + 16) + 528LL);
    if ( !v7 )
      goto LABEL_6;
    do
    {
      if ( *((_QWORD *)*v7 + 1) == a1 )
        break;
      v7 = (int **)v7[6];
    }
    while ( v7 );
    if ( v7 )
      v8 = *v7;
    else
LABEL_6:
      v8 = 0LL;
    v9 = v30;
    if ( v30 != v8 )
    {
      if ( v30 )
      {
        v22 = v31;
        v23 = v32;
        if ( (_QWORD **)v31[1] != &v31 || *v32 != &v31 )
          __fastfail(3u);
        *v32 = v31;
        v22[1] = v23;
      }
      v30 = v8;
      if ( !v8 )
        goto LABEL_9;
      v24 = (_QWORD **)(v8 + 22);
      v25 = *v24;
      if ( (_QWORD **)(*v24)[1] != v24 )
        __fastfail(3u);
      v31 = *v24;
      v32 = v24;
      v25[1] = &v31;
      *v24 = &v31;
      v9 = v30;
    }
    if ( v9 )
    {
      v26 = *v9;
      if ( (*v9 & 8) == 0 && *((_QWORD *)v9 + 2) == a1 )
      {
        v29 = v6;
        if ( (v26 & 4) != 0 )
          v27 = (__int64)(v9 + 10);
        else
          v27 = (__int64)(v9 + 12);
        v28 = v27;
        HMAssignmentLock(&v28);
      }
    }
LABEL_9:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(&v30);
  }
  if ( !*v2 )
    return 0LL;
  SubMenu = GetSubMenu(*v2);
  v11 = SubMenu;
  if ( SubMenu )
  {
    *(_DWORD *)(SubMenu + 56) |= 0x100u;
    v28 = SubMenu + 88;
    v29 = a1;
    HMAssignmentLock(&v28);
  }
  return v11;
}
