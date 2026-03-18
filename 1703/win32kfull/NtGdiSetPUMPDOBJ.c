/*
 * XREFs of NtGdiSetPUMPDOBJ @ 0x1C0096A60
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0097C4C (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C0098250 (-bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ.c)
 *     ?bSandboxedCurrentProcess@@YAHXZ @ 0x1C0098538 (-bSandboxedCurrentProcess@@YAHXZ.c)
 *     ?vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z @ 0x1C0105B6C (-vPushToCurrentThread@UMPDOBJ@@SAXPEAV1@@Z.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C0195AB4 (--1UMPDREF@@QEAA@XZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02692C4 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiSetPUMPDOBJ(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  int v6; // ebx
  int *v8; // rax
  __int64 v9; // r14
  __int64 *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v12; // rbx
  UMPDOBJ *v13; // rbx
  int v15; // ecx
  int v16; // edi
  struct _KPROCESS *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v21; // [rsp+28h] [rbp-30h]
  PEPROCESS Process[5]; // [rsp+30h] [rbp-28h] BYREF
  UMPDOBJ *v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+68h] [rbp+10h]

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
  v23 = (UMPDOBJ *)v8;
  if ( v6 )
  {
    if ( !a1 || !v8 )
      goto LABEL_49;
  }
  else if ( !a3 )
  {
    goto LABEL_49;
  }
  if ( gUMPDSecurityLevel != 1
    || !v8
    || (PsLookupProcessByProcessId((HANDLE)v8[102], Process), !(unsigned int)bIsProcessLocalSystem(Process[0]))
    || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v19),
        (unsigned int)bIsProcessLocalSystem(CurrentProcess)) )
  {
    v9 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
    if ( v9 )
    {
      if ( v6 )
      {
        v13 = v23;
        v15 = *((_DWORD *)v23 + 109);
        v24 = v15;
        if ( a4 )
        {
          if ( (unsigned __int64)(a4 + 1) > W32UserProbeAddress || a4 + 1 <= a4 )
            *W32UserProbeAddress = 0;
          *a4 = v15;
        }
        if ( v15 )
        {
          if ( !(unsigned int)bSandboxedCurrentProcess() )
          {
            v16 = *((_DWORD *)v13 + 102);
            if ( v16 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) && *(_QWORD *)(v9 + 40) == v9 + 40 )
            {
              v17 = (struct _KPROCESS *)PALLOCMEM2(0x10uLL, 1684631623LL, 1);
              Process[1] = v17;
              if ( v17 )
              {
                if ( (unsigned __int64)(a3 + 1) > W32UserProbeAddress || a3 + 1 <= a3 )
                  *W32UserProbeAddress = 0;
                *a3 = 0LL;
                if ( UMPDOBJ::bTryAcquireExclussiveAccess(v13) )
                {
                  *(_QWORD *)v17 = *((_QWORD *)v13 + 50);
                  *((_DWORD *)v17 + 2) = *((_DWORD *)v13 + 102);
                  *(_QWORD *)(v9 + 72) = v17;
                  UMPDOBJ::vPushToCurrentThread(v13);
                  return 1LL;
                }
                Win32FreePool(v17);
              }
            }
          }
        }
        else if ( v13 == UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)v9) )
        {
          if ( (unsigned __int64)(a3 + 1) > W32UserProbeAddress || a3 + 1 <= a3 )
            *W32UserProbeAddress = 0;
          *a3 = 0LL;
          goto LABEL_18;
        }
      }
      else
      {
        if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        v21 = *a3;
        ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj((struct _W32THREAD *)v9);
        v12 = ThreadCurrentObj;
        if ( ThreadCurrentObj && v21 == *(_QWORD *)ThreadCurrentObj )
        {
          if ( !*((_DWORD *)ThreadCurrentObj + 109) )
          {
LABEL_17:
            v13 = v23;
LABEL_18:
            if ( v13 )
            {
              DEC_SHARE_REF_CNT(v13);
              if ( (unsigned int)UMPDOBJ::bCleanupWorker(v13) )
                Win32FreePool(v13);
            }
            return 1LL;
          }
          if ( *((_QWORD *)ThreadCurrentObj + 3) == W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          {
            *((_BYTE *)v12 + 32) |= 2u;
            UMPDOBJ::vRelease(v12, 1);
            v18 = *(_QWORD *)(v9 + 72);
            if ( v18 )
            {
              Win32FreePool(v18);
              *(_QWORD *)(v9 + 72) = 0LL;
            }
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_49:
  UMPDREF::~UMPDREF((UMPDREF *)&v23);
  return 0LL;
}
