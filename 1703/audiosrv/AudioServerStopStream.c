/*
 * XREFs of AudioServerStopStream @ 0x18002E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x18001A650 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerStopStream(__int64 a1, __int64 a2)
{
  GUID v4; // xmm0
  __int64 (__fastcall *v5)(__int64, __int64, int); // rax
  int v6; // eax
  unsigned int v7; // edi
  GUID v9; // [rsp+40h] [rbp-28h] BYREF

  if ( a1 )
    v4 = *(GUID *)(a1 + 272);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = v4;
  EtwEventActivityIdControl(4LL, &v9);
  v5 = *(__int64 (__fastcall **)(__int64, __int64, int))(*(_QWORD *)a1 + 72LL);
  if ( v5 == CVADServer::StopStream )
    v6 = CVADServer::StopStream(a1, a2, 2);
  else
    v6 = v5(a1, a2, 2);
  *(_DWORD *)(a1 + 264) = 0;
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerStopStream", 0xBF8u, v6);
  EtwEventActivityIdControl(4LL, &v9);
  return v7;
}
