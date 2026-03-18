/*
 * XREFs of SmPageRead @ 0x14003897C
 * Callers:
 *     MiIssueHardFaultIo @ 0x140097C48 (MiIssueHardFaultIo.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiPfExecuteReadList @ 0x14053D754 (MiPfExecuteReadList.c)
 * Callees:
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x140056200 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140121190 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 */

__int64 __fastcall SmPageRead(union _MM_STORE_KEY *a1, int a2)
{
  int v3; // ecx
  __int64 v4; // r10
  int v5; // r11d
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  SmKeyConvert(a1, (union _SM_PAGE_KEY *)v7);
  return SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(v3, (unsigned int)v7, a2, v5, v4);
}
