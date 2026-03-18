/*
 * XREFs of PopPepGetDevicePlatformStateDependents @ 0x140034F38
 * Callers:
 *     PopDiagTraceDeviceVerboseRundown @ 0x140453BF4 (PopDiagTraceDeviceVerboseRundown.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetDevicePlatformStateDependents(__int64 a1, _DWORD *a2)
{
  KIRQL v4; // al
  int v5; // esi
  unsigned __int64 v6; // rbx
  int *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx

  *a2 = 0;
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v5 = *(_DWORD *)(a1 + 160);
  v6 = v4;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(v6);
  if ( v5 == 2 )
  {
    v8 = (int *)(a1 + 144);
    v9 = 3LL;
    do
    {
      v10 = *v8++;
      *a2 |= v10;
      --v9;
    }
    while ( v9 );
    if ( *(_DWORD *)(a1 + 168) )
    {
      do
      {
        v11 = 0LL;
        v12 = 200LL * (unsigned int)v9;
        if ( *(_DWORD *)(v12 + a1 + 364) )
        {
          do
          {
            v13 = 3 * v11;
            v11 = (unsigned int)(v11 + 1);
            *a2 |= *(_DWORD *)(*(_QWORD *)(v12 + a1 + 368) + 8 * v13 + 16);
          }
          while ( (unsigned int)v11 < *(_DWORD *)(v12 + a1 + 364) );
        }
        LODWORD(v9) = v9 + 1;
      }
      while ( (unsigned int)v9 < *(_DWORD *)(a1 + 168) );
    }
  }
  return 0;
}
