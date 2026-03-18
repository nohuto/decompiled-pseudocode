/*
 * XREFs of ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801A1660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall CProjectedShadowReceiver::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int result; // eax
  __int64 v7; // rcx

  if ( a3 == *(_QWORD *)(a1 + 96) )
    result = Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)(a1 + 104));
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
  {
    if ( a2 )
    {
      if ( a2 == 1 || a2 == 11 )
        a2 = 6;
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, 5LL, 0LL);
      v7 = *(_QWORD *)(a1 + 56);
    }
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 64LL))(v7, a2, a3);
  }
  return result;
}
