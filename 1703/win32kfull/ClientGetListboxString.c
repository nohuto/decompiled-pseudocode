/*
 * XREFs of ClientGetListboxString @ 0x1C00C51DC
 * Callers:
 *     SfnOUTLBOXSTRING @ 0x1C00C4570 (SfnOUTLBOXSTRING.c)
 *     SfnOUTCBOXSTRING @ 0x1C00C5B10 (SfnOUTCBOXSTRING.c)
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

__int64 __fastcall ClientGetListboxString(
        __int64 *a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 a9)
{
  unsigned __int8 *v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned __int64 v17; // rsi
  unsigned __int8 *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 *v28; // rdi
  unsigned __int64 v29; // rdi
  unsigned __int64 v31; // rcx
  __int64 v32; // xmm1_8
  unsigned int *v33; // r14
  int v34; // r15d
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  unsigned int v37; // eax
  _QWORD *v38; // rcx
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-360h] BYREF
  int v40; // [rsp+40h] [rbp-358h]
  int v41; // [rsp+44h] [rbp-354h] BYREF
  int v42; // [rsp+48h] [rbp-350h]
  unsigned __int64 v43; // [rsp+60h] [rbp-338h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-330h]
  __int128 v45; // [rsp+78h] [rbp-320h]
  __int64 v46; // [rsp+88h] [rbp-310h]
  __int128 v47; // [rsp+90h] [rbp-308h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-2F8h]
  _QWORD v49[3]; // [rsp+D0h] [rbp-2C8h] BYREF
  _QWORD v50[3]; // [rsp+E8h] [rbp-2B0h] BYREF
  unsigned __int8 v51[96]; // [rsp+100h] [rbp-298h] BYREF
  unsigned __int8 v52[512]; // [rsp+160h] [rbp-238h] BYREF

  RegionSize = a4;
  v42 = a7 & 1;
  v12 = v51;
  v44 = 0LL;
  if ( a1 )
    v13 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 4);
  v15 = v14 & 0x7FFFFFFF;
  v16 = (v14 & 0x7FFFFFFF) + 2;
  v17 = 0xFFFFFFFFLL;
  if ( v15 + 2 >= v15 )
    v17 = v16;
  v40 = v17;
  if ( v16 < v15 )
    goto LABEL_46;
  if ( v14 >= 0x80000000 && (a7 & 1) == 0 )
  {
    v17 *= 2LL;
    if ( v17 > 0xFFFFFFFF )
      goto LABEL_46;
    v40 = v17;
  }
  v18 = AllocCallbackMessage(96, 1u, (unsigned int)v17, v52, 0, 0x200uLL);
  v12 = v18;
  if ( !v18 )
    return 0LL;
  if ( v18 != v51 && v18 != v52 )
    PushW32ThreadLock((__int64)v18, v50, (__int64)Win32FreePool);
  *((_QWORD *)v12 + 5) = v13;
  *((_DWORD *)v12 + 12) = a2;
  *((_QWORD *)v12 + 7) = a3;
  *((_QWORD *)v12 + 8) = a5;
  *((_QWORD *)v12 + 9) = a6;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v12, v17, (void **)v12 + 10) >= 0 )
  {
    *((_DWORD *)v12 + 22) = v17;
    v49[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v49;
    v49[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v21 = *(_QWORD *)(gptiCurrent + 432LL);
    v45 = *(_OWORD *)(v21 + 64);
    v46 = *(_QWORD *)(v21 + 80);
    *(_QWORD *)(v21 + 72) = v13;
    if ( a1 )
      v22 = *a1;
    else
      v22 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v22;
    if ( a1 )
      v23 = a1[35];
    else
      v23 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v23;
    if ( gdwInAtomicOperation )
    {
      v23 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v23, gdwInAtomicOperation, v19, v20);
    EtwTraceBeginCallback(72LL);
    *((_QWORD *)v12 + 2) = 0LL;
    v24 = KeUserModeCallback(72LL, v12, *(unsigned int *)v12, &v43, &v41);
    EtwTraceEndCallback(72LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v26, v25);
    v27 = *(_QWORD *)(gptiCurrent + 432LL);
    *(_OWORD *)(v27 + 64) = v45;
    *(_QWORD *)(v27 + 80) = v46;
    if ( v24 >= 0 && v41 == 24 )
    {
      v28 = (unsigned __int64 *)v43;
      if ( v43 + 8 < v43 || v43 + 8 > W32UserProbeAddress )
        v28 = (unsigned __int64 *)W32UserProbeAddress;
      v29 = *v28;
      v44 = v29;
      if ( (v29 & 0x80000000) == 0LL && (!a9 || (*(_DWORD *)(a9 + 84) & 5) == 0) && (a7 & 2) == 0 )
      {
        if ( a8 )
        {
          v38 = *(_QWORD **)(v43 + 16);
          if ( v38 + 1 < v38 || (unsigned __int64)(v38 + 1) > W32UserProbeAddress )
            v38 = (_QWORD *)W32UserProbeAddress;
          v33 = (unsigned int *)RegionSize;
          **(_QWORD **)(RegionSize + 8) = *v38;
        }
        else
        {
          v31 = v43;
          if ( v43 + 24 < v43 || v43 + 24 > W32UserProbeAddress )
            v31 = W32UserProbeAddress;
          v32 = *(_QWORD *)(v31 + 16);
          v47 = *(_OWORD *)v31;
          v48 = v32;
          v33 = (unsigned int *)RegionSize;
          v34 = v42;
          v29 = (unsigned int)CalcOutputStringSize((volatile void **)&v47, v29, *(_DWORD *)(RegionSize + 4) >> 31, v42);
          v44 = v29;
          v35 = *(_DWORD *)(RegionSize + 4);
          if ( v35 >= 0x80000000 )
            LODWORD(v36) = v35 & 0x7FFFFFFF;
          else
            v36 = (unsigned __int64)(v35 & 0x7FFFFFFE) >> 1;
          CopyOutputString((volatile void **)&v47, (PWCH *)RegionSize, v36, v34);
        }
        v37 = *v33;
        if ( v33[1] < 0x80000000 )
          v37 >>= 1;
        if ( !a8 && v29 != -1LL && v29 > v37 )
          LODWORD(v29) = v37;
      }
      goto LABEL_29;
    }
  }
LABEL_46:
  LODWORD(v29) = 0;
LABEL_29:
  if ( v12 != v51 && v12 != v52 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v50);
  }
  return (unsigned int)v29;
}
