/*
 * XREFs of AudioServerStartStream @ 0x18002C540
 * Callers:
 *     <none>
 * Callees:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180026560 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18002B404 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerStartStream(_OWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64, int); // rax
  int started; // eax
  unsigned int v6; // ebx
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v8, a1);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a1 + 64LL);
  if ( v4 == CVADServer::StartStream )
    started = CVADServer::StartStream((__int64)a1, a2, 2);
  else
    started = v4((__int64)a1, a2, 2);
  v6 = started;
  if ( started < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerStartStream", 0xBBDu, started);
  EtwEventActivityIdControl(4LL, v9);
  return v6;
}
