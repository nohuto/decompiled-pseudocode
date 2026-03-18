/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x1C0200C88
 * Callers:
 *     DT_DrawStr @ 0x1C0239DA0 (DT_DrawStr.c)
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

__int64 __fastcall xxxClientLpkDrawTextEx(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        const WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  HDC v13; // rsi
  unsigned __int64 MaximumLength; // r8
  unsigned __int8 *v16; // rax
  unsigned __int8 *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r9
  unsigned int v20; // r12d
  __int64 v21; // rcx
  int v22; // r15d
  __int64 *v23; // rcx
  __int64 v24; // r15
  int v25; // [rsp+60h] [rbp-358h] BYREF
  __int64 v26; // [rsp+68h] [rbp-350h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-348h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-340h] BYREF
  _QWORD v29[5]; // [rsp+88h] [rbp-330h] BYREF
  _QWORD v30[4]; // [rsp+B0h] [rbp-308h] BYREF
  unsigned __int8 v31[176]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v32[512]; // [rsp+180h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v26 = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  v13 = CreateCompatiblePublicDC(a1, &v26);
  v29[2] = v13;
  if ( !v13 )
    return 0LL;
  MaximumLength = 2LL * (a5 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v16 = AllocCallbackMessage(168, 1u, MaximumLength, v32, 1, 0x200uLL);
  v17 = v16;
  v29[1] = v16;
  if ( !v16 )
  {
    if ( v13 != a1 )
    {
      GreDeleteDC(v13);
      GreDeleteObject(v26);
    }
    return 0LL;
  }
  if ( v16 != v31 && v16 != v32 )
    PushW32ThreadLock((__int64)v16, v30, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 7) = v13;
  *((_DWORD *)v17 + 16) = a2;
  *((_DWORD *)v17 + 17) = a3;
  *((_DWORD *)v17 + 18) = a5;
  *((_DWORD *)v17 + 19) = a6;
  *((_DWORD *)v17 + 20) = a7;
  *(_OWORD *)(v17 + 88) = *(_OWORD *)a8;
  *(_OWORD *)(v17 + 104) = *(_OWORD *)(a8 + 16);
  *(_OWORD *)(v17 + 120) = *(_OWORD *)(a8 + 32);
  *(_OWORD *)(v17 + 136) = *(_OWORD *)(a8 + 48);
  *((_QWORD *)v17 + 19) = *(_QWORD *)(a8 + 64);
  *((_DWORD *)v17 + 40) = a9;
  *((_DWORD *)v17 + 41) = a10;
  *((_WORD *)v17 + 20) = DestinationString.Length;
  *((_WORD *)v17 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v17,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v17 + 6) < 0 )
    goto LABEL_24;
  v20 = GreSaveDC(a1);
  v21 = gdwInAtomicOperation;
  if ( gdwInAtomicOperation )
  {
    v21 = gdwExtraInstrumentations;
    v18 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v21, v18, gdwInAtomicOperation, v19);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v22 = KeUserModeCallback(79LL, v17, *(unsigned int *)v17, v29, &v25);
  EtwTraceEndCallback(79LL);
  EnterCrit(0LL, 1LL);
  GreRestoreDC(a1, v20);
  if ( v13 != a1 )
  {
    if ( v22 < 0 )
      goto LABEL_24;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 80LL),
      *(_DWORD *)(gpDispInfo + 84LL),
      v13,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v22 >= 0 && v25 == 24 )
  {
    v23 = (__int64 *)v29[0];
    if ( (unsigned __int64)(v29[0] + 8LL) < v29[0] || (unsigned __int64)(v29[0] + 8LL) > W32UserProbeAddress )
      v23 = (__int64 *)W32UserProbeAddress;
    v24 = *v23;
    v29[3] = *v23;
    goto LABEL_25;
  }
LABEL_24:
  LODWORD(v24) = 0;
LABEL_25:
  if ( v13 != a1 )
  {
    GreDeleteDC(v13);
    GreDeleteObject(v26);
  }
  if ( v17 != v31 && v17 != v32 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v30);
  }
  return (unsigned int)v24;
}
