/*
 * XREFs of PopPepUpdateConstraints @ 0x1401235A0
 * Callers:
 *     PopPluginDevicePower @ 0x14001AE88 (PopPluginDevicePower.c)
 *     PopPepDeviceDState @ 0x140123504 (PopPepDeviceDState.c)
 *     PopPepDeviceWaitWake @ 0x14024265C (PopPepDeviceWaitWake.c)
 * Callees:
 *     PopPepCancelActivityRange @ 0x14001B00C (PopPepCancelActivityRange.c)
 *     PopPepCountReadyActivities @ 0x14001B258 (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x14001B2A0 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14001B30C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x14001B49C (PopPepPromoteActivities.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PopPepUpdateIdleState @ 0x140123A34 (PopPepUpdateIdleState.c)
 */

int __fastcall PopPepUpdateConstraints(__int64 a1, int a2, char a3)
{
  __int64 v4; // r14
  KIRQL v6; // al
  unsigned __int8 v7; // r15
  unsigned int v8; // esi
  __int64 v9; // r8
  unsigned int i; // r12d
  __int64 v11; // rdi
  unsigned int ready; // eax
  int result; // eax
  unsigned int j; // edi
  __int64 v15; // rcx
  __int64 v16; // rax

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  v7 = v6;
  v8 = 0;
  for ( i = PopPepCountReadyActivities((unsigned int *)a1, 0LL, 3); v8 < *(_DWORD *)(a1 + 180); ++v8 )
  {
    v11 = 200LL * v8 + a1 + 184;
    if ( (*(_BYTE *)(v11 + 16) & 1) != 0 )
    {
      if ( a3 )
      {
        *(_DWORD *)(v11 + 4 * v4 + 152) = *(_DWORD *)(v11 + 188) - 1;
      }
      else
      {
        PopPepCancelActivityRange(v11 + 56, 1, 1, 1, (volatile signed __int32 *)(v11 + 104));
        *(_DWORD *)(v11 + 4 * v4 + 152) = 0;
        KeResetEvent((PRKEVENT)(v11 + 32));
      }
      LOBYTE(v9) = a3;
      PopPepUpdateIdleState(a1, v11, v9);
      if ( !a3 )
      {
        v16 = *(_QWORD *)(v11 + 64);
        if ( *(_DWORD *)v16 )
          *(_BYTE *)(v16 + 16) = 1;
        else
          KeSetEvent((PRKEVENT)(v11 + 32), 0, 0);
      }
    }
  }
  PopPepPromoteActivities(a1, 0LL, 3);
  ready = PopPepCountReadyActivities((unsigned int *)a1, 0LL, 3);
  PopPepRequestWork(i, ready);
  result = PopPepReleaseActivityLink(a1, 0LL, 1, v7);
  if ( !a3 )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 180); ++j )
    {
      result = j;
      v15 = 200LL * j;
      if ( (*(_BYTE *)(v15 + a1 + 200) & 1) != 0 )
        result = KeWaitForSingleObject((PVOID)(a1 + v15 + 216), Executive, 0, 0, 0LL);
    }
  }
  return result;
}
