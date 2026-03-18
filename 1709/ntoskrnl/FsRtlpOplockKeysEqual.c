/*
 * XREFs of FsRtlpOplockKeysEqual @ 0x1400874F0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140023680 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400868E0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140108B78 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToII @ 0x1401278C4 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14013065C (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401490F0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140154410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockKeysEqual @ 0x14015D6D0 (FsRtlOplockKeysEqual.c)
 * Callees:
 *     IoGetOplockKeyContextEx @ 0x140024670 (IoGetOplockKeyContextEx.c)
 */

char __fastcall FsRtlpOplockKeysEqual(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rdx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rax
  int v10; // esi
  int v12; // ecx
  __int64 v14; // rbp
  __int64 OplockKeyContext; // rax
  __int64 v16; // r8

  if ( (a3 & 0x40) != 0 )
  {
    if ( !a1 )
      return 0;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL);
    if ( !v14 )
      return 0;
    if ( !*(_QWORD *)(v14 + 136) )
      return 0;
    OplockKeyContext = IoGetOplockKeyContextEx(a1);
    if ( !OplockKeyContext )
      return 0;
    if ( (*(_BYTE *)(OplockKeyContext + 2) & 1) == 0 )
      return 0;
    v16 = *(_QWORD *)(v14 + 136);
    if ( *(_DWORD *)(OplockKeyContext + 4) != *(_DWORD *)v16
      || *(_WORD *)(OplockKeyContext + 8) != *(_WORD *)(v16 + 4)
      || *(_WORD *)(OplockKeyContext + 10) != *(_WORD *)(v16 + 6)
      || *(_BYTE *)(OplockKeyContext + 12) != *(_BYTE *)(v16 + 8)
      || *(_BYTE *)(OplockKeyContext + 13) != *(_BYTE *)(v16 + 9)
      || *(_BYTE *)(OplockKeyContext + 14) != *(_BYTE *)(v16 + 10)
      || *(_BYTE *)(OplockKeyContext + 15) != *(_BYTE *)(v16 + 11)
      || *(_BYTE *)(OplockKeyContext + 16) != *(_BYTE *)(v16 + 12)
      || *(_BYTE *)(OplockKeyContext + 17) != *(_BYTE *)(v16 + 13)
      || *(_BYTE *)(OplockKeyContext + 18) != *(_BYTE *)(v16 + 14)
      || *(_BYTE *)(OplockKeyContext + 19) != *(_BYTE *)(v16 + 15) )
    {
      return 0;
    }
  }
  if ( !a1 || !a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  v6 = *(_QWORD **)(a1 + 208);
  if ( !v6 || v6 == IopRevocationExtension || (v7 = v6[7]) == 0 || (*(_BYTE *)(v7 + 2) & 3) == 0 )
    v7 = 0LL;
  v8 = *(_QWORD **)(a2 + 208);
  if ( !v8 || v8 == IopRevocationExtension || (v9 = v8[7]) == 0 || (*(_BYTE *)(v9 + 2) & 3) == 0 )
    v9 = 0LL;
  if ( !v7 || !v9 || (*(_BYTE *)(v9 + 2) & 2) == 0 )
    return 0;
  v10 = a3 & 0x10;
  if ( v10 ? (*(_BYTE *)(v7 + 2) & 1) == 0 : (*(_BYTE *)(v7 + 2) & 2) == 0 )
    return 0;
  v12 = *(_DWORD *)(v9 + 20);
  if ( v10 )
  {
    if ( *(_DWORD *)(v7 + 4) == v12
      && *(_WORD *)(v7 + 8) == *(_WORD *)(v9 + 24)
      && *(_WORD *)(v7 + 10) == *(_WORD *)(v9 + 26)
      && *(_BYTE *)(v7 + 12) == *(_BYTE *)(v9 + 28)
      && *(_BYTE *)(v7 + 13) == *(_BYTE *)(v9 + 29)
      && *(_BYTE *)(v7 + 14) == *(_BYTE *)(v9 + 30)
      && *(_BYTE *)(v7 + 15) == *(_BYTE *)(v9 + 31)
      && *(_BYTE *)(v7 + 16) == *(_BYTE *)(v9 + 32)
      && *(_BYTE *)(v7 + 17) == *(_BYTE *)(v9 + 33)
      && *(_BYTE *)(v7 + 18) == *(_BYTE *)(v9 + 34)
      && *(_BYTE *)(v7 + 19) == *(_BYTE *)(v9 + 35) )
    {
      return 1;
    }
  }
  else if ( *(_DWORD *)(v7 + 20) == v12
         && *(_WORD *)(v7 + 24) == *(_WORD *)(v9 + 24)
         && *(_WORD *)(v7 + 26) == *(_WORD *)(v9 + 26)
         && *(_BYTE *)(v7 + 28) == *(_BYTE *)(v9 + 28)
         && *(_BYTE *)(v7 + 29) == *(_BYTE *)(v9 + 29)
         && *(_BYTE *)(v7 + 30) == *(_BYTE *)(v9 + 30)
         && *(_BYTE *)(v7 + 31) == *(_BYTE *)(v9 + 31)
         && *(_BYTE *)(v7 + 32) == *(_BYTE *)(v9 + 32)
         && *(_BYTE *)(v7 + 33) == *(_BYTE *)(v9 + 33)
         && *(_BYTE *)(v7 + 34) == *(_BYTE *)(v9 + 34)
         && *(_BYTE *)(v7 + 35) == *(_BYTE *)(v9 + 35) )
  {
    return 1;
  }
  return 0;
}
