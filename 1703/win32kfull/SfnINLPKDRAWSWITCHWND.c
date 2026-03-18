/*
 * XREFs of SfnINLPKDRAWSWITCHWND @ 0x1C01FB040
 * Callers:
 *     <none>
 * Callees:
 *     GetDPIServerInfo @ 0x1C000E928 (GetDPIServerInfo.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     _WindowFromDC @ 0x1C0048E30 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 */

unsigned __int8 *__fastcall SfnINLPKDRAWSWITCHWND(__int64 *a1, int a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int8 *result; // rax
  struct tagWND *v16; // rax
  HDC DC; // r12
  __int64 v18; // rcx
  __int64 DPIServerInfo; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int128 v23; // xmm6
  __int64 v24; // xmm7_8
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rdi
  int v33; // [rsp+34h] [rbp-384h]
  int v34; // [rsp+38h] [rbp-380h]
  _DWORD v35[5]; // [rsp+3Ch] [rbp-37Ch] BYREF
  unsigned __int8 *v36; // [rsp+50h] [rbp-368h]
  ULONG_PTR RegionSize[2]; // [rsp+58h] [rbp-360h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-350h] BYREF
  __int64 v39; // [rsp+70h] [rbp-348h]
  _QWORD v40[3]; // [rsp+90h] [rbp-328h] BYREF
  __int128 v41; // [rsp+A8h] [rbp-310h]
  __int64 v42; // [rsp+B8h] [rbp-300h]
  _QWORD v43[4]; // [rsp+C0h] [rbp-2F8h] BYREF
  unsigned __int8 v44[112]; // [rsp+E0h] [rbp-2D8h] BYREF
  unsigned __int8 v45[512]; // [rsp+150h] [rbp-268h] BYREF

  v10 = v44;
  v39 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  v12 = *(_DWORD *)(a4 + 16);
  v13 = v12 + 2;
  v14 = 0xFFFFFFFFLL;
  if ( v12 + 2 >= v12 )
    v14 = v13;
  if ( v13 < v12 )
    goto LABEL_31;
  if ( *(_DWORD *)(a4 + 20) >= 0x80000000 )
  {
    v14 *= 2LL;
    if ( v14 > 0xFFFFFFFF )
      goto LABEL_31;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v14, v45, 1, 0x200uLL);
  v10 = result;
  v36 = result;
  if ( !result )
    return result;
  if ( result != v44 && result != v45 )
    PushW32ThreadLock((__int64)result, v43, (__int64)Win32FreePool);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              *(char **)(a4 + 24),
              *(_DWORD *)(a4 + 16) + 2,
              (void **)v10 + 10) < 0 )
    goto LABEL_31;
  v16 = WindowFromDC(a3);
  DC = (HDC)_GetDC(v16);
  v34 = GreSetTextColor(DC, *(_DWORD *)(gpsi + 5032LL));
  v33 = GreSetBkColor(DC, *(_DWORD *)(gpsi + 5020LL));
  DPIServerInfo = GetDPIServerInfo(v18);
  RegionSize[0] = GreSelectFontInternal(DC, *(_QWORD *)(DPIServerInfo + 8), 1);
  *((_QWORD *)v10 + 5) = v11;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = DC;
  *(_OWORD *)(v10 + 88) = *(_OWORD *)a4;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v40;
  v40[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v22 = *(_QWORD *)(gptiCurrent + 432LL);
  v23 = *(_OWORD *)(v22 + 64);
  v41 = v23;
  v24 = *(_QWORD *)(v22 + 80);
  v42 = v24;
  *(_QWORD *)(v22 + 72) = v11;
  if ( a1 )
    v25 = *a1;
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v25;
  if ( a1 )
    v26 = a1[35];
  else
    v26 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v26;
  if ( gdwInAtomicOperation )
  {
    v26 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v26, gdwInAtomicOperation, v20, v21);
  EtwTraceBeginCallback(97LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v27 = KeUserModeCallback(97LL, v10, *(unsigned int *)v10, &v38, v35);
  EtwTraceEndCallback(97LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v29, v28);
  v30 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v30 + 64) = v23;
  *(_QWORD *)(v30 + 80) = v24;
  GreSelectFontInternal(DC, RegionSize[0], 1);
  GreSetBkColor(DC, v33);
  GreSetTextColor(DC, v34);
  _ReleaseDC(DC);
  if ( v27 < 0 )
    goto LABEL_31;
  if ( v35[0] == 24 )
  {
    v31 = (__int64 *)v38;
    if ( v38 + 8 < v38 || v38 + 8 > W32UserProbeAddress )
      v31 = (__int64 *)W32UserProbeAddress;
    v32 = *v31;
    v39 = *v31;
  }
  else
  {
LABEL_31:
    v32 = 0LL;
  }
  if ( v10 != v44 && v10 != v45 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v43);
  }
  return (unsigned __int8 *)v32;
}
