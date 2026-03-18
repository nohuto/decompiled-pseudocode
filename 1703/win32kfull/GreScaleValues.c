/*
 * XREFs of GreScaleValues @ 0x1C027D8CC
 * Callers:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009324C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     NtGdiScaleValues @ 0x1C028E910 (NtGdiScaleValues.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

__int64 __fastcall GreScaleValues(HDC a1, int *a2, unsigned int a3)
{
  __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rdi
  int *v8; // rsi
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v5 = v10[0];
  if ( !v10[0] )
  {
LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
  v6 = 1;
  if ( (*(_DWORD *)(v10[0] + 536LL) & 3) == 1 )
  {
    v7 = 0LL;
    if ( a3 )
    {
      v8 = a2;
      while ( (unsigned int)bFToL((float)*v8 * COERCE_FLOAT(*(_QWORD *)(v5 + 540)), &a2[v7], 6) )
      {
        v7 = (unsigned int)(v7 + 1);
        ++v8;
        if ( (unsigned int)v7 >= a3 )
          goto LABEL_9;
      }
      goto LABEL_8;
    }
  }
LABEL_9:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v10);
  return v6;
}
