/*
 * XREFs of ?InitializeCSAccounting@DXGGLOBAL@@QEAAXE@Z @ 0x1C01AAAA4
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C01A9810 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01AAB4C (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

void __fastcall DXGGLOBAL::InitializeCSAccounting(DXGGLOBAL *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 1480));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( a2 != *((_BYTE *)this + 1520) )
  {
    if ( *((_DWORD *)this + 366) )
    {
      v7 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v7 + 24) = *((unsigned __int8 *)this + 1520);
      WdLogEvent5_WdWarning(v7);
    }
    *((_DWORD *)this + 382) = 0;
    *((_BYTE *)this + 1520) = a2;
    *((_DWORD *)this + 366) = 1;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
    DXGGLOBAL::IterateProcessAndApplyCSFn(this, 1LL);
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
