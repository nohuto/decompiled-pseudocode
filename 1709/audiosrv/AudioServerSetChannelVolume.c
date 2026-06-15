/*
 * XREFs of AudioServerSetChannelVolume @ 0x1800902E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18002B404 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerSetChannelVolume(_OWORD *a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _BYTE v7[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-38h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v7, a1);
  v4 = (*(__int64 (__fastcall **)(_OWORD *, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, a2);
  v5 = v4;
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerSetChannelVolume", 3223, v4);
  EtwEventActivityIdControl(4LL, v8);
  return v5;
}
