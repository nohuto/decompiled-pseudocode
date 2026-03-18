/*
 * XREFs of ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00638A0
 * Callers:
 *     xxxDCEWindowHitTestIndirect @ 0x1C0063700 (xxxDCEWindowHitTestIndirect.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01D54AC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     DwmSyncHitTestQuery @ 0x1C0049A6C (DwmSyncHitTestQuery.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C0063700 (xxxDCEWindowHitTestIndirect.c)
 *     IsWindowHolographicForHitTest @ 0x1C0063E70 (IsWindowHolographicForHitTest.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0064068 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     IsMessageOnlyWindow @ 0x1C00D63A0 (IsMessageOnlyWindow.c)
 *     DCELayerHitTest @ 0x1C010DCA8 (DCELayerHitTest.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     DCEHitTestWindow @ 0x1C01C3214 (DCEHitTestWindow.c)
 *     GetWindowFrameRect @ 0x1C01D5DE8 (GetWindowFrameRect.c)
 *     SizeBoxHwnd @ 0x1C023A580 (SizeBoxHwnd.c)
 */

HWND __fastcall xxxDCEWindowHitTest2Internal(struct tagWND *a1, struct tagPOINT a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  int v4; // r13d
  int v5; // r12d
  struct tagDCE_WINDOW_HIT_TEST_ARGS *v6; // r15
  struct tagPOINT v7; // rbx
  struct tagWND *v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // rbp
  unsigned int v12; // r10d
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  LONG y; // ebp
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rbp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v30; // r9
  __int64 *ThreadWin32Thread; // rax
  HWND v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 DesktopWindow; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  void *v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int *v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+50h] [rbp-88h] BYREF
  struct tagPOINT v44; // [rsp+58h] [rbp-80h] BYREF
  __int64 v45; // [rsp+60h] [rbp-78h] BYREF
  __int64 v46; // [rsp+68h] [rbp-70h]
  _QWORD v47[3]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v48[16]; // [rsp+88h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(a3 + 16);
  v4 = 0;
  v44 = a2;
  v5 = -2;
  LODWORD(v45) = -2;
  v6 = (struct tagDCE_WINDOW_HIT_TEST_ARGS *)a3;
  LODWORD(v43) = 1;
  v7 = a2;
  v46 = v3;
  v8 = a1;
  v9 = (__int64)a2;
  if ( !a1 )
    return 0LL;
  v11 = *((_QWORD *)a1 + 23);
  if ( v11 )
  {
    if ( CInputQueueProp::s_atom )
    {
      v12 = *(_DWORD *)(v11 + 4);
      a2 = (struct tagPOINT)(v11 + 8);
      v13 = v11 + 8;
      a3 = v12;
      if ( v12 )
      {
        while ( *(_WORD *)(v13 + 8) != CInputQueueProp::s_atom || (*(_BYTE *)(v13 + 10) & 1) == 0 )
        {
          v13 += 16LL;
          v14 = (_DWORD)a3 == 1;
          a3 = (unsigned int)(a3 - 1);
          if ( v14 )
            goto LABEL_19;
        }
        if ( *(_QWORD *)v13 )
        {
          if ( (*((_BYTE *)v8 + 307) & 2) == 0 )
            goto LABEL_22;
          if ( CoreWindowProp::s_atom )
          {
            while ( *(_WORD *)(*(_QWORD *)&a2 + 8LL) != CoreWindowProp::s_atom
                 || (*(_BYTE *)(*(_QWORD *)&a2 + 10LL) & 1) == 0 )
            {
              *(_QWORD *)&a2 += 16LL;
              if ( !--v12 )
                goto LABEL_19;
            }
            if ( **(_QWORD **)&a2 && *(_DWORD *)(**(_QWORD **)&a2 + 20LL) )
            {
LABEL_22:
              v15 = 1;
              if ( (*((_DWORD *)v6 + 8) & 8) == 0
                || !(unsigned int)IsMessageOnlyWindow(v8) && (*((_BYTE *)v8 + 71) & 0x10) == 0 )
              {
                return 0LL;
              }
              goto LABEL_25;
            }
          }
        }
      }
    }
  }
LABEL_19:
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))IsWindowHolographicForHitTest)(v8, a2, a3) )
    goto LABEL_22;
  v15 = 0;
  if ( (*((_BYTE *)v8 + 71) & 0x10) == 0 )
    return 0LL;
LABEL_25:
  if ( (unsigned int)GetWindowCloakState(v8) )
  {
    if ( (*((_BYTE *)v8 + 307) & 2) == 0 )
      goto LABEL_36;
    if ( !v11 )
      goto LABEL_36;
    v17 = CoreWindowProp::s_atom;
    if ( !CoreWindowProp::s_atom )
      goto LABEL_36;
    v16 = *(unsigned int *)(v11 + 4);
    v18 = v11 + 8;
    if ( !(_DWORD)v16 )
      goto LABEL_36;
    while ( *(_WORD *)(v18 + 8) != CoreWindowProp::s_atom || (*(_BYTE *)(v18 + 10) & 1) == 0 )
    {
      v18 += 16LL;
      v14 = (_DWORD)v16 == 1;
      v16 = (unsigned int)(v16 - 1);
      if ( v14 )
        goto LABEL_36;
    }
    if ( !*(_QWORD *)v18 || !*(_DWORD *)(*(_QWORD *)v18 + 20LL) )
    {
LABEL_36:
      if ( !(unsigned int)IsWindowHolographicForHitTest(v8, v16, v17) )
        return 0LL;
    }
  }
  if ( v15 )
    goto LABEL_42;
  if ( *((_QWORD *)v8 + 36) && (*((_DWORD *)v6 + 8) & 4) == 0 )
  {
    GetWindowFrameRect(v8, v48);
    if ( !(unsigned int)DCEHitTestWindow(v48, *((_QWORD *)v8 + 36), &v44, *((_QWORD *)v6 + 5)) )
      return 0LL;
    v7 = v44;
LABEL_42:
    y = v44.y;
    goto LABEL_43;
  }
  v21 = *((_QWORD *)v8 + 28);
  if ( v21 )
  {
    y = v44.y;
    if ( !(unsigned int)GrePtInRegion(v21, (unsigned int)v7.x, (unsigned int)v44.y) )
      return 0LL;
  }
  else
  {
    if ( v7.x < *((_DWORD *)v8 + 32) )
      return 0LL;
    if ( v7.x >= *((_DWORD *)v8 + 34) )
      return 0LL;
    y = v44.y;
    if ( v44.y < *((_DWORD *)v8 + 33) || v44.y >= *((_DWORD *)v8 + 35) )
      return 0LL;
  }
LABEL_43:
  v20 = *((_QWORD *)v8 + 27);
  if ( v20 )
  {
    if ( !(unsigned int)GrePtInRegion(v20, (unsigned int)v7.x, (unsigned int)y) )
      return 0LL;
  }
  else
  {
    v22 = *((_QWORD *)v8 + 28);
    if ( v22 && !(unsigned int)GrePtInRegion(v22, (unsigned int)v7.x, (unsigned int)y) )
      return 0LL;
  }
  if ( (*((_BYTE *)v8 + 66) & 8) != 0
    && (*((_DWORD *)v8 + 76) & 0x20) == 0
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))DCELayerHitTest)(v8, v7) )
  {
    return 0LL;
  }
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v8) && (*((_DWORD *)v6 + 8) & 1) != 0 )
  {
    if ( !v15 && (*((_BYTE *)v8 + 71) & 0xC0) == 0x40 )
      return 0LL;
    v4 = 1;
  }
  if ( *((_QWORD *)v8 + 36) )
  {
    v24 = (unsigned __int16)y << 16;
    *((_DWORD *)v6 + 12) = 1;
    *((_QWORD *)v6 + 2) = (int)(v24 | LOWORD(v7.x));
  }
  if ( !v4 )
  {
    if ( v15 )
      goto LABEL_95;
    if ( (*((_BYTE *)v8 + 71) & 0x20) != 0
      || v7.x < *((_DWORD *)v8 + 36)
      || v7.x >= *((_DWORD *)v8 + 38)
      || y < *((_DWORD *)v8 + 37)
      || y >= *((_DWORD *)v8 + 39) )
    {
      LODWORD(v32) = v43;
    }
    else
    {
      v27 = *((_QWORD *)v8 + 14);
      v28 = 0LL;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v23, v25, v26) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v28 = *ThreadWin32Thread;
      }
      v47[0] = *(_QWORD *)(v28 + 392);
      *(_QWORD *)(v28 + 392) = v47;
      v47[1] = v27;
      if ( v27 )
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
      v32 = xxxDCEWindowHitTestIndirect(*((struct tagWND **)v8 + 14), v44, (__int64)v6, v30);
      ThreadUnlock1(v34, v33);
      if ( v32 )
        return v32;
    }
    if ( *((_QWORD *)v8 + 2) != gptiCurrent )
    {
LABEL_95:
      v5 = 1;
    }
    else
    {
      if ( !*((_QWORD *)v8 + 13) )
        goto LABEL_92;
      DesktopWindow = GetDesktopWindow(v8);
      if ( v36 != DesktopWindow
        || !(unsigned int)IsWindowDesktopComposed(v8)
        || (*((_BYTE *)v8 + 66) & 8) == 0
        || !(_DWORD)v32 )
      {
        goto LABEL_92;
      }
      if ( gdwInAtomicOperation )
      {
        v37 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      v38 = (void *)ReferenceDwmApiPort(v37);
      LODWORD(v43) = 1;
      UserSessionSwitchLeaveCrit(v40, v39);
      DwmSyncHitTestQuery(
        v38,
        *(_QWORD *)v8,
        *(_DWORD *)v6,
        v9,
        *((_QWORD *)v6 + 1),
        *((_QWORD *)v6 + 2),
        -2,
        &v45,
        &v43);
      EnterCrit(0LL, 1LL);
      if ( (_DWORD)v43 )
      {
        v5 = v45;
      }
      else
      {
LABEL_92:
        _InterlockedIncrement(&glSendMessage);
        v5 = xxxSendTransformableMessageTimeout((ULONG_PTR)v8, 0, 0, 0LL, 1, 0);
      }
      if ( v5 == -1 )
      {
        *((_QWORD *)v6 + 2) = v46;
        *((_DWORD *)v6 + 12) = 0;
        return 0LL;
      }
    }
  }
  v41 = (int *)*((_QWORD *)v6 + 3);
  if ( v41 )
  {
    *v41 = v5;
    *((_DWORD *)v6 + 9) = 1;
  }
  if ( v5 == ((((unsigned __int8)~*((_BYTE *)v8 + 66) ^ (unsigned int)*((unsigned __int8 *)v8 + 65)) >> 6) & 1) + 16
    && (*((_BYTE *)v8 + 70) & 4) == 0 )
  {
    v42 = SizeBoxHwnd(v8);
    if ( v42 )
      v8 = (struct tagWND *)v42;
  }
  return *(HWND *)v8;
}
