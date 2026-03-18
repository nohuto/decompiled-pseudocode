/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x14022F458
 * Callers:
 *     PpmUpdateIdleVeto @ 0x140229B4C (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x14022B4C8 (PopFxPlatformStateAvailable.c)
 *     PdcPoResiliencyClient @ 0x1406CB3C0 (PdcPoResiliencyClient.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14022F3F0 (PopAccumulateNonActivatedCpuTime.c)
 */

__int64 __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  KIRQL v2; // di
  char v3; // cl
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_14036E248);
  if ( a1 )
  {
    if ( ++dword_14036E244 == 1 )
    {
      v3 = 0;
LABEL_6:
      PopAccumulateNonActivatedCpuTime(v3, &qword_14036E1B8, &qword_14036E1C0);
    }
  }
  else if ( !--dword_14036E244 )
  {
    v3 = 1;
    goto LABEL_6;
  }
  KxReleaseSpinLock(&qword_14036E248);
  result = v2;
  __writecr8(v2);
  return result;
}
