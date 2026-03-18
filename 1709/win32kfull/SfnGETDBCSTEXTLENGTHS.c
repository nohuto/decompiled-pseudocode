/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x1C005B580
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CEB0 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005CF3C (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005CFBC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C005D018 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005D0C4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00DDBC8 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00DE0CC (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SfnGETDBCSTEXTLENGTHS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v9; // r12d
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // r14
  struct _KTHREAD *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rax
  __int64 v22; // rax
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 *v28; // rbx
  __int64 v29; // rbx
  int v30; // eax
  int v31; // eax
  bool v32; // zf
  unsigned int v33; // r14d
  unsigned int v34; // esi
  __int64 v35; // r15
  __int64 v36; // r12
  unsigned __int8 *v37; // rbx
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // edi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 *v46; // rdi
  __int64 v47; // rdi
  ULONG64 v48; // rcx
  __int64 v49; // xmm1_8
  char v51; // [rsp+30h] [rbp-418h] BYREF
  char v52; // [rsp+31h] [rbp-417h] BYREF
  char v53; // [rsp+32h] [rbp-416h] BYREF
  char v54; // [rsp+33h] [rbp-415h] BYREF
  int v55; // [rsp+34h] [rbp-414h]
  unsigned __int8 *v56; // [rsp+38h] [rbp-410h]
  int v57; // [rsp+40h] [rbp-408h]
  int v58; // [rsp+44h] [rbp-404h] BYREF
  int v59; // [rsp+48h] [rbp-400h]
  int v60[9]; // [rsp+4Ch] [rbp-3FCh] BYREF
  __int64 v61; // [rsp+70h] [rbp-3D8h]
  __int64 v62; // [rsp+78h] [rbp-3D0h]
  unsigned __int64 v63[3]; // [rsp+80h] [rbp-3C8h] BYREF
  unsigned __int64 v64; // [rsp+98h] [rbp-3B0h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-3A8h]
  __int64 v66; // [rsp+A8h] [rbp-3A0h]
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-398h] BYREF
  _QWORD v68[5]; // [rsp+B8h] [rbp-390h] BYREF
  __int128 v69; // [rsp+E0h] [rbp-368h]
  __int64 v70; // [rsp+F0h] [rbp-358h]
  __int128 v71; // [rsp+F8h] [rbp-350h]
  __int64 v72; // [rsp+108h] [rbp-340h]
  _QWORD v73[3]; // [rsp+148h] [rbp-300h] BYREF
  _QWORD v74[3]; // [rsp+160h] [rbp-2E8h] BYREF
  __int128 v75; // [rsp+178h] [rbp-2D0h] BYREF
  __int64 v76; // [rsp+188h] [rbp-2C0h]
  _BYTE v77[32]; // [rsp+190h] [rbp-2B8h] BYREF
  unsigned __int8 v78[96]; // [rsp+1B0h] [rbp-298h] BYREF
  unsigned __int8 v79[512]; // [rsp+210h] [rbp-238h] BYREF

  v65 = a4;
  v66 = a3;
  v9 = a2;
  v59 = a2;
  v57 = a4 != 0;
  v55 = a7 & 1;
  v56 = *(unsigned __int8 **)(a1 + 160);
  v62 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached((_DWORD)a4 != 0, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  v14 = a1 - *(_QWORD *)(v12 + 448);
  memset(v68, 0, sizeof(v68));
  v68[0] = v14;
  LODWORD(v68[1]) = v9;
  v68[2] = a3;
  v68[3] = a5;
  v68[4] = a6;
  v15 = KeGetCurrentThread();
  v16 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17, v19, v20) )
  {
    v21 = (__int64 *)PsGetThreadWin32Thread(v15);
    if ( v21 )
      v16 = *v21;
  }
  v73[0] = *(_QWORD *)(v16 + 392);
  *(_QWORD *)(v16 + 392) = v73;
  v73[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v22 = *(_QWORD *)(v12 + 456);
  v69 = *(_OWORD *)(v22 + 64);
  v70 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v14;
  *(_QWORD *)(*(_QWORD *)(v12 + 456) + 64LL) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v12 + 456) + 80LL) = *(_QWORD *)(a1 + 280);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v52);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  EtwTraceBeginCallback(6LL);
  v23 = KeUserModeCallback(6LL, v68, 40LL, &v64, &v58);
  EtwTraceEndCallback(6LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v52);
  ThreadUnlock1(v25, v24);
  v27 = *(_QWORD *)(v12 + 456);
  *(_OWORD *)(v27 + 64) = v69;
  *(_QWORD *)(v27 + 80) = v70;
  if ( v23 < 0 || v58 != 24 )
    return 0LL;
  v28 = (__int64 *)v64;
  if ( v64 + 8 < v64 || v64 + 8 > MmUserProbeAddress )
    v28 = (__int64 *)MmUserProbeAddress;
  v29 = *v28;
  v62 = v29;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v29 <= 0 || v57 == v55 )
    return v29;
  if ( *(unsigned __int8 **)(a1 + 160) != v56 )
    goto LABEL_34;
  v30 = 0;
  if ( v9 != 14 )
  {
    LOBYTE(v26) = 1;
    if ( HMValidateHandleNoSecure(*(_QWORD *)a1, v26) )
    {
      v31 = *(_DWORD *)(a1 + 68);
      if ( v9 == 394 )
      {
        v32 = (v31 & 0x40) == 0;
LABEL_27:
        if ( v32 && (v31 & 0x30) != 0 )
        {
          v29 = 8LL;
          v62 = 8LL;
          v30 = 1;
        }
        else
        {
          v30 = 0;
        }
        goto LABEL_31;
      }
      if ( v9 == 329 )
      {
        v32 = (*(_DWORD *)(a1 + 68) & 0x200) == 0;
        goto LABEL_27;
      }
    }
    return 0LL;
  }
LABEL_31:
  if ( v30 )
    return v29;
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 0x4000000) != 0 )
  {
    if ( (_DWORD)v65 )
LABEL_34:
      v29 *= 2LL;
    return v29;
  }
  v33 = v29 + 1;
  v34 = v29 + 1;
  v61 = 0LL;
  v35 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v36 = a1 - *(_QWORD *)(v35 + 448);
  *(_DWORD *)(gptiCurrent + 464LL) |= 0x4000000u;
  if ( !v55 )
    v34 = 2 * v33;
  v37 = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, v34, v79, 0, 0x200uLL);
  v56 = v37;
  if ( !v37 )
    return 0LL;
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( v37 != v78 && v37 != v79 )
    PushW32ThreadLock(v37, v77, Win32FreePool);
  *((_QWORD *)v37 + 5) = v36;
  v38 = v59;
  *((_DWORD *)v37 + 12) = v59 - 1;
  v39 = v33;
  if ( v38 != 14 )
    v39 = v66;
  *((_QWORD *)v37 + 7) = v39;
  *((_QWORD *)v37 + 8) = a5;
  *((_QWORD *)v37 + 9) = a6;
  if ( AllocateCallbackData((struct _CAPTUREBUF *)v37, v34, (void **)v37 + 10) < 0 )
    goto LABEL_60;
  *((_DWORD *)v37 + 22) = v34;
  v40 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v74[0] = *(_QWORD *)(v40 + 392);
  *(_QWORD *)(v40 + 392) = v74;
  v74[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v41 = *(_QWORD *)(v35 + 456);
  v71 = *(_OWORD *)(v41 + 64);
  v72 = *(_QWORD *)(v41 + 80);
  *(_QWORD *)(v41 + 72) = v36;
  *(_QWORD *)(*(_QWORD *)(v35 + 456) + 64LL) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)(v35 + 456) + 80LL) = *(_QWORD *)(a1 + 280);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v54);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v53);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v37 + 2) = 0LL;
  v42 = KeUserModeCallback(35LL, v37, *(unsigned int *)v37, v63, v60);
  EtwTraceEndCallback(35LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v53);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v54);
  ThreadUnlock1(v44, v43);
  v45 = *(_QWORD *)(v35 + 456);
  *(_OWORD *)(v45 + 64) = v71;
  *(_QWORD *)(v45 + 80) = v72;
  if ( v42 < 0 )
    goto LABEL_60;
  if ( v60[0] == 24 )
  {
    v46 = (__int64 *)v63[0];
    if ( v63[0] + 8 < v63[0] || v63[0] + 8 > MmUserProbeAddress )
      v46 = (__int64 *)MmUserProbeAddress;
    v47 = *v46;
    v61 = v47;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)v47 > 0 )
    {
      v48 = v63[0];
      if ( v63[0] + 24 < v63[0] || v63[0] + 24 > MmUserProbeAddress )
        v48 = MmUserProbeAddress;
      v49 = *(_QWORD *)(v48 + 16);
      v75 = *(_OWORD *)v48;
      v76 = v49;
      v47 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v75, v47, v57, v55);
      v61 = v47;
    }
    *(_DWORD *)(gptiCurrent + 464LL) &= ~0x4000000u;
  }
  else
  {
LABEL_60:
    v47 = 0LL;
  }
  if ( v37 != v78 && v37 != v79 )
  {
    if ( *((_QWORD *)v37 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v37 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(v77);
  }
  return v47;
}
