/*
 * XREFs of SfnIMECONTROL @ 0x1C01FABA0
 * Callers:
 *     <none>
 * Callees:
 *     MBToWCSEx @ 0x1C000C334 (MBToWCSEx.c)
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
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x1C00DE0CC (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     WCSToMBEx @ 0x1C00DE10C (WCSToMBEx.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     THREAD_CODEPAGE @ 0x1C0200CC8 (THREAD_CODEPAGE.c)
 */

__int64 __fastcall SfnIMECONTROL(
        volatile signed __int32 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  volatile signed __int32 *v11; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rbx
  unsigned int v14; // edx
  unsigned __int64 v15; // rcx
  unsigned int v17; // r14d
  __int64 v18; // rdx
  unsigned __int8 *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r8d
  char *v26; // rdx
  __int64 v27; // rax
  char *v28; // r13
  char *v29; // r12
  _DWORD *v30; // rax
  int v31; // r15d
  int v32; // r15d
  PCHAR v33; // rdx
  __int64 v34; // rsi
  unsigned __int16 v35; // ax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // esi
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 *v52; // r15
  __int64 v53; // r15
  ULONG64 v54; // rcx
  CHAR *v55; // xmm1_8
  __int16 v56; // cx
  __int64 v57; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // esi
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 *v71; // rcx
  PVOID *v72; // rdx
  char v73; // [rsp+30h] [rbp-458h] BYREF
  char v74; // [rsp+31h] [rbp-457h] BYREF
  char v75; // [rsp+32h] [rbp-456h] BYREF
  _BYTE v76[5]; // [rsp+33h] [rbp-455h] BYREF
  unsigned __int8 *v77; // [rsp+38h] [rbp-450h]
  char v78; // [rsp+40h] [rbp-448h] BYREF
  char v79; // [rsp+41h] [rbp-447h] BYREF
  int v80; // [rsp+44h] [rbp-444h] BYREF
  _QWORD v81[6]; // [rsp+48h] [rbp-440h] BYREF
  __int64 v82; // [rsp+78h] [rbp-410h]
  char *v83; // [rsp+80h] [rbp-408h] BYREF
  __int64 v84; // [rsp+88h] [rbp-400h]
  __int128 v85; // [rsp+90h] [rbp-3F8h]
  __int64 v86; // [rsp+A0h] [rbp-3E8h]
  unsigned __int8 *v87; // [rsp+C0h] [rbp-3C8h] BYREF
  _DWORD *v88; // [rsp+C8h] [rbp-3C0h]
  volatile signed __int32 *v89; // [rsp+D0h] [rbp-3B8h]
  char *v90; // [rsp+D8h] [rbp-3B0h]
  PWCH v91; // [rsp+E0h] [rbp-3A8h] BYREF
  __int64 v92; // [rsp+E8h] [rbp-3A0h]
  ULONG_PTR RegionSize; // [rsp+F0h] [rbp-398h] BYREF
  unsigned int v94; // [rsp+F8h] [rbp-390h]
  __int64 v95; // [rsp+100h] [rbp-388h] BYREF
  volatile signed __int32 *v96; // [rsp+108h] [rbp-380h]
  __int128 v97; // [rsp+150h] [rbp-338h]
  volatile void *Address; // [rsp+160h] [rbp-328h]
  __int128 v99; // [rsp+168h] [rbp-320h]
  CHAR *v100; // [rsp+178h] [rbp-310h]
  _QWORD v101[4]; // [rsp+180h] [rbp-308h] BYREF
  _DWORD v102[28]; // [rsp+1A0h] [rbp-2E8h] BYREF
  __int128 v103; // [rsp+210h] [rbp-278h] BYREF
  __int64 v104; // [rsp+220h] [rbp-268h]
  unsigned int v105; // [rsp+228h] [rbp-260h]
  unsigned __int8 v106[36]; // [rsp+22Ch] [rbp-25Ch] BYREF
  unsigned __int8 v107[512]; // [rsp+250h] [rbp-238h] BYREF

  v88 = a4;
  v10 = a2;
  v11 = a1;
  v89 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v84 = ThreadWin32Thread;
  if ( v11 )
    v13 = (__int64)v11 - *(_QWORD *)(ThreadWin32Thread + 448);
  else
    v13 = 0LL;
  v82 = v13;
  if ( a3 > 0x18 || (unsigned int)a3 < 7 )
    goto LABEL_20;
  if ( (unsigned int)a3 <= 8 )
  {
    v14 = 1;
    v17 = 32;
    goto LABEL_21;
  }
  if ( (unsigned int)a3 <= 0xA )
    goto LABEL_18;
  if ( (unsigned int)a3 <= 0xC )
  {
    v14 = 1;
    v17 = 28;
    goto LABEL_21;
  }
  if ( (_DWORD)a3 == 17 )
  {
LABEL_18:
    v14 = 1;
    v17 = 32 * ((a7 & 1) == 0) + 60;
    goto LABEL_21;
  }
  if ( (_DWORD)a3 == 24 )
  {
    v14 = 1;
    v15 = (unsigned __int64)*a4 << 9;
    if ( v15 > 0xFFFFFFFF )
      return 0LL;
    v17 = -1;
    if ( (int)v15 + 4 >= (unsigned int)v15 )
      v17 = v15 + 4;
    v94 = v17;
    if ( (int)v15 + 4 < (unsigned int)v15 )
      return 0LL;
  }
  else
  {
LABEL_20:
    v14 = 0;
    v17 = 0;
  }
LABEL_21:
  if ( v14 )
  {
    v19 = AllocCallbackMessage(104, v14, v17, v107, 1, 0x200uLL);
    v77 = v19;
    if ( !v19 )
      return 0LL;
  }
  else
  {
    v19 = (unsigned __int8 *)v102;
    v77 = (unsigned __int8 *)v102;
    memset(v102, 0, 0x68uLL);
    v102[0] = 104;
  }
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v20, v21);
  if ( v19 != (unsigned __int8 *)v102 && v19 != v107 )
    PushW32ThreadLock((__int64)v19, v101, (__int64)Win32FreePool, v24);
  *((_QWORD *)v19 + 5) = v13;
  *((_DWORD *)v19 + 12) = v10;
  *((_QWORD *)v19 + 7) = a3;
  *((_QWORD *)v19 + 8) = a4;
  *((_QWORD *)v19 + 9) = a5;
  *((_QWORD *)v19 + 10) = a6;
  if ( a3 > 0x18 )
    goto LABEL_90;
  if ( (_DWORD)a3 == 7 )
    goto LABEL_61;
  if ( (_DWORD)a3 != 8 )
  {
    if ( (_DWORD)a3 == 9 )
      goto LABEL_61;
    if ( (_DWORD)a3 != 10 )
    {
      if ( (_DWORD)a3 == 11 )
        goto LABEL_61;
      if ( (_DWORD)a3 != 12 )
      {
        if ( (_DWORD)a3 != 17 )
        {
          if ( (_DWORD)a3 != 24 )
            goto LABEL_90;
          goto LABEL_37;
        }
LABEL_61:
        if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v19, v17, (void **)v19 + 11) >= 0 )
        {
          *((_DWORD *)v19 + 24) = v17;
          v38 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v23, v24);
          v95 = *(_QWORD *)(v38 + 392);
          *(_QWORD *)(v38 + 392) = &v95;
          v96 = v11;
          if ( v11 )
            _InterlockedIncrement(v11 + 2);
          v41 = v84;
          v42 = *(_QWORD *)(v84 + 456);
          v85 = *(_OWORD *)(v42 + 64);
          v86 = *(_QWORD *)(v42 + 80);
          *(_QWORD *)(v42 + 72) = v13;
          if ( v11 )
            v43 = *(_QWORD *)v11;
          else
            v43 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v41 + 456) + 64LL) = v43;
          if ( v11 )
            v44 = *((_QWORD *)v11 + 35);
          else
            v44 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v41 + 456) + 80LL) = v44;
          if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)&v74,
            gdwInAtomicOperation,
            v39,
            v40);
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v73);
          EtwTraceBeginCallback(94LL);
          *((_QWORD *)v19 + 2) = 0LL;
          v45 = KeUserModeCallback(94LL, v19, *(unsigned int *)v19, v81, &v80);
          EtwTraceEndCallback(94LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v73);
          ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
            (ReleaseAndReacquirePerObjectLocks *)&v74,
            v46,
            v47,
            v48);
          ThreadUnlock1(v50, v49);
          v51 = *(_QWORD *)(v41 + 456);
          *(_OWORD *)(v51 + 64) = v85;
          *(_QWORD *)(v51 + 80) = v86;
          if ( v45 >= 0 && v80 == 24 )
          {
            v52 = (__int64 *)v81[0];
            if ( (unsigned __int64)(v81[0] + 8LL) < v81[0] || v81[0] + 8LL > MmUserProbeAddress )
              v52 = (__int64 *)MmUserProbeAddress;
            v53 = *v52;
            v92 = v53;
            if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
            {
              v54 = v81[0];
              if ( (unsigned __int64)(v81[0] + 24LL) < v81[0] || v81[0] + 24LL > MmUserProbeAddress )
                v54 = MmUserProbeAddress;
              v97 = *(_OWORD *)v54;
              v55 = *(CHAR **)(v54 + 16);
              Address = v55;
              v99 = v97;
              v100 = v55;
              ProbeForRead(v55, v17, 4u);
              if ( (_DWORD)a3 == 7 || (_DWORD)a3 == 11 || (a7 & 1) == 0 )
              {
                memmove(a4, v55, v17);
              }
              else
              {
                v55[v17 - 1] = 0;
                v91 = (PWCH)(a4 + 7);
                *(_OWORD *)a4 = *(_OWORD *)v55;
                *((_QWORD *)a4 + 2) = *((_QWORD *)v55 + 2);
                a4[6] = *((_DWORD *)v55 + 6);
                memset(a4 + 7, 0, 0x40uLL);
                MBToWCSEx(v56, v55 + 28, -1, &v91, 32);
              }
            }
            goto LABEL_108;
          }
        }
        goto LABEL_107;
      }
    }
  }
LABEL_37:
  switch ( a3 )
  {
    case 8uLL:
      v25 = 32;
      goto LABEL_45;
    case 0xCuLL:
      v25 = 28;
      goto LABEL_45;
    case 0xAuLL:
      if ( (a7 & 1) != 0 )
      {
        v87 = v106;
        v103 = *(_OWORD *)a4;
        v104 = *((_QWORD *)a4 + 2);
        v105 = a4[6];
        memset(v106, 0, 0x20uLL);
        WCSToMBEx(0, (const WCHAR *)a4 + 14, -1, (PCHAR *)&v87, 0x20u);
        v25 = 60;
        v26 = (char *)&v103;
        goto LABEL_46;
      }
      v25 = 92;
LABEL_45:
      v26 = (char *)a4;
LABEL_46:
      if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, v26, v25, (void **)v19 + 8) < 0 )
        goto LABEL_107;
      goto LABEL_90;
  }
  if ( (a7 & 1) != 0 )
  {
    v83 = &v78;
    v27 = Win32AllocPool(v17, 1835627349LL);
    v28 = (char *)v27;
    v90 = (char *)v27;
    if ( !v27 )
      goto LABEL_107;
    v29 = (char *)(v27 + 4);
    v30 = v88;
    v31 = *v88;
    *(_DWORD *)v28 = *v88;
    v32 = v31 << 8;
    if ( v32 )
    {
      v33 = &v79;
      v34 = (char *)(v30 + 1) - v29;
      do
      {
        --v32;
        *v33 = 0;
        v35 = THREAD_CODEPAGE();
        WCSToMBEx(v35, (const WCHAR *)&v29[v34], 1, &v83, 2u);
        v33 = v83 + 1;
        if ( v83[1] )
          *(_WORD *)v29 = _byteswap_ushort(*(_WORD *)v83);
        else
          *(_WORD *)v29 = (unsigned __int8)*v83;
        v29 += 2;
      }
      while ( v32 );
      v11 = v89;
      v28 = v90;
    }
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, v28, v17, (void **)v19 + 8) < 0 )
      goto LABEL_107;
    Win32FreePool(v28, v36, v23);
  }
  else if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, (char *)a4, v17, (void **)v19 + 8) < 0 )
  {
    goto LABEL_107;
  }
LABEL_90:
  v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24);
  v95 = *(_QWORD *)(v57 + 392);
  *(_QWORD *)(v57 + 392) = &v95;
  v96 = v11;
  if ( v11 )
    _InterlockedIncrement(v11 + 2);
  v60 = v84;
  v61 = *(_QWORD *)(v84 + 456);
  v85 = *(_OWORD *)(v61 + 64);
  v86 = *(_QWORD *)(v61 + 80);
  *(_QWORD *)(v61 + 72) = v82;
  if ( v11 )
    v62 = *(_QWORD *)v11;
  else
    v62 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v60 + 456) + 64LL) = v62;
  if ( v11 )
    v63 = *((_QWORD *)v11 + 35);
  else
    v63 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v60 + 456) + 80LL) = v63;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v76,
    gdwInAtomicOperation,
    v58,
    v59);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v75);
  EtwTraceBeginCallback(94LL);
  *((_QWORD *)v19 + 2) = 0LL;
  v64 = KeUserModeCallback(94LL, v19, *(unsigned int *)v19, v81, &v80);
  EtwTraceEndCallback(94LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v75);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v76,
    v65,
    v66,
    v67);
  ThreadUnlock1(v69, v68);
  v70 = *(_QWORD *)(v60 + 456);
  *(_OWORD *)(v70 + 64) = v85;
  *(_QWORD *)(v70 + 80) = v86;
  if ( v64 >= 0 && v80 == 24 )
  {
    v71 = (__int64 *)v81[0];
    if ( (unsigned __int64)(v81[0] + 8LL) < v81[0] || v81[0] + 8LL > MmUserProbeAddress )
      v71 = (__int64 *)MmUserProbeAddress;
    v53 = *v71;
    v92 = *v71;
    goto LABEL_108;
  }
LABEL_107:
  v53 = 0LL;
LABEL_108:
  if ( v19 != (unsigned __int8 *)v102 && v19 != v107 )
  {
    v72 = (PVOID *)(v19 + 32);
    if ( *((_QWORD *)v19 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v72, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v101, (__int64)v72, v23, v24);
  }
  return v53;
}
