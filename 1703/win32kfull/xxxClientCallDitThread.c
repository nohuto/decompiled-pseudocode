/*
 * XREFs of xxxClientCallDitThread @ 0x1C00C56DC
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 *     ClientCallDitThread @ 0x1C00C56D0 (ClientCallDitThread.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?ReserveCaptureBytes@@YAJPEAU_CAPTUREBUF@@KPEAPEAX1@Z @ 0x1C00C5A84 (-ReserveCaptureBytes@@YAJPEAU_CAPTUREBUF@@KPEAPEAX1@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall xxxClientCallDitThread(__int64 a1, __int64 a2)
{
  const void **v4; // r13
  void *v5; // r12
  unsigned int v6; // esi
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r15d
  ULONG_PTR *v13; // rcx
  ULONG_PTR v14; // rdi
  __int128 *v15; // rcx
  __int128 *v16; // rcx
  _OWORD *v17; // r14
  _BYTE v19[4]; // [rsp+30h] [rbp-448h] BYREF
  int v20; // [rsp+34h] [rbp-444h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+38h] [rbp-440h] BYREF
  _QWORD v22[5]; // [rsp+48h] [rbp-430h] BYREF
  _QWORD v23[3]; // [rsp+70h] [rbp-408h] BYREF
  __int128 v24; // [rsp+88h] [rbp-3F0h]
  __int128 v25; // [rsp+98h] [rbp-3E0h]
  __int128 v26; // [rsp+A8h] [rbp-3D0h]
  __int128 v27; // [rsp+B8h] [rbp-3C0h]
  __int128 v28; // [rsp+C8h] [rbp-3B0h]
  __int128 v29; // [rsp+D8h] [rbp-3A0h]
  __int128 v30; // [rsp+E8h] [rbp-390h]
  __int128 v31; // [rsp+F8h] [rbp-380h]
  __int128 v32; // [rsp+108h] [rbp-370h]
  __int128 v33; // [rsp+118h] [rbp-360h]
  __int128 v34; // [rsp+128h] [rbp-350h]
  __int128 v35; // [rsp+138h] [rbp-340h]
  unsigned __int8 v36[240]; // [rsp+150h] [rbp-328h] BYREF
  unsigned __int8 v37[512]; // [rsp+240h] [rbp-238h] BYREF

  v4 = (const void **)(a2 + 40);
  v5 = *(void **)(a2 + 40);
  v6 = 8 * *(_DWORD *)(a2 + 48);
  RegionSize[0] = 0LL;
  v7 = AllocCallbackMessage(240, 1u, v6, v37, 1, 0x200uLL);
  v8 = v7;
  RegionSize[1] = (ULONG_PTR)v7;
  if ( !v7 )
    return 0LL;
  if ( v7 != v36 && v7 != v37 )
    PushW32ThreadLock((__int64)v7, v23, (__int64)Win32FreePool);
  *((_QWORD *)v8 + 5) = a1;
  *((_OWORD *)v8 + 3) = *(_OWORD *)a2;
  *((_OWORD *)v8 + 4) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)v8 + 5) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)v8 + 6) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)v8 + 7) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)v8 + 8) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)v8 + 9) = *(_OWORD *)(a2 + 96);
  *((_OWORD *)v8 + 10) = *(_OWORD *)(a2 + 112);
  *((_OWORD *)v8 + 11) = *(_OWORD *)(a2 + 128);
  *((_OWORD *)v8 + 12) = *(_OWORD *)(a2 + 144);
  *((_OWORD *)v8 + 13) = *(_OWORD *)(a2 + 160);
  *((_OWORD *)v8 + 14) = *(_OWORD *)(a2 + 176);
  if ( ReserveCaptureBytes((struct _CAPTUREBUF *)v8, v6, (void **)v8 + 11, (void **)RegionSize) < 0 )
    goto LABEL_24;
  if ( v6 )
    memmove((void *)RegionSize[0], v5, v6);
  if ( (unsigned __int8)IsInputThread() )
  {
    if ( gdwInAtomicOperation )
    {
      v9 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v9, gdwInAtomicOperation, v10, v11);
    EtwTraceBeginCallback(56LL);
    *((_QWORD *)v8 + 2) = 0LL;
    v12 = KeUserModeCallback(56LL, v8, *(unsigned int *)v8, v22, &v20);
    EtwTraceEndCallback(56LL);
    EnterCrit(0LL, 1LL);
  }
  else
  {
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    *((_QWORD *)v8 + 2) = 0LL;
    DwmHitTestLeaveEnterCrit::DwmHitTestLeaveEnterCrit((DwmHitTestLeaveEnterCrit *)v19);
    EtwTraceBeginCallback(56LL);
    v12 = KeUserModeCallback(56LL, v8, *(unsigned int *)v8, v22, &v20);
    EtwTraceEndCallback(56LL);
    DwmHitTestLeaveEnterCrit::~DwmHitTestLeaveEnterCrit((DwmHitTestLeaveEnterCrit *)v19);
  }
  if ( v12 >= 0 && v20 == 24 )
  {
    v13 = (ULONG_PTR *)v22[0];
    if ( (unsigned __int64)(v22[0] + 8LL) < v22[0] || (unsigned __int64)(v22[0] + 8LL) > W32UserProbeAddress )
      v13 = (ULONG_PTR *)W32UserProbeAddress;
    v14 = *v13;
    RegionSize[0] = *v13;
    v15 = *(__int128 **)(v22[0] + 16LL);
    if ( v15 + 12 < v15 || (unsigned __int64)(v15 + 12) > W32UserProbeAddress )
      v15 = (__int128 *)W32UserProbeAddress;
    v24 = *v15;
    v25 = v15[1];
    v26 = v15[2];
    v27 = v15[3];
    v28 = v15[4];
    v29 = v15[5];
    v30 = v15[6];
    v31 = v15[7];
    v16 = v15 + 8;
    v32 = *v16;
    v33 = v16[1];
    v34 = v16[2];
    v35 = v16[3];
    *(_OWORD *)a2 = v24;
    *(_OWORD *)(a2 + 16) = v25;
    *(_OWORD *)(a2 + 32) = v26;
    *(_OWORD *)(a2 + 48) = v27;
    *(_OWORD *)(a2 + 64) = v28;
    *(_OWORD *)(a2 + 80) = v29;
    *(_OWORD *)(a2 + 96) = v30;
    v17 = (_OWORD *)(a2 + 128);
    *(v17 - 1) = v31;
    *v17 = v32;
    v17[1] = v33;
    v17[2] = v34;
    v17[3] = v35;
    if ( v6 )
    {
      memmove(v5, *v4, v6);
      *v4 = v5;
    }
  }
  else
  {
LABEL_24:
    LODWORD(v14) = 0;
  }
  if ( v8 != v36 && v8 != v37 )
  {
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v8 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v23);
  }
  return (unsigned int)v14;
}
