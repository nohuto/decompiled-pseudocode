/*
 * XREFs of SfnINCNTOUTSTRING @ 0x1C01F9C30
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00C4FC8 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00C511C (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00C568C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall SfnINCNTOUTSTRING(
        __int64 *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v10; // rdi
  __int64 v11; // r15
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned __int64 v14; // rsi
  unsigned __int8 *result; // rax
  unsigned __int16 v16; // cx
  __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rsi
  __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  __int64 v30; // xmm1_8
  _WORD *v31; // rax
  unsigned __int16 v33; // [rsp+30h] [rbp-388h]
  int v34; // [rsp+44h] [rbp-374h] BYREF
  int v35; // [rsp+48h] [rbp-370h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-358h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-350h] BYREF
  __int64 v38; // [rsp+70h] [rbp-348h]
  __int128 v39; // [rsp+80h] [rbp-338h]
  __int64 v40; // [rsp+90h] [rbp-328h]
  __int128 v41; // [rsp+98h] [rbp-320h] BYREF
  __int64 v42; // [rsp+A8h] [rbp-310h]
  _QWORD v43[3]; // [rsp+D8h] [rbp-2E0h] BYREF
  _QWORD v44[4]; // [rsp+F0h] [rbp-2C8h] BYREF
  unsigned __int8 v45[112]; // [rsp+110h] [rbp-2A8h] BYREF
  unsigned __int8 v46[512]; // [rsp+180h] [rbp-238h] BYREF

  RegionSize = a3;
  v35 = a7 & 1;
  v10 = v45;
  v38 = 0LL;
  if ( a1 )
    v11 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v11 = 0LL;
  v12 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v13 = v12 + 2;
  v14 = 0xFFFFFFFFLL;
  if ( v12 + 2 >= v12 )
    v14 = v13;
  if ( v13 < v12 )
    goto LABEL_44;
  if ( *(_DWORD *)(a4 + 4) >= 0x80000000 && (a7 & 1) == 0 )
  {
    v14 *= 2LL;
    if ( v14 > 0xFFFFFFFF )
      goto LABEL_44;
  }
  result = AllocCallbackMessage(104, 1u, (unsigned int)v14, v46, 0, 0x200uLL);
  v10 = result;
  if ( !result )
    return result;
  if ( result != v45 && result != v46 )
    PushW32ThreadLock((__int64)result, v44, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v11;
  *((_DWORD *)v10 + 12) = a2;
  *((_QWORD *)v10 + 7) = RegionSize;
  v16 = *(_WORD *)(a4 + 4);
  v33 = v16;
  if ( *(_DWORD *)(a4 + 4) < 0x80000000 )
  {
    v16 >>= 1;
    v33 = v16;
  }
  v17 = -1;
  if ( v16 != 0xFFFF )
    v17 = v16;
  *((_WORD *)v10 + 40) = v17;
  *((_QWORD *)v10 + 8) = a5;
  *((_QWORD *)v10 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v10, v14, (void **)v10 + 11) < 0 )
    goto LABEL_44;
  *((_DWORD *)v10 + 24) = v14;
  v43[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v43;
  v43[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v20 = *(_QWORD *)(gptiCurrent + 432LL);
  v39 = *(_OWORD *)(v20 + 64);
  v40 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v11;
  v21 = 0LL;
  if ( a1 )
    v21 = *a1;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v21;
  v22 = 0LL;
  if ( a1 )
    v22 = a1[35];
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v22;
  if ( gdwInAtomicOperation )
  {
    v22 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v22, gdwInAtomicOperation, v18, v19);
  EtwTraceBeginCallback(7LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v23 = KeUserModeCallback(7LL, v10, *(unsigned int *)v10, &v37, &v34);
  EtwTraceEndCallback(7LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v25, v24);
  v26 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v26 + 64) = v39;
  *(_QWORD *)(v26 + 80) = v40;
  if ( v23 < 0 )
    goto LABEL_44;
  if ( v34 == 24 )
  {
    v27 = (__int64 *)v37;
    if ( v37 + 8 < v37 || v37 + 8 > W32UserProbeAddress )
      v27 = (__int64 *)W32UserProbeAddress;
    v28 = *v27;
    v38 = v28;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      if ( v28 )
      {
        v29 = v37;
        if ( v37 + 24 < v37 || v37 + 24 > W32UserProbeAddress )
          v29 = W32UserProbeAddress;
        v30 = *(_QWORD *)(v29 + 16);
        v41 = *(_OWORD *)v29;
        v42 = v30;
        v28 = (unsigned int)CalcOutputStringSize((volatile void **)&v41, v28, *(_DWORD *)(a4 + 4) >> 31, v35);
        v38 = v28;
        CopyOutputString((volatile void **)&v41, (PWCH *)a4, v33, v35);
      }
      else
      {
        v31 = *(_WORD **)(a4 + 8);
        if ( *(_DWORD *)(a4 + 4) < 0x80000000 )
          *v31 = 0;
        else
          *(_BYTE *)v31 = 0;
      }
    }
  }
  else
  {
LABEL_44:
    v28 = 0LL;
  }
  if ( v10 != v45 && v10 != v46 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v44);
  }
  return (unsigned __int8 *)v28;
}
