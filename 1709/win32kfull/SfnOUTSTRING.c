/*
 * XREFs of SfnOUTSTRING @ 0x1C00DD2A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00DDA7C (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00DDBC8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnOUTSTRING(
        volatile signed __int32 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // r14
  __int64 *ThreadWin32Thread; // rax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  ULONG_PTR v16; // r14
  __int64 v17; // rax
  unsigned int *v18; // rsi
  unsigned int **v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int *v23; // rax
  struct _KTHREAD *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct _KTHREAD *v28; // r13
  __int64 v29; // r15
  __int64 *v30; // rax
  __int64 v31; // r13
  _QWORD *v32; // r8
  char *v33; // rcx
  struct _KTHREAD *v34; // r15
  __int64 v35; // r14
  __int64 *v36; // rax
  __int64 v37; // r12
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct _KTHREAD *v41; // rbx
  __int64 v42; // r14
  __int64 *v43; // rax
  unsigned int DLT; // eax
  tagObjLock *DomainLockRef; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  char v48; // r14
  int v49; // r15d
  int v50; // edx
  __int64 v51; // rcx
  struct _KTHREAD *v52; // r14
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 *v56; // rax
  unsigned int v57; // eax
  tagObjLock *v58; // rax
  __int64 v59; // rax
  __int64 *v60; // rbx
  __int64 v61; // rbx
  ULONG64 v62; // rcx
  __int64 v63; // xmm1_8
  struct _LARGE_STRING *v64; // rsi
  _WORD *v65; // rax
  _BYTE *v66; // rcx
  PVOID *v67; // rdx
  struct _KTHREAD *v68; // rsi
  __int64 v69; // rbx
  __int64 *v70; // rax
  char v71; // [rsp+30h] [rbp-3A8h]
  unsigned int v72; // [rsp+34h] [rbp-3A4h]
  int v73; // [rsp+38h] [rbp-3A0h]
  int v74; // [rsp+3Ch] [rbp-39Ch]
  __int64 v76; // [rsp+48h] [rbp-390h]
  int v78[5]; // [rsp+54h] [rbp-384h] BYREF
  struct _LARGE_STRING *v79; // [rsp+68h] [rbp-370h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-368h] BYREF
  __int64 v81; // [rsp+78h] [rbp-360h]
  __int64 v82; // [rsp+80h] [rbp-358h]
  unsigned __int64 v83; // [rsp+88h] [rbp-350h] BYREF
  _BYTE *v84; // [rsp+90h] [rbp-348h]
  _QWORD v85[4]; // [rsp+98h] [rbp-340h] BYREF
  ULONG_PTR v86; // [rsp+B8h] [rbp-320h] BYREF
  __int128 v87; // [rsp+C0h] [rbp-318h]
  __int64 v88; // [rsp+D0h] [rbp-308h]
  __int128 v89; // [rsp+D8h] [rbp-300h] BYREF
  __int64 v90; // [rsp+E8h] [rbp-2F0h]
  _QWORD v91[3]; // [rsp+118h] [rbp-2C0h] BYREF
  _BYTE v92[96]; // [rsp+130h] [rbp-2A8h] BYREF
  _BYTE v93[512]; // [rsp+190h] [rbp-248h] BYREF

  v79 = (struct _LARGE_STRING *)a4;
  v73 = a7 & 1;
  v74 = 0;
  v84 = v92;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v82 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      v82 = *ThreadWin32Thread;
    }
  }
  if ( a1 )
    v81 = (__int64)a1 - *(_QWORD *)(v11 + 448);
  else
    v81 = 0LL;
  v13 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v14 = -1;
  if ( v13 + 2 >= v13 )
    v14 = v13 + 2;
  v72 = v14;
  if ( v13 + 2 < v13 )
    goto LABEL_90;
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x8000000) == 0 && *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
  {
    v15 = 2LL * v14;
    v14 = -1;
    if ( v15 <= 0xFFFFFFFF )
      v14 = v15;
    v72 = v14;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_90;
  }
  v16 = (v14 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v16;
  if ( v16 <= 0x800 )
  {
    if ( v16 + 104 <= 0x200 )
    {
      v18 = (unsigned int *)v93;
      memset(v93, 0, sizeof(v93));
    }
    else
    {
      v18 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v16 + 104), 1667461973LL);
      if ( !v18 )
        return 0LL;
    }
    v23 = v18 + 26;
    v19 = (unsigned int **)(v18 + 8);
    *((_QWORD *)v18 + 4) = 0LL;
  }
  else
  {
    v17 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
    v18 = (unsigned int *)v17;
    if ( !v17 )
      return 0LL;
    v19 = (unsigned int **)(v17 + 32);
    *(_QWORD *)(v17 + 32) = 0LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v17 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
    {
      Win32FreePool(v18, v20, v22);
      return 0LL;
    }
    v23 = *v19;
  }
  *v18 = 104;
  *((_QWORD *)v18 + 2) = v23;
  v18[1] = RegionSize;
  v18[2] = 0;
  v18[6] = 96;
  v84 = v18;
  v25 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v20) )
    PsGetThreadWin32Thread(v25);
  if ( v18 != (unsigned int *)v92 && v18 != (unsigned int *)v93 )
  {
    v28 = KeGetCurrentThread();
    v29 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v27, v26) )
    {
      v30 = (__int64 *)PsGetThreadWin32Thread(v28);
      if ( v30 )
        v29 = *v30;
    }
    v85[0] = *(_QWORD *)(v29 + 16);
    *(_QWORD *)(v29 + 16) = v85;
    v85[1] = v18;
    v85[2] = Win32FreePool;
  }
  v31 = v81;
  *((_QWORD *)v18 + 5) = v81;
  v18[12] = a2;
  if ( (a7 & 1) == 0 )
  {
LABEL_38:
    LODWORD(v26) = gptiCurrent;
    if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x8000000) != 0 )
    {
      *((_QWORD *)v18 + 7) = a3 >> 1;
      *(_DWORD *)(gptiCurrent + 464LL) &= ~0x8000000u;
      goto LABEL_41;
    }
LABEL_40:
    *((_QWORD *)v18 + 7) = a3;
    goto LABEL_41;
  }
  if ( *((int *)v79 + 1) < 0 )
  {
    if ( (a7 & 1) != 0 )
      goto LABEL_40;
    goto LABEL_38;
  }
  *((_QWORD *)v18 + 7) = 2 * a3;
  *(_DWORD *)(gptiCurrent + 464LL) |= 0x8000000u;
  v74 = 1;
LABEL_41:
  *((_QWORD *)v18 + 8) = a5;
  *((_QWORD *)v18 + 9) = a6;
  v32 = v18 + 20;
  if ( v72 <= v18[1] )
  {
    v33 = (char *)*((_QWORD *)v18 + 2);
    *((_QWORD *)v18 + 2) = &v33[v16];
    if ( *v19 )
    {
      *v32 = v33;
    }
    else
    {
      *v32 = v33 - (char *)v18;
      v26 = v18[2];
      v33 = (char *)v18 + v18[6];
      *(_DWORD *)&v33[4 * v26] = 80;
      ++v18[2];
    }
    v18[22] = v72;
    v34 = KeGetCurrentThread();
    v35 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v33, v26) )
    {
      v36 = (__int64 *)PsGetThreadWin32Thread(v34);
      if ( v36 )
        v35 = *v36;
    }
    v91[0] = *(_QWORD *)(v35 + 392);
    *(_QWORD *)(v35 + 392) = v91;
    v91[1] = a1;
    if ( a1 )
      _InterlockedIncrement(a1 + 2);
    v37 = v82;
    v38 = *(_QWORD *)(v82 + 456);
    v87 = *(_OWORD *)(v38 + 64);
    v88 = *(_QWORD *)(v38 + 80);
    *(_QWORD *)(v38 + 72) = v31;
    v39 = 0LL;
    if ( a1 )
      v39 = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)(v37 + 456) + 64LL) = v39;
    v40 = 0LL;
    if ( a1 )
      v40 = *((_QWORD *)a1 + 35);
    *(_QWORD *)(*(_QWORD *)(v37 + 456) + 80LL) = v40;
    if ( gdwInAtomicOperation )
    {
      v40 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    v41 = KeGetCurrentThread();
    v42 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v40, gdwInAtomicOperation) )
    {
      v43 = (__int64 *)PsGetThreadWin32Thread(v41);
      if ( v43 )
        v42 = *v43;
    }
    v71 = *(_BYTE *)(v42 + 1440);
    *(_BYTE *)(v42 + 1440) = 0;
    if ( (v71 & 1) != 0 )
    {
      tagObjLock::UnLock((tagObjLock *)(v42 + 368));
      DLT = DLT_THREADINFO::getDLT();
      DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
      tagObjLock::UnLock(DomainLockRef);
    }
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || (v48 = 1, !ExIsResourceAcquiredSharedLite(gpresUser)) )
      v48 = 0;
    UserSessionSwitchLeaveCrit(v47, v46);
    EtwTraceBeginCallback(35LL);
    *((_QWORD *)v18 + 2) = 0LL;
    v49 = KeUserModeCallback(35LL, v18, *v18, &v83, v78);
    EtwTraceEndCallback(35LL);
    if ( v48 )
      EnterSharedCrit(0LL, 1LL);
    else
      EnterCrit(0LL, 1LL);
    v52 = KeGetCurrentThread();
    v53 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v51, v50) )
    {
      v56 = (__int64 *)PsGetThreadWin32Thread(v52);
      if ( v56 )
        v53 = *v56;
    }
    if ( (v71 & 1) != 0 )
    {
      v57 = DLT_THREADINFO::getDLT();
      v58 = (tagObjLock *)GetDomainLockRef(v57);
      tagObjLock::LockShared(v58);
      tagObjLock::LockExclusive((tagObjLock *)(v53 + 368));
    }
    *(_BYTE *)(v53 + 1440) = v71;
    ThreadUnlock1(v55, v54);
    v59 = *(_QWORD *)(v37 + 456);
    *(_OWORD *)(v59 + 64) = v87;
    *(_QWORD *)(v59 + 80) = v88;
    if ( v49 >= 0 && v78[0] == 24 )
    {
      v60 = (__int64 *)v83;
      if ( v83 + 8 < v83 || v83 + 8 > MmUserProbeAddress )
        v60 = (__int64 *)MmUserProbeAddress;
      v61 = *v60;
      v76 = v61;
      if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      {
        if ( v61 )
        {
          v62 = v83;
          if ( v83 + 24 < v83 || v83 + 24 > MmUserProbeAddress )
            v62 = MmUserProbeAddress;
          v63 = *(_QWORD *)(v62 + 16);
          v89 = *(_OWORD *)v62;
          v90 = v63;
          v64 = v79;
          v61 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v89, v61, *((_DWORD *)v79 + 1) >> 31, v73);
          v76 = v61;
          CopyOutputString((struct _CALLBACKSTATUS *)&v89, v64, a3, v73);
        }
        else if ( a3 )
        {
          v65 = (_WORD *)*((_QWORD *)v79 + 1);
          if ( *((int *)v79 + 1) >= 0 )
            *v65 = 0;
          else
            *(_BYTE *)v65 = 0;
        }
      }
      goto LABEL_91;
    }
  }
LABEL_90:
  v61 = 0LL;
  v76 = 0LL;
LABEL_91:
  if ( v84 != v92 )
  {
    v66 = v93;
    if ( v84 != v93 )
    {
      v67 = (PVOID *)(v84 + 32);
      if ( *((_QWORD *)v84 + 4) )
      {
        v86 = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v67, &v86, 0x8000u);
      }
      v68 = KeGetCurrentThread();
      v69 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v66, (_DWORD)v67) )
      {
        v70 = (__int64 *)PsGetThreadWin32Thread(v68);
        if ( v70 )
          v69 = *v70;
      }
      *(_QWORD *)(v69 + 16) = v85[0];
      _guard_dispatch_icall_fptr();
      v61 = v76;
    }
  }
  if ( v74 )
    *(_DWORD *)(gptiCurrent + 464LL) &= ~0x8000000u;
  return v61;
}
