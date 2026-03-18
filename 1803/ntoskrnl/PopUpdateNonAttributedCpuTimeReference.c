/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x14027A6C4
 * Callers:
 *     PpmUpdateIdleVeto @ 0x140273FE0 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x140275BA8 (PopFxPlatformStateAvailable.c)
 *     PdcPoResiliencyClient @ 0x140764CE0 (PdcPoResiliencyClient.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14027A65C (PopAccumulateNonActivatedCpuTime.c)
 */

__int64 __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  KIRQL v2; // di
  char v3; // cl
  __int64 result; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_1403CDB08);
  if ( a1 )
  {
    if ( ++dword_1403CDB04 == 1 )
    {
      v3 = 0;
LABEL_6:
      PopAccumulateNonActivatedCpuTime(v3, &qword_1403CDA38, &qword_1403CDA40);
    }
  }
  else if ( !--dword_1403CDB04 )
  {
    v3 = 1;
    goto LABEL_6;
  }
  KxReleaseSpinLock(&qword_1403CDB08);
  result = v2;
  __writecr8(v2);
  return result;
}
