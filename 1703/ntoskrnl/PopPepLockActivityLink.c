/*
 * XREFs of PopPepLockActivityLink @ 0x14006AA68
 * Callers:
 *     PopPepProcessEvent @ 0x14006A588 (PopPepProcessEvent.c)
 *     PopPepComponentSetLatency @ 0x1401650B4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x140167A04 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x14022E2E8 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x14022E3C4 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepLockActivityLink(__int64 a1, volatile LONG *a2, unsigned int a3, unsigned int a4, KIRQL *a5)
{
  char v5; // bl
  KIRQL v9; // al
  bool v10; // zf
  KIRQL v11; // bp

  v5 = 0;
  if ( !a2 || *(_DWORD *)(a1 + 168) == 1 )
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
  v5 = 1;
  *a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  *(_BYTE *)(a1 + 125) = 1;
  return v5;
}
