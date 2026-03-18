/*
 * XREFs of CmpFindSubKeyByNameWithStatus @ 0x1404D2CDC
 * Callers:
 *     CmpFindPathByName @ 0x1404D4574 (CmpFindPathByName.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14058D860 (CmpSyncSubKeysAfterDelete.c)
 *     CmpCopySyncTree2 @ 0x14058D990 (CmpCopySyncTree2.c)
 *     CmpFindSubKeyByName @ 0x1405B67BC (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x1405B68E4 (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x1405B6CBC (CmpWalkPath.c)
 *     CmpMarkCurrentValueDirty @ 0x1405BD1FC (CmpMarkCurrentValueDirty.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1406672F8 (CmpDoBuildVirtualStack.c)
 *     CmpPreserveSystemHiveData @ 0x14066F58C (CmpPreserveSystemHiveData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1404D2E60 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpFindSubKeyInRoot @ 0x1405016A0 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140501DA0 (CmpFindSubKeyInLeafWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByNameWithStatus(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v9; // ebx
  _WORD *v10; // rax
  unsigned int SubKeyByHashWithStatus; // eax
  _DWORD v13[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+30h] BYREF
  char v15; // [rsp+88h] [rbp+48h] BYREF

  v13[0] = -1;
  *a4 = -1;
  v4 = 0LL;
  v9 = -1073741772;
  v13[1] = 0;
  if ( *(_DWORD *)(a1 + 192) )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a2 + 4 * v4 + 20) )
        goto LABEL_15;
      v10 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(
                       a1,
                       *(unsigned int *)(a2 + 4 * v4 + 28),
                       v13);
      if ( !v10 )
        return (unsigned int)-1073741670;
      if ( *v10 != 26994 )
        goto LABEL_5;
      if ( (int)CmpFindSubKeyInRoot(a1, v10, a3, &v14) < 0 )
      {
        v9 = -1073741670;
        goto LABEL_10;
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
      if ( v14 != -1 )
        break;
LABEL_15:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 192) )
        return v9;
    }
    v10 = (_WORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v14, v13);
    if ( !v10 )
      return (unsigned int)-1073741670;
LABEL_5:
    if ( *v10 == 26732 )
      SubKeyByHashWithStatus = CmpFindSubKeyByHashWithStatus(a1, v10, a3, &v14);
    else
      SubKeyByHashWithStatus = CmpFindSubKeyInLeafWithStatus(a1, (_DWORD)v10, a3, (unsigned int)&v14, (__int64)&v15);
    v9 = SubKeyByHashWithStatus;
    if ( (int)(SubKeyByHashWithStatus + 0x80000000) >= 0 && SubKeyByHashWithStatus != -1073741772 )
      goto LABEL_10;
    if ( v14 != -1 )
    {
      *a4 = v14;
      v9 = 0;
LABEL_10:
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
      return v9;
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
    goto LABEL_15;
  }
  return v9;
}
