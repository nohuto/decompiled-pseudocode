/*
 * XREFs of ?GetEndpointBufferSize@CBaseStreamGroupProxy@@UEAAJPEAIPEAM@Z @ 0x180093720
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetEndpointBufferSize(
        CBaseStreamGroupProxy *this,
        unsigned int *a2,
        float *a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 11);
  v4 = 0;
  if ( v3 )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v8);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, &v8);
    if ( v4 >= 0 && v8 )
      v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *, float *))(*(_QWORD *)v8 + 40LL))(v8, a2, a3);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v8);
    if ( v4 < 0 )
      AudSrvTraceLoggingErrorHelper("CBaseStreamGroupProxy::GetEndpointBufferSize", 742, v4);
  }
  return (unsigned int)v4;
}
