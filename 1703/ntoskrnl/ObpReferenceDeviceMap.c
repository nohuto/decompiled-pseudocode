/*
 * XREFs of ObpReferenceDeviceMap @ 0x1404EC98C
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x1404EC6F0 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14046870C (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x140468818 (SeGetTokenDeviceMap.c)
 *     PsReferenceImpersonationTokenEx @ 0x14050C610 (PsReferenceImpersonationTokenEx.c)
 */

__int64 __fastcall ObpReferenceDeviceMap(char a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v3; // rdi
  void *v4; // rsi
  __int64 Process; // r14
  __int64 ProcessServerSilo; // rbx
  bool v7; // zf
  bool v8; // bp
  __int64 *CurrentServerSiloGlobals; // rdi
  struct _KTHREAD *v10; // rax
  ULONG_PTR v11; // rbx
  __int64 v13; // rax
  _QWORD v14[9]; // [rsp+30h] [rbp-48h] BYREF
  char v15; // [rsp+88h] [rbp+10h] BYREF
  char v16; // [rsp+90h] [rbp+18h] BYREF
  char v17; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v7 = ProcessServerSilo == PsGetCurrentServerSilo();
  v8 = !v7;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || a1 )
  {
    if ( v7 )
      goto LABEL_3;
  }
  else if ( v7 )
  {
    v13 = PsReferenceImpersonationTokenEx(
            (_DWORD)CurrentThread,
            1,
            (unsigned int)&v16,
            (unsigned int)&v15,
            (__int64)&v17,
            0LL);
    v4 = (void *)v13;
    if ( !v13 )
      goto LABEL_3;
    if ( *(_QWORD *)(v13 + 24) != 999LL )
    {
      if ( SeGetTokenDeviceMap(v13, v14) >= 0 )
      {
        v3 = v14[0];
        if ( v14[0] )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v14[0] + 24LL));
          goto LABEL_9;
        }
      }
LABEL_3:
      if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
        goto LABEL_9;
      goto LABEL_4;
    }
    v8 = 1;
  }
LABEL_4:
  CurrentServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals();
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  v11 = (ULONG_PTR)(CurrentServerSiloGlobals + 15);
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  if ( v8 )
    v3 = *CurrentServerSiloGlobals;
  else
    v3 = *(_QWORD *)(Process + 1072);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 24));
  ExReleasePushLockEx(v11, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_9:
  if ( v4 )
    ObfDereferenceObject(v4);
  return v3;
}
