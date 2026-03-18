/*
 * XREFs of _GetPointerDeviceRects @ 0x1C010493C
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x1C0104830 (NtUserGetPointerDeviceRects.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01CD820 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01CE328 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_GetNonRejectionRegion@PalmRejection@@YA?AUtagRECT@@PEAX@Z @ 0x1C01D40B0 (-_GetNonRejectionRegion@PalmRejection@@YA-AUtagRECT@@PEAX@Z.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D8F20 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 * Callees:
 *     MiPConvertLogicalRect @ 0x1C0007B80 (MiPConvertLogicalRect.c)
 *     _FindPointerDevice @ 0x1C0020298 (_FindPointerDevice.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1C0104B30 (EnsurePointerDeviceHasMonitor.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01C0C58 (VirtualizeMultiMonDigitizerSize.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GetPointerDeviceRects(struct _LIST_ENTRY *a1, _OWORD *a2, _OWORD *a3)
{
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  _OWORD *v10; // rax
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  __int64 v14; // rcx
  struct _LIST_ENTRY *v15; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v16[8]; // [rsp+28h] [rbp-18h] BYREF
  int v17[4]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  v15 = 0LL;
  v18 = 0LL;
  if ( !(unsigned int)FindPointerDevice(a1, &v18, &v15) )
  {
    if ( !gptiCurrent )
      goto LABEL_16;
    v14 = *(_QWORD *)(gptiCurrent + 1136LL);
    if ( !v14 || (*(_DWORD *)v14 & 1) == 0 || a1 != *(struct _LIST_ENTRY **)(v14 + 40) )
      goto LABEL_16;
LABEL_22:
    if ( a3 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v12 = gpDispInfo;
        v13 = (_OWORD *)(*gpDispInfo + 40LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v12 = gpDispInfo;
        v13 = (_OWORD *)(*gpDispInfo + 56LL);
      }
      else
      {
        v12 = gpDispInfo;
        v13 = (_OWORD *)(*gpDispInfo + 24LL);
      }
      *a3 = *v13;
    }
    else
    {
      v12 = gpDispInfo;
    }
    if ( a2 )
      *a2 = *(_OWORD *)MiPConvertLogicalRect(v17, (_DWORD *)(**(_QWORD **)v12 + 24LL));
    goto LABEL_15;
  }
  if ( v15 && !LOBYTE(v15[3].Flink) )
    goto LABEL_22;
  v7 = v18;
  if ( v18 )
  {
    EnsurePointerDeviceHasMonitor(v18);
    if ( !a3 || *(_QWORD *)(v7 + 288) )
    {
      if ( a2 )
      {
        if ( (*a2 = *(_OWORD *)(v7 + 140), *(_DWORD *)*gpDispInfo > 1u)
          && (*(_DWORD *)(v7 + 260) & 0x20) == 0
          && (unsigned int)(*(_DWORD *)(v7 + 24) - 6) <= 1
          || (v9 = *(_DWORD *)(v7 + 260), (v9 & 0x20) != 0) && (v9 & 0x8000) == 0 )
        {
          VirtualizeMultiMonDigitizerSize(a2, v8);
        }
      }
      if ( !a3 )
        goto LABEL_15;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v10 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 288) + 40LL) + 44LL);
          goto LABEL_14;
        }
        v7 = v18;
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v10 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 288) + 40LL) + 60LL);
          goto LABEL_14;
        }
        v7 = v18;
      }
      v10 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 288) + 40LL) + 28LL);
LABEL_14:
      *a3 = *v10;
LABEL_15:
      v6 = 1;
    }
  }
LABEL_16:
  if ( !v16[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v16);
  }
  return v6;
}
