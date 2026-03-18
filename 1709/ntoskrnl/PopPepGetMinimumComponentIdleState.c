/*
 * XREFs of PopPepGetMinimumComponentIdleState @ 0x1402427D4
 * Callers:
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14023F168 (PopFxSetDeviceAccountingCsPlatformState.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetMinimumComponentIdleState(__int64 a1, unsigned int a2, char a3, unsigned int *a4)
{
  __int64 v5; // r13
  char v6; // bp
  int v8; // r15d
  KIRQL v9; // al
  int v10; // esi
  unsigned __int64 v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // r8d

  v5 = a2;
  v6 = 0;
  v8 = 1 << a3;
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v10 = *(_DWORD *)(a1 + 172);
  v11 = v9;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(v11);
  if ( v10 == 2 )
  {
    v12 = 0;
    v13 = *(_DWORD *)(200 * v5 + a1 + 372);
    if ( v13 )
    {
      do
      {
        if ( (v8 & *(_DWORD *)(*(_QWORD *)(200 * v5 + a1 + 376) + 24LL * v12 + 16)) == 0 )
          break;
        ++v12;
      }
      while ( v12 < v13 );
    }
    if ( v12 < v13 )
    {
      *a4 = v12;
      return 1;
    }
  }
  return v6;
}
