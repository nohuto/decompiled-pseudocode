/*
 * XREFs of MiUpdatePfnPriority @ 0x1401020F8
 * Callers:
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14007F294 (MiDeprioritizeVirtualAddresses.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiUpdatePrefetchPriority @ 0x1400FCFF0 (MiUpdatePrefetchPriority.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiPfPutPagesInTransition @ 0x140108850 (MiPfPutPagesInTransition.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiRelinkStandbyPage @ 0x1400CBAFC (MiRelinkStandbyPage.c)
 */

char __fastcall MiUpdatePfnPriority(__int64 a1)
{
  char v1; // bl
  unsigned int PfnPriority; // eax
  unsigned int v3; // edx
  ULONG_PTR v4; // rcx
  int v5; // r8d
  unsigned int v6; // r9d
  char v7; // al

  v1 = -1;
  PfnPriority = MiGetPfnPriority(a1);
  v6 = PfnPriority;
  if ( v3 != PfnPriority
    && (v3 >= PfnPriority || v5 && (PfnPriority <= 5 || (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) == 0)) )
  {
    v7 = *(_BYTE *)(v4 + 34) & 7;
    if ( v7 == 2 )
    {
      MiRelinkStandbyPage(v4, v3);
    }
    else if ( v7 != 6 || (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || v3 >= v6 )
    {
      *(_BYTE *)(v4 + 35) ^= (v3 ^ *(_BYTE *)(v4 + 35)) & 7;
      if ( v6 >= 5 )
      {
        if ( v3 < 5 )
          return 7;
      }
      else
      {
        v1 = -1;
        if ( v3 == 5 )
          return 0;
      }
    }
  }
  return v1;
}
