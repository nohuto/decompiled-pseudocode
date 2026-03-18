/*
 * XREFs of UsbhHubWorker @ 0x1C0017760
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall UsbhHubWorker(__int64 a1, __int64 a2))(__int64)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  KIRQL v9; // al
  __int64 v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 (__fastcall *result)(__int64); // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx

  if ( *(_DWORD *)(a2 + 4) != 2001228627 )
  {
    v15 = *(unsigned int *)(a2 + 4);
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v16 = *(_QWORD *)(a1 + 64);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
          *(_DWORD *)v17 = 1380669288;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 16) = v15;
          *(_QWORD *)(v17 + 24) = a2;
        }
      }
    }
  }
  v4 = *(_QWORD *)(a2 + 16);
  if ( !v4 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(v4 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(v4, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(v4, *(_QWORD *)(v4 + 64));
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  v6 = *(_QWORD *)(a2 + 32);
  v7 = *(unsigned int *)(a2 + 12);
  v8 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 64) = KeGetCurrentThread();
  (*(void (__fastcall **)(__int64, __int64, __int64))(a2 + 24))(v8, v7, v6);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 2800));
  v10 = *(_QWORD *)(a2 + 48);
  v11 = *(_QWORD **)(a2 + 56);
  if ( *(_QWORD *)(v10 + 8) != a2 + 48 || *v11 != a2 + 48 )
    __fastfail(3u);
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 2800), v9);
  v12 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(a2 + 4) != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( v18 )
      {
        v19 = *(_QWORD *)(v18 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
        *(_DWORD *)v19 = 1716213608;
        *(_QWORD *)(v19 + 8) = 0LL;
        *(_QWORD *)(v19 + 16) = 0LL;
        *(_QWORD *)(v19 + 24) = a2;
      }
    }
  }
  ExFreePoolWithTag((PVOID)a2, 0);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v13 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  result = *(__int64 (__fastcall **)(__int64))(v13 + 4776);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(v12);
  return result;
}
