/*
 * XREFs of sub_1800031C4 @ 0x1800031C4
 * Callers:
 *     sub_18000316C @ 0x18000316C (sub_18000316C.c)
 *     sub_180003278 @ 0x180003278 (sub_180003278.c)
 *     sub_180109A80 @ 0x180109A80 (sub_180109A80.c)
 * Callees:
 *     sub_180003278 @ 0x180003278 (sub_180003278.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall sub_1800031C4(__int64 a1, unsigned int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  int v5; // eax
  LONG v7; // ecx

  if ( a2 - 1 <= 0x66 || *(_QWORD *)a1 != 0x52494443534552LL || *(_DWORD *)(a1 + 8) != 3 )
  {
LABEL_18:
    v7 = 13;
    goto LABEL_19;
  }
  v3 = *(_DWORD *)(a1 + 52);
  if ( v3 )
  {
    if ( *(_DWORD *)(a1 + 68) <= v3 && *(_DWORD *)(a1 + 80) <= *(_DWORD *)(a1 + 56) )
    {
      v4 = *(_DWORD *)(a1 + 60);
      if ( v4 )
      {
        if ( *(_DWORD *)(a1 + 72) <= v4 )
        {
          if ( a2 && a2 < (unsigned int)sub_180003278() )
          {
            v7 = 24;
            goto LABEL_19;
          }
          v5 = *(_DWORD *)(a1 + 72);
          if ( v5 )
          {
            if ( *(_DWORD *)(a1 + 88) < v5 && *(_DWORD *)(a1 + 92) < v5 && *(_DWORD *)(a1 + 96) < v5 )
              return 1LL;
          }
          else if ( *(int *)(a1 + 88) < 0 && *(int *)(a1 + 92) < 0 && *(int *)(a1 + 96) < 0 )
          {
            return 1LL;
          }
          goto LABEL_18;
        }
      }
    }
  }
  v7 = 536936962;
LABEL_19:
  RtlSetLastWin32Error(v7);
  return 0LL;
}
