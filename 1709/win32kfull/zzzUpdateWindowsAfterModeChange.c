/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C00E662C
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C00E3D10 (zzzResetSharedDesktops.c)
 * Callees:
 *     GetNewMonitor @ 0x1C00644F0 (GetNewMonitor.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C008A1E8 (--1EPALOBJ@@QEAA@XZ.c)
 *     GetRedirectionBitmap @ 0x1C00902B0 (GetRedirectionBitmap.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00E3E74 (DeleteOrSetRedirectionBitmap.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00E6868 (UpdateMonitorForWindowAndChildren.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C013F704 (GreGetBitmapDpiScaleValue.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01C5084 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzUpdateWindowsAfterModeChange(int a1, int a2)
{
  int v2; // ebx
  int v3; // ebp
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  __int64 *v6; // r13
  __m128i *v7; // rdi
  BOOL v8; // r15d
  __int64 RedirectionBitmap; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // ebx
  int v13; // eax
  int v14; // r9d
  HBITMAP v15; // r12
  int v16; // ebx
  int v17; // ebp
  __int64 NewMonitor; // rax
  __int16 v19; // bx
  bool v20; // zf
  _BYTE v21[88]; // [rsp+30h] [rbp-58h] BYREF
  int v23; // [rsp+98h] [rbp+10h]
  __int64 v24; // [rsp+A0h] [rbp+18h] BYREF
  HBITMAP v25; // [rsp+A8h] [rbp+20h] BYREF

  v23 = a2;
  v2 = a1;
  v3 = a2;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  v6 = (__int64 *)gpKernelHandleTable;
  while ( v4 <= v5 )
  {
    v25 = 0LL;
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      v7 = (__m128i *)*v6;
      if ( (unsigned int)IsTopLevelWindow(*v6) )
      {
        NewMonitor = ValidateHmonitorNoRip(v7[22].m128i_i64[1]);
        if ( !NewMonitor )
          NewMonitor = GetNewMonitor(v7, 0LL, 0LL);
        UpdateMonitorForWindowAndChildren(v7, NewMonitor, 0LL, 0LL);
      }
      if ( (v7[4].m128i_i8[3] & 0x20) != 0
        && (v7[4].m128i_i8[2] & 0x20) == 0
        && (v2 || (unsigned int)IsWindowDesktopComposed(v7)) )
      {
        v7[19].m128i_i32[0] &= ~0x80000u;
        v8 = GetRedirectionBitmap((__int64)v7) == 0;
        RedirectionBitmap = GetRedirectionBitmap((__int64)v7);
        LOBYTE(v10) = 5;
        v11 = HmgShareLockCheck(RedirectionBitmap, v10);
        v24 = v11;
        if ( v11 )
        {
          v12 = *(_DWORD *)(v11 + 116);
          DEC_SHARE_REF_CNT(v11);
          if ( (v12 & 0x2000) != 0 )
            v3 = 1;
          v23 = v3;
        }
        else
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v24);
        }
        RecreateRedirectionBitmap((struct tagWND *)v7, 0, (__int64)&v25);
        LOBYTE(v13) = IsDesktopWindow((__int64)v7);
        v15 = v25;
        v16 = v13;
        LODWORD(v24) = v13;
        v17 = v8;
        if ( !v25 )
        {
LABEL_15:
          if ( !v16 )
            goto LABEL_16;
          goto LABEL_24;
        }
        if ( v13
          || v14 >= 0
          || (v7[19].m128i_i32[0] & 0x20) == 0
          || !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v7, v25) )
        {
          v17 = v8;
          if ( IsPWNDEligibleForGDIScaling((__int64)v7) )
          {
            v19 = 96 * GreGetBitmapDpiScaleValue(v15);
            v20 = v19 == (__int16)GreGetScaledLogPixels(v7[23].m128i_u16[2]);
            v16 = v24;
            if ( !v20 )
              v17 = 1;
          }
          DeleteOrSetRedirectionBitmap((__int64)v7, (__int64)v15, 1);
          goto LABEL_15;
        }
LABEL_16:
        if ( v17 )
        {
LABEL_24:
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
          zzzLockDisplayAreaAndInvalidateDCCache((__int64)v7, 0, 0LL);
          if ( v17 )
            xxxInternalInvalidate((struct tagWND *)v7, (HRGN)1, 0x401u);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
        }
        v2 = a1;
        v3 = v23;
      }
    }
    v4 += 32LL;
    v6 += 3;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  zzzEndDeferWinEventNotify();
}
