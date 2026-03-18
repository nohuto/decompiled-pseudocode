/*
 * XREFs of ObpReferenceDeviceMap @ 0x1404FD200
 * Callers:
 *     ObQueryDeviceMapInformation @ 0x1404FCF70 (ObQueryDeviceMapInformation.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PsReferenceImpersonationTokenEx @ 0x1404C9060 (PsReferenceImpersonationTokenEx.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14055FBE0 (ObSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14055FCF8 (SeGetTokenDeviceMap.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  void *v13; // rax
  bool v14; // bp
  _QWORD v15[9]; // [rsp+30h] [rbp-48h] BYREF
  bool v16; // [rsp+88h] [rbp+10h] BYREF
  char v17; // [rsp+90h] [rbp+18h] BYREF
  int v18; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  Process = (__int64)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v14 = ProcessServerSilo != PsGetCurrentServerSilo();
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 || a1 )
  {
    if ( !v14 )
      goto LABEL_3;
  }
  else if ( !v14 )
  {
    v13 = PsReferenceImpersonationTokenEx((__int64)CurrentThread, 1, &v17, &v16, &v18, 0LL);
    v4 = v13;
    if ( !v13 )
      goto LABEL_3;
    if ( *((_QWORD *)v13 + 3) != 999LL )
    {
      if ( (int)SeGetTokenDeviceMap(v13, v15) >= 0 )
      {
        v3 = v15[0];
        if ( v15[0] )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v15[0] + 24LL));
          goto LABEL_9;
        }
      }
LABEL_3:
      if ( !*(_QWORD *)(Process + 1072) && (int)ObSetCurrentProcessDeviceMap() < 0 )
        goto LABEL_9;
      goto LABEL_4;
    }
    v14 = 1;
  }
LABEL_4:
  CurrentServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals();
  v8 = KeGetCurrentThread();
  --v8->SpecialApcDisable;
  v9 = (ULONG_PTR)(CurrentServerSiloGlobals + 15);
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 15), 0LL);
  if ( v14 )
    v3 = *CurrentServerSiloGlobals;
  else
    v3 = *(_QWORD *)(Process + 1072);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 24));
  ExReleasePushLockEx(v9, 0LL, v10, v11);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_9:
  if ( v4 )
    ObfDereferenceObject(v4);
  return v3;
}
