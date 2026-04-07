/*
 * XREFs of ?ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@_N11@Z @ 0x18000F8D0
 * Callers:
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180023690 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CTopLevelAtlasedRectsVisual::ShouldCloneAtlasImage(
        CTopLevelAtlasedRectsVisual *this,
        const struct CAtlasedImage *a2,
        char a3,
        __int64 a4,
        bool a5)
{
  char v5; // cl
  int v7; // edx

  v5 = 0;
  if ( !a3 )
    return 1;
  v7 = *((_DWORD *)a2 + 33);
  if ( (unsigned int)(v7 - 9) <= 8 || a5 && (unsigned int)(v7 - 18) <= 3 )
    return 1;
  return v5;
}
