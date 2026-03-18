/*
 * XREFs of xxxCheckFullScreen @ 0x1C005F0B8
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C005F468 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     xxxRemoveFullScreen @ 0x1C00602AC (xxxRemoveFullScreen.c)
 *     RECTFromSIZERECT @ 0x1C007332C (RECTFromSIZERECT.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00964C4 (GetWindowBordersWithDpiAwareness.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxAddFullScreen @ 0x1C0113C60 (xxxAddFullScreen.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     GetScreenRectForWindow @ 0x1C023A808 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v12; // r12
  __int64 *ThreadWin32Thread; // rax
  struct tagRECT *MonitorRectForWindow; // rax
  bool v15; // zf
  BOOL v16; // r12d
  struct tagMONITOR *v17; // rax
  __m128i *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // xmm0_8
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int WindowDpiLastNotify; // eax
  __int64 v24; // rax
  unsigned int DpiDependentMetric; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned int v29; // eax
  int WindowBordersWithDpiAwareness; // eax
  int v31; // edx
  int v32; // eax
  struct tagRECT v33; // [rsp+20h] [rbp-89h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-79h]
  struct tagRECT v35; // [rsp+38h] [rbp-71h] BYREF
  __int64 v36; // [rsp+48h] [rbp-61h] BYREF
  __int64 v37; // [rsp+50h] [rbp-59h]
  struct tagRECT v38; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v39[16]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v40[16]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v41; // [rsp+90h] [rbp-19h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-9h] BYREF
  struct tagRECT v43; // [rsp+B0h] [rbp+7h] BYREF

  v4 = 0;
  v8 = *(_QWORD *)(GetDispInfo() + 88);
  v9 = gpDispInfo;
  if ( *(_DWORD *)*gpDispInfo > 1u )
  {
    v38 = *(struct tagRECT *)GetScreenRectForWindow(v39, a1);
    if ( (unsigned int)IsMaxedRect(&v38, a2) )
      return 0LL;
    RECTFromSIZERECT(&v43);
    v10 = MonitorFromRect(&v43, 1u, *((_DWORD *)a1 + 92));
  }
  else
  {
    v10 = v8;
  }
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v9, v5, v6, v7) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  v36 = *(_QWORD *)(v12 + 392);
  *(_QWORD *)(v12 + 392) = &v36;
  v37 = v10;
  _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  v35 = *(struct tagRECT *)GetMonitorWorkRectForWindow(v40, v10, a1);
  if ( !(unsigned int)IsMaxedRect(&v35, a2) )
  {
    if ( (*((_BYTE *)a1 + 71) & 1) != 0 )
      SetOrClrWF(0LL, a1, 832LL, 1LL);
    v29 = xxxRemoveFullScreen(a1);
    goto LABEL_43;
  }
  MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v41, v10, a1);
  v15 = (*((_BYTE *)a1 + 71) & 1) == 0;
  v16 = v10 == v8;
  v33 = *MonitorRectForWindow;
  if ( v15 )
    goto LABEL_47;
  SetOrClrWF(1LL, a1, 832LL, 1LL);
  if ( *(_DWORD *)*gpDispInfo > 1u )
  {
    v17 = _MonitorFromWindowInternal(a1, 1, 1);
    CurrentThread = v17;
    if ( v17 != (struct tagMONITOR *)v10 && v10 == v8 )
    {
      v18 = (__m128i *)GetMonitorRectForWindow(&v42, (__int64)v17, a1);
      v19 = v18->m128i_i64[0];
      v20 = _mm_srli_si128(*v18, 8).m128i_u64[0];
      *(_DWORD *)a2 += v18->m128i_i64[0];
      *((_DWORD *)a2 + 2) += v33.left + v20 - v33.right - v19;
      *((_DWORD *)a2 + 1) += HIDWORD(v19);
      v21 = (unsigned int)(v33.top + HIDWORD(v20) - HIDWORD(v19) - v33.bottom);
      *((_DWORD *)a2 + 3) += v21;
      ThreadUnlock1(v19, v21);
      v16 = 0;
      v22 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v36 = *(_QWORD *)(v22 + 392);
      *(_QWORD *)(v22 + 392) = &v36;
      v37 = (__int64)CurrentThread;
      _InterlockedIncrement((volatile signed __int32 *)CurrentThread + 2);
    }
  }
  if ( (*((_BYTE *)a1 + 71) & 1) != 0 && (((*((_BYTE *)a1 + 70) & 0xC0) == 0xC0) & *((_BYTE *)a1 + 70)) != 0 )
  {
    if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
           && (v24 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v24 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
    v27 = DpiDependentMetric;
    if ( (int)(*(_DWORD *)a2 + DpiDependentMetric) > v33.right
      || (v28 = (unsigned int)(*((_DWORD *)a2 + 2) + *(_DWORD *)a2), (int)v28 < v33.right)
      || (v26 = *((unsigned int *)a2 + 1), (int)(v26 + DpiDependentMetric) > v33.top)
      || (v26 = (unsigned int)(*((_DWORD *)a2 + 3) + v26), (int)v26 < v33.bottom) )
    {
      if ( (*((_BYTE *)a1 + 60) & 0x40) != 0 )
        v4 = xxxRemoveFullScreen(a1);
      WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v26, v27);
      v31 = v35.bottom - v35.top;
      *(_DWORD *)a2 = v35.left - WindowBordersWithDpiAwareness;
      *((_DWORD *)a2 + 1) = v35.top - WindowBordersWithDpiAwareness;
      v28 = (unsigned int)(2 * WindowBordersWithDpiAwareness);
      v26 = (unsigned int)(v28 + v31);
      *((_DWORD *)a2 + 2) = v28 + v35.right - v35.left;
      if ( !v16 || (*((_BYTE *)a1 + 61) & 2) != 0 )
      {
        *((_DWORD *)a2 + 3) = v26;
      }
      else
      {
        v32 = *((_DWORD *)a2 + 3);
        if ( (int)v26 < v32 )
          v32 = v26;
        *((_DWORD *)a2 + 3) = v32;
      }
      goto LABEL_44;
    }
    if ( (*((_BYTE *)a1 + 60) & 0x40) == 0 )
      goto LABEL_29;
  }
  else
  {
LABEL_47:
    if ( (unsigned int)IsMaxedRect(&v33, a2) )
    {
LABEL_29:
      v29 = xxxAddFullScreen(a1);
LABEL_43:
      v4 = v29;
    }
  }
LABEL_44:
  ThreadUnlock1(v28, v26);
  return v4;
}
