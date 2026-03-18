/*
 * XREFs of MiAllowProtectionChange @ 0x14007D578
 * Callers:
 *     MiResetVirtualMemory @ 0x14007CD40 (MiResetVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiArbitraryCodeBlocked @ 0x14007D6D0 (MiArbitraryCodeBlocked.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v10; // rbp
  unsigned int v11; // ebx
  __int64 v12; // rdx
  unsigned __int8 v13; // r15
  unsigned __int64 v14; // rax
  int v15; // ecx
  volatile LONG *SharedVm; // rax
  _BYTE v18[8]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-38h] BYREF
  int v21; // [rsp+B8h] [rbp+20h] BYREF

  if ( (a4 & 2) != 0 && (*(_BYTE *)(a3 + 48) & 0xC0) == 0xC0 && (*(_DWORD *)(a3 + 48) & 0x38) != 0 )
    return 3221225541LL;
  v10 = a1 + 1280;
  v11 = 0;
  v19 = 0LL;
  v13 = MiLockWorkingSetShared(a1 + 1280);
  v14 = a5;
  if ( a5 <= a6 )
  {
    while ( 1 )
    {
      LOBYTE(v12) = v13;
      MiQueryAddressState(v14, v12, a3, a1, 0, &v19, &v21, &v20, v18);
      v15 = v21;
      if ( v21 == -1 )
        v15 = 0;
      v21 = v15;
      if ( (v15 & 2) == 0 && (a4 & 2) != 0 || (v15 & 2) != 0 && (a4 & 4) != 0 )
        break;
      v14 = v20;
      if ( v20 > a6 )
        goto LABEL_8;
    }
    v11 = MiArbitraryCodeBlocked(a2);
  }
LABEL_8:
  SharedVm = (volatile LONG *)MiGetSharedVm(v10);
  ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
  __writecr8(v13);
  return v11;
}
