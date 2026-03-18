/*
 * XREFs of RIMIDEIsCompatibleDevice @ 0x1C010A314
 * Callers:
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C009382C (RIMIDEAdoptOrphanedRimDevs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDEIsCompatibleDevice(__int64 a1, __int64 a2)
{
  char v2; // al
  unsigned int v3; // r9d
  int v5; // r8d
  int v6; // ecx

  v2 = *(_BYTE *)(a2 + 48);
  v3 = 0;
  v5 = 16;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
      if ( v2 == 2 )
      {
        if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
        {
          v5 = 32;
          goto LABEL_14;
        }
        v6 = *(_DWORD *)(*(_QWORD *)(a2 + 472) + 24LL);
        if ( (unsigned int)(v6 - 5) <= 1 )
        {
          v5 = 4;
          goto LABEL_14;
        }
        if ( v6 == 7 )
        {
          v5 = 8;
          goto LABEL_14;
        }
        if ( (unsigned int)(v6 - 1) <= 3 )
          goto LABEL_14;
      }
      return 0LL;
    }
    v5 = 2;
  }
  else
  {
    v5 = 1;
  }
LABEL_14:
  LOBYTE(v3) = (v5 & *(_DWORD *)(a1 + 76)) != 0;
  return v3;
}
