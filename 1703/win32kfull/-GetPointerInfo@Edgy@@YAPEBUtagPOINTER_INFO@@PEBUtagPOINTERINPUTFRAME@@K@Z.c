/*
 * XREFs of ?GetPointerInfo@Edgy@@YAPEBUtagPOINTER_INFO@@PEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01CD7F0
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01CDCB4 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01CE9A4 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

const struct tagPOINTER_INFO *__fastcall Edgy::GetPointerInfo(Edgy *this, const struct tagPOINTERINPUTFRAME *a2)
{
  __int64 v2; // r8

  if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)(*((_QWORD *)this + 11)
                                                                              + 216LL * (unsigned int)a2)) )
    return (const struct tagPOINTER_INFO *)(v2 + 56);
  else
    return 0LL;
}
