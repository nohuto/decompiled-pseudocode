/*
 * XREFs of ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C016BBD4
 * Callers:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0005DC0 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z.c)
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C000B190 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000E0D4 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 * Callees:
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

struct DXGSESSIONDATA *__fastcall DXGGLOBAL::GetSessionData(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  DXGSESSIONMGR *v4; // rbx
  struct DXGSESSIONDATA *result; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v7; // r8
  __int64 v8; // r9

  v4 = (DXGSESSIONMGR *)*((_QWORD *)this + 73);
  result = 0LL;
  if ( v4 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
    return DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId, v7, v8);
  }
  return result;
}
