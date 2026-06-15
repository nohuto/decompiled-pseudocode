/*
 * XREFs of ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140019DDC
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14001A060 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140041E28 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 * Callees:
 *     ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x140018160 (-AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     WPP_SF_dD @ 0x140042264 (WPP_SF_dD.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointInstance::StartALPCHandleServer(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        struct HandleSendReceiveServer **a2)
{
  void *v4; // rbp
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // r8
  int Port; // ebx
  void *v9; // rsi
  char *Thread; // rax
  _QWORD *v11; // rcx
  signed int LastError; // eax
  LPVOID pv; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0LL;
  v6 = operator new(0x40uLL);
  pv = v6;
  if ( v6 )
  {
    v7 = *((unsigned int *)a1 + 3);
    *v6 = &HandleSendReceiveServer::`vftable';
    v6[1] = 0LL;
    *((_DWORD *)v6 + 4) = v7;
    v6[3] = 0LL;
    v6[4] = 0LL;
    v6[5] = 0LL;
    v6[6] = 0LL;
    *((_DWORD *)v6 + 14) = 0;
    *((_BYTE *)v6 + 60) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  *a2 = (struct HandleSendReceiveServer *)v6;
  if ( v6 )
  {
    pv = 0LL;
    Port = HandleSendReceiveServer::AeServerApiCreatePort((HandleSendReceiveServer *)v6, (PCWSTR *)&pv);
    v9 = pv;
    if ( Port < 0 )
      goto LABEL_19;
    Thread = (char *)CreateThread(
                       0LL,
                       0LL,
                       (LPTHREAD_START_ROUTINE)HandleSendReceiveServer::AeServerApiProc,
                       v6,
                       0,
                       0LL);
    v6[6] = Thread;
    if ( (unsigned __int64)(Thread - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      Port = LastError;
      if ( LastError > 0 )
        Port = (unsigned __int16)LastError | 0x80070000;
    }
    else
    {
      v4 = v9;
    }
    if ( Port < 0 )
    {
LABEL_19:
      if ( v9 )
        CoTaskMemFree(v9);
    }
    else if ( v4 )
    {
      *((_QWORD *)a1 + 12) = v4;
    }
  }
  else
  {
    Port = -2147024882;
  }
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dD(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v7, *((unsigned int *)a1 + 3), Port);
    v11 = WPP_GLOBAL_Control;
  }
  if ( Port < 0 )
  {
    if ( v11 != &WPP_GLOBAL_Control && (*((_DWORD *)v11 + 7) & 0x20000) != 0 && *((_BYTE *)v11 + 25) >= 2u )
      WPP_SF_D(v11[2], 20LL, &WPP_c59da3fdbfb03c8b2196f1e98cb9dccc_Traceguids, (unsigned int)Port);
    AudDGTraceLoggingErrorHelper("CEndpointInstance::StartALPCHandleServer", 0x2D2u, Port);
  }
  return (unsigned int)Port;
}
