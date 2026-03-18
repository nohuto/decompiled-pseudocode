/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C009DAEC
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C00A1180 (zzzResetSharedDesktops.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     GetRedirectionBitmap @ 0x1C0025F80 (GetRedirectionBitmap.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C0060BC4 (IsPWNDEligibleForGDIScaling.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0071AC4 (--1EPALOBJ@@QEAA@XZ.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C009DD70 (UpdateMonitorForWindowAndChildren.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C01391FC (GreGetBitmapDpiScaleValue.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01C1844 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzUpdateWindowsAfterModeChange(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 *i; // r10
  __m128i *v7; // rdi
  BOOL v8; // r14d
  __int64 RedirectionBitmap; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // ebx
  int v13; // eax
  int v14; // r9d
  HBITMAP v15; // r15
  int v16; // r13d
  int v17; // esi
  __int64 NewMonitor; // rax
  __int64 result; // rax
  __int16 v20; // bx
  _BYTE v21[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v22[10]; // [rsp+38h] [rbp-50h] BYREF
  int v24; // [rsp+98h] [rbp+10h]
  __int64 *v25; // [rsp+A0h] [rbp+18h]
  HBITMAP v26; // [rsp+A8h] [rbp+20h] BYREF

  v24 = a2;
  v2 = a1;
  v3 = a2;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  for ( i = (__int64 *)gpKernelHandleTable; ; i += 2 )
  {
    v25 = i;
    if ( v4 > v5 )
      break;
    v26 = 0LL;
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      v7 = (__m128i *)*i;
      if ( (unsigned int)IsTopLevelWindow(*i) )
      {
        NewMonitor = ValidateHmonitorNoRip(v7[22].m128i_i64[1]);
        if ( !NewMonitor )
          NewMonitor = GetNewMonitor(v7, 0LL, 0LL);
        UpdateMonitorForWindowAndChildren(v7, NewMonitor, 0LL, 0LL);
        i = v25;
      }
      if ( (v7[4].m128i_i8[3] & 0x20) != 0 && (v7[4].m128i_i8[2] & 0x20) == 0 )
      {
        if ( v2 || (unsigned int)IsWindowDesktopComposed(v7) )
        {
          v7[19].m128i_i32[0] &= ~0x80000u;
          v8 = GetRedirectionBitmap((__int64)v7) == 0;
          RedirectionBitmap = GetRedirectionBitmap((__int64)v7);
          LOBYTE(v10) = 5;
          v11 = HmgShareLockCheck(RedirectionBitmap, v10);
          v22[0] = v11;
          if ( v11 )
          {
            v12 = *(_DWORD *)(v11 + 116);
            DEC_SHARE_REF_CNT(v11);
            if ( (v12 & 0x2000) != 0 )
              v3 = 1;
            v24 = v3;
          }
          else
          {
            EPALOBJ::~EPALOBJ((EPALOBJ *)v22);
          }
          RecreateRedirectionBitmap((struct tagWND *)v7, 0, (__int64)&v26);
          LOBYTE(v13) = IsDesktopWindow((__int64)v7);
          v15 = v26;
          v16 = v13;
          v17 = v8;
          if ( !v26 )
          {
LABEL_15:
            if ( !v16 )
              goto LABEL_16;
            goto LABEL_25;
          }
          if ( v13
            || v14 >= 0
            || (v7[19].m128i_i32[0] & 0x20) == 0
            || !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v7, v26) )
          {
            v17 = v8;
            if ( IsPWNDEligibleForGDIScaling((__int64)v7) )
            {
              v20 = 96 * GreGetBitmapDpiScaleValue(v15);
              if ( v20 != (unsigned __int16)GreGetScaledLogPixels(v7[23].m128i_u16[2]) )
                v17 = 1;
            }
            DeleteOrSetRedirectionBitmap((__int64)v7, (HSURF)v15, 1);
            goto LABEL_15;
          }
LABEL_16:
          if ( v17 )
          {
LABEL_25:
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
            zzzLockDisplayAreaAndInvalidateDCCache((__int64)v7, 0, 0LL);
            if ( v17 )
              xxxInternalInvalidate((struct tagWND *)v7, (HRGN)1, 1025LL);
            if ( !v21[0] )
            {
              --gdwInAtomicOperation;
              UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v21);
            }
          }
          v3 = v24;
          v2 = a1;
        }
        i = v25;
      }
    }
    v4 += 32LL;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  result = gdwDeferWinEvent;
  if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
    return xxxFlushDeferredWindowEvents();
  return result;
}
