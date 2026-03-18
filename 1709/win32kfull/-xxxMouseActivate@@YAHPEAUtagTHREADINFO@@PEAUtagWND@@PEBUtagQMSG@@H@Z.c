/*
 * XREFs of ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CF370
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     IsMessageOnlyWindow @ 0x1C00D63A0 (IsMessageOnlyWindow.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01C00F8 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01C11D8 (xxxActiveWindowTracking.c)
 */

__int64 __fastcall xxxMouseActivate(struct tagTHREADINFO *a1, struct tagWND *a2, const struct tagQMSG *a3, int a4)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  int v8; // r12d
  unsigned int active; // edi
  struct tagWND *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v16; // ebx
  int v17; // ebp
  int v18; // ebp
  int v19; // ebp
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  __int64 v26; // [rsp+60h] [rbp-58h] BYREF
  struct tagWND *v27; // [rsp+68h] [rbp-50h]
  unsigned int v28; // [rsp+C0h] [rbp+8h]
  __int64 v29; // [rsp+D0h] [rbp+18h]

  v6 = *(_QWORD *)((char *)a3 + 52);
  v7 = *((unsigned int *)a3 + 6);
  v29 = *((_QWORD *)a3 + 4);
  v8 = -__CFSHR__(*((_DWORD *)a3 + 25), 20);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 51) + 104LL) )
    return 0LL;
  active = 0;
  if ( !__CFSHR__(*((_DWORD *)a3 + 25), 20)
    && (unsigned int)IsCompositionInputWindow(a2)
    && (*((_BYTE *)a2 + 307) & 4) == 0 )
  {
    v17 = v7 - 513;
    if ( !v17 || (v18 = v17 - 3) == 0 || (v19 = v18 - 3) == 0 || v19 == 4 )
    {
      if ( (unsigned int)IsMessageOnlyWindow(a2) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a2);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
          PostEventMessageEx(
            *(struct tagTHREADINFO **)(TopLevelWindow + 16),
            *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 408LL),
            6u,
            0LL,
            0,
            0LL,
            *(_QWORD *)TopLevelWindow,
            0LL);
        }
      }
    }
    return 0LL;
  }
  v10 = a2;
  v26 = *((_QWORD *)a1 + 49);
  *((_QWORD *)a1 + 49) = &v26;
  v11 = 1LL;
  v27 = a2;
  if ( a2 )
    _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
  v12 = (*((_BYTE *)a2 + 61) & 2) == 0 || (*((_BYTE *)a2 + 64) & 4) == 0;
  v28 = v12;
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( (*((_BYTE *)a2 + 71) & 0xC0) == 0x40 )
    {
      do
      {
        v10 = (struct tagWND *)*((_QWORD *)v10 + 13);
        if ( (_DWORD)v12 )
        {
          ThreadUnlock1(v12, v11);
          v26 = *((_QWORD *)a1 + 49);
          *((_QWORD *)a1 + 49) = &v26;
          v27 = v10;
          if ( v10 )
            _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
          v20 = v6 - *((_DWORD *)v10 + 36);
          v21 = HIDWORD(v6) - *((_DWORD *)v10 + 37);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            (__int64 *)v10,
            528LL,
            v29 | v7,
            (struct _LARGE_STRING *)((unsigned __int16)v20 | (unsigned __int64)((unsigned __int16)v21 << 16)),
            0,
            0,
            0LL,
            1u,
            0);
          v12 = v28;
        }
      }
      while ( (*((_BYTE *)v10 + 71) & 0xC0) == 0x40 );
      active = 0;
      v11 = 1LL;
    }
    if ( !(_DWORD)v12 )
    {
      ThreadUnlock1(v12, 1LL);
      v11 = 1LL;
      v26 = *((_QWORD *)a1 + 49);
      *((_QWORD *)a1 + 49) = &v26;
      v27 = v10;
      _InterlockedAdd((volatile signed __int32 *)v10 + 2, 1u);
    }
  }
  if ( !v8 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 && (_DWORD)v7 == 512 )
  {
    active = xxxActiveWindowTracking(a2, 512LL);
    goto LABEL_21;
  }
  v13 = *((_QWORD *)a1 + 51);
  if ( *(struct tagWND **)(v13 + 120) == a2 && (*(_DWORD *)(v13 + 380) & 0x8000) == 0
    || v10 == (struct tagWND *)GetDesktopWindow((__int64)v10) )
  {
    v16 = a4;
LABEL_26:
    active = 0;
    v14 = (unsigned int)gpdwCPUserPreferencesMask;
    if ( ((unsigned __int8)gpdwCPUserPreferencesMask & (unsigned __int8)v11) != 0 )
    {
      if ( CheckOnTop(a1, v10, v7) )
      {
        v11 = 1LL;
        if ( v16 == 1 )
        {
          v14 = *(unsigned int *)(*((_QWORD *)v10 + 2) + 464LL);
          if ( (v14 & 8) != 0 )
            active = (*((_BYTE *)v10 + 64) & 8) == 0;
        }
      }
    }
    goto LABEL_21;
  }
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( !v8 )
    {
      v16 = a4;
      v22 = xxxSendMessage((ULONG_PTR)a2);
      active = v22;
      if ( v22 < 0 )
        goto LABEL_21;
      if ( v22 <= 2 )
      {
        v14 = *((_QWORD *)a1 + 51);
        if ( (v10 == *(struct tagWND **)(v14 + 120) && (*(_DWORD *)(v14 + 380) & 0x8000) == 0
           || (unsigned int)xxxActivateWindow(v10, *(_DWORD *)(v14 + 148) != 0 ? 2 : 4))
          && (*((_BYTE *)v10 + 71) & 8) == 0
          && active != 2 )
        {
          v11 = 1LL;
          goto LABEL_26;
        }
LABEL_55:
        active = 1;
        goto LABEL_21;
      }
      if ( v22 != 3 )
      {
        if ( v22 != 4 )
          goto LABEL_21;
        goto LABEL_55;
      }
    }
    active = 0;
  }
LABEL_21:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 51) + 104LL) )
    xxxSendMessage((ULONG_PTR)a2);
  ThreadUnlock1(v14, v11);
  return active;
}
