/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C005A350
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005AB94 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00FCFF0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0110214 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02267D0 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINLPCREATESTRUCT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v10; // r14d
  int v11; // r15d
  unsigned int *v12; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rcx
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  unsigned __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rsi
  ULONG_PTR v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _KTHREAD *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r14
  CHAR *v42; // rdx
  void **v43; // r9
  struct _CAPTUREBUF *v44; // rcx
  unsigned int v45; // r8d
  unsigned int v46; // r8d
  int v47; // eax
  _DWORD *v48; // rax
  int v49; // r8d
  void **v50; // r9
  unsigned int v51; // r8d
  CHAR *v52; // rdx
  int v53; // eax
  unsigned int v54; // r8d
  struct _KTHREAD *v55; // rsi
  __int64 v56; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *v59; // rax
  __int64 v60; // r13
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  struct _KTHREAD *v64; // rbx
  __int64 v65; // rsi
  __int64 *v66; // rax
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  bool v71; // si
  int v72; // r15d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  struct _KTHREAD *v77; // r14
  __int64 v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 *v81; // rax
  unsigned int v82; // eax
  tagObjLock *v83; // rax
  __int64 v84; // rax
  __int64 *v85; // rcx
  __int64 v86; // rbx
  char v87; // [rsp+30h] [rbp-398h]
  unsigned int v88; // [rsp+34h] [rbp-394h]
  unsigned int v89; // [rsp+38h] [rbp-390h]
  unsigned int v90; // [rsp+4Ch] [rbp-37Ch]
  int v91; // [rsp+50h] [rbp-378h] BYREF
  int v92; // [rsp+54h] [rbp-374h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-370h] BYREF
  __int64 v94; // [rsp+60h] [rbp-368h]
  __int64 v95; // [rsp+68h] [rbp-360h]
  unsigned int v96; // [rsp+70h] [rbp-358h]
  unsigned __int64 v97; // [rsp+78h] [rbp-350h] BYREF
  ULONG_PTR v98; // [rsp+80h] [rbp-348h] BYREF
  __int128 v99; // [rsp+88h] [rbp-340h]
  __int64 v100; // [rsp+98h] [rbp-330h]
  __int64 v101; // [rsp+A0h] [rbp-328h]
  _QWORD v102[3]; // [rsp+B0h] [rbp-318h] BYREF
  _BYTE v103[24]; // [rsp+C8h] [rbp-300h] BYREF
  _DWORD v104[44]; // [rsp+E0h] [rbp-2E8h] BYREF
  _BYTE v105[512]; // [rsp+190h] [rbp-238h] BYREF

  v90 = a2;
  v88 = 0;
  v89 = 0;
  v10 = 0;
  v11 = a7 & 1;
  v12 = v104;
  CurrentThread = KeGetCurrentThread();
  v95 = 0LL;
  if ( (unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4)
    || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL )
  {
    v15 = 0LL;
  }
  else
  {
    v15 = *ThreadWin32Thread;
    v95 = *ThreadWin32Thread;
  }
  if ( a1 )
    v94 = (__int64)a1 - *(_QWORD *)(v15 + 448);
  else
    v94 = 0LL;
  if ( a4 )
  {
    v16 = *(_QWORD *)(a4 + 56);
    if ( !v16 || *(_DWORD *)(a4 + 84) >> 31 == v11 && v16 < (unsigned __int64)MmSystemRangeStart )
    {
      v18 = -1;
    }
    else
    {
      v17 = *(_DWORD *)(a4 + 80);
      v18 = -1;
      v19 = -1;
      if ( v17 + 2 >= v17 )
        v19 = v17 + 2;
      v88 = v19;
      if ( v17 + 2 < v17 )
        goto LABEL_124;
      if ( *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 )
      {
        v20 = 2LL * v19;
        v21 = -1;
        if ( v20 <= 0xFFFFFFFF )
          v21 = 2 * v19;
        v88 = v21;
        if ( v20 > 0xFFFFFFFF )
          goto LABEL_124;
      }
      v10 = 1;
    }
    v22 = *(_QWORD *)(a4 + 64);
    if ( (v22 & 0xFFFFFFFFFFFF0000uLL) != 0
      && (*(_DWORD *)(a4 + 100) >> 31 != v11 || v22 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v23 = *(_DWORD *)(a4 + 96);
      v24 = -1;
      if ( v23 + 2 >= v23 )
        v24 = v23 + 2;
      v89 = v24;
      if ( v23 + 2 < v23 )
        goto LABEL_124;
      if ( *(int *)(a4 + 100) < 0 && (a7 & 1) == 0 )
      {
        v25 = 2LL * v24;
        v26 = -1;
        if ( v25 <= 0xFFFFFFFF )
          v26 = 2 * v24;
        v89 = v26;
        if ( v25 > 0xFFFFFFFF )
          goto LABEL_124;
      }
      ++v10;
    }
  }
  else
  {
    v18 = -1;
  }
  if ( v88 + v89 >= v88 )
    v18 = v88 + v89;
  v96 = v18;
  if ( v88 + v89 >= v88 )
  {
    if ( v10 )
    {
      v27 = 8 * v10 + 168;
      v28 = (v18 + 7LL * v10) & 0xFFFFFFFFFFFFFFF8uLL;
      RegionSize = v28;
      if ( v28 <= 0x800 )
      {
        if ( v27 + v28 <= 0x200 )
        {
          v12 = (unsigned int *)v105;
          memset(v105, 0, sizeof(v105));
        }
        else
        {
          v12 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v28 + v27), 1667461973LL);
          if ( !v12 )
            return 0LL;
        }
        *((_QWORD *)v12 + 2) = (char *)v12 + v27;
        *((_QWORD *)v12 + 4) = 0LL;
        v32 = (unsigned int)(v27 + RegionSize);
        *v12 = v32;
      }
      else
      {
        v29 = Win32AllocPoolWithQuotaZInit((unsigned int)v27, 1667461973LL);
        v12 = (unsigned int *)v29;
        if ( !v29 )
          return 0LL;
        v30 = (_QWORD *)(v29 + 32);
        *(_QWORD *)(v29 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v29 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        {
          Win32FreePool(v12, v31, v33);
          return 0LL;
        }
        *((_QWORD *)v12 + 2) = *v30;
        *v12 = v27;
      }
      v12[1] = RegionSize;
      v12[2] = 0;
      v12[6] = 168;
    }
    else
    {
      v12 = v104;
      memset(v104, 0, 0xA8uLL);
      v104[0] = 168;
    }
    v36 = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v31, v33, v34) )
      PsGetThreadWin32Thread(v36);
    if ( v12 != v104 && v12 != (unsigned int *)v105 )
      PushW32ThreadLock(v12, v103, Win32FreePool);
    v41 = v94;
    *((_QWORD *)v12 + 5) = v94;
    v12[12] = v90;
    *((_QWORD *)v12 + 7) = a3;
    *((_QWORD *)v12 + 8) = a4 != 0;
    if ( !a4 )
      goto LABEL_87;
    *(_DWORD *)(a4 + 52) = 0;
    *(_DWORD *)(a4 + 76) = 0;
    *(_OWORD *)(v12 + 18) = *(_OWORD *)a4;
    *(_OWORD *)(v12 + 22) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v12 + 26) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v12 + 30) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v12 + 34) = *(_OWORD *)(a4 + 64);
    if ( !v88 )
    {
LABEL_77:
      if ( v89 )
      {
        v50 = (void **)(v12 + 34);
        v51 = *(_DWORD *)(a4 + 96);
        v52 = *(CHAR **)(a4 + 104);
        if ( *(int *)(a4 + 100) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v53 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v52, 2 * v51 + 2, v50);
LABEL_86:
            if ( v53 < 0 )
              goto LABEL_124;
            goto LABEL_87;
          }
          v54 = v51 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v53 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v52, (v51 >> 1) + 1, v50);
            goto LABEL_86;
          }
          v54 = v51 + 2;
        }
        v53 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v52, v54, v50);
        goto LABEL_86;
      }
LABEL_87:
      *((_QWORD *)v12 + 19) = a5;
      *((_QWORD *)v12 + 20) = a6;
      v55 = KeGetCurrentThread();
      v56 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v38, v37, v39, v40) )
      {
        v59 = (__int64 *)PsGetThreadWin32Thread(v55);
        if ( v59 )
          v56 = *v59;
      }
      v102[0] = *(_QWORD *)(v56 + 392);
      *(_QWORD *)(v56 + 392) = v102;
      v102[1] = a1;
      if ( a1 )
        _InterlockedIncrement(a1 + 2);
      v60 = v95;
      v61 = *(_QWORD *)(v95 + 456);
      v99 = *(_OWORD *)(v61 + 64);
      v100 = *(_QWORD *)(v61 + 80);
      *(_QWORD *)(v61 + 72) = v41;
      if ( a1 )
        v62 = *(_QWORD *)a1;
      else
        v62 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v60 + 456) + 64LL) = v62;
      if ( a1 )
        v63 = *((_QWORD *)a1 + 35);
      else
        v63 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v60 + 456) + 80LL) = v63;
      if ( gdwInAtomicOperation )
      {
        v63 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      v64 = KeGetCurrentThread();
      v65 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v63, gdwInAtomicOperation, v57, v58) )
      {
        v66 = (__int64 *)PsGetThreadWin32Thread(v64);
        if ( v66 )
          v65 = *v66;
      }
      v87 = *(_BYTE *)(v65 + 1440);
      *(_BYTE *)(v65 + 1440) = 0;
      if ( (v87 & 1) != 0 )
      {
        tagObjLock::UnLock((tagObjLock *)(v65 + 368));
        DLT = DLT_THREADINFO::getDLT();
        DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
        tagObjLock::UnLock(DomainLockRef);
      }
      v71 = !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser);
      UserSessionSwitchLeaveCrit(v70, v69);
      EtwTraceBeginCallback(10LL);
      *((_QWORD *)v12 + 2) = 0LL;
      v72 = KeUserModeCallback(10LL, v12, *v12, &v97, &v92);
      EtwTraceEndCallback(10LL);
      if ( v71 )
        EnterSharedCrit(0LL, 1LL);
      else
        EnterCrit(0LL, 1LL);
      v77 = KeGetCurrentThread();
      v78 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v74, v73, v75, v76) )
      {
        v81 = (__int64 *)PsGetThreadWin32Thread(v77);
        if ( v81 )
          v78 = *v81;
      }
      if ( (v87 & 1) != 0 )
      {
        v82 = DLT_THREADINFO::getDLT();
        v83 = (tagObjLock *)GetDomainLockRef(v82);
        tagObjLock::LockShared(v83);
        tagObjLock::LockExclusive((tagObjLock *)(v78 + 368));
      }
      *(_BYTE *)(v78 + 1440) = v87;
      ThreadUnlock1(v80, v79);
      v84 = *(_QWORD *)(v60 + 456);
      *(_OWORD *)(v84 + 64) = v99;
      *(_QWORD *)(v84 + 80) = v100;
      if ( v72 >= 0 && v92 == 24 )
      {
        v85 = (__int64 *)v97;
        if ( v97 + 8 < v97 || v97 + 8 > MmUserProbeAddress )
          v85 = (__int64 *)MmUserProbeAddress;
        v86 = *v85;
        v101 = *v85;
        goto LABEL_125;
      }
      goto LABEL_124;
    }
    if ( *(int *)(a4 + 84) < 0 )
    {
      v48 = *(_DWORD **)(a4 + 56);
      if ( *(_BYTE *)v48 == 0xFF )
      {
        if ( (a7 & 1) != 0 )
        {
          v45 = 3;
          v42 = *(CHAR **)(a4 + 56);
        }
        else
        {
          v91 = ((unsigned __int16)(*v48 >> 8) << 16) | 0xFFFF;
          v45 = 4;
          v42 = (CHAR *)&v91;
        }
        v43 = (void **)(v12 + 32);
        v44 = (struct _CAPTUREBUF *)v12;
      }
      else
      {
        v43 = (void **)(v12 + 32);
        v49 = *(_DWORD *)(a4 + 80);
        v42 = *(CHAR **)(a4 + 88);
        v44 = (struct _CAPTUREBUF *)v12;
        if ( (a7 & 1) == 0 )
        {
          if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v42, 2 * v49 + 2, v43) < 0 )
            goto LABEL_124;
          goto LABEL_77;
        }
        v45 = v49 + 1;
      }
    }
    else
    {
      v42 = *(CHAR **)(a4 + 56);
      v43 = (void **)(v12 + 32);
      v44 = (struct _CAPTUREBUF *)v12;
      if ( *(_WORD *)v42 == 0xFFFF )
      {
        if ( (a7 & 1) != 0 )
        {
          ++v42;
          v45 = 3;
        }
        else
        {
          v45 = 4;
        }
      }
      else
      {
        v46 = *(_DWORD *)(a4 + 80);
        v42 = *(CHAR **)(a4 + 88);
        if ( (a7 & 1) != 0 )
        {
          v47 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v42, (v46 >> 1) + 1, v43);
          goto LABEL_74;
        }
        v45 = v46 + 2;
      }
    }
    v47 = CaptureCallbackData(v44, v42, v45, v43);
LABEL_74:
    if ( v47 < 0 )
      goto LABEL_124;
    goto LABEL_77;
  }
LABEL_124:
  v86 = 0LL;
LABEL_125:
  if ( v12 != v104 && v12 != (unsigned int *)v105 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      v98 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &v98, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v103);
  }
  return v86;
}
