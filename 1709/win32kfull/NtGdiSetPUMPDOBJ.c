/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C00B8AE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     UMPDOBJ_bCleanupWrap @ 0x1C00B8F50 (UMPDOBJ_bCleanupWrap.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C00B942C (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C00BA618 (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C00BB30C (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C00F6464 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C01A0D28 (--1UMPDREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  int v6; // ebx
  int *v8; // rax
  __int64 v10; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // r14
  __int64 *ThreadWin32Thread; // rax
  UMPDOBJ *v15; // rbx
  int v16; // ecx
  int v17; // edi
  struct _KPROCESS *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct UMPDOBJ *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // [rsp+28h] [rbp-30h]
  PEPROCESS Process[5]; // [rsp+30h] [rbp-28h] BYREF
  UMPDOBJ *v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+68h] [rbp+10h]

  v6 = a2;
  if ( a1 )
  {
    LOBYTE(a2) = 17;
    v8 = (int *)HmgShareLock(a1, a2);
  }
  else
  {
    v8 = 0LL;
  }
  v33 = (UMPDOBJ *)v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_9;
  }
  else if ( !a3 )
  {
LABEL_9:
    UMPDREF::~UMPDREF((UMPDREF *)&v33);
    return 0LL;
  }
  v10 = gUMPDSecurityLevel;
  if ( gUMPDSecurityLevel == 1 )
  {
    if ( v8 )
    {
      PsLookupProcessByProcessId((HANDLE)v8[102], Process);
      if ( (unsigned int)bIsProcessLocalSystem(Process[0]) )
      {
        CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10, a2);
        if ( !(unsigned int)bIsProcessLocalSystem(CurrentProcess) )
          goto LABEL_9;
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( !v13 )
    goto LABEL_9;
  if ( !v6 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v31 = *a3;
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)v13);
    v25 = ThreadCurrentObj;
    if ( !ThreadCurrentObj || v31 != *(_QWORD *)ThreadCurrentObj )
      goto LABEL_9;
    if ( *((_DWORD *)ThreadCurrentObj + 109) )
    {
      if ( *((_QWORD *)ThreadCurrentObj + 3) != W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) )
        goto LABEL_9;
      *((_BYTE *)v25 + 32) |= 2u;
      UMPDOBJ::vRelease(v25, 1);
      v28 = *(_QWORD *)(v13 + 72);
      if ( v28 )
      {
        Win32FreePool(v28, v26, v27);
        *(_QWORD *)(v13 + 72) = 0LL;
      }
    }
    v15 = v33;
LABEL_50:
    if ( v15 )
    {
      DEC_SHARE_REF_CNT(v15);
      if ( (unsigned int)UMPDOBJ_bCleanupWrap(v15) )
        Win32FreePool(v15, v29, v30);
    }
    return 1LL;
  }
  v15 = v33;
  v16 = *((_DWORD *)v33 + 109);
  v34 = v16;
  if ( a4 )
  {
    if ( (unsigned __int64)(a4 + 1) > MmUserProbeAddress || a4 + 1 <= a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v16;
  }
  if ( !v16 )
  {
    if ( v15 != UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)v13) )
      goto LABEL_9;
    if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = 0LL;
    goto LABEL_50;
  }
  if ( (unsigned int)bSandboxedCurrentProcess() )
    goto LABEL_9;
  v17 = *((_DWORD *)v15 + 102);
  if ( v17 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    goto LABEL_9;
  if ( *(_QWORD *)(v13 + 40) != v13 + 40 )
    goto LABEL_9;
  v18 = (struct _KPROCESS *)PALLOCMEM2(0x10uLL, 1684631623LL, 1);
  Process[1] = v18;
  if ( !v18 )
    goto LABEL_9;
  if ( (unsigned __int64)(a3 + 1) > MmUserProbeAddress || a3 + 1 <= a3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = 0LL;
  if ( !UMPDOBJ::bTryAcquireExclussiveAccess(v15) )
  {
    Win32FreePool(v18, v19, v20);
    goto LABEL_9;
  }
  *(_QWORD *)v18 = *((_QWORD *)v15 + 50);
  *((_DWORD *)v18 + 2) = *((_DWORD *)v15 + 102);
  *(_QWORD *)(v13 + 72) = v18;
  UMPDOBJ::vPushToCurrentThread(v15);
  return 1LL;
}
