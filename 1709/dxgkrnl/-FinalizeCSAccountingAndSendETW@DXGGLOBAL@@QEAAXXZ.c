/*
 * XREFs of ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C01AA65C
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C01A9810 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerInfoList@@QEAAXE@Z @ 0x1C01AA0EC (-EmitSleepStudyBlockerDataEvents@DripsBlockerInfoList@@QEAAXE@Z.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01AAB4C (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

void __fastcall DXGGLOBAL::FinalizeCSAccountingAndSendETW(DXGGLOBAL *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGGLOBAL::IterateProcessAndApplyCSFn(this, 3LL);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v2, (DXGGLOBAL *)((char *)this + 1480));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v2);
  DripsBlockerInfoList::EmitSleepStudyBlockerDataEvents((DXGGLOBAL *)((char *)this + 1528), *((_BYTE *)this + 1520));
  *((_QWORD *)this + 183) = 0LL;
  if ( v2[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v2);
}
