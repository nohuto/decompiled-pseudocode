/*
 * XREFs of xxxSnapWindow @ 0x1C0138DA0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007DB44 (GreCreateCompatibleBitmapInternal.c)
 *     xxxEmptyClipboard @ 0x1C00AE73C (xxxEmptyClipboard.c)
 *     _SetClipboardData @ 0x1C00AEFE8 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C00AF380 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00AF6D4 (_OpenClipboard.c)
 *     ReferenceWindowStation @ 0x1C00AF920 (ReferenceWindowStation.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     xxxPlayEventSound @ 0x1C01044C0 (xxxPlayEventSound.c)
 *     GreEnableAppContainerRestriction @ 0x1C010D120 (GreEnableAppContainerRestriction.c)
 *     ClientNoMemoryPopup @ 0x1C01F8890 (ClientNoMemoryPopup.c)
 *     CreateScreenPalette @ 0x1C020DD2C (CreateScreenPalette.c)
 *     DwmAsyncSnapshotWindow @ 0x1C024BF50 (DwmAsyncSnapshotWindow.c)
 */

__int64 __fastcall xxxSnapWindow(__int64 a1, int a2)
{
  HDC CompatibleDC; // r15
  char *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  bool v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned int v14; // r12d
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 DCEx; // rax
  HDC v19; // r14
  __int64 Bitmap; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  void *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // edx
  int v36; // [rsp+60h] [rbp-59h]
  __int128 v37; // [rsp+68h] [rbp-51h] BYREF
  __int64 v38; // [rsp+78h] [rbp-41h]
  __int64 v39; // [rsp+80h] [rbp-39h]
  __int64 v40; // [rsp+88h] [rbp-31h]
  _QWORD v41[3]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v42[3]; // [rsp+A8h] [rbp-11h] BYREF
  _QWORD v43[10]; // [rsp+C0h] [rbp+7h] BYREF
  PVOID Object; // [rsp+130h] [rbp+77h] BYREF
  unsigned int v46; // [rsp+138h] [rbp+7Fh]

  CompatibleDC = 0LL;
  v38 = gptiCurrent;
  if ( (PVOID)grpdeskRitInput != grpdeskLogon
    && ReferenceWindowStation(KeGetCurrentThread(), 0LL, 0x200u, &Object, 1) >= 0 )
  {
    v4 = (char *)Object;
    if ( (*((_DWORD *)Object + 8) & 4) == 0 && *(PVOID *)(*(_QWORD *)(a1 + 24) + 40LL) == Object )
    {
      while ( (*(_BYTE *)(a1 + 71) & 0x40) != 0 )
        a1 = *(_QWORD *)(a1 + 104);
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        v32 = (void *)ReferenceDwmApiPort(v6, v5, v7, v8);
        if ( (int)DwmAsyncSnapshotWindow(v32) < 0 )
          return 0;
        v25 = 1;
LABEL_33:
        xxxPlayEventSound(13LL, v28, v29, v30);
        return v25;
      }
      v41[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v41;
      v41[1] = a1;
      ++*(_DWORD *)(a1 + 8);
      PushW32ThreadLock((__int64)v4, v43, UserDereferenceObject);
      ObfReferenceObject(v4);
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL) + 16LL);
      v42[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v42;
      v42[1] = v9;
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      v10 = (unsigned int)OpenClipboard(v9, 0LL) != 0;
      ThreadUnlock1(v12, v11);
      if ( v10 )
      {
        xxxEmptyClipboard((struct tagCLIP **)v4);
        v37 = *(_OWORD *)(a1 + 128);
        if ( (unsigned int)IntersectRect((int *)&v37, (int *)&v37, (int *)(*gpDispInfo + 24LL)) )
        {
          v13 = DWORD2(v37) - v37;
          v14 = HIDWORD(v37) - DWORD1(v37);
          v46 = DWORD1(v37);
          v36 = v37;
          if ( a1 != GetDesktopWindow(a1) )
          {
            v35 = v15 - *(_DWORD *)(a1 + 128);
            v46 = v17 - *(_DWORD *)(a1 + 132);
            v36 = v35;
          }
          DCEx = _GetDCEx(v16, 0LL, 65537LL);
          v19 = (HDC)DCEx;
          if ( DCEx
            && (CompatibleDC = (HDC)GreCreateCompatibleDC(DCEx)) != 0LL
            && (!*(_DWORD *)(gpsi + 2204LL)
              ? (Bitmap = GreCreateBitmap(v13, v14, 1LL, *(unsigned __int16 *)(gpDispInfo + 146LL), 0LL))
              : (Bitmap = GreCreateCompatibleBitmapInternal(v19, v13, v14, 0, 0LL, 0LL)),
                (v21 = Bitmap) != 0 || (v21 = GreCreateBitmap(v13, v14, 1LL, 1LL, 0LL)) != 0) )
          {
            *(_QWORD *)&v37 = GreSelectBitmap(CompatibleDC, v21);
            if ( !a2
              && a1 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 408) + 8LL) + 16LL)
              && (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
            {
              LOBYTE(Object) = 1;
              GreEnableAppContainerRestriction(0);
            }
            else
            {
              LOBYTE(Object) = 0;
            }
            if ( (unsigned int)IsWindowDesktopComposed(a1) )
            {
              if ( gdwInAtomicOperation )
              {
                v22 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v22, gdwInAtomicOperation, v23, v24);
              v25 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v13, v14, v19, v36, v46, 1087111200, 0, 0);
              EnterCrit(0LL, 1LL);
            }
            else
            {
              v25 = NtGdiBitBltInternal(CompatibleDC, 0, 0, v13, v14, v19, v36, v46, 1087111200, 0, 0);
            }
            if ( (_BYTE)Object )
              GreEnableAppContainerRestriction(1);
            GreSelectBitmap(CompatibleDC, v37);
            if ( v25 )
            {
              SetClipboardData(2, v21, 0, 1);
              if ( (*(_DWORD *)(gpsi + 8684LL) & 1) != 0 && (int)CreateScreenPalette(v19) >= 0 )
              {
                SetClipboardData(9, v39, 0, 1);
                Win32FreePool(v40);
              }
              v25 = 1;
            }
            else if ( v21 )
            {
              GreDeleteObject(v21);
            }
          }
          else
          {
            ClientNoMemoryPopup();
            v25 = 0;
          }
          if ( v19 )
            _ReleaseDC(v19);
        }
        else
        {
          v25 = 0;
        }
        xxxCloseClipboard((struct tagWINDOWSTATION *)v4);
        HMAssignmentUnlock(v4 + 80);
        if ( CompatibleDC )
          GreDeleteDC(CompatibleDC);
        PopAndFreeW32ThreadLock((__int64)v43);
        ThreadUnlock1(v27, v26);
        if ( !v25 )
          return v25;
        goto LABEL_33;
      }
      PopAndFreeW32ThreadLock((__int64)v43);
      ThreadUnlock1(v34, v33);
    }
  }
  return 0LL;
}
