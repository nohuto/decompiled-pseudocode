/*
 * XREFs of ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C0127DEC
 * Callers:
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0127530 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0127810 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CHidInput::UpdatePointerDeviceCount(CHidInput *this, __int64 a2)
{
  int v2; // edi
  int v4; // edi
  int v5; // eax
  __int64 result; // rax

  v2 = a2;
  if ( (struct _KTHREAD *)qword_1C01A1658 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v4 = v2 - 1;
  if ( !v4 )
    return (unsigned int)++*((_DWORD *)this + 272);
  if ( v4 != 1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    return *((unsigned int *)this + 272);
  }
  v5 = *((_DWORD *)this + 272);
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    v5 = *((_DWORD *)this + 272);
  }
  result = (unsigned int)(v5 - 1);
  *((_DWORD *)this + 272) = result;
  return result;
}
