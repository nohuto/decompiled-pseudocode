/*
 * XREFs of ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C011CBE8
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C011CC50 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 * Callees:
 *     HMValidateHandle @ 0x1C007D620 (HMValidateHandle.c)
 *     ApiSetEditionContactVisualization @ 0x1C01395EC (ApiSetEditionContactVisualization.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualization(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        void *a3,
        int a4)
{
  int v4; // ebx
  __int64 v7; // rax

  v4 = 0;
  if ( a4 )
  {
    v7 = HMValidateHandle(a3, 19);
    if ( v7 )
      v4 = *(_DWORD *)(*(_QWORD *)(v7 + 472) + 720LL);
    else
      v4 = 1;
  }
  return ApiSetEditionContactVisualization(*((_DWORD *)a2 + 12), *((_QWORD *)a2 + 12), (_DWORD)a3, a4, v4);
}
