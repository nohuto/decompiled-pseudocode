/*
 * XREFs of xxxClientLoadImage @ 0x1C00C1B44
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00C12C0 (xxxUpdateSystemCursorFromRegistry.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C00C1534 (xxxSetMonitorIcoCurIndex.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00C5C08 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01B6FA0 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01B7024 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxClientLoadImage(char **a1, __int64 a2, unsigned __int16 a3, int a4, int a5, int a6)
{
  unsigned __int16 v9; // ax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned __int8 *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 v16; // ax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 *v19; // rbx
  __int64 v20; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-2D8h] BYREF
  int v23; // [rsp+38h] [rbp-2D0h] BYREF
  int v24; // [rsp+40h] [rbp-2C8h]
  void *v25; // [rsp+48h] [rbp-2C0h]
  _QWORD v26[3]; // [rsp+50h] [rbp-2B8h] BYREF
  _QWORD v27[3]; // [rsp+68h] [rbp-2A0h] BYREF
  _DWORD v28[24]; // [rsp+80h] [rbp-288h] BYREF
  unsigned __int8 v29[512]; // [rsp+E0h] [rbp-228h] BYREF

  v9 = *((_WORD *)a1 + 1);
  if ( v9 )
  {
    v10 = 1;
    v11 = v9;
  }
  else
  {
    v11 = 0;
    v10 = 0;
  }
  v24 = 0;
  v25 = 0LL;
  if ( v10 )
  {
    v12 = AllocCallbackMessage(96, v10, v11, v29, 1, 0x200uLL);
    RegionSize = (ULONG_PTR)v12;
    if ( !v12 )
      return 0LL;
  }
  else
  {
    v12 = (unsigned __int8 *)v28;
    RegionSize = (ULONG_PTR)v28;
    memset(v28, 0, sizeof(v28));
    v28[0] = 96;
  }
  if ( v12 != (unsigned __int8 *)v28 && v12 != v29 )
    PushW32ThreadLock((__int64)v12, v27, (__int64)Win32FreePool);
  *((_DWORD *)v12 + 10) = v24;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v12,
              (char *)v25,
              (unsigned int)(unsigned __int16)v24 + 2,
              (void **)v12 + 6) < 0 )
    goto LABEL_31;
  *((_WORD *)v12 + 28) = *(_WORD *)a1;
  v16 = *((_WORD *)a1 + 1);
  *((_WORD *)v12 + 29) = v16;
  if ( v16 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v12,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v12 + 8) < 0 )
      goto LABEL_31;
  }
  else
  {
    *((_QWORD *)v12 + 8) = a1[1];
  }
  *((_DWORD *)v12 + 18) = a3;
  *((_DWORD *)v12 + 19) = a4;
  *((_DWORD *)v12 + 20) = a5;
  *((_DWORD *)v12 + 21) = a6;
  *((_DWORD *)v12 + 22) = 0;
  if ( gdwInAtomicOperation )
  {
    v13 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v13, gdwInAtomicOperation, v14, v15);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v17 = KeUserModeCallback(74LL, v12, *(unsigned int *)v12, v26, &v23);
  EtwTraceEndCallback(74LL);
  EnterCrit(0LL, 1LL);
  if ( v17 >= 0 && v23 == 24 )
  {
    v19 = (__int64 *)v26[0];
    if ( (unsigned __int64)(v26[0] + 8LL) < v26[0] || (unsigned __int64)(v26[0] + 8LL) > W32UserProbeAddress )
      v19 = (__int64 *)W32UserProbeAddress;
    v20 = *v19;
    v26[1] = v20;
    if ( v20 )
    {
      LOBYTE(v18) = 3;
      v20 = HMValidateHandleNoRip(v20, v18);
    }
    goto LABEL_19;
  }
LABEL_31:
  v20 = 0LL;
LABEL_19:
  if ( v12 != (unsigned __int8 *)v28 && v12 != v29 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v27);
  }
  return v20;
}
