/*
 * XREFs of ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00CC9DC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00027B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C0062490 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     IsMessageOnlyWindow @ 0x1C00F6850 (IsMessageOnlyWindow.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01BC408 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01BD2BC (xxxActiveWindowTracking.c)
 */

__int64 __fastcall xxxMouseActivate(struct tagTHREADINFO *a1, struct tagWND *a2, const struct tagQMSG *a3, int a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  int v8; // r12d
  unsigned int active; // edi
  __int64 v10; // rcx
  struct tagWND *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // r8
  __int64 v15; // rax
  int v16; // ebx
  int v18; // r15d
  int v19; // r15d
  int v20; // r15d
  int v21; // ecx
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 *TopLevelWindow; // rax
  __int64 v28; // [rsp+60h] [rbp-20h] BYREF
  __int64 v29; // [rsp+68h] [rbp-18h] BYREF
  struct tagWND *v30; // [rsp+70h] [rbp-10h]
  unsigned int v31; // [rsp+C0h] [rbp+40h]
  __int64 v32; // [rsp+D0h] [rbp+50h]

  v6 = *(_QWORD *)((char *)a3 + 52);
  v7 = *((unsigned int *)a3 + 6);
  v32 = *((_QWORD *)a3 + 4);
  v8 = -__CFSHR__(*((_DWORD *)a3 + 25), 20);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 48) + 72LL) )
    return 0LL;
  active = 0;
  if ( !__CFSHR__(*((_DWORD *)a3 + 25), 20)
    && (unsigned int)CWindowProp::GetProp<CInputQueueProp>((__int64)a2, &v28)
    && (*((_BYTE *)a2 + 307) & 4) == 0 )
  {
    v18 = v7 - 513;
    if ( !v18 || (v19 = v18 - 3) == 0 || (v20 = v19 - 3) == 0 || v20 == 4 )
    {
      if ( (unsigned int)IsMessageOnlyWindow(v10) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a2);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = (__int64 *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
          PostEventMessageEx(
            TopLevelWindow[2],
            *(_QWORD *)(TopLevelWindow[2] + 384),
            6u,
            0LL,
            0,
            0LL,
            *TopLevelWindow,
            0LL);
        }
      }
    }
    return 0LL;
  }
  v11 = a2;
  v29 = *((_QWORD *)a1 + 46);
  *((_QWORD *)a1 + 46) = &v29;
  v12 = 1LL;
  v30 = a2;
  if ( a2 )
    ++*((_DWORD *)a2 + 2);
  v13 = (*((_BYTE *)a2 + 61) & 2) == 0 || (*((_BYTE *)a2 + 64) & 4) == 0;
  v31 = v13;
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( (*((_BYTE *)a2 + 71) & 0xC0) == 0x40 )
    {
      do
      {
        v11 = (struct tagWND *)*((_QWORD *)v11 + 13);
        if ( (_DWORD)v13 )
        {
          ThreadUnlock1(v13, v12);
          v29 = *((_QWORD *)a1 + 46);
          *((_QWORD *)a1 + 46) = &v29;
          v30 = v11;
          if ( v11 )
            ++*((_DWORD *)v11 + 2);
          v21 = v6 - *((_DWORD *)v11 + 36);
          v22 = HIDWORD(v6) - *((_DWORD *)v11 + 37);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            (ULONG_PTR)v11,
            0x210u,
            v32 | v7,
            (struct _LARGE_STRING *)((unsigned __int16)v21 | ((unsigned __int64)(unsigned __int16)v22 << 16)),
            0,
            0,
            0LL,
            1,
            0);
          v13 = v31;
        }
      }
      while ( (*((_BYTE *)v11 + 71) & 0xC0) == 0x40 );
      active = 0;
      v12 = 1LL;
    }
    if ( !(_DWORD)v13 )
    {
      ThreadUnlock1(v13, 1LL);
      v12 = 1LL;
      v29 = *((_QWORD *)a1 + 46);
      *((_QWORD *)a1 + 46) = &v29;
      v30 = v11;
      ++*((_DWORD *)v11 + 2);
    }
  }
  v14 = gpdwCPUserPreferencesMask;
  if ( !v8 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 && (_DWORD)v7 == 512 )
  {
    LOWORD(v16) = a4;
    active = xxxActiveWindowTracking(a2, 512LL);
    goto LABEL_22;
  }
  v15 = *((_QWORD *)a1 + 48);
  if ( *(struct tagWND **)(v15 + 88) == a2 && (*(_DWORD *)(v15 + 340) & 0x8000) == 0
    || v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
  {
    v16 = a4;
LABEL_27:
    active = 0;
    if ( ((unsigned __int8)*v14 & (unsigned __int8)v12) != 0 )
    {
      if ( CheckOnTop(a1, v11, v7) )
      {
        v12 = 1LL;
        if ( v16 == 1 )
        {
          v13 = *(unsigned int *)(*((_QWORD *)v11 + 2) + 440LL);
          if ( (v13 & 8) != 0 )
            active = (*((_BYTE *)v11 + 64) & 8) == 0;
        }
      }
    }
    goto LABEL_22;
  }
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( v8 )
    {
      LOWORD(v16) = a4;
    }
    else
    {
      if ( v11 )
        v23 = *(_QWORD *)v11;
      else
        LODWORD(v23) = 0;
      v16 = a4;
      v24 = xxxSendMessage((int)a2, 33, v23, (unsigned __int16)a4 | ((unsigned __int16)v7 << 16));
      active = v24;
      if ( v24 < 0 )
        goto LABEL_22;
      if ( v24 <= 2 )
      {
        v13 = *((_QWORD *)a1 + 48);
        if ( (v11 == *(struct tagWND **)(v13 + 88) && (*(_DWORD *)(v13 + 340) & 0x8000) == 0
           || (unsigned int)xxxActivateWindow(v11, *(_DWORD *)(v13 + 116) != 0 ? 2 : 4))
          && (*((_BYTE *)v11 + 71) & 8) == 0
          && active != 2 )
        {
          v14 = gpdwCPUserPreferencesMask;
          v12 = 1LL;
          goto LABEL_27;
        }
LABEL_58:
        active = 1;
        goto LABEL_22;
      }
      if ( v24 != 3 )
      {
        if ( v24 != 4 )
          goto LABEL_22;
        goto LABEL_58;
      }
    }
    active = 0;
    goto LABEL_22;
  }
  LOWORD(v16) = a4;
LABEL_22:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 48) + 72LL) )
    xxxSendMessage((int)a2, 32, *(_QWORD *)a2, (unsigned __int16)v16 | ((unsigned __int16)v7 << 16));
  ThreadUnlock1(v13, v12);
  return active;
}
