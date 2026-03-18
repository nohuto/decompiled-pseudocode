/*
 * XREFs of fnHkINLPCBTCREATESTRUCT @ 0x1C00FC994
 * Callers:
 *     xxxHkCallHook @ 0x1C00A9FC0 (xxxHkCallHook.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005AB94 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GetThreadDesktopWindow @ 0x1C00FB0A0 (GetThreadDesktopWindow.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00FCFF0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0110214 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTCREATESTRUCT(int a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  unsigned int v8; // r14d
  __int64 ThreadDesktopWindow; // r15
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rcx
  __int64 v15; // r9
  __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned __int64 v19; // rcx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r14
  _QWORD *v28; // r12
  _OWORD *v29; // rax
  void **v30; // r9
  unsigned int v31; // r8d
  CHAR *v32; // rdx
  unsigned int v33; // r8d
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // edi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 *v49; // rcx
  __int64 v50; // rdi
  ULONG64 v51; // rcx
  __int128 v52; // xmm5
  __int128 v53; // xmm6
  __int128 v54; // xmm2
  __int128 v55; // xmm0
  unsigned int v57; // ecx
  unsigned int v58; // eax
  CHAR *v59; // rdx
  void **v60; // r9
  struct _CAPTUREBUF *v61; // rcx
  unsigned int v62; // r8d
  unsigned int v63; // r8d
  int v64; // eax
  unsigned __int64 v65; // rcx
  int v66; // eax
  unsigned __int64 v67; // rcx
  int v68; // eax
  CHAR *v69; // rax
  int v70; // r8d
  PVOID *v71; // rdx
  char v72; // [rsp+30h] [rbp-4E8h] BYREF
  _BYTE v73[3]; // [rsp+31h] [rbp-4E7h] BYREF
  unsigned int v74; // [rsp+34h] [rbp-4E4h]
  int v75; // [rsp+38h] [rbp-4E0h]
  unsigned __int8 *v76; // [rsp+40h] [rbp-4D8h]
  CHAR v77; // [rsp+48h] [rbp-4D0h]
  __int16 v78; // [rsp+4Ch] [rbp-4CCh]
  int v79; // [rsp+58h] [rbp-4C0h] BYREF
  int v80[6]; // [rsp+70h] [rbp-4A8h] BYREF
  __int64 v81; // [rsp+88h] [rbp-490h]
  unsigned __int64 v82; // [rsp+90h] [rbp-488h] BYREF
  unsigned int v83; // [rsp+98h] [rbp-480h]
  _QWORD *v84; // [rsp+B0h] [rbp-468h]
  __int64 v85; // [rsp+B8h] [rbp-460h]
  __int64 v86; // [rsp+C0h] [rbp-458h]
  __int64 v87; // [rsp+C8h] [rbp-450h]
  ULONG_PTR RegionSize; // [rsp+D0h] [rbp-448h] BYREF
  __int128 v89; // [rsp+D8h] [rbp-440h]
  __int64 v90; // [rsp+E8h] [rbp-430h]
  _QWORD v91[3]; // [rsp+128h] [rbp-3F0h] BYREF
  _QWORD v92[7]; // [rsp+140h] [rbp-3D8h] BYREF
  __int128 v93; // [rsp+178h] [rbp-3A0h]
  __int64 v94; // [rsp+1A8h] [rbp-370h]
  __int128 v95; // [rsp+1B0h] [rbp-368h]
  __int128 v96; // [rsp+1C0h] [rbp-358h]
  __int128 v97; // [rsp+1D0h] [rbp-348h]
  __int128 v98; // [rsp+1E0h] [rbp-338h]
  __int128 v99; // [rsp+1F0h] [rbp-328h]
  __int64 v100; // [rsp+200h] [rbp-318h]
  _DWORD v101[44]; // [rsp+210h] [rbp-308h] BYREF
  unsigned __int8 v102[512]; // [rsp+2C0h] [rbp-258h] BYREF

  v85 = a4;
  v84 = a3;
  v74 = 0;
  v75 = 0;
  v8 = 0;
  ThreadDesktopWindow = GetThreadDesktopWindow(0LL, a2);
  v10 = (unsigned __int8 *)v101;
  v87 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v86 = ThreadWin32Thread;
  if ( ThreadDesktopWindow )
    v81 = ThreadDesktopWindow - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v81 = 0LL;
  v16 = *a3;
  v17 = *(_QWORD *)(v16 + 56);
  if ( !v17
    || (v15 = *(unsigned int *)(v16 + 84), *(_DWORD *)(v16 + 84) >> 31 == a5)
    && v17 < (unsigned __int64)MmSystemRangeStart )
  {
    v18 = -1;
  }
  else
  {
    v57 = *(_DWORD *)(v16 + 80);
    v58 = v57 + 2;
    v18 = -1;
    v22 = 0xFFFFFFFFLL;
    if ( v57 + 2 >= v57 )
      v22 = v58;
    v74 = v22;
    if ( v58 < v57 )
      goto LABEL_71;
    if ( (int)v15 < 0 && !a5 )
    {
      v65 = 2LL * (unsigned int)v22;
      v66 = -1;
      if ( v65 <= 0xFFFFFFFF )
        v66 = 2 * v22;
      v74 = v66;
      if ( v65 > 0xFFFFFFFF )
        goto LABEL_71;
    }
    v8 = 1;
  }
  v19 = *(_QWORD *)(v16 + 64);
  if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v15 = *(unsigned int *)(v16 + 100);
    if ( *(_DWORD *)(v16 + 100) >> 31 != a5 || v19 >= (unsigned __int64)MmSystemRangeStart )
    {
      v20 = *(_DWORD *)(v16 + 96);
      v21 = v20 + 2;
      v22 = 0xFFFFFFFFLL;
      if ( v20 + 2 >= v20 )
        v22 = v21;
      v75 = v22;
      if ( v21 < v20 )
        goto LABEL_71;
      if ( (int)v15 < 0 && !a5 )
      {
        v67 = 2LL * (unsigned int)v22;
        v68 = -1;
        if ( v67 <= 0xFFFFFFFF )
          v68 = 2 * v22;
        v75 = v68;
        if ( v67 > 0xFFFFFFFF )
          goto LABEL_71;
      }
      ++v8;
    }
  }
  v22 = v74;
  if ( v74 + v75 >= v74 )
    v18 = v74 + v75;
  v83 = v18;
  if ( v74 + v75 >= v74 )
  {
    if ( v8 )
    {
      v10 = AllocCallbackMessage(168, v8, v18, v102, 1, 0x200uLL);
      v76 = v10;
      if ( !v10 )
        return 0LL;
    }
    else
    {
      v10 = (unsigned __int8 *)v101;
      v76 = (unsigned __int8 *)v101;
      memset(v101, 0, 0xA8uLL);
      v101[0] = 168;
    }
    W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25);
    if ( v10 != (unsigned __int8 *)v101 && v10 != v102 )
      PushW32ThreadLock((__int64)v10, v92, (__int64)Win32FreePool, v15);
    v27 = v81;
    *((_QWORD *)v10 + 5) = v81;
    *((_DWORD *)v10 + 12) = a1;
    *((_QWORD *)v10 + 7) = a2;
    v28 = v84;
    *(_DWORD *)(*v84 + 52LL) = 0;
    *(_DWORD *)(*v28 + 76LL) = 0;
    v29 = (_OWORD *)*v28;
    *((_OWORD *)v10 + 4) = *(_OWORD *)*v28;
    *((_OWORD *)v10 + 5) = v29[1];
    *((_OWORD *)v10 + 6) = v29[2];
    *((_OWORD *)v10 + 7) = v29[3];
    *((_OWORD *)v10 + 8) = v29[4];
    if ( !v74 )
      goto LABEL_22;
    if ( *(int *)(v16 + 84) < 0 )
    {
      v69 = *(CHAR **)(v16 + 56);
      v77 = *v69;
      if ( v77 == -1 )
      {
        if ( a5 )
        {
          v63 = 3;
          v59 = v69;
        }
        else
        {
          v79 = ((unsigned __int16)(*(_DWORD *)v69 >> 8) << 16) | 0xFFFF;
          v63 = 4;
          v59 = (CHAR *)&v79;
        }
        v60 = (void **)(v10 + 120);
        v61 = (struct _CAPTUREBUF *)v10;
      }
      else
      {
        v60 = (void **)(v10 + 120);
        v70 = *(_DWORD *)(v16 + 80);
        v59 = *(CHAR **)(v16 + 88);
        v61 = (struct _CAPTUREBUF *)v10;
        if ( !a5 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v59, 2 * v70 + 2, v60) < 0 )
            goto LABEL_71;
          goto LABEL_22;
        }
        v63 = v70 + 1;
      }
    }
    else
    {
      v59 = *(CHAR **)(v16 + 56);
      v78 = *(_WORD *)v59;
      v60 = (void **)(v10 + 120);
      v61 = (struct _CAPTUREBUF *)v10;
      if ( v78 == -1 )
      {
        if ( a5 )
        {
          ++v59;
          v63 = 3;
        }
        else
        {
          v63 = 4;
        }
      }
      else
      {
        v62 = *(_DWORD *)(v16 + 80);
        v59 = *(CHAR **)(v16 + 88);
        if ( a5 )
        {
          v64 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v59, (v62 >> 1) + 1, v60);
LABEL_67:
          if ( v64 < 0 )
            goto LABEL_71;
LABEL_22:
          if ( !v75 )
          {
LABEL_28:
            *((_QWORD *)v10 + 18) = v28[1];
            *((_QWORD *)v10 + 19) = v85;
            *((_DWORD *)v10 + 40) = a5;
            v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v22, v15);
            v91[0] = *(_QWORD *)(v35 + 392);
            *(_QWORD *)(v35 + 392) = v91;
            v91[1] = ThreadDesktopWindow;
            if ( ThreadDesktopWindow )
              _InterlockedIncrement((volatile signed __int32 *)(ThreadDesktopWindow + 8));
            v38 = v86;
            v39 = *(_QWORD *)(v86 + 456);
            v89 = *(_OWORD *)(v39 + 64);
            v90 = *(_QWORD *)(v39 + 80);
            *(_QWORD *)(v39 + 72) = v27;
            if ( ThreadDesktopWindow )
              v40 = *(_QWORD *)ThreadDesktopWindow;
            else
              v40 = 0LL;
            *(_QWORD *)(*(_QWORD *)(v38 + 456) + 64LL) = v40;
            if ( ThreadDesktopWindow )
              v41 = *(_QWORD *)(ThreadDesktopWindow + 280);
            else
              v41 = 0LL;
            *(_QWORD *)(*(_QWORD *)(v38 + 456) + 80LL) = v41;
            if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
              (ReleaseAndReacquirePerObjectLocks *)v73,
              gdwInAtomicOperation,
              v36,
              v37);
            LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v72);
            EtwTraceBeginCallback(42LL);
            *((_QWORD *)v10 + 2) = 0LL;
            v42 = KeUserModeCallback(42LL, v10, *(unsigned int *)v10, &v82, v80);
            EtwTraceEndCallback(42LL);
            LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v72);
            ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
              (ReleaseAndReacquirePerObjectLocks *)v73,
              v43,
              v44,
              v45);
            ThreadUnlock1(v47, v46);
            v48 = *(_QWORD *)(v38 + 456);
            *(_OWORD *)(v48 + 64) = v89;
            *(_QWORD *)(v48 + 80) = v90;
            if ( v42 >= 0 && v80[0] == 24 )
            {
              v49 = (__int64 *)v82;
              if ( v82 + 8 < v82 || v82 + 8 > MmUserProbeAddress )
                v49 = (__int64 *)MmUserProbeAddress;
              v50 = *v49;
              v87 = *v49;
              v51 = *(_QWORD *)(v82 + 16);
              if ( v51 + 88 < v51 || v51 + 88 > MmUserProbeAddress )
                v51 = MmUserProbeAddress;
              v52 = *(_OWORD *)v51;
              v53 = *(_OWORD *)(v51 + 16);
              v93 = *(_OWORD *)(v51 + 32);
              v54 = *(_OWORD *)(v51 + 48);
              v55 = *(_OWORD *)(v51 + 64);
              v94 = *(_QWORD *)(v51 + 80);
              v95 = v52;
              v96 = v53;
              v97 = v93;
              v98 = v54;
              v99 = v55;
              v100 = v94;
              v28[1] = v94;
              *(_OWORD *)(*v28 + 32LL) = v93;
              goto LABEL_46;
            }
            goto LABEL_71;
          }
          v30 = (void **)(v10 + 128);
          v31 = *(_DWORD *)(v16 + 96);
          v32 = *(CHAR **)(v16 + 104);
          if ( *(int *)(v16 + 100) < 0 )
          {
            if ( a5 )
            {
              v33 = v31 + 1;
              goto LABEL_26;
            }
            v34 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v10, v32, 2 * v31 + 2, v30);
          }
          else
          {
            if ( !a5 )
            {
              v33 = v31 + 2;
LABEL_26:
              v34 = CaptureCallbackData((struct _CAPTUREBUF *)v10, v32, v33, v30);
              goto LABEL_27;
            }
            v34 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v10, (PCWCH)v32, (v31 >> 1) + 1, v30);
          }
LABEL_27:
          if ( v34 < 0 )
            goto LABEL_71;
          goto LABEL_28;
        }
        v63 = v62 + 2;
      }
    }
    v64 = CaptureCallbackData(v61, v59, v63, v60);
    goto LABEL_67;
  }
LABEL_71:
  LODWORD(v50) = 0;
LABEL_46:
  if ( v10 != (unsigned __int8 *)v101 && v10 != v102 )
  {
    v71 = (PVOID *)(v10 + 32);
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v71, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v92, (__int64)v71, v22, v15);
  }
  return (unsigned int)v50;
}
