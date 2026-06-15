/*
 * XREFs of ?GetFrequencyForOffload@CBaseStreamGroupProxy@@UEAAJPEA_K@Z @ 0x1800A5D90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetFrequencyForOffload(CBaseStreamGroupProxy *this, unsigned __int64 *a2)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 10);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v6);
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL))(v2, &v6);
    if ( v3 >= 0 && v6 )
      v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v6 + 56LL))(v6, a2);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v6);
    if ( v3 < 0 )
      AudSrvTraceLoggingErrorHelper("CBaseStreamGroupProxy::GetFrequencyForOffload", 712, v3);
  }
  return (unsigned int)v3;
}
