/*
 * XREFs of MiGetPfnProtection @ 0x140078704
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiRevokeExecutePte @ 0x140078450 (MiRevokeExecutePte.c)
 *     MiQueryLeafPte @ 0x140078520 (MiQueryLeafPte.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x1400FBF20 (MiGetWsleProtection.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r10
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r9
  _KPROCESS *Process; // rcx

  LOBYTE(v2) = MiGetWsleContents(a1, a2);
  result = MiGetWsleProtection(v3, v2);
  if ( !(_DWORD)result )
  {
    v6 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v5 + 16);
    v9 = *(_QWORD *)(v8 + 8);
    LODWORD(v10) = v6;
    if ( v9 < 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress(Process, v9 | 0x8000000000000000uLL, v7, v6) )
          LODWORD(v10) = MmMakeProtectNotWriteCopy[v10];
      }
      return (unsigned int)v10;
    }
    else
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[v6];
    }
  }
  return result;
}
