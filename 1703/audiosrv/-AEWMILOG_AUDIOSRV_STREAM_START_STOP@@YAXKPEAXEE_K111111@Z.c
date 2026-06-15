/*
 * XREFs of ?AEWMILOG_AUDIOSRV_STREAM_START_STOP@@YAXKPEAXEE_K111111@Z @ 0x18009FF64
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001AD10 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     memset @ 0x180049B8A (memset.c)
 */

void __fastcall AEWMILOG_AUDIOSRV_STREAM_START_STOP(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        unsigned __int64 a10,
        unsigned __int64 a11)
{
  _QWORD v11[16]; // [rsp+20h] [rbp-61h] BYREF

  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v11, 0, 0x40uLL);
    v11[6] = 0LL;
    LODWORD(v11[7]) = 0;
    LOWORD(v11[0]) = 120;
    v11[8] = a5;
    v11[9] = a6;
    v11[10] = a7;
    v11[11] = a8;
    v11[12] = a9;
    v11[13] = a10;
    v11[14] = a11;
    HIDWORD(v11[5]) = 0x20000;
    *(_OWORD *)&v11[3] = AEWMIGUID_AUDIOSRV;
    WORD2(v11[0]) = 1026;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v11);
  }
}
