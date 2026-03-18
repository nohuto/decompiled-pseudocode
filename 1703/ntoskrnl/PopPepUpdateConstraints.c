/*
 * XREFs of PopPepUpdateConstraints @ 0x1401459A0
 * Callers:
 *     PopPluginDevicePower @ 0x14006A308 (PopPluginDevicePower.c)
 *     PopPepDeviceWaitWake @ 0x1401401E4 (PopPepDeviceWaitWake.c)
 *     PopPepDeviceDState @ 0x140145904 (PopPepDeviceDState.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     PopPepCancelActivityRange @ 0x14006A48C (PopPepCancelActivityRange.c)
 *     PopPepCountReadyActivities @ 0x14006A6D8 (PopPepCountReadyActivities.c)
 *     PopPepReleaseActivityLink @ 0x14006A720 (PopPepReleaseActivityLink.c)
 *     PopPepRequestWork @ 0x14006A78C (PopPepRequestWork.c)
 *     PopPepPromoteActivities @ 0x14006A91C (PopPepPromoteActivities.c)
 *     PopPepUpdateIdleState @ 0x14006AEE4 (PopPepUpdateIdleState.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

int __fastcall PopPepUpdateConstraints(__int64 a1, int a2, char a3)
{
  __int64 v4; // r14
  KIRQL v6; // al
  unsigned __int8 v7; // r15
  unsigned int v8; // esi
  unsigned int i; // r12d
  __int64 v10; // rdi
  unsigned int ready; // eax
  int result; // eax
  unsigned int j; // edi
  __int64 v14; // rcx
  __int64 v15; // rax

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  v7 = v6;
  v8 = 0;
  for ( i = PopPepCountReadyActivities((unsigned int *)a1, 0LL, 3); v8 < *(_DWORD *)(a1 + 168); ++v8 )
  {
    v10 = 200LL * v8 + a1 + 176;
    if ( (*(_BYTE *)(v10 + 16) & 1) != 0 )
    {
      if ( a3 )
      {
        *(_DWORD *)(v10 + 4 * v4 + 152) = *(_DWORD *)(v10 + 188) - 1;
      }
      else
      {
        PopPepCancelActivityRange(v10 + 56, 1, 1, 1, (volatile signed __int32 *)(v10 + 104));
        *(_DWORD *)(v10 + 4 * v4 + 152) = 0;
        KeResetEvent((PRKEVENT)(v10 + 32));
      }
      PopPepUpdateIdleState(a1, v10, a3);
      v15 = *(_QWORD *)(v10 + 64);
      if ( !a3 )
      {
        if ( *(_DWORD *)v15 )
          *(_BYTE *)(v15 + 16) = 1;
        else
          KeSetEvent((PRKEVENT)(v10 + 32), 0, 0);
      }
    }
  }
  PopPepPromoteActivities(a1, 0LL, 3);
  ready = PopPepCountReadyActivities((unsigned int *)a1, 0LL, 3);
  PopPepRequestWork(i, ready);
  result = PopPepReleaseActivityLink(a1, 0LL, 1, v7);
  if ( !a3 )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 168); ++j )
    {
      result = j;
      v14 = 200LL * j;
      if ( (*(_BYTE *)(v14 + a1 + 192) & 1) != 0 )
        result = KeWaitForSingleObject((PVOID)(a1 + v14 + 208), Executive, 0, 0, 0LL);
    }
  }
  return result;
}
