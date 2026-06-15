/*
 * XREFs of ?KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x1400189D0
 * Callers:
 *     ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140018B60 (-GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU-$IVector@PEAVAud.c)
 *     ?RetrieveNotificationDeviceId@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x140018D00 (-RetrieveNotificationDeviceId@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14004E350 (-SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(
        RTL_SRWLOCK *this,
        struct KSIDENTIFIER *a2,
        DWORD a3,
        void *a4,
        DWORD nOutBufferSize,
        unsigned int *lpBytesReturned)
{
  unsigned int v7; // esi
  PVOID Ptr; // rcx
  signed int LastError; // eax

  v7 = 0;
  Ptr = this[10].Ptr;
  if ( Ptr )
    return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 24LL))(Ptr);
  AcquireSRWLockExclusive(this + 19);
  if ( LOBYTE(this[20].Ptr) )
  {
    if ( this != (RTL_SRWLOCK *)-152LL )
      ReleaseSRWLockExclusive(this + 19);
    return 2147944017LL;
  }
  else
  {
    if ( !DeviceIoControl(this[12].Ptr, 0x2F0003u, a2, a3, a4, nOutBufferSize, lpBytesReturned, 0LL) && GetLastError() )
    {
      LastError = GetLastError();
      if ( LastError <= 0 )
        v7 = LastError;
      else
        v7 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( this != (RTL_SRWLOCK *)-152LL )
      ReleaseSRWLockExclusive(this + 19);
    return v7;
  }
}
