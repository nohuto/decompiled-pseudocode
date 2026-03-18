/*
 * XREFs of ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C006E334
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C006DA90 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C0059E80 (xxxLoadHmodIndex.c)
 *     ??0?$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0102FD0 (--0-$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdi
  struct _KTHREAD *v18; // rsi
  __int64 v19; // rdi
  __int64 *v20; // rax
  tagObjLock *v21; // [rsp+38h] [rbp-9h] BYREF
  int ProcessInformation; // [rsp+40h] [rbp-1h] BYREF
  char v23; // [rsp+44h] [rbp+3h]
  char v24; // [rsp+48h] [rbp+7h] BYREF
  _DWORD v25[2]; // [rsp+50h] [rbp+Fh] BYREF
  char *v26; // [rsp+58h] [rbp+17h]
  _QWORD *v27; // [rsp+60h] [rbp+1Fh]
  _QWORD v28[2]; // [rsp+68h] [rbp+27h] BYREF
  _QWORD v29[2]; // [rsp+78h] [rbp+37h] BYREF

  v5 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  if ( (*(_BYTE *)(v5 + gSharedInfo[1] + 25) & 1) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, v5, gSharedInfo[0], a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  v12 = *((unsigned int *)a1 + 18);
  if ( (_DWORD)v12 != -1 )
  {
    v13 = *(unsigned int *)(*(_QWORD *)(v8 + 400) + 380LL);
    if ( !_bittest((const int *)&v13, v12) )
    {
      CurrentProcess = PsGetCurrentProcess(v13, v12);
      if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) )
        return 0LL;
      CUnLockDomainExclusive<DLT_WINEVENT>::CUnLockDomainExclusive<DLT_WINEVENT>(&v21);
      if ( !xxxLoadHmodIndex(*((_DWORD *)a1 + 18)) )
      {
        tagObjLock::LockExclusive(v21);
        return 0LL;
      }
      tagObjLock::LockExclusive(v21);
    }
  }
  v15 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  LOBYTE(v15) = *(_BYTE *)(v15 + gSharedInfo[1] + 25);
  if ( (v15 & 1) != 0 )
    return 0LL;
  v16 = *((unsigned int *)a1 + 18);
  if ( (_DWORD)v16 == -1 )
  {
    v17 = *((_QWORD *)a1 + 8);
  }
  else
  {
    v18 = KeGetCurrentThread();
    v19 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v16, v9, v10) )
    {
      v20 = (__int64 *)PsGetThreadWin32Thread(v18);
      if ( v20 )
        v19 = *v20;
    }
    v16 = *((int *)a1 + 18);
    v17 = *((_QWORD *)a1 + 8) + *(_QWORD *)(*(_QWORD *)(v19 + 400) + 8 * v16 + 384);
  }
  if ( (_DWORD)v16 != -1 )
  {
    ProcessInformation = 7;
    if ( ZwQueryInformationProcess(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           ProcessCookie|ProcessUserModeIOPL,
           &ProcessInformation,
           8u,
           0LL) >= 0
      && (v23 & 2) != 0 )
    {
      v25[1] = 0;
      v28[1] = 4096LL;
      v28[0] = v17 & 0xFFFFFFFFFFFFF000uLL;
      v29[1] = 4LL;
      v25[0] = 1;
      v29[0] = v17 & 0xFFF;
      v26 = &v24;
      v27 = v29;
      ZwSetInformationVirtualMemory(-1LL, 2LL, 1LL, v28, v25, 24);
    }
  }
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v17;
}
