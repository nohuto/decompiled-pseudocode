/*
 * XREFs of ?GetPointerInfo@Edgy@@YAPEBUtagPOINTER_INFO@@PEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01D1988
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01D1E4C (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01D2B58 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01A52F0 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
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
