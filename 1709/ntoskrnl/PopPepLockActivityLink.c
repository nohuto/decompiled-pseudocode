/*
 * XREFs of PopPepLockActivityLink @ 0x14001B5E8
 * Callers:
 *     PopPepProcessEvent @ 0x14001B108 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x14014749C (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14015C184 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x140242498 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x140242574 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

char __fastcall PopPepLockActivityLink(__int64 a1, volatile LONG *a2, unsigned int a3, unsigned int a4, KIRQL *a5)
{
  char v5; // bp
  KIRQL v9; // al
  bool v10; // zf
  KIRQL v11; // si

  v5 = 0;
  if ( !a2 || *(_DWORD *)(a1 + 180) == 1 )
    goto LABEL_3;
  if ( a3 == 6 )
  {
    if ( a4 == 6 )
      goto LABEL_3;
  }
  else if ( a3 <= 5 && *((_BYTE *)&ActivityAttributes + 136 * (int)a3) == 1 )
  {
    goto LABEL_3;
  }
  if ( a4 > 5 || *((_BYTE *)&ActivityAttributes + 136 * (int)a4) != 1 )
  {
    v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
    v10 = *(_BYTE *)(a1 + 125) == 1;
    v11 = v9;
    *a5 = v9;
    if ( !v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(a2);
      return v5;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    __writecr8(v11);
  }
LABEL_3:
  *a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  v5 = 1;
  *(_BYTE *)(a1 + 125) = 1;
  return v5;
}
