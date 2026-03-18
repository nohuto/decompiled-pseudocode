/*
 * XREFs of FsRtlpOplockKeysEqual @ 0x140066EE0
 * Callers:
 *     FsRtlpOplockBreakToII @ 0x140064EE8 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400655BC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     FsRtlpRequestShareableOplock @ 0x140067600 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1400B7088 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToNone @ 0x1400D21C0 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14014A828 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015D818 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockKeysEqual @ 0x14015F480 (FsRtlOplockKeysEqual.c)
 * Callees:
 *     IoGetOplockKeyContextEx @ 0x140067150 (IoGetOplockKeyContextEx.c)
 */

bool __fastcall FsRtlpOplockKeysEqual(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int16 v8; // cx
  int v9; // edi
  int v11; // ecx
  __int64 v13; // rbp
  __int64 OplockKeyContext; // rax
  __int64 v15; // r8

  if ( (a3 & 0x40) != 0 )
  {
    if ( !a1 )
      return 0;
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL);
    if ( !v13 )
      return 0;
    if ( !*(_QWORD *)(v13 + 136) )
      return 0;
    OplockKeyContext = IoGetOplockKeyContextEx(a1);
    if ( !OplockKeyContext )
      return 0;
    if ( (*(_BYTE *)(OplockKeyContext + 2) & 1) == 0 )
      return 0;
    v15 = *(_QWORD *)(v13 + 136);
    if ( *(_DWORD *)(OplockKeyContext + 4) != *(_DWORD *)v15
      || *(_WORD *)(OplockKeyContext + 8) != *(_WORD *)(v15 + 4)
      || *(_WORD *)(OplockKeyContext + 10) != *(_WORD *)(v15 + 6)
      || *(_BYTE *)(OplockKeyContext + 12) != *(_BYTE *)(v15 + 8)
      || *(_BYTE *)(OplockKeyContext + 13) != *(_BYTE *)(v15 + 9)
      || *(_BYTE *)(OplockKeyContext + 14) != *(_BYTE *)(v15 + 10)
      || *(_BYTE *)(OplockKeyContext + 15) != *(_BYTE *)(v15 + 11)
      || *(_BYTE *)(OplockKeyContext + 16) != *(_BYTE *)(v15 + 12)
      || *(_BYTE *)(OplockKeyContext + 17) != *(_BYTE *)(v15 + 13)
      || *(_BYTE *)(OplockKeyContext + 18) != *(_BYTE *)(v15 + 14)
      || *(_BYTE *)(OplockKeyContext + 19) != *(_BYTE *)(v15 + 15) )
    {
      return 0;
    }
  }
  if ( !a1 || !a2 )
    return 0;
  if ( a1 != a2 )
  {
    v6 = IoGetOplockKeyContextEx(a1);
    v7 = IoGetOplockKeyContextEx(a2);
    if ( !v6 || !v7 || (*(_BYTE *)(v7 + 2) & 2) == 0 )
      return 0;
    v8 = *(_WORD *)(v6 + 2);
    v9 = a3 & 0x10;
    if ( v9 ? (v8 & 1) == 0 : (v8 & 2) == 0 )
      return 0;
    v11 = *(_DWORD *)(v7 + 20);
    if ( !v9 )
      return *(_DWORD *)(v6 + 20) == v11
          && *(_WORD *)(v6 + 24) == *(_WORD *)(v7 + 24)
          && *(_WORD *)(v6 + 26) == *(_WORD *)(v7 + 26)
          && *(_BYTE *)(v6 + 28) == *(_BYTE *)(v7 + 28)
          && *(_BYTE *)(v6 + 29) == *(_BYTE *)(v7 + 29)
          && *(_BYTE *)(v6 + 30) == *(_BYTE *)(v7 + 30)
          && *(_BYTE *)(v6 + 31) == *(_BYTE *)(v7 + 31)
          && *(_BYTE *)(v6 + 32) == *(_BYTE *)(v7 + 32)
          && *(_BYTE *)(v6 + 33) == *(_BYTE *)(v7 + 33)
          && *(_BYTE *)(v6 + 34) == *(_BYTE *)(v7 + 34)
          && *(_BYTE *)(v6 + 35) == *(_BYTE *)(v7 + 35);
    if ( *(_DWORD *)(v6 + 4) != v11
      || *(_WORD *)(v6 + 8) != *(_WORD *)(v7 + 24)
      || *(_WORD *)(v6 + 10) != *(_WORD *)(v7 + 26)
      || *(_BYTE *)(v6 + 12) != *(_BYTE *)(v7 + 28)
      || *(_BYTE *)(v6 + 13) != *(_BYTE *)(v7 + 29)
      || *(_BYTE *)(v6 + 14) != *(_BYTE *)(v7 + 30)
      || *(_BYTE *)(v6 + 15) != *(_BYTE *)(v7 + 31)
      || *(_BYTE *)(v6 + 16) != *(_BYTE *)(v7 + 32)
      || *(_BYTE *)(v6 + 17) != *(_BYTE *)(v7 + 33)
      || *(_BYTE *)(v6 + 18) != *(_BYTE *)(v7 + 34)
      || *(_BYTE *)(v6 + 19) != *(_BYTE *)(v7 + 35) )
    {
      return 0;
    }
  }
  return 1;
}
