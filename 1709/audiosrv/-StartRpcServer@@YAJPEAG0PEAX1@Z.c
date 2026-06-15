/*
 * XREFs of ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x180063A2C
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800617D0 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x180063644 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 */

__int64 __fastcall StartRpcServer(unsigned __int16 *a1, unsigned __int16 *a2, void *a3, void *a4)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // eax

  v7 = 0;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids, a2);
  }
  if ( !ServerEndpointIsStarted(a2) )
  {
    v8 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, a2, a4);
    v7 = v8;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids, v8);
    }
LABEL_14:
    if ( v7 )
      return v7;
    goto LABEL_15;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids);
    goto LABEL_14;
  }
LABEL_15:
  v9 = RpcServerRegisterIf3(a3, 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, a4);
  v7 = v9;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_1222a022b1c335ea5b3b60739ad81026_Traceguids, v9);
  }
  return v7;
}
