/*
 * XREFs of MiGetPfnProtection @ 0x1400B4D10
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MiRevokeExecutePte @ 0x1400B4C60 (MiRevokeExecutePte.c)
 *     MiQueryLeafPte @ 0x140140950 (MiQueryLeafPte.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     MiGetWsleContents @ 0x140125350 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x140128180 (MiGetWsleProtection.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r10
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r9
  _KPROCESS *Process; // rcx

  LOBYTE(v2) = MiGetWsleContents(a1, a2);
  result = MiGetWsleProtection(v3, v2);
  if ( !(_DWORD)result )
  {
    v6 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v5 + 16);
    v8 = *(_QWORD *)(v7 + 8);
    LODWORD(v9) = v6;
    if ( v8 < 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress((__int64)Process, v8 | 0x8000000000000000uLL) )
          LODWORD(v9) = MmMakeProtectNotWriteCopy[v9];
      }
      return (unsigned int)v9;
    }
    else
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[v6];
    }
  }
  return result;
}
