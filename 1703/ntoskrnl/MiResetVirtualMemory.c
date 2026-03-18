/*
 * XREFs of MiResetVirtualMemory @ 0x14007CD40
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiAllowProtectionChange @ 0x14007D578 (MiAllowProtectionChange.c)
 *     MiCheckSecuredVad @ 0x14047B694 (MiCheckSecuredVad.c)
 */

__int64 __fastcall MiResetVirtualMemory(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
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
  if ( (*(_DWORD *)(a1 + 768) & 0x400) == 0
    || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) != 0
    || (result = MiAllowProtectionChange(KeGetCurrentThread()->ApcState.Process, a1, a4, 4, a2, a3), (int)result >= 0) )
  {
    result = MiWalkVaRange(a2, a3, a4, a5 != 0x80000, 0LL);
    if ( a5 == 0x80000 )
      return 0LL;
  }
  return result;
}
