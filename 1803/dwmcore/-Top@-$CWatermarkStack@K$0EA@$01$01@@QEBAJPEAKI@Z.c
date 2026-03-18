/*
 * XREFs of ?Top@?$CWatermarkStack@K$0EA@$01$01@@QEBAJPEAKI@Z @ 0x1800C2FD8
 * Callers:
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A874C (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<unsigned long,64,2,2>::Top(int *a1, _DWORD *a2)
{
  __int64 result; // rax
  int v4; // ecx

  result = 0LL;
  v4 = *a1;
  if ( !v4 )
    return 2147500037LL;
  *a2 = *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * (unsigned int)(v4 - 1));
  return result;
}
