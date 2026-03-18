/*
 * XREFs of SmPageRead @ 0x1401542D8
 * Callers:
 *     MiIssueHardFaultIo @ 0x140057CF4 (MiIssueHardFaultIo.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MiPfExecuteReadList @ 0x1404BC628 (MiPfExecuteReadList.c)
 * Callees:
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x14008C54C (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140152AF8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 */

__int64 __fastcall SmPageRead(union _MM_STORE_KEY *a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  __int64 *v4; // r10
  __int64 v5; // r11
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF

  SmKeyConvert(a1, (union _SM_PAGE_KEY *)v7);
  return SMKM_STORE_MGR<SM_TRAITS>::SmPageRead(v3, v7, a2, v5, v4);
}
