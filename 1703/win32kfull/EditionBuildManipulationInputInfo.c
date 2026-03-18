/*
 * XREFs of EditionBuildManipulationInputInfo @ 0x1C01C9CA0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C5400 (-CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6964 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     CalcManipulationInputInfoSize @ 0x1C01C9A8C (CalcManipulationInputInfoSize.c)
 */

__int64 __fastcall EditionBuildManipulationInputInfo(_DWORD *a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 result; // rax
  unsigned int v7; // r10d
  size_t v8; // rbx
  unsigned int i; // esi
  __int64 v10; // rbp
  __int64 v11; // r15

  v5 = CountMTNodesReadyForRouting((const struct tagPOINTERINPUTFRAME *)a3);
  result = CalcManipulationInputInfoSize(v5);
  if ( v7 < (unsigned int)result )
    return result;
  v8 = 0LL;
  if ( *(_DWORD *)(a3 + 40) )
  {
    switch ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 56LL) )
    {
      case 1:
        v8 = 96LL;
        break;
      case 2:
LABEL_7:
        v8 = 144LL;
        break;
      case 3:
        v8 = 120LL;
        break;
      case 5:
        goto LABEL_7;
      default:
        break;
    }
  }
  *a1 = 0;
  for ( i = 0; i < *(_DWORD *)(a3 + 40); ++i )
  {
    v10 = *(_QWORD *)(a3 + 88) + 216LL * i;
    result = IsManipulationThreadNode((const struct tagPOINTERINFONODE *)v10);
    if ( (_DWORD)result )
    {
      v11 = 36LL * (unsigned int)*a1;
      memmove(&a1[v11 + 4], (const void *)(v10 + 56), v8);
      if ( (*(_DWORD *)(v10 + 4) & 0x80u) == 0 )
        result = 0LL;
      else
        result = *(unsigned int *)(v10 + 212);
      *(_QWORD *)&a1[v11 + 10] = result;
      ++*a1;
    }
  }
  return result;
}
