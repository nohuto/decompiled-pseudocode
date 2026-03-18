/*
 * XREFs of ?SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z @ 0x1C01A5EA0
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01A43A0 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C01A6F54 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?InitializeQFrameCoalesceState@@YAXPEAUtagPOINTERQFRAME@@H@Z @ 0x1C01A5274 (-InitializeQFrameCoalesceState@@YAXPEAUtagPOINTERQFRAME@@H@Z.c)
 */

struct tagPOINTERQFRAME *__fastcall SetupQFrame(struct tagPOINTERINPUTFRAME *a1, __int64 a2, int a3)
{
  unsigned int v3; // r10d
  int v4; // eax
  __int64 v5; // r9

  v3 = *((_DWORD *)a1 + 10);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 12);
  if ( v3 )
  {
    while ( *(_DWORD *)v5 != -1 )
    {
      if ( *(_QWORD *)(v5 + 8) != a2 )
      {
        v5 += 40LL;
        if ( ++v4 < v3 )
          continue;
      }
      goto LABEL_5;
    }
    goto LABEL_6;
  }
LABEL_5:
  if ( *(_DWORD *)v5 == -1 )
  {
LABEL_6:
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 20) &= 0xFFFFFFE7;
    *(_QWORD *)(v5 + 8) = a2;
    *(_DWORD *)v5 = v4;
    InitializeQFrameCoalesceState((struct tagPOINTERQFRAME *)v5, a3);
  }
  return (struct tagPOINTERQFRAME *)v5;
}
