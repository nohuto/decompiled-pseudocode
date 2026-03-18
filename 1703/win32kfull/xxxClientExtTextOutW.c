/*
 * XREFs of xxxClientExtTextOutW @ 0x1C0138734
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0138108 (xxxDrawCaptionTemp.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C020D6C4 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0215328 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
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

__int64 __fastcall xxxClientExtTextOutW(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _OWORD *a5,
        PCWSTR SourceString,
        int a7)
{
  HDC v11; // rsi
  unsigned __int64 MaximumLength; // r8
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned int v17; // r12d
  __int64 v18; // rcx
  int v19; // r15d
  __int64 *v20; // rcx
  __int64 v21; // r15
  int v23; // [rsp+60h] [rbp-308h] BYREF
  __int64 v24; // [rsp+68h] [rbp-300h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-2F8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-2F0h] BYREF
  _QWORD v27[5]; // [rsp+88h] [rbp-2E0h] BYREF
  _QWORD v28[4]; // [rsp+B0h] [rbp-2B8h] BYREF
  unsigned __int8 v29[112]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v30[512]; // [rsp+140h] [rbp-228h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v24 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v11 = CreateCompatiblePublicDC(a1, &v24);
  v27[2] = v11;
  if ( !v11 )
    return 0LL;
  MaximumLength = 2LL * (unsigned int)(a7 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v13 = AllocCallbackMessage(104, 1u, MaximumLength, v30, 1, 0x200uLL);
  v14 = v13;
  v27[1] = v13;
  if ( !v13 )
  {
    if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      GreDeleteObject(v24);
    }
    return 0LL;
  }
  if ( v13 != v29 && v13 != v30 )
    PushW32ThreadLock((__int64)v13, v28, (__int64)Win32FreePool);
  *((_QWORD *)v14 + 7) = v11;
  *((_DWORD *)v14 + 16) = a2;
  *((_DWORD *)v14 + 17) = a3;
  *((_DWORD *)v14 + 18) = a4;
  if ( a5 )
  {
    *(_OWORD *)(v14 + 76) = *a5;
    *((_DWORD *)v14 + 24) = 1;
  }
  else
  {
    *((_DWORD *)v14 + 24) = 0;
  }
  *((_DWORD *)v14 + 23) = a7;
  *((_WORD *)v14 + 20) = DestinationString.Length;
  *((_WORD *)v14 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v14,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v14 + 6) < 0 )
    goto LABEL_24;
  v17 = GreSaveDC(a1);
  v18 = gdwInAtomicOperation;
  if ( gdwInAtomicOperation )
  {
    v18 = gdwExtraInstrumentations;
    v15 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v18, v15, gdwInAtomicOperation, v16);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v14 + 2) = 0LL;
  v19 = KeUserModeCallback(80LL, v14, *(unsigned int *)v14, v27, &v23);
  EtwTraceEndCallback(80LL);
  EnterCrit(0LL, 1LL);
  GreRestoreDC(a1, v17);
  if ( v11 != a1 )
  {
    if ( v19 < 0 )
      goto LABEL_24;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 80LL),
      *(_DWORD *)(gpDispInfo + 84LL),
      v11,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v19 >= 0 && v23 == 24 )
  {
    v20 = (__int64 *)v27[0];
    if ( (unsigned __int64)(v27[0] + 8LL) < v27[0] || (unsigned __int64)(v27[0] + 8LL) > W32UserProbeAddress )
      v20 = (__int64 *)W32UserProbeAddress;
    v21 = *v20;
    v27[3] = *v20;
    goto LABEL_19;
  }
LABEL_24:
  LODWORD(v21) = 0;
LABEL_19:
  if ( v11 != a1 )
  {
    GreDeleteDC(v11);
    GreDeleteObject(v24);
  }
  if ( v14 != v29 && v14 != v30 )
  {
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v28);
  }
  return (unsigned int)v21;
}
