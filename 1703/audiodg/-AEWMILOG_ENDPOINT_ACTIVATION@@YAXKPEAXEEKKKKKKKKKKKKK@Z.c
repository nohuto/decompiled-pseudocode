/*
 * XREFs of ?AEWMILOG_ENDPOINT_ACTIVATION@@YAXKPEAXEEKKKKKKKKKKKKK@Z @ 0x1400388C8
 * Callers:
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14003899C (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 */

void __fastcall AEWMILOG_ENDPOINT_ACTIVATION(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        unsigned int a15,
        unsigned int a16,
        unsigned int a17)
{
  _QWORD v18[8]; // [rsp+20h] [rbp-79h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-39h]
  unsigned int v20; // [rsp+64h] [rbp-35h]
  unsigned int v21; // [rsp+68h] [rbp-31h]
  unsigned int v22; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v23; // [rsp+70h] [rbp-29h]
  unsigned int v24; // [rsp+74h] [rbp-25h]
  unsigned int v25; // [rsp+78h] [rbp-21h]
  unsigned int v26; // [rsp+7Ch] [rbp-1Dh]
  unsigned int v27; // [rsp+80h] [rbp-19h]
  unsigned int v28; // [rsp+84h] [rbp-15h]
  unsigned int v29; // [rsp+88h] [rbp-11h]
  unsigned int v30; // [rsp+8Ch] [rbp-Dh]
  unsigned int v31; // [rsp+90h] [rbp-9h]

  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v18, 0, sizeof(v18));
    LODWORD(v18[7]) = 0;
    LOWORD(v18[0]) = 120;
    v19 = a5;
    v20 = a6;
    v21 = a7;
    v22 = a8;
    v23 = a9;
    v24 = a10;
    v25 = a11;
    v26 = a12;
    v27 = a13;
    v28 = a14;
    v29 = a15;
    v30 = a16;
    v31 = a17;
    HIDWORD(v18[5]) = 0x20000;
    *(_OWORD *)&v18[3] = AEWMIGUID_ENDPOINT_ACTIVATION;
    WORD2(v18[0]) = 1025;
    v18[6] = a2;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v18);
  }
}
