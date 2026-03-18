/*
 * XREFs of MiAllowProtectionChange @ 0x140062454
 * Callers:
 *     MiResetVirtualMemory @ 0x1400C9330 (MiResetVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiArbitraryCodeBlocked @ 0x1404D6800 (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v9; // r14
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // r8
  unsigned __int8 v13; // r12
  unsigned __int64 v14; // rax
  int v15; // ecx
  int v17; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+44h] [rbp-34h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-30h] BYREF

  if ( (a4 & 2) != 0 && (*(_BYTE *)(a3 + 48) & 0xC0) == 0xC0 && (*(_DWORD *)(a3 + 48) & 0x38) != 0 )
    return 3221225541LL;
  v9 = a1 + 1280;
  v10 = 0;
  v11 = 0;
  v13 = MiLockWorkingSetShared(a1 + 1280);
  v14 = a5;
  if ( a5 <= a6 )
  {
    while ( 1 )
    {
      MiQueryAddressState(v14, a6, v13, a3, a1, &v17, (__int64 *)&v19, &v18);
      v15 = v17;
      if ( v17 == -1 )
        v15 = 0;
      v17 = v15;
      if ( (v15 & 2) == 0 && (a4 & 2) != 0 || (v15 & 2) != 0 && (a4 & 4) != 0 )
        break;
      v14 = v19;
      if ( v19 > a6 )
        goto LABEL_11;
    }
    v11 = 1;
  }
LABEL_11:
  MiUnlockWorkingSetShared(v9, v13, v12);
  if ( v11 )
    return (unsigned int)MiArbitraryCodeBlocked(a2);
  return v10;
}
