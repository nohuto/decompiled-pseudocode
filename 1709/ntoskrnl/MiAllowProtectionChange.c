/*
 * XREFs of MiAllowProtectionChange @ 0x1400A64D8
 * Callers:
 *     MiResetVirtualMemory @ 0x140127420 (MiResetVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140498B10 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     MiArbitraryCodeBlocked @ 0x1404D5370 (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v10; // r14
  unsigned int v11; // ebx
  int v12; // edi
  KIRQL v13; // cl
  unsigned __int64 v14; // rax
  int v15; // ecx
  LONG *SharedVm; // rax
  int v18; // [rsp+54h] [rbp-44h] BYREF
  int v19; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-30h] BYREF
  KIRQL v22; // [rsp+B8h] [rbp+20h]

  if ( (a4 & 2) != 0 && (*(_BYTE *)(a3 + 48) & 0xC0) == 0xC0 && (*(_DWORD *)(a3 + 48) & 0x38) != 0 )
    return 3221225541LL;
  v10 = a1 + 1280;
  v11 = 0;
  v20 = 0LL;
  v12 = 0;
  v13 = MiLockWorkingSetShared(a1 + 1280);
  v22 = v13;
  v14 = a5;
  if ( a5 <= a6 )
  {
    while ( 1 )
    {
      MiQueryAddressState(v14, a6, v13, a3, a1, 0, &v20, &v18, (__int64 *)&v21, &v19);
      v15 = v18;
      if ( v18 == -1 )
        v15 = 0;
      v18 = v15;
      if ( (v15 & 2) == 0 && (a4 & 2) != 0 || (v15 & 2) != 0 && (a4 & 4) != 0 )
        break;
      v14 = v21;
      v13 = v22;
      if ( v21 > a6 )
        goto LABEL_11;
    }
    v12 = 1;
  }
LABEL_11:
  SharedVm = MiGetSharedVm(v10);
  ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
  __writecr8(v22);
  if ( v12 )
    return (unsigned int)MiArbitraryCodeBlocked(a2);
  return v11;
}
