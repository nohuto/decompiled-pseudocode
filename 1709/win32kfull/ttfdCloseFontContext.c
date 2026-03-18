/*
 * XREFs of ttfdCloseFontContext @ 0x1C02328B4
 * Callers:
 *     ttfdSemDestroyFont @ 0x1C02269E0 (ttfdSemDestroyFont.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 */

__int64 __fastcall ttfdCloseFontContext(_QWORD *pv)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  void *v5; // rcx

  if ( !pv )
    return 0LL;
  v3 = (__int64 *)pv[1];
  v4 = *v3;
  --*((_DWORD *)v3 + 12);
  --*(_DWORD *)v4;
  if ( (_QWORD *)v3[4] == pv )
    v3[4] = 0LL;
  if ( (*(_DWORD *)(v4 + 4) & 1) != 0 )
  {
    v5 = (void *)pv[3];
    if ( v5 )
    {
      EngFreeMem(v5);
      pv[3] = 0LL;
    }
  }
  if ( !*((_DWORD *)v3 + 12) && (*(_DWORD *)(v4 + 4) & 1) == 0 )
  {
    EngFreeMem((PVOID)v3[3]);
    v3[3] = 0LL;
  }
  if ( !*(_DWORD *)v4 )
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 56LL));
  EngFreeMem(pv);
  return 1LL;
}
