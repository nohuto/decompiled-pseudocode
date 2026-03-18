/*
 * XREFs of xxxClientAddFontResourceW @ 0x1C003B3C4
 * Callers:
 *     xxxAddFontResourceW @ 0x1C003B590 (xxxAddFontResourceW.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientAddFontResourceW(char **a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rbx
  int v15; // [rsp+30h] [rbp-2E8h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2E0h] BYREF
  _QWORD v17[3]; // [rsp+40h] [rbp-2D8h] BYREF
  _QWORD v18[3]; // [rsp+58h] [rbp-2C0h] BYREF
  _BYTE v19[144]; // [rsp+70h] [rbp-2A8h] BYREF
  unsigned __int8 v20[512]; // [rsp+100h] [rbp-218h] BYREF

  v6 = AllocCallbackMessage(136, 1u, *((unsigned __int16 *)a1 + 1), v20, 1, 0x200uLL);
  v7 = v6;
  RegionSize = (ULONG_PTR)v6;
  if ( !v6 )
    return 0LL;
  if ( v6 != v19 && v6 != v20 )
    PushW32ThreadLock((__int64)v6, v18, (__int64)Win32FreePool);
  *((_WORD *)v7 + 20) = *(_WORD *)a1;
  *((_WORD *)v7 + 21) = *((_WORD *)a1 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v7,
              a1[1],
              (unsigned int)*(unsigned __int16 *)a1 + 2,
              (void **)v7 + 6) < 0 )
    goto LABEL_19;
  *((_DWORD *)v7 + 14) = a2;
  if ( a3 && *(_DWORD *)(a3 + 4) )
  {
    *(_OWORD *)(v7 + 60) = *(_OWORD *)a3;
    *(_OWORD *)(v7 + 76) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v7 + 92) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v7 + 108) = *(_OWORD *)(a3 + 48);
    *(_QWORD *)(v7 + 124) = *(_QWORD *)(a3 + 64);
  }
  else
  {
    *((_DWORD *)v7 + 16) = 0;
  }
  if ( gdwInAtomicOperation )
  {
    v8 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v8, gdwInAtomicOperation, v9, v10);
  EtwTraceBeginCallback(83LL);
  *((_QWORD *)v7 + 2) = 0LL;
  v11 = KeUserModeCallback(83LL, v7, *(unsigned int *)v7, v17, &v15);
  EtwTraceEndCallback(83LL);
  EnterCrit(0LL, 1LL);
  if ( v11 >= 0 && v15 == 24 )
  {
    v12 = (__int64 *)v17[0];
    if ( (unsigned __int64)(v17[0] + 8LL) < v17[0] || (unsigned __int64)(v17[0] + 8LL) > W32UserProbeAddress )
      v12 = (__int64 *)W32UserProbeAddress;
    v13 = *v12;
    v17[1] = *v12;
  }
  else
  {
LABEL_19:
    LODWORD(v13) = 0;
  }
  if ( v7 != v19 && v7 != v20 )
  {
    if ( *((_QWORD *)v7 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v18);
  }
  return (unsigned int)v13;
}
