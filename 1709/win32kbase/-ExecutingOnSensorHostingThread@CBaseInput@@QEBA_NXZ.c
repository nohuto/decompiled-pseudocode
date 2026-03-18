/*
 * XREFs of ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0019BF8
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0019C1C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C001A5D0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     CleanupSensorExplicitly @ 0x1C009B620 (CleanupSensorExplicitly.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseInput::ExecutingOnSensorHostingThread(CBaseInput *this)
{
  return *((_DWORD *)this + 239) == (unsigned int)PsGetCurrentThreadId();
}
