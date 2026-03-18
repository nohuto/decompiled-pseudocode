/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01BF2E0
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01BF2E0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C0E2C (xxxForceUpdateProcessDpiAwarenessContext.c)
 * Callees:
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     UpdateWindowMonitor @ 0x1C005F450 (UpdateWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     _PostMessage @ 0x1C00B3950 (_PostMessage.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01BF2E0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  int v3; // eax
  __int64 v5; // rbp
  _QWORD *v7; // rax
  __int64 i; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int16 DwmDependentMetric; // ax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v18[3]; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int8 v19; // [rsp+88h] [rbp+10h]

  v3 = *((_DWORD *)a1 + 92);
  v5 = a2;
  *((_DWORD *)a1 + 92) = a2;
  v19 = v3;
  v7 = (_QWORD *)ValidateHmonitorNoRip(*((_QWORD *)a1 + 45));
  UpdateWindowMonitor(a1, v7);
  i = *((_QWORD *)a1 + 14);
  if ( !a3 )
    goto LABEL_8;
  PostEventMessageEx(*((_QWORD *)a1 + 2), *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL), 0x18u, 0LL, 0, v5, 0LL, 0LL);
  v11 = (unsigned __int16)GetDwmDependentMetric(1LL, (__int64)a1, v9, v10) << 16;
  DwmDependentMetric = GetDwmDependentMetric(0LL, (__int64)a1, v12, v13);
  PostMessage(
    (__int64)a1,
    126LL,
    *(unsigned __int16 *)(gpsi + 8676LL),
    (struct _LARGE_STRING *)(v11 | (unsigned __int64)DwmDependentMetric));
  if ( (((unsigned __int8)v5 ^ v19) & 0xF) != 0 )
  {
    PostEventMessageEx(
      *((_QWORD *)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL),
      9u,
      (__int64)a1,
      0x1Au,
      42LL,
      -1LL,
      0LL);
    PostEventMessageEx(
      *((_QWORD *)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL),
      9u,
      (__int64)a1,
      0x1Au,
      46LL,
      -1LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 43) )
    goto LABEL_8;
  v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v17;
  ++*((_DWORD *)a1 + 2);
  v17[1] = a1;
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  for ( i = *((_QWORD *)a1 + 14); ; i = *(_QWORD *)(i + 88) )
  {
    ThreadUnlock1(v16, v15);
LABEL_8:
    if ( !i )
      break;
    v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v18;
    v18[1] = i;
    ++*(_DWORD *)(i + 8);
    xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)i, v5, 0);
  }
}
