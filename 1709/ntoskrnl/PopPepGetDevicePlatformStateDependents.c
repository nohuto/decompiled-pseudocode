/*
 * XREFs of PopPepGetDevicePlatformStateDependents @ 0x14000D208
 * Callers:
 *     PopDiagTraceDeviceVerboseRundown @ 0x14044DB70 (PopDiagTraceDeviceVerboseRundown.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetDevicePlatformStateDependents(__int64 a1, _DWORD *a2)
{
  KIRQL v4; // bp
  int *v6; // r8
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int i; // r8d
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx

  *a2 = 0;
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    v6 = (int *)(a1 + 144);
    v7 = 3LL;
    do
    {
      v8 = *v6++;
      *a2 |= v8;
      --v7;
    }
    while ( v7 );
    for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
    {
      v10 = 0LL;
      v11 = 200LL * i;
      if ( *(_DWORD *)(v11 + a1 + 372) )
      {
        do
        {
          v12 = 3 * v10;
          v10 = (unsigned int)(v10 + 1);
          *a2 |= *(_DWORD *)(*(_QWORD *)(v11 + a1 + 376) + 8 * v12 + 16);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v11 + a1 + 372) );
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(v4);
  return 0;
}
