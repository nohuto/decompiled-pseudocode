/*
 * XREFs of ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140046F34
 * Callers:
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14003899C (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14001B270 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall ValidateDevicePipeDescriptor(const struct tWAVEFORMATEX **a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 2147500035LL;
  result = ValidateWaveFormatEx(a1[1]);
  if ( (int)result >= 0 )
  {
    if ( !a1[7] )
      return 2147500035LL;
    return *((_DWORD *)a1 + 18) > 1u ? 0x80070057 : 0;
  }
  return result;
}
