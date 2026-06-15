/*
 * XREFs of ?ResetEndpoint@CBaseStreamGroupProxy@@UEAAJXZ @ 0x1800CABF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ResetEndpoint(CBaseStreamGroupProxy *this)
{
  __int64 v1; // rbx
  int v2; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = *((_QWORD *)this + 11);
  if ( !v1 )
  {
    v2 = -2005139437;
LABEL_7:
    AudSrvTraceLoggingErrorHelper("CBaseStreamGroupProxy::ResetEndpoint", 851, v2);
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v4);
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 56LL))(v1, &v4);
  if ( v2 < 0 )
    goto LABEL_7;
  if ( v4 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
  if ( v2 < 0 )
    goto LABEL_7;
LABEL_8:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v4);
  return (unsigned int)v2;
}
