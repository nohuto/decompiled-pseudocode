/*
 * XREFs of AudioServerGetStreamLatency @ 0x18008F700
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18002B404 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerGetStreamLatency(_OWORD *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-38h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v9, a1);
  v6 = (*(__int64 (__fastcall **)(_OWORD *, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetStreamLatency", 3478, v6);
  EtwEventActivityIdControl(4LL, v10);
  return v7;
}
