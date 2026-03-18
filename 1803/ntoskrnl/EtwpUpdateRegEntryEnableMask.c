/*
 * XREFs of EtwpUpdateRegEntryEnableMask @ 0x14058C580
 * Callers:
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidRemoval @ 0x1407A5894 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     EtwpApplyScopeFilters @ 0x14059090C (EtwpApplyScopeFilters.c)
 *     EtwpTrackDecodeGuidForSession @ 0x1407B25C8 (EtwpTrackDecodeGuidForSession.c)
 */

char __fastcall EtwpUpdateRegEntryEnableMask(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  char v5; // bl
  __int16 v6; // ax
  __int64 v7; // rbp
  __int64 v9; // rsi
  char v11; // [rsp+48h] [rbp+20h] BYREF

  v5 = a3;
  LOBYTE(v6) = a5;
  v7 = a2;
  v9 = a4 != 0;
  if ( a5 == 1 )
  {
    v11 = a3;
    LOBYTE(a3) = a4;
    LOBYTE(a2) = 1;
    EtwpApplyScopeFilters(a1, a2, a3, &v11);
    v6 = *(_WORD *)(a1 + 98);
    if ( (v6 & 8) != 0 )
    {
      LOBYTE(v6) = v11;
      *(_BYTE *)(a1 + 100) = v11;
    }
    else
    {
      if ( (v6 & 0x400) != 0 )
      {
        if ( v11 )
        {
          LOBYTE(v6) = EtwpTrackDecodeGuidForSession(v7, a1);
          if ( !(_BYTE)v6 )
          {
            LOBYTE(v6) = -1;
            _InterlockedAnd16((volatile signed __int16 *)(a1 + 98), 0xFBFFu);
          }
        }
      }
      *(_BYTE *)(v9 + a1 + 100) = v11 | *(_BYTE *)(v9 + a1 + 100) & ~v5;
    }
  }
  else if ( !a5 && (*(_BYTE *)(a1 + 98) & 8) == 0 )
  {
    *(_BYTE *)(v9 + a1 + 100) &= ~(_BYTE)a3;
  }
  return v6;
}
