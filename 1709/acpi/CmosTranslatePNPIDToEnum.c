/*
 * XREFs of CmosTranslatePNPIDToEnum @ 0x1C0047400
 * Callers:
 *     CmosGetOpRegionType @ 0x1C0047364 (CmosGetOpRegionType.c)
 * Callees:
 *     CmosConfigSpaceHandlerWorker @ 0x1C00472D8 (CmosConfigSpaceHandlerWorker.c)
 */

__int64 __fastcall CmosTranslatePNPIDToEnum(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v7; // rbx
  char **v8; // rax

  v4 = 0;
  if ( CmosTypeTranslationTable )
  {
    v7 = 0LL;
    v8 = &CmosTypeTranslationTable;
    while ( !strstr(*(const char **)(a4 + 64), *v8) )
    {
      v8 = &(&CmosTypeTranslationTable)[2 * ++v4];
      v7 = v4;
      if ( !*v8 )
        return CmosConfigSpaceHandlerWorker(a1, 0LL, 0LL, (_QWORD *)a4);
    }
    CmosDeviceType = (int)(&CmosTypeTranslationTable)[2 * v7 + 1];
  }
  return CmosConfigSpaceHandlerWorker(a1, 0LL, 0LL, (_QWORD *)a4);
}
