/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x140243650
 * Callers:
 *     PpmUpdateIdleVeto @ 0x14023CA00 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x14023E838 (PopFxPlatformStateAvailable.c)
 *     PdcPoResiliencyClient @ 0x1406FF380 (PdcPoResiliencyClient.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1402435E8 (PopAccumulateNonActivatedCpuTime.c)
 */

__int64 __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  KIRQL v2; // di
  char v3; // cl
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140389CC8);
  if ( a1 )
  {
    if ( ++dword_140389CC4 == 1 )
    {
      v3 = 0;
LABEL_6:
      PopAccumulateNonActivatedCpuTime(v3, &qword_140389C38, &qword_140389C40);
    }
  }
  else if ( !--dword_140389CC4 )
  {
    v3 = 1;
    goto LABEL_6;
  }
  KxReleaseSpinLock(&qword_140389CC8);
  result = v2;
  __writecr8(v2);
  return result;
}
