/*
 * XREFs of ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C004F170
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C004EDE0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C004FAD0 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseInput::ExecutingInSensorHostingProcess(CBaseInput *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
    return *(_QWORD *)(v1 + 32) == PsGetCurrentProcess();
  else
    return *((_DWORD *)this + 158) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
}
