/*
 * XREFs of RevalidateDCE @ 0x1C00E3440
 * Callers:
 *     DeleteHrgnClip @ 0x1C00E3280 (DeleteHrgnClip.c)
 *     UpdateRedirectedDCE @ 0x1C00E3320 (UpdateRedirectedDCE.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C021513C (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     SpbCheckDce @ 0x1C00E3550 (SpbCheckDce.c)
 */

__int64 __fastcall RevalidateDCE(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // ecx
  unsigned __int8 v7; // r9

  v2 = *(_DWORD *)(a1 + 64);
  if ( (v2 & 0x1000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 24);
    if ( v2 >= 0 )
    {
      v5 = v2 & 0x7FFFFFE7;
      *(_DWORD *)(a1 + 64) = v5;
      if ( *(char *)(*(_QWORD *)(v3 + 168) + 92LL) >= 0
        || (*(_BYTE *)(v3 + 61) & 1) == 0 && (*(_BYTE *)(v4 + 71) & 2) != 0
        || (v7 = *(_BYTE *)(v4 + 71), ((v7 ^ *(_BYTE *)(v3 + 71)) & 0x10) != 0) )
      {
        if ( (*(_BYTE *)(v3 + 71) & 0x22) == 2 )
          *(_DWORD *)(a1 + 64) = v5 | 8;
        if ( (*(_BYTE *)(v3 + 71) & 4) != 0 )
          *(_DWORD *)(a1 + 64) |= 0x10u;
      }
      else if ( (v7 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 64) = v5 | 0x10;
      }
    }
    *(_DWORD *)(a1 + 64) |= 0x2000u;
    return UserSetDCVisRgn(a1, v3, v4);
  }
  else
  {
    SpbCheckDce(a1);
    return InvalidateDCE(a1);
  }
}
