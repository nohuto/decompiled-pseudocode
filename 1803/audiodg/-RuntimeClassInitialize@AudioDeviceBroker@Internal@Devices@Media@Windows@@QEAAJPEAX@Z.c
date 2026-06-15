/*
 * XREFs of ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x140018D60
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x1400191FC (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 * Callees:
 *     ?RetrieveNotificationDeviceId@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x140018D00 (-RetrieveNotificationDeviceId@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14004C3A8 (-InitializeEvents@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        HANDLE hSourceHandle)
{
  int v2; // esi
  HANDLE CurrentProcess; // rbx
  HANDLE v6; // rax
  signed int LastError; // eax

  v2 = 0;
  if ( hSourceHandle )
  {
    CurrentProcess = GetCurrentProcess();
    v6 = GetCurrentProcess();
    if ( DuplicateHandle(v6, hSourceHandle, CurrentProcess, (LPHANDLE)this + 12, 0, 0, 2u) )
    {
      if ( (int)Windows::Media::Devices::Internal::AudioDeviceBroker::RetrieveNotificationDeviceId((RTL_SRWLOCK *)this) < 0
        || (v2 = Windows::Media::Devices::Internal::AudioDeviceBroker::InitializeEvents(this), v2 >= 0) )
      {
        *((_BYTE *)this + 208) = 1;
      }
    }
    else
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v2;
}
