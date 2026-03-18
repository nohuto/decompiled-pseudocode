/*
 * XREFs of ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00976B4
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C007C974 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C0096D20 (xxxInsertMenuItem.c)
 * Callees:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C0050778 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     DesktopAlloc @ 0x1C0097C60 (DesktopAlloc.c)
 *     _DestroyMenu @ 0x1C009C5C0 (_DestroyMenu.c)
 *     ?UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z @ 0x1C009C6A4 (-UnlockSubMenu@@YAPEAUtagMENU@@PEAU1@PEAPEAU1@@Z.c)
 *     ?GetMenuDepth@@YAIPEAUtagMENU@@I@Z @ 0x1C01076A0 (-GetMenuDepth@@YAIPEAUtagMENU@@I@Z.c)
 *     ?GetMenuAncestors@@YAIPEAUtagMENU@@@Z @ 0x1C0111ED8 (-GetMenuAncestors@@YAIPEAUtagMENU@@@Z.c)
 *     ?RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z @ 0x1C01445AC (-RemoveParentMenu@@YAXPEAUtagMENU@@PEAPEAU1@@Z.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall SetLPITEMInfoNoRedraw(
        struct tagMENU *a1,
        struct tagITEM *a2,
        struct tagMENUITEMINFOW *a3,
        struct _UNICODE_STRING *a4,
        int *a5)
{
  int v9; // r13d
  int v10; // r12d
  __int64 v11; // rdx
  _DWORD *v12; // r8
  unsigned __int16 *v13; // r9
  void *v14; // rax
  void *v15; // r12
  int v17; // esi
  __int64 v18; // rax
  unsigned int v19; // ecx
  int v20; // ecx
  int v21; // eax
  __int128 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r12d
  unsigned int MenuAncestors; // eax
  int v27; // r8d
  _QWORD *v28; // rax
  __int128 v29; // [rsp+30h] [rbp-38h] BYREF

  v9 = 0;
  v10 = 0;
  *a5 = 0;
  if ( (unsigned int)MNIsUAHMenu(a1) )
    *((_DWORD *)a2 + 28) = -1;
  if ( (v12[1] & 0x100) != 0 )
  {
    *(_DWORD *)a2 &= 0xFFFC949B;
    *(_DWORD *)a2 |= v12[2];
    if ( (v12[2] & 0x800) != 0 )
      *((_DWORD *)a2 + 1) |= 3u;
    v9 = 1;
    v10 = v12[2] & 0x100;
  }
  if ( (v12[1] & 0x40) != 0 )
  {
    if ( *((_QWORD *)v13 + 1) )
    {
      v14 = (void *)DesktopAlloc(*((_QWORD *)a1 + 3), (unsigned int)*v13 + 2, 8LL);
      v15 = v14;
      if ( !v14 )
        return 0LL;
      memmove(v14, a4->Buffer, a4->Length);
      v17 = a4->Length >> 1;
    }
    else
    {
      v17 = 0;
      v15 = 0LL;
    }
    v12 = (_DWORD *)*((_QWORD *)a2 + 5);
    if ( v12 )
      RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 128LL), 0, v12);
    *((_DWORD *)a2 + 12) = v17;
    *((_QWORD *)a2 + 5) = v15;
    ++*((_QWORD *)a2 + 7);
    v9 = 1;
    v10 = 1;
  }
  if ( (*((_DWORD *)a3 + 1) & 0x80u) != 0 )
  {
    *((_QWORD *)a2 + 13) = 0LL;
    v18 = *((_QWORD *)a3 + 9);
    *((_QWORD *)a2 + 13) = v18;
    v9 = 1;
    v10 = 1;
    *((_DWORD *)a2 + 28) = -1;
    if ( (unsigned __int64)(v18 - 1) > 0xA )
      *((_DWORD *)a2 + 1) &= ~0x20000000u;
    else
      *((_DWORD *)a2 + 1) |= 0x20000000u;
  }
  if ( (*((_DWORD *)a3 + 1) & 2) != 0 )
    *((_DWORD *)a2 + 2) = *((_DWORD *)a3 + 4);
  if ( (*((_DWORD *)a3 + 1) & 0x20) != 0 )
    *((_QWORD *)a2 + 8) = *((_QWORD *)a3 + 6);
  if ( (*((_DWORD *)a3 + 1) & 1) != 0 )
  {
    v19 = *((_DWORD *)a2 + 1) & 0xFFFFFFF4;
    *((_DWORD *)a2 + 1) = v19;
    v20 = *((_DWORD *)a3 + 3) | v19;
    *((_DWORD *)a2 + 1) = v20;
    if ( (*(_DWORD *)a2 & 0x800) != 0 )
      *((_DWORD *)a2 + 1) = v20 | 3;
    if ( (*((_DWORD *)a3 + 3) & 0x1000) != 0 )
    {
      v21 = *((_DWORD *)a1 + 14);
      if ( (v21 & 0x400) != 0 )
      {
        UserSetLastError(87LL, v11);
        return 0LL;
      }
      *((_DWORD *)a1 + 14) = v21 | 0x400;
    }
    v9 = 1;
    v10 = 1;
  }
  if ( (*((_DWORD *)a3 + 1) & 8) != 0 )
  {
    *((_QWORD *)a2 + 3) = *((_QWORD *)a3 + 4);
    *((_QWORD *)a2 + 4) = *((_QWORD *)a3 + 5);
    v10 = 1;
  }
  if ( (*((_DWORD *)a3 + 1) & 4) != 0 )
  {
    *((_QWORD *)&v22 + 1) = 0LL;
    v23 = *((_QWORD *)a3 + 3);
    if ( v23 )
      *((_QWORD *)&v22 + 1) = ValidateHmenu(v23);
    *(_QWORD *)&v22 = (char *)a2 + 16;
    v24 = *((_QWORD *)a2 + 2);
    if ( v24 != *((_QWORD *)&v22 + 1) )
    {
      if ( v24 )
      {
        RemoveParentMenu(a1, (struct tagMENU **)a2 + 2);
        DestroyMenu(*(_QWORD *)v22);
      }
      if ( *((_QWORD *)&v22 + 1) )
      {
        v25 = 0;
        if ( *((struct tagMENU **)&v22 + 1) == a1 )
        {
          *((_QWORD *)&v22 + 1) = InternalCreateMenu(0, v11, (__int64)v12);
          if ( !*((_QWORD *)&v22 + 1) )
            return 0LL;
          v25 = 1;
        }
        v29 = v22;
        HMAssignmentLock(&v29);
        *(_DWORD *)(*(_QWORD *)v22 + 56LL) |= 1u;
        GetMenuDepth(*((struct tagMENU **)&v22 + 1), 0x19u);
        MenuAncestors = GetMenuAncestors(a1);
        if ( MenuAncestors + v27 >= 0x19 || (v28 = (_QWORD *)DesktopAlloc(*((_QWORD *)a1 + 3), 16LL, 7LL)) == 0LL )
        {
          *(_DWORD *)(*(_QWORD *)v22 + 56LL) &= ~1u;
          HMAssignmentUnlock((char *)a2 + 16);
          if ( v25 )
            DestroyMenu(*((_QWORD *)&v22 + 1));
          return 0LL;
        }
        v28[1] = a1;
        *v28 = *(_QWORD *)(*((_QWORD *)&v22 + 1) + 104LL);
        *(_QWORD *)(*((_QWORD *)&v22 + 1) + 104LL) = v28;
      }
      else
      {
        UnlockSubMenu(a1, (struct tagMENU **)a2 + 2);
      }
      v10 = 1;
    }
  }
  if ( (*(_DWORD *)a2 & 0x900) == 0 && !*((_QWORD *)a2 + 5) && !*((_QWORD *)a2 + 13) )
  {
    *(_DWORD *)a2 = 2048;
    *((_DWORD *)a2 + 1) |= 3u;
  }
  if ( v9 )
  {
    *((_DWORD *)a2 + 22) = 0;
    *(_QWORD *)((char *)a2 + 92) = 0x7FFFFFFFLL;
    *((_QWORD *)a1 + 9) = 0LL;
    if ( v10 )
      *a5 = 1;
  }
  return 1LL;
}
