/*
 * XREFs of PopPepReleaseActivityLink @ 0x14006A720
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x140069F14 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x14006A588 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x14013D57C (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1401459A0 (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x1401650B4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x140167A04 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x14022E2E8 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14022E3C4 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall PopPepReleaseActivityLink(__int64 a1, volatile LONG *a2, char a3, unsigned __int8 a4)
{
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  __int64 result; // rax

  if ( a3 == 1 )
  {
    v6 = 0;
    v7 = (_QWORD *)(a1 + 72);
    while ( !*v7 || !*(_DWORD *)*v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= 6 )
      {
        if ( *(_BYTE *)(a1 + 136) )
          *(_BYTE *)(a1 + 125) = 0;
        break;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(a2);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  }
  result = a4;
  __writecr8(a4);
  return result;
}
