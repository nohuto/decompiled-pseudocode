/*
 * XREFs of ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C0019BC0
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C00197F0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C001A520 (-HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseInput::ExecutingInSensorHostingProcess(CBaseInput *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
    return *(_QWORD *)(v1 + 32) == PsGetCurrentProcess();
  else
    return *((_DWORD *)this + 238) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
}
