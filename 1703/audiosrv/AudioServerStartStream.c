/*
 * XREFs of AudioServerStartStream @ 0x18002E4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001AD10 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerStartStream(_OWORD *a1, unsigned __int64 a2)
{
  GUID v4; // xmm0
  __int64 (__fastcall *v5)(unsigned __int64, unsigned __int64, int); // rax
  int started; // eax
  unsigned int v7; // ebx
  GUID v9; // [rsp+40h] [rbp-28h] BYREF

  if ( a1 )
    v4 = (GUID)a1[17];
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = v4;
  EtwEventActivityIdControl(4LL, &v9);
  v5 = *(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, int))(*(_QWORD *)a1 + 64LL);
  if ( v5 == CVADServer::StartStream )
    started = CVADServer::StartStream((unsigned __int64)a1, a2, 2);
  else
    started = v5((unsigned __int64)a1, a2, 2);
  v7 = started;
  if ( started < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerStartStream", 0xBD7u, started);
  EtwEventActivityIdControl(4LL, &v9);
  return v7;
}
