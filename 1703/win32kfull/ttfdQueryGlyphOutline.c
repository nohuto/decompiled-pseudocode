/*
 * XREFs of ttfdQueryGlyphOutline @ 0x1C022C09C
 * Callers:
 *     ttfdQueryFontData @ 0x1C022E854 (ttfdQueryFontData.c)
 * Callees:
 *     bGeneratePath @ 0x1C022B58C (bGeneratePath.c)
 *     lQueryTTOutline @ 0x1C022BD84 (lQueryTTOutline.c)
 *     lQueryTrueTypeOutlineVertical @ 0x1C022BFA8 (lQueryTrueTypeOutlineVertical.c)
 */

__int64 __fastcall ttfdQueryGlyphOutline(__int64 a1, unsigned int a2, __int64 a3, PATHOBJ *a4)
{
  unsigned int v4; // ebx
  int TrueTypeOutlineVertical; // eax
  ULONG TTOutline; // eax
  unsigned int v12; // esi
  PVOID v13; // rax
  int v14; // eax
  void *v15; // rcx
  unsigned int Path; // eax
  void *v17; // rcx
  unsigned int v18; // esi
  _QWORD *v19; // [rsp+38h] [rbp-20h]

  v4 = 0;
  if ( !a4 )
  {
    if ( *(_DWORD *)(a1 + 308) )
      TrueTypeOutlineVertical = lQueryTrueTypeOutlineVertical(a1, 0, a2, 1, 0, a3, 0, 0LL);
    else
      TrueTypeOutlineVertical = lQueryTTOutline(a1, 0, a2, 1, 0, a3, 0, 0LL);
    LOBYTE(v4) = TrueTypeOutlineVertical == 0;
    return v4;
  }
  if ( *(_DWORD *)(a1 + 308) )
    TTOutline = lQueryTrueTypeOutlineVertical(a1, 0, a2, 0, 0, 0LL, 0, 0LL);
  else
    TTOutline = lQueryTTOutline(a1, 0, a2, 0, 0, 0LL, 0, 0LL);
  v12 = TTOutline;
  if ( TTOutline == -1 )
    return 0LL;
  if ( TTOutline )
  {
    v13 = EngAllocMem(0, TTOutline, 0x64667454u);
    *(_QWORD *)(a1 + 24) = v13;
    if ( !v13 )
      return 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  v19 = *(_QWORD **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 308) )
    v14 = lQueryTrueTypeOutlineVertical(a1, 0, a2, 0, 0, a3, v12, v19);
  else
    v14 = lQueryTTOutline(a1, 0, a2, 0, 0, a3, v12, v19);
  if ( v14 == -1 )
  {
    v15 = *(void **)(a1 + 24);
    if ( v15 )
    {
      EngFreeMem(v15);
      *(_QWORD *)(a1 + 24) = 0LL;
    }
    return 0LL;
  }
  Path = bGeneratePath(a4, *(POINTFIX **)(a1 + 24), v12, 0LL, 0LL, 0);
  v17 = *(void **)(a1 + 24);
  v18 = Path;
  if ( v17 )
  {
    EngFreeMem(v17);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return v18;
}
