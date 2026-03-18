/*
 * XREFs of FsRtlpOplockKeysEqual @ 0x140050C14
 * Callers:
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140019240 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400192B0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockBreakToII @ 0x14002FB30 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x14003BE58 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14004E3D0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestShareableOplock @ 0x140051EF4 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockKeysEqual @ 0x1401E3930 (FsRtlOplockKeysEqual.c)
 * Callees:
 *     IoGetOplockKeyContextEx @ 0x140050FC0 (IoGetOplockKeyContextEx.c)
 */

char __fastcall FsRtlpOplockKeysEqual(__int64 a1, __int64 a2, char a3)
{
  char v6; // di
  __int64 OplockKeyContext; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // al
  int v11; // r14d
  int v13; // eax
  bool v14; // zf
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r8

  v6 = 1;
  if ( (a3 & 0x40) == 0
    || a1
    && (v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL)) != 0
    && *(_QWORD *)(v16 + 136)
    && (v17 = ((__int64 (*)(void))IoGetOplockKeyContextEx)()) != 0
    && (*(_BYTE *)(v17 + 2) & 1) != 0
    && (v18 = *(_QWORD *)(v16 + 136), *(_DWORD *)(v17 + 4) == *(_DWORD *)v18)
    && *(_WORD *)(v17 + 8) == *(_WORD *)(v18 + 4)
    && *(_WORD *)(v17 + 10) == *(_WORD *)(v18 + 6)
    && *(_BYTE *)(v17 + 12) == *(_BYTE *)(v18 + 8)
    && *(_BYTE *)(v17 + 13) == *(_BYTE *)(v18 + 9)
    && *(_BYTE *)(v17 + 14) == *(_BYTE *)(v18 + 10)
    && *(_BYTE *)(v17 + 15) == *(_BYTE *)(v18 + 11)
    && *(_BYTE *)(v17 + 16) == *(_BYTE *)(v18 + 12)
    && *(_BYTE *)(v17 + 17) == *(_BYTE *)(v18 + 13)
    && *(_BYTE *)(v17 + 18) == *(_BYTE *)(v18 + 14)
    && *(_BYTE *)(v17 + 19) == *(_BYTE *)(v18 + 15) )
  {
    if ( a1 && a2 )
    {
      if ( a1 == a2 )
        return v6;
      OplockKeyContext = IoGetOplockKeyContextEx(a1);
      v8 = IoGetOplockKeyContextEx(a2);
      v9 = v8;
      if ( OplockKeyContext )
      {
        if ( v8 && (*(_BYTE *)(v8 + 2) & 2) != 0 )
        {
          v10 = *(_BYTE *)(OplockKeyContext + 2);
          v11 = a3 & 0x10;
          if ( !(v11 ? (v10 & 1) == 0 : (v10 & 2) == 0) )
          {
            v13 = *(_DWORD *)(v9 + 20);
            if ( v11 )
            {
              if ( *(_DWORD *)(OplockKeyContext + 4) != v13
                || *(_WORD *)(OplockKeyContext + 8) != *(_WORD *)(v9 + 24)
                || *(_WORD *)(OplockKeyContext + 10) != *(_WORD *)(v9 + 26)
                || *(_BYTE *)(OplockKeyContext + 12) != *(_BYTE *)(v9 + 28)
                || *(_BYTE *)(OplockKeyContext + 13) != *(_BYTE *)(v9 + 29)
                || *(_BYTE *)(OplockKeyContext + 14) != *(_BYTE *)(v9 + 30)
                || *(_BYTE *)(OplockKeyContext + 15) != *(_BYTE *)(v9 + 31)
                || *(_BYTE *)(OplockKeyContext + 16) != *(_BYTE *)(v9 + 32)
                || *(_BYTE *)(OplockKeyContext + 17) != *(_BYTE *)(v9 + 33)
                || *(_BYTE *)(OplockKeyContext + 18) != *(_BYTE *)(v9 + 34) )
              {
                return 0;
              }
              v14 = *(_BYTE *)(OplockKeyContext + 19) == *(_BYTE *)(v9 + 35);
            }
            else
            {
              if ( *(_DWORD *)(OplockKeyContext + 20) != v13
                || *(_WORD *)(OplockKeyContext + 24) != *(_WORD *)(v9 + 24)
                || *(_WORD *)(OplockKeyContext + 26) != *(_WORD *)(v9 + 26)
                || *(_BYTE *)(OplockKeyContext + 28) != *(_BYTE *)(v9 + 28)
                || *(_BYTE *)(OplockKeyContext + 29) != *(_BYTE *)(v9 + 29)
                || *(_BYTE *)(OplockKeyContext + 30) != *(_BYTE *)(v9 + 30)
                || *(_BYTE *)(OplockKeyContext + 31) != *(_BYTE *)(v9 + 31)
                || *(_BYTE *)(OplockKeyContext + 32) != *(_BYTE *)(v9 + 32)
                || *(_BYTE *)(OplockKeyContext + 33) != *(_BYTE *)(v9 + 33)
                || *(_BYTE *)(OplockKeyContext + 34) != *(_BYTE *)(v9 + 34) )
              {
                return 0;
              }
              v14 = *(_BYTE *)(OplockKeyContext + 35) == *(_BYTE *)(v9 + 35);
            }
            if ( v14 )
              return v6;
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
