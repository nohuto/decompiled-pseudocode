/*
 * XREFs of MiResetVirtualMemory @ 0x140127420
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiAllowProtectionChange @ 0x1400A64D8 (MiAllowProtectionChange.c)
 *     MiWalkVaRange @ 0x1400EBE20 (MiWalkVaRange.c)
 *     MiCheckSecuredVad @ 0x140462914 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiResetVirtualMemory(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, ULONG_PTR a4, int a5)
{
  int v5; // eax
  char v9; // r10
  __int64 result; // rax

  v5 = *(_DWORD *)(a4 + 48);
  v9 = (unsigned __int8)v5 >> 3;
  if ( (v5 & 0x8000) != 0 )
  {
    if ( (v5 & 0x4000) == 0 || (v9 & 4) != 0 || (int)MiCheckSecuredVad(a4, a2, a3 - a2 + 1, 4LL) >= 0 )
      goto LABEL_3;
    return 3221225550LL;
  }
  if ( *(_QWORD *)(**(_QWORD **)(a4 + 72) + 64LL) )
    return 3221226051LL;
  if ( (v9 & 4) == 0 )
    return 3221225550LL;
LABEL_3:
  if ( (*(_DWORD *)(a1 + 2088) & 0x100) == 0
    || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) != 0
    || (result = MiAllowProtectionChange((__int64)KeGetCurrentThread()->ApcState.Process, a1, a4, 4, a2, a3),
        (int)result >= 0) )
  {
    result = MiWalkVaRange(a2, a3, a4, a5 != 0x80000, 0LL);
    if ( a5 == 0x80000 )
      return 0LL;
  }
  return result;
}
