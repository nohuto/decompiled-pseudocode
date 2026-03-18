/*
 * XREFs of MiUpdatePfnPriority @ 0x140052938
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiUpdatePrefetchPriority @ 0x1400AE9F0 (MiUpdatePrefetchPriority.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 * Callees:
 *     MiRelinkStandbyPage @ 0x1400810F8 (MiRelinkStandbyPage.c)
 *     MiIsPteInStore @ 0x1400C62F4 (MiIsPteInStore.c)
 */

char __fastcall MiUpdatePfnPriority(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  ULONG_PTR v3; // r11
  char v4; // cl
  char v5; // bl
  unsigned int v6; // r9d
  char v7; // al

  v3 = BugCheckParameter2;
  v4 = *(_BYTE *)(BugCheckParameter2 + 35);
  v5 = -1;
  if ( (v4 & 8) != 0 )
    v6 = 5;
  else
    v6 = v4 & 7;
  if ( a2 != v6 && (a2 >= v6 || a3 && (v6 <= 5 || (*(_QWORD *)(v3 + 40) & 0x200000000000000LL) == 0)) )
  {
    v7 = *(_BYTE *)(v3 + 34) & 7;
    if ( v7 == 2 )
    {
      if ( v6
        || (*(_DWORD *)(v3 + 16) & 0x400LL) != 0
        || !(unsigned int)MiIsPteInStore(
                            *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL)),
                            *(_QWORD *)(v3 + 16)) )
      {
        MiRelinkStandbyPage(v3);
      }
    }
    else if ( v7 != 6 || (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || a2 >= v6 )
    {
      *(_BYTE *)(v3 + 35) = v4 ^ (a2 ^ v4) & 7;
      if ( v6 < 5 )
      {
        v5 = -1;
        if ( a2 == 5 )
          return 0;
      }
      else if ( a2 < 5 )
      {
        return 7;
      }
    }
  }
  return v5;
}
