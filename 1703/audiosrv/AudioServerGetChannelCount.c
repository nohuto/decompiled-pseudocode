/*
 * XREFs of AudioServerGetChannelCount @ 0x18001E2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetChannelCount@CVADServer@@UEAAJPEAI@Z @ 0x18001AC70 (-GetChannelCount@CVADServer@@UEAAJPEAI@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetChannelCount(CVADServer *this, unsigned int *a2)
{
  GUID v4; // xmm0
  __int64 (__fastcall *v5)(CVADServer *, unsigned int *); // rax
  int ChannelCount; // eax
  unsigned int v7; // ebx
  GUID v9; // [rsp+40h] [rbp-28h] BYREF

  if ( this )
    v4 = (GUID)*((_OWORD *)this + 17);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = v4;
  EtwEventActivityIdControl(4LL, &v9);
  v5 = *(__int64 (__fastcall **)(CVADServer *, unsigned int *))(*(_QWORD *)this + 136LL);
  if ( v5 == CVADServer::GetChannelCount )
    ChannelCount = CVADServer::GetChannelCount(this, a2);
  else
    ChannelCount = v5(this, a2);
  v7 = ChannelCount;
  if ( ChannelCount < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetChannelCount", 0xC87u, ChannelCount);
  EtwEventActivityIdControl(4LL, &v9);
  return v7;
}
