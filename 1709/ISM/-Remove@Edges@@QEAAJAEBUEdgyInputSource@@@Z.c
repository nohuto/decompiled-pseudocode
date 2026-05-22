/*
 * XREFs of ?Remove@Edges@@QEAAJAEBUEdgyInputSource@@@Z @ 0x18002B1F0
 * Callers:
 *     ?OnEdgyConfigurationUpdateStatic@CShellEdgyNotifier@@CAJPEAXPEBXH@Z @ 0x18002BF10 (-OnEdgyConfigurationUpdateStatic@CShellEdgyNotifier@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     McTemplateU0qqqqq @ 0x180012DA8 (McTemplateU0qqqqq.c)
 *     ?FindEdge@Edges@@AEAAHI@Z @ 0x18002B2A0 (-FindEdge@Edges@@AEAAHI@Z.c)
 */

__int64 __fastcall Edges::Remove(Edges *this, const struct EdgyInputSource *a2)
{
  int Edge; // eax
  char v4; // di
  __int128 v6; // [rsp+40h] [rbp-38h]

  Edge = Edges::FindEdge(this, *((_DWORD *)a2 + 6));
  v4 = Edge;
  if ( Edge < 0 )
    return 2147942487LL;
  v6 = *(_OWORD *)(*(_QWORD *)this + 72LL * Edge + 28);
  memmove(
    (void *)(*(_QWORD *)this + 72LL * Edge),
    (const void *)(*(_QWORD *)this + 72LL * Edge + 72),
    *((_QWORD *)this + 1) - (*(_QWORD *)this + 72LL * Edge + 72));
  *((_QWORD *)this + 1) -= 72LL;
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    McTemplateU0qqqqq(
      *((_QWORD *)this + 1) - *(_QWORD *)this,
      &MinInput_CShellEdgy_EdgeCountChanged,
      13,
      SHIDWORD(v6),
      0,
      v4,
      (*((_DWORD *)this + 2) - *(_DWORD *)this) / 72);
  return 0LL;
}
