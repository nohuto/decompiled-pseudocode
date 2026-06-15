/*
 * XREFs of ?KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140018370
 * Callers:
 *     ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140018500 (-GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU-$IVector@PEAVAud.c)
 *     ?RetrieveNotificationDeviceId@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x140018694 (-RetrieveNotificationDeviceId@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 *     ?SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@PEAUIBuffer@Streams@Storage@5@PEAPEAU7895@@Z @ 0x14004FBC0 (-SendCommand@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAUIAudioDeviceModule@345@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
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
  Ptr = this[11].Ptr;
  if ( Ptr )
    return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 24LL))(Ptr);
  AcquireSRWLockExclusive(this + 20);
  if ( LOBYTE(this[21].Ptr) )
  {
    if ( this != (RTL_SRWLOCK *)-160LL )
      ReleaseSRWLockExclusive(this + 20);
    return 2147944017LL;
  }
  else
  {
    if ( !DeviceIoControl(this[13].Ptr, 0x2F0003u, a2, a3, a4, nOutBufferSize, lpBytesReturned, 0LL) && GetLastError() )
    {
      LastError = GetLastError();
      if ( LastError <= 0 )
        v7 = LastError;
      else
        v7 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( this != (RTL_SRWLOCK *)-160LL )
      ReleaseSRWLockExclusive(this + 20);
    return v7;
  }
}
