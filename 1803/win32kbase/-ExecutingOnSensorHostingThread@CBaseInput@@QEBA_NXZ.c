/*
 * XREFs of ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003AEAC
 * Callers:
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C003AC60 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0122D60 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0123CA0 (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     CleanupSensorExplicitly @ 0x1C012DCD0 (CleanupSensorExplicitly.c)
 *     UpdateKeyLights @ 0x1C01302C0 (UpdateKeyLights.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseInput::ExecutingOnSensorHostingThread(CBaseInput *this)
{
  return *((_DWORD *)this + 271) == (unsigned int)PsGetCurrentThreadId();
}
