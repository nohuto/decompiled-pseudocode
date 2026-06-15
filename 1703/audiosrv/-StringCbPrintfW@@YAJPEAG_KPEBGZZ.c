/*
 * XREFs of ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002EE7C
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180017938 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x180031658 (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x1800317E0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBG@Z @ 0x18003BF98 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBG@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBG@Z @ 0x18003C358 (-RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBG@Z.c)
 *     ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800CB83C (-QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x180049B9C (_vsnwprintf.c)
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
