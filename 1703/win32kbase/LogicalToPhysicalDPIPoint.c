/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x1C002B280
 * Callers:
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0047210 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0072830 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002B678 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     MonitorFlagsFromDpiAwarenessContext @ 0x1C00728E0 (MonitorFlagsFromDpiAwarenessContext.c)
 *     HMValidateSharedHandleNoRip @ 0x1C007772C (HMValidateSharedHandleNoRip.c)
 *     ?DpiAwarenessContextFromMonitorFlags@@YAKK@Z @ 0x1C00DE2D0 (-DpiAwarenessContextFromMonitorFlags@@YAKK@Z.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // ebp
  unsigned int v6; // ebx
  __int64 v8; // r12
  int v9; // esi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v11; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v13; // esi
  int v14; // eax
  __int64 *v15; // rdi
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int16 v22; // r9
  int v23; // r11d
  __int64 v24; // r14
  int v25; // edi
  int v26; // r10d
  __int64 v27; // r11
  unsigned __int64 v28; // rdx
  int v29; // edi
  int v30; // r11d
  __int64 v31; // rsi
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  unsigned int v35; // esi
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v40; // eax
  __int64 v41; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v6 = a3;
  v8 = a1;
  if ( (a3 & 0xE0) == 0 )
  {
    LOBYTE(v9) = 18;
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      if ( *ThreadWin32Thread )
      {
        if ( *(_QWORD *)(v11 + 352) )
          CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
        if ( *(_DWORD *)(v11 + 340) )
        {
          LOBYTE(v9) = *(_DWORD *)(v11 + 340);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          if ( CurrentProcessWin32Process )
            v9 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        }
      }
    }
    v13 = v9 & 0xF;
    v14 = 0;
    if ( v13 == 1 )
    {
      v14 = 128;
    }
    else if ( v13 )
    {
      if ( v13 == 2 )
        v14 = 32;
    }
    else
    {
      v14 = 64;
    }
    v6 |= v14;
  }
  if ( (v6 & 3) == 0 )
    v6 |= 2u;
  if ( (v6 & 0x20) != 0 )
  {
    *(_QWORD *)v8 = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    if ( a4 )
      v41 = *a4;
    else
      v41 = 0LL;
    v15 = &v41;
    if ( a4 )
      v15 = a4;
    if ( (v6 & 0x100) != 0 && !*v15 )
    {
      a1 = *(_QWORD *)gpDispInfo;
      if ( **(_DWORD **)gpDispInfo > 1u )
      {
        v35 = DpiAwarenessContextFromMonitorFlags(v6);
        v37 = IsDCELogicalSpeedTopLevelHitTestSupported(v36);
        if ( v37 >= 0 )
        {
          v38 = DCELogicalSpeedTopLevelHitTest(a2, v35);
          a1 = v38;
          if ( v38 )
          {
            if ( (((unsigned __int8)v35 ^ *(_BYTE *)(v38 + 368)) & 0xF) == 0 )
              *v15 = HMValidateSharedHandleNoRip(*(_QWORD *)(v38 + 360));
          }
        }
      }
    }
    if ( (v6 & 0xE0) == 0 )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      v6 |= MonitorFlagsFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext);
    }
    if ( (v6 & 3) == 0 )
      v6 |= 2u;
    if ( (v6 & 0x20) != 0 || (int)Is_MonitorFromPointSupported(a1) < 0 )
    {
      *(_QWORD *)v8 = *(_QWORD *)a2;
    }
    else
    {
      if ( !v15 || (v16 = *v15) == 0 )
        v16 = _MonitorFromPoint(*(_QWORD *)a2, v6);
      if ( v15 )
        *v15 = v16;
      LOBYTE(v17) = v6;
      if ( (v6 & 0xE0) == 0 )
      {
        v40 = W32GetCurrentThreadDpiAwarenessContext();
        v17 = v6 | MonitorFlagsFromDpiAwarenessContext(v40);
      }
      if ( (v17 & 3) == 0 )
        LOBYTE(v17) = v17 | 2;
      v18 = *(_QWORD *)(v16 + 40);
      if ( (v17 & 0x40) != 0 )
      {
        v19 = (__int64 *)(v18 + 44);
      }
      else if ( (v17 & 0x80u) == 0 )
      {
        v19 = (__int64 *)(v18 + 28);
      }
      else
      {
        v19 = (__int64 *)(v18 + 60);
      }
      v20 = *v19;
      v21 = *(_QWORD *)(v18 + 28);
      v41 = v20;
      if ( (v6 & 0x40) != 0 )
        v22 = 96;
      else
        v22 = *((_WORD *)gpsi + 4339);
      v4 = 1;
      v23 = *(_DWORD *)a2 - v20;
      v24 = *(unsigned __int16 *)(v18 + 128);
      v25 = 1;
      if ( v23 < 0 )
      {
        v25 = -1;
        v23 = v20 - *(_DWORD *)a2;
      }
      v26 = 0x80000000;
      if ( v22
        && ((v27 = v22 / 2 + *(unsigned __int16 *)(v18 + 128) * (__int64)v23, v22 != 96LL)
          ? (v28 = v27 / v22)
          : (v28 = v27 / 96),
            v28 <= 0x7FFFFFFF) )
      {
        if ( v25 <= 0 )
          LODWORD(v28) = -(int)v28;
      }
      else
      {
        LODWORD(v28) = 0x80000000;
        if ( v25 > 0 )
          LODWORD(v28) = 0x7FFFFFFF;
      }
      v29 = 1;
      *(_DWORD *)v8 = v21 + v28;
      v30 = *(_DWORD *)(a2 + 4) - HIDWORD(v41);
      if ( v30 < 0 )
      {
        v29 = -1;
        v30 = HIDWORD(v41) - *(_DWORD *)(a2 + 4);
      }
      if ( v22
        && ((v31 = v22, v32 = v22 / 2 + v24 * v30, v31 != 96) ? (v33 = v32 / v31) : (v33 = v32 / 96), v33 <= 0x7FFFFFFF) )
      {
        v26 = v33;
        if ( v29 <= 0 )
          v26 = -(int)v33;
      }
      else if ( v29 > 0 )
      {
        v26 = 0x7FFFFFFF;
      }
      *(_DWORD *)(v8 + 4) = v26 + HIDWORD(v21);
    }
    return v4;
  }
}
