/*
 * XREFs of ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800314E8
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001DFE8 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x18007FD70 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x18008644C (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x1800D04F4 (-RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800D7190 (-QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x180033A6C (_vsnwprintf.c)
 */

__int64 StringCbPrintfW(wchar_t *Buffer, unsigned __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v3; // rdx
  int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    if ( v3 )
      *Buffer = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnwprintf(Buffer, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      Buffer[v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      Buffer[v6] = 0;
    }
  }
  return (unsigned int)v5;
}
