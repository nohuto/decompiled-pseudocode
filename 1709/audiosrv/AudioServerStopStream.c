/*
 * XREFs of AudioServerStopStream @ 0x18002C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180026000 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18002B404 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerStopStream(_DWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64, int); // rax
  int v5; // eax
  unsigned int v6; // ebx
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v8, a1);
  v4 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a1 + 72LL);
  if ( v4 == CVADServer::StopStream )
    v5 = CVADServer::StopStream((__int64)a1, a2, 2);
  else
    v5 = v4((__int64)a1, a2, 2);
  a1[66] = 0;
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerStopStream", 0xBDEu, v5);
  EtwEventActivityIdControl(4LL, v9);
  return v6;
}
