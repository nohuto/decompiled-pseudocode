/*
 * XREFs of xxxBeginPaint @ 0x1C005DAD0
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C003BE18 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     NtUserBeginPaint @ 0x1C005D9A0 (NtUserBeginPaint.c)
 *     xxxTooltipWndProc @ 0x1C010DBA0 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0203198 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxSBWndProc @ 0x1C020F940 (xxxSBWndProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     zzzInternalHideCaret @ 0x1C0038688 (zzzInternalHideCaret.c)
 *     ClearHungFlag @ 0x1C005EE68 (ClearHungFlag.c)
 *     UT_GetParentDCClipBox @ 0x1C005EF1C (UT_GetParentDCClipBox.c)
 *     ThreadLockExchangeAlways @ 0x1C00CB9BC (ThreadLockExchangeAlways.c)
 *     xxxSendEraseBkgnd @ 0x1C00EB518 (xxxSendEraseBkgnd.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F11D0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     CalcWindowRgn @ 0x1C00F12D0 (CalcWindowRgn.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F3E14 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxBeginPaint(struct tagWND *a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rcx
  __int64 v7; // rbx
  __int64 DCEx; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 i; // rbx
  HRGN NCUpdateRgn; // rbx
  __int64 EmptyRgnPublic; // rax
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (gdwPUDFlags & 0x10000000) != 0 )
    SetOrClrWF(1, a1, 0x404u, 1);
  SetOrClrWF(0, a1, 0x240u, 1);
  if ( (*((_BYTE *)a1 + 57) & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0, a1, 0x120u, 1);
      NCUpdateRgn = GetNCUpdateRgn(a1, 0);
      xxxSendNCPaint(a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*((_BYTE *)a1 + 57) & 0x20) != 0 );
  }
  else
  {
    SetOrClrWF(0, a1, 0x120u, 1);
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 256LL) )
    zzzInternalHideCaret();
  v4 = *((_BYTE *)a1 + 57) & 2;
  if ( (*((_BYTE *)a1 + 57) & 2) != 0 )
  {
    SetOrClrWF(0, a1, 0x104u, 1);
    SetOrClrWF(0, a1, 0x102u, 1);
  }
  if ( *((_QWORD *)a1 + 22) || (*((_BYTE *)a1 + 57) & 0x10) != 0 )
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v5 + 520))-- == 1 )
    {
      *(_WORD *)(*(_QWORD *)(v5 + 400) + 6LL) &= ~0x20u;
      *(_WORD *)(*(_QWORD *)(v5 + 400) + 4LL) &= ~0x20u;
    }
  }
  SetOrClrWF(0, a1, 0x110u, 1);
  v7 = *((_QWORD *)a1 + 22);
  *((_QWORD *)a1 + 22) = 0LL;
  if ( (*((_BYTE *)a1 + 60) & 2) != 0 )
  {
    if ( v7 )
    {
      EmptyRgnPublic = ghrgnUpdateSave;
      if ( ghrgnUpdateSave || (EmptyRgnPublic = CreateEmptyRgnPublic(), (ghrgnUpdateSave = EmptyRgnPublic) != 0) )
      {
        if ( v7 == 1 )
          CalcWindowRgn(a1, EmptyRgnPublic, (((unsigned int)gRdwFlags >> 10) & 1) == 0);
        else
          GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, v7, 2LL);
        ++gnUpdateSave;
      }
    }
  }
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  DCEx = _GetDCEx(a1, v7, 65664LL);
  *(_QWORD *)a2 = DCEx;
  v9 = DCEx;
  if ( (unsigned int)UT_GetParentDCClipBox(a1, DCEx, a2 + 12) && v4 )
    xxxSendEraseBkgnd(a1, v9, v7);
  v11 = gptiCurrent;
  v16[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v16;
  v16[1] = 0LL;
  for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
  {
    if ( !*(_QWORD *)(i + 176) && (*(_BYTE *)(i + 57) & 8) != 0 )
    {
      ThreadLockExchangeAlways(i, v16);
      xxxSendNCPaint((struct tagWND *)i, (HRGN)1);
    }
  }
  ThreadUnlock1(v11, v10);
  ClearHungFlag(a1);
  *(_DWORD *)(a2 + 8) = (*((unsigned __int8 *)a1 + 57) >> 2) & 1;
  return v9;
}
