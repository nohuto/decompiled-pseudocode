/*
 * XREFs of xxxClientExpandStringW @ 0x1C00C3C98
 * Callers:
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C00C12C0 (xxxUpdateSystemCursorFromRegistry.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00C4FC8 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00C511C (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  unsigned __int8 *v3; // rax
  unsigned __int8 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  ULONG_PTR *v9; // rcx
  ULONG_PTR v10; // r10
  __int128 *v11; // rcx
  __int64 v12; // xmm1_8
  unsigned int v13; // ebx
  int v15; // [rsp+30h] [rbp-308h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-300h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-2F8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-2E8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-2D8h]
  _QWORD v20[3]; // [rsp+78h] [rbp-2C0h] BYREF
  _BYTE v21[64]; // [rsp+90h] [rbp-2A8h] BYREF
  unsigned __int8 v22[592]; // [rsp+D0h] [rbp-268h] BYREF

  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  v3 = AllocCallbackMessage(56, 1u, v2, v22, 1, 0x248uLL);
  v4 = v3;
  v17[1] = v3;
  if ( !v3 )
    return 0LL;
  if ( v3 != v21 && v3 != v22 )
    PushW32ThreadLock((__int64)v3, v20, (__int64)Win32FreePool);
  *((_DWORD *)v4 + 10) = *(_DWORD *)a1;
  *((_DWORD *)v4 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v4 + 11)) & 0x7FFFFFFF;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v4, *((char **)a1 + 1), *(_DWORD *)a1 + 2, (void **)v4 + 6) < 0 )
    goto LABEL_22;
  *((_DWORD *)v4 + 11) &= ~0x80000000;
  if ( gdwInAtomicOperation )
  {
    v5 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v5, gdwInAtomicOperation, v6, v7);
  EtwTraceBeginCallback(59LL);
  *((_QWORD *)v4 + 2) = 0LL;
  v8 = KeUserModeCallback(59LL, v4, *(unsigned int *)v4, v17, &v15);
  EtwTraceEndCallback(59LL);
  EnterCrit(0LL, 1LL);
  if ( v8 >= 0 && v15 == 24 )
  {
    v9 = (ULONG_PTR *)v17[0];
    if ( (unsigned __int64)(v17[0] + 8LL) < v17[0] || (unsigned __int64)(v17[0] + 8LL) > W32UserProbeAddress )
      v9 = (ULONG_PTR *)W32UserProbeAddress;
    v10 = *v9;
    RegionSize = *v9;
    v11 = (__int128 *)v17[0];
    if ( (unsigned __int64)(v17[0] + 24LL) < v17[0] || (unsigned __int64)(v17[0] + 24LL) > W32UserProbeAddress )
      v11 = (__int128 *)W32UserProbeAddress;
    v12 = *((_QWORD *)v11 + 2);
    v18 = *v11;
    v19 = v12;
    v13 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v18, v10, *((_DWORD *)a1 + 1) >> 31, 0);
    RegionSize = v13;
    CopyOutputString((struct _CALLBACKSTATUS *)&v18, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
  }
  else
  {
LABEL_22:
    v13 = 0;
  }
  if ( v4 != v21 && v4 != v22 )
  {
    if ( *((_QWORD *)v4 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v4 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v20);
  }
  return v13;
}
