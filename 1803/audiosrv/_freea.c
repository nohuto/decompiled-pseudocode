/*
 * XREFs of _freea @ 0x1800183EC
 * Callers:
 *     ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x18001832C (-reset@-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035930 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     _lambda_041b38cc9b1c9530af273109c15771c6_::operator() @ 0x1800635C8 (_lambda_041b38cc9b1c9530af273109c15771c6_--operator().c)
 *     ??1?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180097CFC (--1-$unique_ptr@MU-$function_deleter@P6AXPEAX@Z$1-_freea@@YAX0@Z@wil@@@wistd@@QEAA@XZ.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800AADAC (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     <none>
 */

void __cdecl freea(void *Memory)
{
  _DWORD *v1; // rcx

  if ( Memory )
  {
    v1 = (char *)Memory - 16;
    if ( *v1 == 56797 )
      free(v1);
  }
}
