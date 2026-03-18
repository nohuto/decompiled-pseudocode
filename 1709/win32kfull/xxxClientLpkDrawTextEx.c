/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x1C0202510
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B4DC (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C023B60C (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
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

__int64 __fastcall xxxClientLpkDrawTextEx(
        HDC a1,
        int a2,
        int a3,
        const WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  HDC v13; // rsi
  __int64 MaximumLength; // r8
  __int64 v16; // rdx
  unsigned __int8 *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned int v26; // r12d
  int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  ULONG_PTR *v31; // rcx
  ULONG_PTR v32; // r15
  PVOID *v33; // rdx
  char v34; // [rsp+60h] [rbp-358h] BYREF
  _BYTE v35[3]; // [rsp+61h] [rbp-357h] BYREF
  int v36; // [rsp+64h] [rbp-354h] BYREF
  __int64 v37; // [rsp+68h] [rbp-350h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-348h] BYREF
  _QWORD v39[4]; // [rsp+80h] [rbp-338h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+A0h] [rbp-318h] BYREF
  _QWORD v41[3]; // [rsp+B8h] [rbp-300h] BYREF
  unsigned __int8 v42[176]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v43[512]; // [rsp+180h] [rbp-238h] BYREF

  v39[3] = a1;
  v37 = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  v13 = CreateCompatiblePublicDC(a1, &v37);
  v39[2] = v13;
  if ( !v13 )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * (a5 + 1)) )
    MaximumLength = 2LL * (a5 + 1);
  v17 = AllocCallbackMessage(168, 1u, MaximumLength, v43, 1, 0x200uLL);
  v39[1] = v17;
  if ( !v17 )
  {
    if ( v13 != a1 )
    {
      GreDeleteDC(v13);
      GreDeleteObject(v37);
    }
    return 0LL;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v18, v19);
  if ( v17 != v42 && v17 != v43 )
    PushW32ThreadLock((__int64)v17, v41, (__int64)Win32FreePool, v20);
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
  v26 = GreSaveDC((__int64)a1, v21);
  if ( gdwInAtomicOperation )
  {
    v24 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v35,
    v24,
    gdwInAtomicOperation,
    v25);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v27 = KeUserModeCallback(79LL, v17, *(unsigned int *)v17, v39, &v36);
  EtwTraceEndCallback(79LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v35,
    v28,
    v29,
    v30);
  GreRestoreDC(a1, v26);
  if ( v13 != a1 )
  {
    if ( v27 < 0 )
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
  if ( v27 >= 0 && v36 == 24 )
  {
    v31 = (ULONG_PTR *)v39[0];
    if ( (unsigned __int64)(v39[0] + 8LL) < v39[0] || v39[0] + 8LL > MmUserProbeAddress )
      v31 = (ULONG_PTR *)MmUserProbeAddress;
    v32 = *v31;
    RegionSize[1] = *v31;
    goto LABEL_25;
  }
LABEL_24:
  LODWORD(v32) = 0;
LABEL_25:
  if ( v13 != a1 )
  {
    GreDeleteDC(v13);
    GreDeleteObject(v37);
  }
  if ( v17 != v42 && v17 != v43 )
  {
    v33 = (PVOID *)(v17 + 32);
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v33, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v41, (__int64)v33, v22, v23);
  }
  return (unsigned int)v32;
}
