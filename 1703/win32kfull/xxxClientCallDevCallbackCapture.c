/*
 * XREFs of xxxClientCallDevCallbackCapture @ 0x1C0113458
 * Callers:
 *     EditionInputExtensibilityCallout @ 0x1C0113420 (EditionInputExtensibilityCallout.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?ReserveCaptureBytes@@YAJPEAU_CAPTUREBUF@@KPEAPEAX1@Z @ 0x1C00C5A84 (-ReserveCaptureBytes@@YAJPEAU_CAPTUREBUF@@KPEAPEAX1@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall xxxClientCallDevCallbackCapture(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  const void *v4; // r14
  unsigned int v5; // esi
  int v6; // edx
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // rdi
  _OWORD *v9; // rax
  __int64 v10; // rcx
  void **v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  void **v16; // rcx
  void *v17; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-3A8h] BYREF
  int v20; // [rsp+38h] [rbp-3A0h] BYREF
  void *v21; // [rsp+40h] [rbp-398h] BYREF
  unsigned __int64 v22[3]; // [rsp+48h] [rbp-390h] BYREF
  _QWORD v23[4]; // [rsp+60h] [rbp-378h] BYREF
  unsigned __int8 v24[304]; // [rsp+80h] [rbp-358h] BYREF
  unsigned __int8 v25[512]; // [rsp+1B0h] [rbp-228h] BYREF

  v2 = a2;
  v4 = 0LL;
  v5 = 0;
  v21 = 0LL;
  v6 = *(_DWORD *)(a2 + 4) - 1;
  if ( v6 )
  {
    if ( v6 == 5 )
    {
      v4 = *(const void **)(v2 + 16);
      v5 = *(_DWORD *)(v2 + 8);
    }
  }
  else
  {
    v4 = *(const void **)(v2 + 24);
    v5 = *(_DWORD *)(v2 + 16);
  }
  if ( !v4 || !v5 )
    return 87LL;
  v7 = AllocCallbackMessage(304, 1u, v5, v25, 1, 0x200uLL);
  v8 = v7;
  RegionSize = (ULONG_PTR)v7;
  if ( !v7 )
    return 0LL;
  if ( v7 != v24 && v7 != v25 )
    PushW32ThreadLock((__int64)v7, v23, (__int64)Win32FreePool);
  *((_QWORD *)v8 + 5) = a1;
  v9 = v8 + 48;
  v10 = 2LL;
  do
  {
    *v9 = *(_OWORD *)v2;
    v9[1] = *(_OWORD *)(v2 + 16);
    v9[2] = *(_OWORD *)(v2 + 32);
    v9[3] = *(_OWORD *)(v2 + 48);
    v9[4] = *(_OWORD *)(v2 + 64);
    v9[5] = *(_OWORD *)(v2 + 80);
    v9[6] = *(_OWORD *)(v2 + 96);
    v9 += 8;
    *(v9 - 1) = *(_OWORD *)(v2 + 112);
    v2 += 128LL;
    --v10;
  }
  while ( v10 );
  v11 = 0LL;
  if ( *((_DWORD *)v8 + 13) == 1 )
  {
    v11 = (void **)(v8 + 72);
  }
  else if ( *((_DWORD *)v8 + 13) == 6 )
  {
    v11 = (void **)(v8 + 64);
  }
  ReserveCaptureBytes((struct _CAPTUREBUF *)v8, v5, v11, &v21);
  memmove(v21, v4, v5);
  if ( gdwInAtomicOperation )
  {
    v12 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v12, gdwInAtomicOperation, v13, v14);
  EtwTraceBeginCallback(55LL);
  *((_QWORD *)v8 + 2) = 0LL;
  v15 = KeUserModeCallback(55LL, v8, *(unsigned int *)v8, v22, &v20);
  EtwTraceEndCallback(55LL);
  EnterCrit(0LL, 1LL);
  if ( v15 >= 0 && v20 == 24 )
  {
    v16 = (void **)v22[0];
    if ( v22[0] + 8 < v22[0] || v22[0] + 8 > W32UserProbeAddress )
      v16 = (void **)W32UserProbeAddress;
    v17 = *v16;
    v21 = *v16;
  }
  else
  {
    LODWORD(v17) = 0;
  }
  if ( v8 != v24 && v8 != v25 )
  {
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v8 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v23);
  }
  return (unsigned int)v17;
}
