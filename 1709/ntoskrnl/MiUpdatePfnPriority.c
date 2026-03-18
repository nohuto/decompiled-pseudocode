/*
 * XREFs of MiUpdatePfnPriority @ 0x1400EDFC4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiUpdatePrefetchPriority @ 0x140113880 (MiUpdatePrefetchPriority.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140152114 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiRelinkStandbyPage @ 0x1400F0F68 (MiRelinkStandbyPage.c)
 */

char __fastcall MiUpdatePfnPriority(__int64 a1)
{
  char v1; // bl
  unsigned int PfnPriority; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r8d
  unsigned int v6; // r9d
  char v7; // al

  v1 = -1;
  PfnPriority = MiGetPfnPriority(a1);
  v6 = PfnPriority;
  if ( (_DWORD)v3 != PfnPriority
    && ((unsigned int)v3 >= PfnPriority || v5 && (PfnPriority <= 5 || (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) == 0)) )
  {
    v7 = *(_BYTE *)(v4 + 34) & 7;
    if ( v7 == 2 )
    {
      MiRelinkStandbyPage(v4, v3);
    }
    else if ( v7 != 6 || (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || (unsigned int)v3 >= v6 )
    {
      *(_BYTE *)(v4 + 35) ^= (v3 ^ *(_BYTE *)(v4 + 35)) & 7;
      if ( v6 < 5 )
      {
        v1 = -1;
        if ( (_DWORD)v3 == 5 )
          return 0;
      }
      else if ( (unsigned int)v3 < 5 )
      {
        return 7;
      }
    }
  }
  return v1;
}
