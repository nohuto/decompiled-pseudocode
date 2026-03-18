/*
 * XREFs of FreeSpb @ 0x1C01EFB8C
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     FreeAllSpbs @ 0x1C00D70D0 (FreeAllSpbs.c)
 *     xxxDrawDragRectEx @ 0x1C01DD710 (xxxDrawDragRectEx.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01EF968 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     RestoreSpb @ 0x1C01EFD48 (RestoreSpb.c)
 *     SpbCheckPwnd @ 0x1C01EFFBC (SpbCheckPwnd.c)
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ?PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z @ 0x1C01EF860 (-PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z.c)
 *     GreSaveScreenBits @ 0x1C027A0D8 (GreSaveScreenBits.c)
 */

void __fastcall FreeSpb(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  char v4; // si
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *i; // rcx
  struct tagWND **v9; // rdi
  _DWORD *v10; // rdx
  __int64 v11; // r8
  struct tagWND *v12; // rdx
  __int64 v13; // rcx
  _QWORD *j; // rbx

  if ( !a1 )
    return;
  v3 = 0;
  v4 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
  {
    if ( (unsigned int)GreIsVisRgnPublishLocked(*(_QWORD *)(gpDispInfo + 32LL)) )
      v3 = 1;
    else
      GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 32LL), 2LL, *(_QWORD *)(a1 + 56), 0LL);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 )
      GreDeleteObject(v6);
  }
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
    GreDeleteObject(v7);
  for ( i = (_QWORD *)(gpDispInfo + 24LL); *i != a1; i = (_QWORD *)*i )
    ;
  v9 = (struct tagWND **)(a1 + 8);
  *i = *(_QWORD *)a1;
  v10 = *(_DWORD **)(a1 + 8);
  if ( v10 )
  {
    SetOrClrWF(0, v10, 0x80u, 1);
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || !ExIsResourceAcquiredSharedLite(gpresUser) )
      HMAssignmentUnlock(a1 + 8);
    else
      v4 = 1;
  }
  if ( v3 )
  {
    v11 = *(_QWORD *)(a1 + 56);
    goto LABEL_22;
  }
  if ( v4 )
  {
    v11 = 0LL;
LABEL_22:
    if ( v4 )
      v12 = *v9;
    else
      v12 = 0LL;
    PostSpbApc(*(struct _KAPC **)(a1 + 64), v12, v11);
    if ( v4 )
      *v9 = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 64);
  if ( v13 )
    Win32FreePool(v13, v10, a3);
  Win32FreePool(a1, v10, a3);
  if ( !*(_QWORD *)(gpDispInfo + 24LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    for ( j = *(_QWORD **)(gpDispInfo + 16LL); j; j = (_QWORD *)*j )
      GreGetBounds(j[1], 0LL, 2LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  }
}
