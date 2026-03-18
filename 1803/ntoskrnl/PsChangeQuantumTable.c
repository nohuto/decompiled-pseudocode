/*
 * XREFs of PsChangeQuantumTable @ 0x1406116A8
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x140006260 (MmIsThisAnNtAsSystem.c)
 *     KeSetQuantumProcess @ 0x14006B758 (KeSetQuantumProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PspUnlockProcessListShared @ 0x14016C21C (PspUnlockProcessListShared.c)
 *     PspComputeQuantum @ 0x1404F013C (PspComputeQuantum.c)
 */

char __fastcall PsChangeQuantumTable(char a1, char a2)
{
  unsigned int v3; // eax
  int v5; // eax
  char *v6; // rbx
  int v7; // edi
  char result; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *i; // rbx
  char v11; // al
  __int64 v12; // r8

  v3 = a2 & 3;
  if ( v3 >= 2 )
    v3 = 2;
  PsPrioritySeparation = v3;
  v5 = a2 & 0xC;
  if ( v5 == 4 )
  {
    v6 = (char *)&PspVariableQuantums;
  }
  else if ( v5 == 8 )
  {
    v6 = PspFixedQuantums;
  }
  else
  {
    v6 = PspFixedQuantums;
    if ( !MmIsThisAnNtAsSystem() )
      v6 = (char *)&PspVariableQuantums;
  }
  v7 = a2 & 0x30;
  if ( v7 == 16 || v7 != 32 && MmIsThisAnNtAsSystem() )
    v6 += 3;
  PspForegroundQuantum = *(_WORD *)v6;
  result = v6[2];
  PspUseJobSchedulingClasses = v6 == byte_1407F8F5B;
  byte_14086271A = result;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
    {
      v11 = PspComputeQuantum((__int64)(i - 93), *((_BYTE *)i + 722));
      KeSetQuantumProcess(v12, v11);
    }
    return PspUnlockProcessListShared((__int64)CurrentThread);
  }
  return result;
}
