/*
 * XREFs of IsTitleWindow @ 0x1C00F8DD4
 * Callers:
 *     GetInheritedMonitor @ 0x1C00646EC (GetInheritedMonitor.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00F8C7C (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall IsTitleWindow(__int64 a1, int a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8

  v2 = 0;
  if ( ((*(_BYTE *)(a1 + 71) & 0x10) != 0 || !a2)
    && ((*(_BYTE *)(a1 + 56) & 8) != 0 || (*(_BYTE *)(a1 + 70) & 3) != 0)
    && !IsRectEmptyInl((const struct tagRECT *)(a1 + 144))
    && ((*(_BYTE *)(v3 + 66) & 8) == 0 || (*(_BYTE *)(v3 + 67) & 0x20) != 0) )
  {
    return 1;
  }
  return v2;
}
