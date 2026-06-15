/*
 * XREFs of AudioServerGetAllVolumes @ 0x180027EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180025D40 (-GetAllVolumes@CVADServer@@UEAAJIPEAM@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall AudioServerGetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  GUID v6; // xmm0
  __int64 (__fastcall *v7)(CVADServer *, unsigned int, float *); // rax
  int AllVolumes; // eax
  unsigned int v9; // ebx
  GUID v11; // [rsp+40h] [rbp-38h] BYREF

  if ( this )
    v6 = (GUID)*((_OWORD *)this + 17);
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  v11 = v6;
  EtwEventActivityIdControl(4LL, &v11);
  v7 = *(__int64 (__fastcall **)(CVADServer *, unsigned int, float *))(*(_QWORD *)this + 184LL);
  if ( v7 == CVADServer::GetAllVolumes )
    AllVolumes = CVADServer::GetAllVolumes(this, a2, a3);
  else
    AllVolumes = v7(this, a2, a3);
  v9 = AllVolumes;
  if ( AllVolumes < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAllVolumes", 0xD16u, AllVolumes);
  EtwEventActivityIdControl(4LL, &v11);
  return v9;
}
