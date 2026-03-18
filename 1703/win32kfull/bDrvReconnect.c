/*
 * XREFs of bDrvReconnect @ 0x1C029C16C
 * Callers:
 *     RemotePassthruDisable @ 0x1C01EE370 (RemotePassthruDisable.c)
 *     xxxRemoteConsoleShadowStart @ 0x1C01EE840 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C013B1BC (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C013B2B4 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDrvReconnect(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  void (__fastcall *v11)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  __int64 v13; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v14[96]; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD *v15; // [rsp+118h] [rbp+67h] BYREF

  v15 = (_QWORD *)a1;
  if ( a1 && (*(_DWORD *)(a1 + 32) & 1) != 0 )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v14,
      ghsemDynamicModeChange,
      1,
      ghsemGreLock,
      2u,
      ghsemDCVisRgn,
      3u,
      *(HSEMAPHORE *)(a1 + 48),
      4u,
      ghsemSprite,
      5u,
      ghsemHT,
      6u);
    GreAcquireSemaphore(v15[5]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v15[5], 11LL);
    PDEVOBJ::vSync((PDEVOBJ *)&v15, (struct _SURFOBJ *)((v15[321] + 24LL) & -(__int64)(v15[321] != 0LL)), 0LL, 0);
    v7 = v15;
    v8 = (__int64 (__fastcall *)(__int64, __int64))v15[417];
    if ( v8 )
    {
      v9 = v8(a2, a3);
      if ( v9 )
        *(_DWORD *)(v15[226] + 904LL) = 2;
      v7 = v15;
    }
    else
    {
      v9 = 1;
    }
    if ( a4 == 1 )
    {
      v10 = v7[228];
      v13 = v10;
      if ( v9 == 1 && (*(_DWORD *)(v10 + 24) & 0x800) != 0 )
      {
        v11 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v7[360];
        if ( v11 )
        {
          v11(v7[227], &v13, 0LL, 0LL, *(_DWORD *)(v10 + 28));
          v7 = v15;
        }
        else
        {
          v9 = 0;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v7[5]);
    GreReleaseSemaphoreInternal(v15[5]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v14);
  }
  else
  {
    return 0;
  }
  return v9;
}
