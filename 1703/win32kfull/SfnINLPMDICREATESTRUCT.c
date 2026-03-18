/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1C01362C0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00C3EE0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00C55EC (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r13
  unsigned int v11; // r10d
  int v12; // r15d
  unsigned __int8 *v13; // rbx
  __int64 v14; // r12
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // r8
  __int64 v18; // r9
  ULONG_PTR v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rdi
  unsigned __int8 *result; // rax
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // eax
  void **v34; // r9
  unsigned int v35; // r8d
  CHAR *v36; // rdx
  int v37; // eax
  unsigned int v38; // r8d
  unsigned int v39; // r8d
  void **v40; // r9
  CHAR *v41; // rdx
  int v42; // eax
  unsigned int v43; // r8d
  _DWORD v45[5]; // [rsp+44h] [rbp-374h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-360h] BYREF
  __int64 v47; // [rsp+60h] [rbp-358h]
  unsigned int v48; // [rsp+68h] [rbp-350h]
  __int64 v49; // [rsp+78h] [rbp-340h]
  unsigned __int64 v50; // [rsp+80h] [rbp-338h] BYREF
  __int64 v51; // [rsp+88h] [rbp-330h]
  __int128 v52; // [rsp+90h] [rbp-328h]
  __int64 v53; // [rsp+A0h] [rbp-318h]
  _QWORD v54[3]; // [rsp+C0h] [rbp-2F8h] BYREF
  _QWORD v55[3]; // [rsp+D8h] [rbp-2E0h] BYREF
  _DWORD v56[36]; // [rsp+F0h] [rbp-2C8h] BYREF
  unsigned __int8 v57[512]; // [rsp+180h] [rbp-238h] BYREF

  v49 = a3;
  LODWORD(v9) = 0;
  LODWORD(v10) = 0;
  v11 = 0;
  v12 = a7 & 1;
  v13 = (unsigned __int8 *)v56;
  v51 = 0LL;
  RegionSize = gptiCurrent;
  if ( a1 )
    v14 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v14 = 0LL;
  v47 = v14;
  v15 = *(_QWORD *)(a4 + 8);
  if ( v15 && (v15 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v12) )
  {
    v30 = *(_DWORD *)(a4 + 56);
    v31 = v30 + 2;
    v16 = -1;
    v9 = 0xFFFFFFFFLL;
    if ( v30 + 2 >= v30 )
      v9 = v31;
    if ( v31 < v30 )
      goto LABEL_35;
    if ( *(_DWORD *)(a4 + 60) >= 0x80000000 && (a7 & 1) == 0 )
    {
      v9 *= 2LL;
      if ( v9 > 0xFFFFFFFF )
        goto LABEL_35;
    }
    v11 = 1;
  }
  else
  {
    v16 = -1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v12) )
  {
    v32 = *(_DWORD *)(a4 + 72);
    v33 = v32 + 2;
    v10 = 0xFFFFFFFFLL;
    if ( v32 + 2 >= v32 )
      v10 = v33;
    if ( v33 < v32 )
      goto LABEL_35;
    if ( *(_DWORD *)(a4 + 76) >= 0x80000000 && (a7 & 1) == 0 )
    {
      v10 *= 2LL;
      if ( v10 > 0xFFFFFFFF )
        goto LABEL_35;
    }
    ++v11;
  }
  if ( (int)v9 + (int)v10 >= (unsigned int)v9 )
    v16 = v9 + v10;
  v48 = v16;
  if ( (int)v9 + (int)v10 >= (unsigned int)v9 )
  {
    if ( v11 )
    {
      result = AllocCallbackMessage(144, v11, v16, v57, 1, 0x200uLL);
      v13 = result;
      if ( !result )
        return result;
    }
    else
    {
      v13 = (unsigned __int8 *)v56;
      memset(v56, 0, sizeof(v56));
      v56[0] = 144;
    }
    if ( v13 != (unsigned __int8 *)v56 && v13 != v57 )
      PushW32ThreadLock((__int64)v13, v55, (__int64)Win32FreePool);
    *((_QWORD *)v13 + 5) = v14;
    *((_DWORD *)v13 + 12) = a2;
    *((_QWORD *)v13 + 7) = v49;
    *(_DWORD *)(a4 + 44) = 0;
    *((_OWORD *)v13 + 4) = *(_OWORD *)a4;
    *((_OWORD *)v13 + 5) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v13 + 6) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)v13 + 14) = *(_QWORD *)(a4 + 48);
    if ( !(_DWORD)v9 )
      goto LABEL_17;
    v34 = (void **)(v13 + 72);
    v35 = *(_DWORD *)(a4 + 56);
    v36 = *(CHAR **)(a4 + 64);
    if ( *(_DWORD *)(a4 + 60) >= 0x80000000 )
    {
      if ( (a7 & 1) == 0 )
      {
        v37 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v13, v36, 2 * v35 + 2, v34);
LABEL_63:
        if ( v37 < 0 )
          goto LABEL_35;
LABEL_17:
        if ( !(_DWORD)v10 )
        {
LABEL_18:
          *((_QWORD *)v13 + 15) = a5;
          *((_QWORD *)v13 + 16) = a6;
          v54[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v54;
          v54[1] = a1;
          if ( a1 )
            ++*((_DWORD *)a1 + 2);
          v19 = RegionSize;
          v20 = *(_QWORD *)(RegionSize + 432);
          v52 = *(_OWORD *)(v20 + 64);
          v53 = *(_QWORD *)(v20 + 80);
          *(_QWORD *)(v20 + 72) = v47;
          if ( a1 )
            v21 = *a1;
          else
            v21 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v19 + 432) + 64LL) = v21;
          if ( a1 )
            v22 = a1[35];
          else
            v22 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v19 + 432) + 80LL) = v22;
          if ( gdwInAtomicOperation )
          {
            v22 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v22, gdwInAtomicOperation, v17, v18);
          EtwTraceBeginCallback(15LL);
          *((_QWORD *)v13 + 2) = 0LL;
          v23 = KeUserModeCallback(15LL, v13, *(unsigned int *)v13, &v50, v45);
          EtwTraceEndCallback(15LL);
          EnterCrit(0LL, 1LL);
          ThreadUnlock1(v25, v24);
          v26 = *(_QWORD *)(v19 + 432);
          *(_OWORD *)(v26 + 64) = v52;
          *(_QWORD *)(v26 + 80) = v53;
          if ( v23 >= 0 && v45[0] == 24 )
          {
            v27 = (__int64 *)v50;
            if ( v50 + 8 < v50 || v50 + 8 > W32UserProbeAddress )
              v27 = (__int64 *)W32UserProbeAddress;
            v28 = *v27;
            v51 = *v27;
            goto LABEL_33;
          }
          goto LABEL_35;
        }
        v39 = *(_DWORD *)(a4 + 72);
        v40 = (void **)(v13 + 64);
        v41 = *(CHAR **)(a4 + 80);
        if ( *(_DWORD *)(a4 + 76) >= 0x80000000 )
        {
          if ( (a7 & 1) == 0 )
          {
            v42 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v13, v41, 2 * v39 + 2, v40);
LABEL_73:
            if ( v42 < 0 )
              goto LABEL_35;
            goto LABEL_18;
          }
          v43 = v39 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v42 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v13, (PCWCH)v41, (v39 >> 1) + 1, v40);
            goto LABEL_73;
          }
          v43 = v39 + 2;
        }
        v42 = CaptureCallbackData((struct _CAPTUREBUF *)v13, v41, v43, v40);
        goto LABEL_73;
      }
      v38 = v35 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v37 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v13, (PCWCH)v36, (v35 >> 1) + 1, v34);
        goto LABEL_63;
      }
      v38 = v35 + 2;
    }
    v37 = CaptureCallbackData((struct _CAPTUREBUF *)v13, v36, v38, v34);
    goto LABEL_63;
  }
LABEL_35:
  v28 = 0LL;
LABEL_33:
  if ( v13 != (unsigned __int8 *)v56 && v13 != v57 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v55);
  }
  return (unsigned __int8 *)v28;
}
