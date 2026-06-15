/*
 * XREFs of ?GetPositionForOffload@CBaseStreamGroupProxy@@UEAAJPEA_K0@Z @ 0x1800C9920
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetPositionForOffload(
        CBaseStreamGroupProxy *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rdi
  int v4; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 11);
  v4 = 0;
  if ( v3 )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, &v8);
    if ( v4 >= 0 && v8 )
      v4 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)v8 + 48LL))(
             v8,
             a2,
             a3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
    if ( v4 < 0 )
      AudSrvTraceLoggingErrorHelper("CBaseStreamGroupProxy::GetPositionForOffload", 799, v4);
  }
  return (unsigned int)v4;
}
