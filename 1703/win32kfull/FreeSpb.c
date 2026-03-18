/*
 * XREFs of FreeSpb @ 0x1C01E3B70
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00B6C84 (zzzLockWindowUpdate2.c)
 *     FreeAllSpbs @ 0x1C00FE090 (FreeAllSpbs.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01E393C (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     RestoreSpb @ 0x1C01E3D2C (RestoreSpb.c)
 *     SpbCheckPwnd @ 0x1C01E3FA4 (SpbCheckPwnd.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     ?PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z @ 0x1C01E3848 (-PostSpbApc@@YAXPEAU_KAPC@@PEAUtagWND@@_K@Z.c)
 *     GreSaveScreenBits @ 0x1C027D6D8 (GreSaveScreenBits.c)
 */

void __fastcall FreeSpb(__int64 a1)
{
  char v1; // bp
  char v2; // si
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *i; // rcx
  struct tagWND **v7; // rdi
  _DWORD *v8; // rdx
  __int64 v9; // r8
  struct tagWND *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rbx

  if ( !a1 )
    return;
  v1 = 0;
  v2 = 0;
  if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
  {
    if ( (unsigned int)GreIsVisRgnPublishLocked(*(_QWORD *)(gpDispInfo + 32LL)) )
      v1 = 1;
    else
      GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 32LL), 2LL, *(_QWORD *)(a1 + 56), 0LL);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      GreDeleteObject(v4);
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
    GreDeleteObject(v5);
  for ( i = (_QWORD *)(gpDispInfo + 24LL); *i != a1; i = (_QWORD *)*i )
    ;
  v7 = (struct tagWND **)(a1 + 8);
  *i = *(_QWORD *)a1;
  v8 = *(_DWORD **)(a1 + 8);
  if ( v8 )
  {
    SetOrClrWF(0, v8, 0x80u, 1);
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || !ExIsResourceAcquiredSharedLite(gpresUser) )
      HMAssignmentUnlock(a1 + 8);
    else
      v2 = 1;
  }
  if ( v1 )
  {
    v9 = *(_QWORD *)(a1 + 56);
    goto LABEL_22;
  }
  if ( v2 )
  {
    v9 = 0LL;
LABEL_22:
    if ( v2 )
      v10 = *v7;
    else
      v10 = 0LL;
    PostSpbApc(*(struct _KAPC **)(a1 + 64), v10, v9);
    if ( v2 )
      *v7 = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( v11 )
    Win32FreePool(v11);
  Win32FreePool(a1);
  if ( !*(_QWORD *)(gpDispInfo + 24LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    v12 = gpDispInfo;
    v13 = *(_QWORD **)(gpDispInfo + 16LL);
    if ( v13 )
    {
      do
      {
        GreGetBounds(v13[1], 0LL, 2LL);
        v13 = (_QWORD *)*v13;
      }
      while ( v13 );
      v12 = gpDispInfo;
    }
    GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)v12 + 32LL));
  }
}
