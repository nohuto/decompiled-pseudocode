/*
 * XREFs of xxxBeginPaint @ 0x1C007F174
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C007DCE0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserBeginPaint @ 0x1C007F040 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF4D0 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C0113E40 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0204B8C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalHideCaret @ 0x1C0064468 (zzzInternalHideCaret.c)
 *     UT_GetParentDCClipBox @ 0x1C007F478 (UT_GetParentDCClipBox.c)
 *     xxxSendEraseBkgnd @ 0x1C007F4F4 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C007F96C (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C007FA1C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     CalcWindowRgn @ 0x1C00800C0 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ThreadLockExchangeAlways @ 0x1C00CF31C (ThreadLockExchangeAlways.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00F72D0 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int64 __fastcall xxxBeginPaint(struct tagWND *a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 DCEx; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 i; // rbx
  int v16; // ebx
  unsigned __int64 v17; // rdx
  int v18; // r9d
  HRGN NCUpdateRgn; // rbx
  __int64 EmptyRgnPublic; // rax
  _QWORD v22[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( (gdwPUDFlags & 0x10000000) != 0 )
    SetOrClrWF(1LL, a1, 1028LL, 1LL);
  SetOrClrWF(0LL, a1, 576LL, 1LL);
  if ( (*((_BYTE *)a1 + 57) & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0LL, a1, 288LL, 1LL);
      NCUpdateRgn = GetNCUpdateRgn(a1, 0);
      xxxSendNCPaint(a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*((_BYTE *)a1 + 57) & 0x20) != 0 );
  }
  else
  {
    SetOrClrWF(0LL, a1, 288LL, 1LL);
  }
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 288LL) )
    zzzInternalHideCaret();
  v4 = *((_BYTE *)a1 + 57) & 2;
  if ( (*((_BYTE *)a1 + 57) & 2) != 0 )
  {
    SetOrClrWF(0LL, a1, 260LL, 1LL);
    SetOrClrWF(0LL, a1, 258LL, 1LL);
  }
  if ( *((_QWORD *)a1 + 22) || (*((_BYTE *)a1 + 57) & 0x10) != 0 )
  {
    v5 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v5 + 576))-- == 1 )
    {
      *(_WORD *)(*(_QWORD *)(v5 + 424) + 6LL) &= ~0x20u;
      *(_WORD *)(*(_QWORD *)(v5 + 424) + 4LL) &= ~0x20u;
    }
  }
  SetOrClrWF(0LL, a1, 272LL, 1LL);
  v10 = *((_QWORD *)a1 + 22);
  *((_QWORD *)a1 + 22) = 0LL;
  if ( (*((_BYTE *)a1 + 60) & 2) != 0 )
  {
    if ( v10 )
    {
      EmptyRgnPublic = ghrgnUpdateSave;
      if ( ghrgnUpdateSave
        || (EmptyRgnPublic = CreateEmptyRgnPublic(v8, v7, v9), (ghrgnUpdateSave = EmptyRgnPublic) != 0) )
      {
        if ( v10 == 1 )
          CalcWindowRgn(a1, EmptyRgnPublic, (((unsigned int)gRdwFlags >> 10) & 1) == 0);
        else
          GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, v10, 2LL);
        ++gnUpdateSave;
      }
    }
  }
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  DCEx = _GetDCEx(a1, v10, 65664LL);
  *(_QWORD *)a2 = DCEx;
  v12 = DCEx;
  if ( (unsigned int)UT_GetParentDCClipBox(a1, DCEx, a2 + 12) && v4 )
    xxxSendEraseBkgnd(a1, v12, v10);
  v14 = gptiCurrent;
  v22[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v22;
  v22[1] = 0LL;
  for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
  {
    if ( !*(_QWORD *)(i + 176) && (*(_BYTE *)(i + 57) & 8) != 0 )
    {
      ThreadLockExchangeAlways(i, v22);
      xxxSendNCPaint((struct tagWND *)i, (HRGN)1);
    }
  }
  ThreadUnlock1(v14, v13);
  v16 = *((_BYTE *)a1 + 59) & 0x18;
  SetOrClrWF(0LL, a1, 776LL, 1LL);
  if ( (*((_BYTE *)a1 + 59) & 0x18) == 0 && v16 )
    VWPLRemoveBase(gpvwplHungRedraw, v17, a1, v18, 0LL);
  *(_DWORD *)(a2 + 8) = (*((unsigned __int8 *)a1 + 57) >> 2) & 1;
  return v12;
}
