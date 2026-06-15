/*
 * XREFs of AudioServerSetAllVolumes @ 0x180028AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBM@Z @ 0x180025E30 (-SetAllVolumes@CVADServer@@UEAAJIPEBM@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerSetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  GUID v6; // xmm0
  __int64 (__fastcall *v7)(float ***, unsigned int, float *); // rax
  int v8; // eax
  unsigned int v9; // ebx
  GUID v11; // [rsp+40h] [rbp-38h] BYREF

  if ( this )
    v6 = (GUID)*((_OWORD *)this + 17);
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = v6;
  EtwEventActivityIdControl(4LL, &v11);
  v7 = *(__int64 (__fastcall **)(float ***, unsigned int, float *))(*(_QWORD *)this + 176LL);
  if ( v7 == CVADServer::SetAllVolumes )
    v8 = CVADServer::SetAllVolumes((float ***)this, a2, a3);
  else
    v8 = v7((float ***)this, a2, a3);
  v9 = v8;
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerSetAllVolumes", 0xCEBu, v8);
  EtwEventActivityIdControl(4LL, &v11);
  return v9;
}
