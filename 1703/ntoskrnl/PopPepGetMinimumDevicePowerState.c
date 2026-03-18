/*
 * XREFs of PopPepGetMinimumDevicePowerState @ 0x14022E69C
 * Callers:
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14022BDAC (PopFxSetDeviceAccountingCsPlatformState.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetMinimumDevicePowerState(__int64 a1, char a2, unsigned int *a3)
{
  unsigned int v4; // ebp
  int v6; // r15d
  KIRQL v7; // al
  int v8; // esi
  unsigned __int64 v9; // rbx
  _DWORD *v10; // rcx
  unsigned int v11; // eax

  v4 = 0;
  v6 = 1 << a2;
  v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v8 = *(_DWORD *)(a1 + 160);
  v9 = v7;
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(v9);
  if ( v8 == 2 )
  {
    v10 = (_DWORD *)(a1 + 144);
    do
    {
      if ( (v6 & *v10) == 0 )
        break;
      ++v4;
      ++v10;
    }
    while ( v4 < 3 );
    v11 = v4 + 1;
    LOBYTE(v4) = 1;
    *a3 = v11;
  }
  return v4;
}
