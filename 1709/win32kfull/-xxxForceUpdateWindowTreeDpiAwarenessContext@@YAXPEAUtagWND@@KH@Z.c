/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01C2BC0
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01C2BC0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C457C (xxxForceUpdateProcessDpiAwarenessContext.c)
 * Callees:
 *     UpdateWindowMonitor @ 0x1C0064FC0 (UpdateWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00C91E0 (_PostMessage.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C010ED78 (GetPrimaryMonitorRectForWindow.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01C2BC0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  unsigned int v3; // eax
  __int64 v5; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 i; // rsi
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v13; // xmm0
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v19[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+98h] [rbp+10h]

  v3 = *((_DWORD *)a1 + 92);
  v5 = a2;
  *((_DWORD *)a1 + 92) = a2;
  v21 = v3;
  v7 = (_QWORD *)ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
  UpdateWindowMonitor(a1, v7);
  i = *((_QWORD *)a1 + 14);
  if ( !a3 )
    goto LABEL_8;
  PostEventMessageEx(
    *((struct tagTHREADINFO **)a1 + 2),
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL),
    0x18u,
    0LL,
    0,
    v5,
    0LL,
    0LL);
  PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(&v18, a1);
  v13 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
  PostMessage(
    (__int64)a1,
    126LL,
    *(unsigned __int16 *)(gpsi + 9972LL),
    (struct _LARGE_STRING *)((unsigned __int16)(v13.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRectForWindow) | ((unsigned __int16)(v13.m128i_i16[2] - HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0])) << 16)));
  if ( (((unsigned __int16)((unsigned int)v5 >> 8) ^ (unsigned __int16)(v21 >> 8)) & 0x1FF) != 0 )
  {
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL),
      9u,
      (__int64)a1,
      0x1Au,
      42LL,
      -1LL,
      0LL);
    PostEventMessageEx(
      *((struct tagTHREADINFO **)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL),
      9u,
      (__int64)a1,
      0x1Au,
      46LL,
      -1LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 43) )
    goto LABEL_8;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
  v19[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v19;
  v19[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  for ( i = *((_QWORD *)a1 + 14); ; i = *(_QWORD *)(i + 88) )
  {
    ThreadUnlock1(v16, v15);
LABEL_8:
    if ( !i )
      break;
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
    v20[0] = *(_QWORD *)(v17 + 392);
    *(_QWORD *)(v17 + 392) = v20;
    v20[1] = i;
    _InterlockedIncrement((volatile signed __int32 *)(i + 8));
    xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)i, v5, 0);
  }
}
