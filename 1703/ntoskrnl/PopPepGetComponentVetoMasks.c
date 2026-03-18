/*
 * XREFs of PopPepGetComponentVetoMasks @ 0x14022E4AC
 * Callers:
 *     PopFxTraceDeviceRegistration @ 0x140453DB0 (PopFxTraceDeviceRegistration.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetComponentVetoMasks(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rbp
  KIRQL v7; // al
  int v8; // esi
  unsigned __int64 v9; // rbx

  v5 = 200LL * a2;
  v6 = 0LL;
  v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v8 = *(_DWORD *)(a1 + 160);
  v9 = v7;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(v9);
  if ( v8 == 2 )
  {
    if ( *(_DWORD *)(v5 + a1 + 364) )
    {
      do
      {
        *(_DWORD *)(a3 + 4 * v6) = *(_DWORD *)(*(_QWORD *)(v5 + a1 + 368) + 24 * v6 + 16);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *(_DWORD *)(v5 + a1 + 364) );
    }
    LOBYTE(v6) = 1;
  }
  return v6;
}
