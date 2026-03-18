/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1C000CC7C
 * Callers:
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C000CAC4 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C000CBA8 (xxxPSMGetTextExtent.c)
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C020D3F8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0215194 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0217614 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C0239ED0 (DT_GetExtentMinusPrefixes.c)
 * Callees:
 *     CreateCompatiblePublicDC @ 0x1C000CF78 (CreateCompatiblePublicDC.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     GreSaveDC @ 0x1C007DF40 (GreSaveDC.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientGetTextExtentPointW(HDC a1, const WCHAR *a2, unsigned int a3, _QWORD *a4)
{
  HDC CompatiblePublicDC; // rsi
  unsigned __int64 MaximumLength; // r8
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned int v13; // r12d
  __int64 v14; // rcx
  int v15; // r15d
  __int64 *v16; // rcx
  __int64 v17; // r15
  _QWORD *v18; // rcx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  int v21; // [rsp+68h] [rbp-300h] BYREF
  __int64 v22; // [rsp+70h] [rbp-2F8h]
  _QWORD v23[3]; // [rsp+78h] [rbp-2F0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-2D8h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-2C8h]
  _BYTE v26[24]; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned __int8 v27[80]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v28[512]; // [rsp+120h] [rbp-248h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v22 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v23[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = 2LL * (int)(a3 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v9 = (unsigned __int8 *)AllocCallbackMessage(0x50u, 1u, MaximumLength, v28, 1, 0x200uLL);
  v10 = v9;
  v23[1] = v9;
  if ( !v9 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v22);
    }
    return 0LL;
  }
  if ( v9 != v27 && v9 != v28 )
    PushW32ThreadLock(v9, v26, Win32FreePool);
  *((_QWORD *)v10 + 7) = CompatiblePublicDC;
  *((_DWORD *)v10 + 16) = a3;
  *((_WORD *)v10 + 20) = DestinationString.Length;
  *((_WORD *)v10 + 21) = DestinationString.MaximumLength;
  if ( CaptureCallbackData(
         (struct _CAPTUREBUF *)v10,
         DestinationString.Buffer,
         DestinationString.Length + 2,
         (void **)v10 + 6) < 0 )
    goto LABEL_27;
  v13 = GreSaveDC(a1);
  v14 = gdwInAtomicOperation;
  if ( gdwInAtomicOperation )
  {
    v14 = gdwExtraInstrumentations;
    v11 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v14, v11, gdwInAtomicOperation, v12);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v15 = KeUserModeCallback(81LL, v10, *(unsigned int *)v10, v23, &v21);
  EtwTraceEndCallback(81LL);
  EnterCrit(0LL, 1LL);
  GreRestoreDC(a1, v13);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v15 < 0 )
      goto LABEL_27;
    NtGdiBitBltInternal(
      a1,
      0LL,
      0LL,
      *(unsigned int *)(gpDispInfo + 80LL),
      *(_DWORD *)(gpDispInfo + 84LL),
      CompatiblePublicDC,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v15 >= 0 && v21 == 24 )
  {
    v16 = (__int64 *)v23[0];
    if ( (unsigned __int64)(v23[0] + 8LL) < v23[0] || (unsigned __int64)(v23[0] + 8LL) > W32UserProbeAddress )
      v16 = (__int64 *)W32UserProbeAddress;
    v17 = *v16;
    v25 = *v16;
    v18 = *(_QWORD **)(v23[0] + 16LL);
    if ( v18 + 1 < v18 || (unsigned __int64)(v18 + 1) > W32UserProbeAddress )
      v18 = (_QWORD *)W32UserProbeAddress;
    *a4 = *v18;
    goto LABEL_22;
  }
LABEL_27:
  LODWORD(v17) = 0;
LABEL_22:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v22);
  }
  if ( v10 != v27 && v10 != v28 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v26);
  }
  return (unsigned int)v17;
}
