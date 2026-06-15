/*
 * XREFs of ?GetFrequencyForOffload@CBaseStreamGroupProxy@@UEAAJPEA_K@Z @ 0x180093800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetFrequencyForOffload(CBaseStreamGroupProxy *this, unsigned __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 11);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v6);
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6);
    if ( v3 >= 0 && v6 )
      v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v6 + 56LL))(v6, a2);
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v6);
    if ( v3 < 0 )
      AudSrvTraceLoggingErrorHelper("CBaseStreamGroupProxy::GetFrequencyForOffload", 793, v3);
  }
  return (unsigned int)v3;
}
