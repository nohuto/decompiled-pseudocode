/*
 * XREFs of ?GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ @ 0x1801E4648
 * Callers:
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015C58C (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::GetCompSurfHandle(CHwCompSwapChainTarget *this)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  if ( *((_QWORD *)this + 28) )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
    v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 28))(
           *((_QWORD *)this + 28),
           &GUID_7652c85a_0df5_4567_bcdd_8176a332b99b,
           &v6);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xD6u);
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &v7);
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xD8u);
    }
  }
  v4 = v7;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  return v4;
}
