/*
 * XREFs of ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0061EF0
 * Callers:
 *     xxxDCEWindowHitTestIndirect @ 0x1C0061C80 (xxxDCEWindowHitTestIndirect.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01D0E14 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C0061C80 (xxxDCEWindowHitTestIndirect.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0062420 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     IsWindowHolographicForHitTest @ 0x1C0062580 (IsWindowHolographicForHitTest.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062750 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     DCELayerHitTest @ 0x1C009CC6C (DCELayerHitTest.c)
 *     DwmSyncHitTestQuery @ 0x1C00E7D74 (DwmSyncHitTestQuery.c)
 *     IsMessageOnlyWindow @ 0x1C00F6850 (IsMessageOnlyWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01BF8F0 (DCEHitTestWindow.c)
 *     SizeBoxHwnd @ 0x1C0239024 (SizeBoxHwnd.c)
 */

HWND __fastcall xxxDCEWindowHitTest2Internal(
        struct tagWND *a1,
        struct tagPOINT a2,
        struct tagDCE_WINDOW_HIT_TEST_ARGS *a3)
{
  __int64 v3; // rax
  int v4; // r13d
  int v5; // r15d
  struct tagPOINT v7; // rbx
  struct tagWND *v8; // rsi
  int v10; // r12d
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  LONG y; // ebp
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  HWND v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 DesktopWindow; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  int *v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+50h] [rbp-88h] BYREF
  struct tagPOINT v39; // [rsp+58h] [rbp-80h] BYREF
  __int64 v40; // [rsp+60h] [rbp-78h] BYREF
  __int64 v41; // [rsp+68h] [rbp-70h]
  _QWORD v42[3]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v43[2]; // [rsp+88h] [rbp-50h] BYREF

  v3 = *((_QWORD *)a3 + 2);
  v4 = 0;
  v39 = a2;
  v5 = -2;
  LODWORD(v40) = -2;
  LODWORD(v38) = 1;
  v7 = a2;
  v41 = v3;
  v8 = a1;
  if ( !a1 )
    return 0LL;
  v10 = IsCompositionInputWindowForHitTest(a1);
  if ( v10 )
  {
    if ( (*((_DWORD *)a3 + 8) & 8) == 0 || !(unsigned int)IsMessageOnlyWindow(v8) && (*((_BYTE *)v8 + 71) & 0x10) == 0 )
      return 0LL;
  }
  else if ( (*((_BYTE *)v8 + 71) & 0x10) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)GetWindowCloakState((__int64)v8) )
  {
    if ( (*((_BYTE *)v8 + 307) & 2) == 0 )
      goto LABEL_20;
    v11 = *((_QWORD *)v8 + 23);
    if ( !v11 )
      goto LABEL_20;
    if ( !CoreWindowProp::s_atom )
      goto LABEL_20;
    v12 = *(_DWORD *)(v11 + 4);
    v13 = v11 + 8;
    if ( !v12 )
      goto LABEL_20;
    while ( *(_WORD *)(v13 + 8) != CoreWindowProp::s_atom || (*(_BYTE *)(v13 + 10) & 1) == 0 )
    {
      v13 += 16LL;
      if ( !--v12 )
        goto LABEL_20;
    }
    if ( !*(_QWORD *)v13 || !*(_DWORD *)(*(_QWORD *)v13 + 20LL) )
    {
LABEL_20:
      if ( (unsigned int)IsWindowHolographicForHitTest(v8) )
        goto LABEL_21;
      return 0LL;
    }
  }
LABEL_21:
  if ( v10 )
  {
LABEL_30:
    y = v39.y;
    goto LABEL_31;
  }
  if ( *((_QWORD *)v8 + 36) && (*((_DWORD *)a3 + 8) & 4) == 0 )
  {
    v14 = *((_QWORD *)v8 + 28);
    v43[0] = 0LL;
    v43[1] = 0LL;
    if ( v14 )
      GreGetRgnBox(v14, v43);
    v15 = v43;
    if ( !*((_QWORD *)v8 + 28) )
      v15 = (_QWORD *)((char *)v8 + 128);
    if ( !(unsigned int)DCEHitTestWindow(v15, *((_QWORD *)v8 + 36), &v39, *((_QWORD *)a3 + 5)) )
      return 0LL;
    v7 = v39;
    goto LABEL_30;
  }
  v18 = *((_QWORD *)v8 + 28);
  if ( v18 )
  {
    y = v39.y;
    if ( !(unsigned int)GrePtInRegion(v18, (unsigned int)v7.x, (unsigned int)v39.y) )
      return 0LL;
  }
  else
  {
    if ( v7.x < *((_DWORD *)v8 + 32) )
      return 0LL;
    if ( v7.x >= *((_DWORD *)v8 + 34) )
      return 0LL;
    y = v39.y;
    if ( v39.y < *((_DWORD *)v8 + 33) )
      return 0LL;
    if ( v39.y >= *((_DWORD *)v8 + 35) )
      return 0LL;
  }
LABEL_31:
  v17 = *((_QWORD *)v8 + 27);
  if ( v17 )
  {
    if ( !(unsigned int)GrePtInRegion(v17, (unsigned int)v7.x, (unsigned int)y) )
      return 0LL;
  }
  else
  {
    v19 = *((_QWORD *)v8 + 28);
    if ( v19 && !(unsigned int)GrePtInRegion(v19, (unsigned int)v7.x, (unsigned int)y) )
      return 0LL;
  }
  if ( (*((_BYTE *)v8 + 66) & 8) != 0
    && (*((_DWORD *)v8 + 76) & 0x20) == 0
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))DCELayerHitTest)(v8, v7) )
  {
    return 0LL;
  }
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v8) && (*((_DWORD *)a3 + 8) & 1) != 0 )
  {
    if ( !v10 && (*((_BYTE *)v8 + 71) & 0xC0) == 0x40 )
      return 0LL;
    v4 = 1;
  }
  if ( *((_QWORD *)v8 + 36) )
  {
    *((_DWORD *)a3 + 12) = 1;
    *((_QWORD *)a3 + 2) = LOWORD(v7.x) | ((unsigned __int16)y << 16);
  }
  if ( !v4 )
  {
    if ( v10 )
      goto LABEL_81;
    if ( (*((_BYTE *)v8 + 71) & 0x20) != 0
      || v7.x < *((_DWORD *)v8 + 36)
      || v7.x >= *((_DWORD *)v8 + 38)
      || y < *((_DWORD *)v8 + 37)
      || y >= *((_DWORD *)v8 + 39) )
    {
      LODWORD(v21) = v38;
    }
    else
    {
      v20 = *((_QWORD *)v8 + 14);
      v42[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v42;
      v42[1] = v20;
      if ( v20 )
        ++*(_DWORD *)(v20 + 8);
      v21 = xxxDCEWindowHitTestIndirect(*((struct tagWND **)v8 + 14), v7, (__int64)a3);
      ThreadUnlock1(v23, v22);
      if ( v21 )
        return v21;
    }
    if ( *((_QWORD *)v8 + 2) != gptiCurrent )
    {
LABEL_81:
      v5 = 1;
    }
    else
    {
      v24 = *((_QWORD *)v8 + 13);
      if ( !v24 )
        goto LABEL_77;
      DesktopWindow = GetDesktopWindow(v8, v24);
      if ( v27 != DesktopWindow
        || !(unsigned int)IsWindowDesktopComposed(v26)
        || (*((_BYTE *)v8 + 66) & 8) == 0
        || !(_DWORD)v21 )
      {
        goto LABEL_77;
      }
      if ( gdwInAtomicOperation )
      {
        v28 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      v31 = (void *)ReferenceDwmApiPort(v28, gdwInAtomicOperation, v29, v30);
      LODWORD(v38) = 1;
      UserSessionSwitchLeaveCrit(v33, v32, v34, v35);
      DwmSyncHitTestQuery(v31, *((_QWORD *)a3 + 1), *((_QWORD *)a3 + 2), -2, (__int64)&v40, (__int64)&v38);
      EnterCrit(0LL, 1LL);
      if ( (_DWORD)v38 )
      {
        v5 = v40;
      }
      else
      {
LABEL_77:
        _InterlockedIncrement(&glSendMessage);
        v5 = xxxSendTransformableMessageTimeout(
               (ULONG_PTR)v8,
               0x84u,
               0LL,
               (struct _LARGE_STRING *)(LOWORD(v39.x) | (LOWORD(v39.y) << 16)),
               0,
               0,
               0LL,
               1,
               0);
      }
      if ( v5 == -1 )
      {
        *((_QWORD *)a3 + 2) = v41;
        *((_DWORD *)a3 + 12) = 0;
        return 0LL;
      }
    }
  }
  v36 = (int *)*((_QWORD *)a3 + 3);
  if ( v36 )
  {
    *v36 = v5;
    *((_DWORD *)a3 + 9) = 1;
  }
  if ( v5 == (((*((unsigned __int8 *)v8 + 66) ^ (unsigned int)(unsigned __int8)~*((_BYTE *)v8 + 65)) >> 6) & 1 | 0x10)
    && (*((_BYTE *)v8 + 70) & 4) == 0 )
  {
    v37 = SizeBoxHwnd(v8);
    if ( v37 )
      v8 = (struct tagWND *)v37;
  }
  return *(HWND *)v8;
}
