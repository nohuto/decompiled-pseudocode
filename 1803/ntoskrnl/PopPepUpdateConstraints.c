/*
 * XREFs of PopPepUpdateConstraints @ 0x140166FE0
 * Callers:
 *     PopPluginDevicePower @ 0x140078CD8 (PopPluginDevicePower.c)
 *     PopPepDeviceDState @ 0x140166F3C (PopPepDeviceDState.c)
 *     PopPepDeviceWaitWake @ 0x1402794F0 (PopPepDeviceWaitWake.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     PopPepCancelActivityRange @ 0x140078E5C (PopPepCancelActivityRange.c)
 *     PopPepCountReadyActivities @ 0x1400790A8 (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x1400790F0 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14007915C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x1400792EC (PopPepPromoteActivities.c)
 *     PopPepUpdateIdleState @ 0x140079874 (PopPepUpdateIdleState.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

int __fastcall PopPepUpdateConstraints(__int64 a1, int a2, char a3)
{
  __int64 v4; // r12
  KIRQL v6; // al
  unsigned __int8 v7; // r13
  unsigned int v8; // esi
  __int64 v9; // rdi
  unsigned int ready; // eax
  int result; // eax
  unsigned int j; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int i; // [rsp+70h] [rbp+18h]

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  v7 = v6;
  v8 = 0;
  for ( i = PopPepCountReadyActivities((unsigned int *)a1, 0LL, 3); v8 < *(_DWORD *)(a1 + 180); ++v8 )
  {
    v9 = 200LL * v8 + a1 + 184;
    if ( (*(_BYTE *)(v9 + 16) & 1) != 0 )
    {
      if ( a3 )
      {
        *(_DWORD *)(v9 + 4 * v4 + 152) = *(_DWORD *)(v9 + 188) - 1;
      }
      else
      {
        PopPepCancelActivityRange(v9 + 56, 1, 1, 1, (volatile signed __int32 *)(v9 + 104));
        *(_DWORD *)(v9 + 4 * v4 + 152) = 0;
        KeResetEvent((PRKEVENT)(v9 + 32));
      }
      PopPepUpdateIdleState(a1, v9, a3);
      if ( !a3 )
      {
        v14 = *(_QWORD *)(v9 + 64);
        if ( *(_DWORD *)v14 )
          *(_BYTE *)(v14 + 16) = 1;
        else
          KeSetEvent((PRKEVENT)(v9 + 32), 0, 0);
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
      v13 = 200LL * j;
      if ( (*(_BYTE *)(v13 + a1 + 200) & 1) != 0 )
        result = KeWaitForSingleObject((PVOID)(a1 + v13 + 216), Executive, 0, 0, 0LL);
    }
  }
  return result;
}
