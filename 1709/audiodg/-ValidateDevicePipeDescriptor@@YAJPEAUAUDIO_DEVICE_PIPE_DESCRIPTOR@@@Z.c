/*
 * XREFs of ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14001BA28
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000CC90 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14003827C (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14000E708 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall ValidateDevicePipeDescriptor(const struct tWAVEFORMATEX **a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 2147500035LL;
  result = ValidateWaveFormatEx(a1[1]);
  if ( (int)result < 0 )
    return result;
  if ( !a1[7] )
    return 2147500035LL;
  return *((_DWORD *)a1 + 18) > 1u ? 0x80070057 : 0;
}
