/*
 * XREFs of ObpReferenceDeviceMap @ 0x1404C64B0
 * Callers:
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     ObQueryDeviceMapInformation @ 0x1404C75E0 (ObQueryDeviceMapInformation.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSilo @ 0x140089070 (PsGetCurrentServerSilo.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     PsReferenceImpersonationTokenEx @ 0x14049D120 (PsReferenceImpersonationTokenEx.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14056FCE0 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14056FDEC (SeGetTokenDeviceMap.c)
 */

__int64 __fastcall ObpReferenceDeviceMap(char a1)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v3; // rbx
  void *v4; // r15
  __int64 Process; // rsi
  __int64 ProcessServerSilo; // rdi
  __int64 *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *v8; // rax
  ULONG_PTR v9; // rdi
  void *v11; // rax
  bool v12; // bp
  _QWORD v13[9]; // [rsp+30h] [rbp-48h] BYREF
  bool v14; // [rsp+88h] [rbp+10h] BYREF
  char v15; // [rsp+90h] [rbp+18h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v12 = ProcessServerSilo != PsGetCurrentServerSilo();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || a1 )
  {
    if ( !v12 )
      goto LABEL_3;
  }
  else if ( !v12 )
  {
    v11 = PsReferenceImpersonationTokenEx((__int64)CurrentThread, 1, &v15, &v14, &v16, 0LL);
    v4 = v11;
    if ( !v11 )
      goto LABEL_3;
    if ( *((_QWORD *)v11 + 3) != 999LL )
    {
      if ( (int)SeGetTokenDeviceMap(v11, v13) >= 0 )
      {
        v3 = v13[0];
        if ( v13[0] )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v13[0] + 24LL));
          goto LABEL_9;
        }
      }
LABEL_3:
      if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
        goto LABEL_9;
      goto LABEL_4;
    }
    v12 = 1;
  }
LABEL_4:
  CurrentServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals();
  v8 = KeGetCurrentThread();
  --v8->SpecialApcDisable;
  v9 = (ULONG_PTR)(CurrentServerSiloGlobals + 15);
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  if ( v12 )
    v3 = *CurrentServerSiloGlobals;
  else
    v3 = *(_QWORD *)(Process + 1072);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 24));
  ExReleasePushLockEx(v9, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_9:
  if ( v4 )
    ObfDereferenceObject(v4);
  return v3;
}
