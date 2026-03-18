/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C00F0378
 * Callers:
 *     xxxHkCallHook @ 0x1C00544D0 (xxxHkCallHook.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C003A288 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00C3EE0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00C55EC (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     GetThreadDesktopWindow @ 0x1C00F2804 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  unsigned __int64 v6; // rsi
  unsigned int v7; // r15d
  __int64 ThreadDesktopWindow; // rax
  __int64 v9; // r13
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // r15
  _OWORD *v22; // rax
  void **v23; // r9
  unsigned int v24; // r8d
  CHAR *v25; // rdx
  unsigned int v26; // r8d
  int v27; // eax
  ULONG_PTR v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // edi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 *v36; // rcx
  __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  __int128 v39; // xmm5
  __int128 v40; // xmm6
  __int128 v41; // xmm2
  __int128 v42; // xmm0
  unsigned int v44; // r8d
  unsigned int v45; // ecx
  unsigned int v46; // eax
  CHAR *v47; // rdx
  void **v48; // r9
  struct _CAPTUREBUF *v49; // rcx
  unsigned int v50; // r8d
  unsigned int v51; // r8d
  int v52; // eax
  _DWORD *v53; // rax
  int v54; // r8d
  int v55; // [rsp+3Ch] [rbp-4DCh] BYREF
  int v56; // [rsp+40h] [rbp-4D8h]
  int v57; // [rsp+44h] [rbp-4D4h]
  unsigned __int64 v58; // [rsp+48h] [rbp-4D0h]
  __int16 v59; // [rsp+50h] [rbp-4C8h]
  int v60[6]; // [rsp+70h] [rbp-4A8h] BYREF
  __int64 v61; // [rsp+88h] [rbp-490h]
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-488h] BYREF
  unsigned __int64 v63; // [rsp+98h] [rbp-480h] BYREF
  unsigned int v64; // [rsp+A0h] [rbp-478h]
  __int64 v65; // [rsp+B8h] [rbp-460h]
  _QWORD *v66; // [rsp+C0h] [rbp-458h]
  __int64 v67; // [rsp+C8h] [rbp-450h]
  __int64 v68; // [rsp+D8h] [rbp-440h]
  __int128 v69; // [rsp+E0h] [rbp-438h]
  __int64 v70; // [rsp+F0h] [rbp-428h]
  _QWORD v71[3]; // [rsp+130h] [rbp-3E8h] BYREF
  _QWORD v72[7]; // [rsp+148h] [rbp-3D0h] BYREF
  __int128 v73; // [rsp+180h] [rbp-398h]
  __int64 v74; // [rsp+1B0h] [rbp-368h]
  __int128 v75; // [rsp+1C0h] [rbp-358h]
  __int128 v76; // [rsp+1D0h] [rbp-348h]
  __int128 v77; // [rsp+1E0h] [rbp-338h]
  __int128 v78; // [rsp+1F0h] [rbp-328h]
  __int128 v79; // [rsp+200h] [rbp-318h]
  __int64 v80; // [rsp+210h] [rbp-308h]
  _DWORD v81[44]; // [rsp+220h] [rbp-2F8h] BYREF
  unsigned __int8 v82[512]; // [rsp+2D0h] [rbp-248h] BYREF

  v67 = a4;
  v66 = a3;
  v65 = a2;
  v55 = a1;
  LODWORD(v6) = 0;
  v56 = 0;
  v58 = 0LL;
  v57 = 0;
  v7 = 0;
  ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
  v9 = ThreadDesktopWindow;
  v10 = (unsigned __int8 *)v81;
  v68 = 0LL;
  RegionSize = gptiCurrent;
  if ( ThreadDesktopWindow )
    v61 = ThreadDesktopWindow - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v61 = 0LL;
  v11 = *a3;
  v12 = *(_QWORD *)(v11 + 56);
  if ( !v12 || (v44 = *(_DWORD *)(v11 + 84), v44 >> 31 == a5) && v12 < (unsigned __int64)MmSystemRangeStart )
  {
    v13 = -1;
  }
  else
  {
    v45 = *(_DWORD *)(v11 + 80);
    v46 = v45 + 2;
    v13 = -1;
    v6 = 0xFFFFFFFFLL;
    if ( v45 + 2 >= v45 )
      v6 = v46;
    v56 = v6;
    if ( v46 < v45 )
      goto LABEL_72;
    if ( v44 >= 0x80000000 && !a5 )
    {
      v6 *= 2LL;
      if ( v6 > 0xFFFFFFFF )
        goto LABEL_72;
      v56 = v6;
    }
    v7 = 1;
  }
  v14 = *(_QWORD *)(v11 + 64);
  if ( (v14 & 0xFFFFFFFFFFFF0000uLL) == 0
    || (v15 = *(_DWORD *)(v11 + 100), v15 >> 31 == a5) && v14 < (unsigned __int64)MmSystemRangeStart )
  {
    LODWORD(v18) = v58;
  }
  else
  {
    v16 = *(_DWORD *)(v11 + 96);
    v17 = v16 + 2;
    v18 = 0xFFFFFFFFLL;
    if ( v16 + 2 >= v16 )
      v18 = v17;
    v58 = v18;
    v57 = v18;
    if ( v17 < v16 )
      goto LABEL_72;
    if ( v15 >= 0x80000000 && !a5 )
    {
      v18 *= 2LL;
      v58 = v18;
      if ( v18 > 0xFFFFFFFF )
        goto LABEL_72;
      v57 = v18;
    }
    ++v7;
  }
  if ( (int)v18 + (int)v6 >= (unsigned int)v6 )
    v13 = v18 + v6;
  v64 = v13;
  if ( (int)v18 + (int)v6 < (unsigned int)v6 )
    goto LABEL_72;
  if ( v7 )
  {
    v10 = AllocCallbackMessage(168, v7, v13, v82, 1, 0x200uLL);
    if ( !v10 )
      return 0LL;
  }
  else
  {
    v10 = (unsigned __int8 *)v81;
    memset(v81, 0, 0xA8uLL);
    v81[0] = 168;
  }
  if ( v10 != (unsigned __int8 *)v81 && v10 != v82 )
    PushW32ThreadLock((__int64)v10, v72, (__int64)Win32FreePool);
  *((_QWORD *)v10 + 5) = v61;
  *((_DWORD *)v10 + 12) = v55;
  *((_QWORD *)v10 + 7) = v65;
  v21 = v66;
  *(_DWORD *)(*v66 + 52LL) = 0;
  *(_DWORD *)(*v21 + 76LL) = 0;
  v22 = (_OWORD *)*v21;
  *((_OWORD *)v10 + 4) = *(_OWORD *)*v21;
  *((_OWORD *)v10 + 5) = v22[1];
  *((_OWORD *)v10 + 6) = v22[2];
  *((_OWORD *)v10 + 7) = v22[3];
  *((_OWORD *)v10 + 8) = v22[4];
  if ( (_DWORD)v6 )
  {
    if ( *(_DWORD *)(v11 + 84) >= 0x80000000 )
    {
      v53 = *(_DWORD **)(v11 + 56);
      if ( *(_BYTE *)v53 == 0xFF )
      {
        if ( a5 )
        {
          v51 = 3;
          v47 = *(CHAR **)(v11 + 56);
        }
        else
        {
          v55 = ((unsigned __int16)(*v53 >> 8) << 16) | 0xFFFF;
          v51 = 4;
          v47 = (CHAR *)&v55;
        }
        v48 = (void **)(v10 + 120);
        v49 = (struct _CAPTUREBUF *)v10;
      }
      else
      {
        v48 = (void **)(v10 + 120);
        v54 = *(_DWORD *)(v11 + 80);
        v47 = *(CHAR **)(v11 + 88);
        v49 = (struct _CAPTUREBUF *)v10;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v47, 2 * v54 + 2, v48) < 0 )
            goto LABEL_72;
          goto LABEL_22;
        }
        v51 = v54 + 1;
      }
    }
    else
    {
      v47 = *(CHAR **)(v11 + 56);
      v59 = *(_WORD *)v47;
      v48 = (void **)(v10 + 120);
      v49 = (struct _CAPTUREBUF *)v10;
      if ( v59 == -1 )
      {
        if ( a5 )
        {
          ++v47;
          v51 = 3;
        }
        else
        {
          v51 = 4;
        }
      }
      else
      {
        v50 = *(_DWORD *)(v11 + 80);
        v47 = *(CHAR **)(v11 + 88);
        if ( a5 )
        {
          v52 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v47, (v50 >> 1) + 1, v48);
LABEL_68:
          if ( v52 < 0 )
            goto LABEL_72;
          goto LABEL_22;
        }
        v51 = v50 + 2;
      }
    }
    v52 = CaptureCallbackData(v49, v47, v51, v48);
    goto LABEL_68;
  }
LABEL_22:
  if ( (_DWORD)v58 )
  {
    v23 = (void **)(v10 + 128);
    v24 = *(_DWORD *)(v11 + 96);
    v25 = *(CHAR **)(v11 + 104);
    if ( *(_DWORD *)(v11 + 100) >= 0x80000000 )
    {
      if ( a5 )
      {
        v26 = v24 + 1;
        goto LABEL_26;
      }
      v27 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v25, 2 * v24 + 2, v23);
    }
    else
    {
      if ( !a5 )
      {
        v26 = v24 + 2;
LABEL_26:
        v27 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v25, v26, v23);
        goto LABEL_27;
      }
      v27 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v25, (v24 >> 1) + 1, v23);
    }
LABEL_27:
    if ( v27 < 0 )
      goto LABEL_72;
  }
  *((_QWORD *)v10 + 18) = v21[1];
  *((_QWORD *)v10 + 19) = v67;
  *((_DWORD *)v10 + 40) = a5;
  v71[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v71;
  v71[1] = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v28 = RegionSize;
  v29 = *(_QWORD *)(RegionSize + 432);
  v69 = *(_OWORD *)(v29 + 64);
  v70 = *(_QWORD *)(v29 + 80);
  *(_QWORD *)(v29 + 72) = v61;
  if ( v9 )
    v30 = *(_QWORD *)v9;
  else
    v30 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v28 + 432) + 64LL) = v30;
  if ( v9 )
    v31 = *(_QWORD *)(v9 + 280);
  else
    v31 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v28 + 432) + 80LL) = v31;
  if ( gdwInAtomicOperation )
  {
    v31 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v31, gdwInAtomicOperation, v19, v20);
  EtwTraceBeginCallback(42LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v32 = KeUserModeCallback(42LL, v10, *(unsigned int *)v10, &v63, v60);
  EtwTraceEndCallback(42LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v34, v33);
  v35 = *(_QWORD *)(v28 + 432);
  *(_OWORD *)(v35 + 64) = v69;
  *(_QWORD *)(v35 + 80) = v70;
  if ( v32 >= 0 && v60[0] == 24 )
  {
    v36 = (__int64 *)v63;
    if ( v63 + 8 < v63 || v63 + 8 > W32UserProbeAddress )
      v36 = (__int64 *)W32UserProbeAddress;
    v37 = *v36;
    v68 = *v36;
    v38 = *(_QWORD *)(v63 + 16);
    if ( v38 + 88 < v38 || v38 + 88 > W32UserProbeAddress )
      v38 = W32UserProbeAddress;
    v39 = *(_OWORD *)v38;
    v40 = *(_OWORD *)(v38 + 16);
    v73 = *(_OWORD *)(v38 + 32);
    v41 = *(_OWORD *)(v38 + 48);
    v42 = *(_OWORD *)(v38 + 64);
    v74 = *(_QWORD *)(v38 + 80);
    v75 = v39;
    v76 = v40;
    v77 = v73;
    v78 = v41;
    v79 = v42;
    v80 = v74;
    v21[1] = v74;
    *(_OWORD *)(*v21 + 32LL) = v73;
    goto LABEL_46;
  }
LABEL_72:
  LODWORD(v37) = 0;
LABEL_46:
  if ( v10 != (unsigned __int8 *)v81 && v10 != v82 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v72);
  }
  return (unsigned int)v37;
}
