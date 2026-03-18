/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1C013C0B8
 * Callers:
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C013B98C (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C013C3E8 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C02160B4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0218794 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B60C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C023D948 (xxxPSMGetTextExtent.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005AB94 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GreSaveDC @ 0x1C0080270 (GreSaveDC.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     CreateCompatiblePublicDC @ 0x1C013C380 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientGetTextExtentPointW(HDC a1, const WCHAR *a2, int a3, _QWORD *a4)
{
  HDC CompatiblePublicDC; // rsi
  __int64 MaximumLength; // r8
  __int64 v9; // rdx
  unsigned __int8 *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned int v19; // r12d
  int v20; // r15d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  ULONG_PTR *v24; // rcx
  ULONG_PTR v25; // r15
  _QWORD *v26; // rcx
  PVOID *v28; // rdx
  char v29; // [rsp+60h] [rbp-318h] BYREF
  _BYTE v30[3]; // [rsp+61h] [rbp-317h] BYREF
  int v31; // [rsp+64h] [rbp-314h] BYREF
  __int64 v32; // [rsp+68h] [rbp-310h]
  _QWORD v33[4]; // [rsp+70h] [rbp-308h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-2E8h] BYREF
  ULONG_PTR RegionSize[4]; // [rsp+A0h] [rbp-2D8h] BYREF
  _QWORD v36[4]; // [rsp+C0h] [rbp-2B8h] BYREF
  unsigned __int8 v37[80]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v38[512]; // [rsp+130h] [rbp-248h] BYREF

  v33[3] = a1;
  v32 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v33[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a3 + 1)) )
    MaximumLength = 2LL * (a3 + 1);
  v10 = AllocCallbackMessage(80, 1u, MaximumLength, v38, 1, 0x200uLL);
  v33[1] = v10;
  if ( !v10 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v32);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v11, v12);
  if ( v10 != v37 && v10 != v38 )
    PushW32ThreadLock((__int64)v10, v36, (__int64)Win32FreePool, v13);
  *((_QWORD *)v10 + 7) = CompatiblePublicDC;
  *((_DWORD *)v10 + 16) = a3;
  *((_WORD *)v10 + 20) = DestinationString.Length;
  *((_WORD *)v10 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v10 + 6) < 0 )
    goto LABEL_25;
  v19 = GreSaveDC((__int64)a1, v14);
  if ( gdwInAtomicOperation )
  {
    v17 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v30,
    v17,
    gdwInAtomicOperation,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v20 = KeUserModeCallback(81LL, v10, *(unsigned int *)v10, v33, &v31);
  EtwTraceEndCallback(81LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v30,
    v21,
    v22,
    v23);
  GreRestoreDC(a1, v19);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v20 < 0 )
      goto LABEL_25;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 80LL),
      *(_DWORD *)(gpDispInfo + 84LL),
      CompatiblePublicDC,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v20 >= 0 && v31 == 24 )
  {
    v24 = (ULONG_PTR *)v33[0];
    if ( (unsigned __int64)(v33[0] + 8LL) < v33[0] || v33[0] + 8LL > MmUserProbeAddress )
      v24 = (ULONG_PTR *)MmUserProbeAddress;
    v25 = *v24;
    RegionSize[1] = *v24;
    v26 = *(_QWORD **)(v33[0] + 16LL);
    if ( v26 + 1 < v26 || (unsigned __int64)(v26 + 1) > MmUserProbeAddress )
      v26 = (_QWORD *)MmUserProbeAddress;
    *a4 = *v26;
    goto LABEL_20;
  }
LABEL_25:
  LODWORD(v25) = 0;
LABEL_20:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v32);
  }
  if ( v10 != v37 && v10 != v38 )
  {
    v28 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v28, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v36, (__int64)v28, v15, v16);
  }
  return (unsigned int)v25;
}
