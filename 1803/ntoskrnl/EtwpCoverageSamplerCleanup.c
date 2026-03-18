/*
 * XREFs of EtwpCoverageSamplerCleanup @ 0x1407B7488
 * Callers:
 *     EtwpCoverageSamplerDelete @ 0x1407B7620 (EtwpCoverageSamplerDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmUnmapViewInSystemSpace @ 0x1404BB5B0 (MmUnmapViewInSystemSpace.c)
 *     EtwpCovSampContextCleanup @ 0x1407B43D4 (EtwpCovSampContextCleanup.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1407B7634 (EtwpCoverageSamplerFreeTable.c)
 */

unsigned int __fastcall EtwpCoverageSamplerCleanup(__int64 a1)
{
  unsigned int result; // eax
  _QWORD **v3; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  void *v7; // rcx

  result = (unsigned int)EtwpCovSampContextCleanup(a1 + 16);
  v3 = (_QWORD **)(a1 + 1152);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    if ( v4 == *(_QWORD **)(a1 + 1136) )
      *(_QWORD *)(a1 + 1136) = 0LL;
    result = EtwpCoverageSamplerFreeTable(v4);
  }
  *(_DWORD *)(a1 + 1168) = 0;
  v6 = *(void **)(a1 + 1176);
  if ( v6 )
  {
    result = MmUnmapViewInSystemSpace(v6);
    *(_QWORD *)(a1 + 1176) = 0LL;
    *(_DWORD *)(a1 + 1188) = 0;
    *(_DWORD *)(a1 + 1184) = 0;
    *(_DWORD *)(a1 + 1192) = 0;
  }
  v7 = *(void **)(a1 + 1144);
  if ( v7 )
  {
    result = ObfDereferenceObject(v7);
    *(_QWORD *)(a1 + 1144) = 0LL;
  }
  return result;
}
