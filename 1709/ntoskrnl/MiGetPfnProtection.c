/*
 * XREFs of MiGetPfnProtection @ 0x1400E69D0
 * Callers:
 *     MiQueryLeafPte @ 0x140008180 (MiQueryLeafPte.c)
 *     MiGetWorkingSetInfoList @ 0x14010B360 (MiGetWorkingSetInfoList.c)
 *     MiRevokeExecutePte @ 0x140125040 (MiRevokeExecutePte.c)
 * Callees:
 *     MiGetWsleContents @ 0x1400E9E90 (MiGetWsleContents.c)
 *     MiGetWsleProtection @ 0x1400E9F0C (MiGetWsleProtection.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // r10
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // r9
  _KPROCESS *Process; // rcx

  LOBYTE(v2) = MiGetWsleContents(a1, a2);
  result = MiGetWsleProtection(v4, v2, v3, v4);
  if ( !(_DWORD)result )
  {
    v7 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v6 + 16);
    v10 = *(_QWORD *)(v9 + 8);
    LODWORD(v11) = v7;
    if ( v10 < 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress(Process, v10 | 0x8000000000000000uLL, v8, v7) )
          LODWORD(v11) = MmMakeProtectNotWriteCopy[v11];
      }
      return (unsigned int)v11;
    }
    else
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[v7];
    }
  }
  return result;
}
