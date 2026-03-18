/*
 * XREFs of xxxSnapWindow @ 0x1C013F298
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0023138 (GreCreateCompatibleBitmapInternal.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxEmptyClipboard @ 0x1C00C55F4 (xxxEmptyClipboard.c)
 *     _SetClipboardData @ 0x1C00C5CC8 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C00C60A0 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00C6198 (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x1C00C6680 (ReferenceWindowStation.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     xxxPlayEventSound @ 0x1C010EDC0 (xxxPlayEventSound.c)
 *     ClientNoMemoryPopup @ 0x1C01FA258 (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C020F558 (CreateScreenPalette.c)
 *     GreEnableAppContainerRestriction @ 0x1C024C044 (GreEnableAppContainerRestriction.c)
 *     DwmAsyncSnapshotWindow @ 0x1C024D9EC (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(__int64 a1, int a2)
{
  HDC CompatibleDC; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax
  char *v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rcx
  bool v12; // bl
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r13d
  unsigned int v22; // r12d
  unsigned int v23; // ebx
  int v24; // edx
  __int64 DCEx; // rax
  HDC v26; // r14
  __int64 Bitmap; // rax
  __int64 v28; // rsi
  __int64 v29; // rcx
  unsigned int v30; // ebx
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  void *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  PVOID Object; // [rsp+60h] [rbp-59h] BYREF
  __int128 v42; // [rsp+68h] [rbp-51h] BYREF
  __int64 v43; // [rsp+78h] [rbp-41h]
  __int64 v44; // [rsp+80h] [rbp-39h]
  __int128 v45; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v46[3]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v47[3]; // [rsp+B0h] [rbp-9h] BYREF
  _QWORD v48[9]; // [rsp+C8h] [rbp+Fh] BYREF
  char v50; // [rsp+130h] [rbp+77h]
  unsigned int v51; // [rsp+138h] [rbp+7Fh]

  CompatibleDC = 0LL;
  if ( (PVOID)grpdeskRitInput != grpdeskLogon
    && ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, &Object, 1) >= 0
    && (*((_DWORD *)Object + 8) & 4) == 0
    && *(PVOID *)(*(_QWORD *)(a1 + 24) + 40LL) == Object )
  {
    while ( (*(_BYTE *)(a1 + 71) & 0x40) != 0 )
      a1 = *(_QWORD *)(a1 + 104);
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
    {
      v36 = (void *)ReferenceDwmApiPort(v5);
      if ( (int)DwmAsyncSnapshotWindow(v36) < 0 )
        return 0;
      v30 = 1;
LABEL_34:
      xxxPlayEventSound(13LL, v34);
      return v30;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v6, v7);
    v46[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v46;
    v46[1] = a1;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    v9 = (char *)Object;
    PushW32ThreadLock((__int64)Object, v48, UserDereferenceObject, v10);
    ObfReferenceObject(v9);
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL);
    v47[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v47;
    v47[1] = v11;
    if ( v11 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v11 + 8), 1u);
      v9 = (char *)Object;
    }
    v12 = (unsigned int)OpenClipboard(v11, 0LL) != 0;
    ThreadUnlock1(v14, v13);
    if ( v12 )
    {
      xxxEmptyClipboard((struct tagCLIP **)v9, v15, v16, v17);
      v42 = *(_OWORD *)(a1 + 128);
      v45 = *(_OWORD *)(*gpDispInfo + 24LL);
      if ( (unsigned int)IntersectRect(&v42, (int *)&v42, (int *)&v45) )
      {
        v21 = v42;
        v22 = HIDWORD(v42) - DWORD1(v42);
        v23 = DWORD2(v42) - v42;
        v51 = DWORD1(v42);
        if ( a1 != GetDesktopWindow(a1) )
        {
          v21 -= *(_DWORD *)(a1 + 128);
          v51 = v24 - *(_DWORD *)(a1 + 132);
        }
        DCEx = _GetDCEx(a1, 0LL, 65537LL);
        v26 = (HDC)DCEx;
        if ( DCEx
          && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx)) != 0LL
          && (!*(_DWORD *)(gpsi + 2204LL)
            ? (Bitmap = GreCreateBitmap(v23, v22, 1LL, *(unsigned __int16 *)(gpDispInfo + 120LL), 0LL))
            : (Bitmap = GreCreateCompatibleBitmapInternal(v26, v23, v22, 0, 0LL, 0LL)),
              (v28 = Bitmap) != 0 || (v28 = GreCreateBitmap(v23, v22, 1LL, 1LL, 0LL)) != 0) )
        {
          *(_QWORD *)&v42 = GreSelectBitmap(CompatibleDC, v28);
          if ( !a2
            && a1 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL)
            && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
          {
            v50 = 1;
            GreEnableAppContainerRestriction(0LL);
          }
          else
          {
            v50 = 0;
          }
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            if ( gdwInAtomicOperation )
            {
              v29 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v29, gdwInAtomicOperation);
            v30 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v23, v22, v26, v21, v51, 1087111200, 0, 0);
            EnterCrit(0LL, 1LL);
          }
          else
          {
            v30 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v23, v22, v26, v21, v51, 1087111200, 0, 0);
          }
          if ( v50 )
            GreEnableAppContainerRestriction(1LL);
          GreSelectBitmap(CompatibleDC, v42);
          if ( v30 )
          {
            SetClipboardData(2, v28, 0, 1);
            if ( (*(_DWORD *)(gpsi + 9980LL) & 1) != 0 && (int)CreateScreenPalette(v26) >= 0 )
            {
              SetClipboardData(9, v43, 0, 1);
              Win32FreePool(v44, v39, v40);
            }
            v30 = 1;
          }
          else if ( v28 )
          {
            GreDeleteObject(v28);
          }
        }
        else
        {
          ClientNoMemoryPopup();
          v30 = 0;
        }
        if ( v26 )
          _ReleaseDC(v26);
        v9 = (char *)Object;
      }
      else
      {
        v30 = 0;
      }
      xxxCloseClipboard((struct tagWINDOWSTATION *)v9, v18, v19, v20);
      HMAssignmentUnlock(v9 + 80);
      if ( CompatibleDC )
        GreDeleteDC(CompatibleDC);
      PopAndFreeW32ThreadLock((__int64)v48, v31);
      ThreadUnlock1(v33, v32);
      if ( !v30 )
        return v30;
      goto LABEL_34;
    }
    PopAndFreeW32ThreadLock((__int64)v48, v15);
    ThreadUnlock1(v38, v37);
  }
  return 0LL;
}
