/*
 * XREFs of Fixup5cRun @ 0x1C0227380
 * Callers:
 *     cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C022AB00 (cjComputeGLYPHSET_MSFT_UNICODE.c)
 * Callees:
 *     fs_WinNTGetGlyphIDs @ 0x1C02B6064 (fs_WinNTGetGlyphIDs.c)
 */

__int64 __fastcall Fixup5cRun(int a1, _WORD *a2, _WORD *a3, __int64 a4, __int64 *a5)
{
  int v6; // r8d
  _WORD *v10; // rcx
  __int64 result; // rax
  unsigned __int16 v12; // cx
  __int64 v13; // rcx
  __int16 v14; // ax

  v6 = (unsigned __int16)*a2;
  if ( (_WORD)v6 == 92 )
  {
    v10 = *(_WORD **)a4;
    *a2 = 93;
    result = 1LL;
    ++*v10;
    --v10[1];
    return result;
  }
  if ( *a3 == 92 )
  {
    *a3 = 91;
    --*(_WORD *)(*(_QWORD *)a4 + 2LL);
  }
  else
  {
    v12 = 92 - **(_WORD **)a4;
    *(_WORD *)(*(_QWORD *)a4 + 2LL) = v12;
    if ( (unsigned int)fs_WinNTGetGlyphIDs(a1, v12, v6, 0, 0LL, *a5) )
      return 0LL;
    v13 = *(_QWORD *)a4 + 16LL;
    *a5 += 4LL * *(unsigned __int16 *)(*(_QWORD *)a4 + 2LL);
    *a2 = 93;
    *(_WORD *)v13 = 93;
    v14 = *a3 - 92;
    *(_QWORD *)a4 = v13;
    *(_WORD *)(v13 + 2) = v14;
    *(_QWORD *)(v13 + 8) = *a5;
  }
  return 1LL;
}
