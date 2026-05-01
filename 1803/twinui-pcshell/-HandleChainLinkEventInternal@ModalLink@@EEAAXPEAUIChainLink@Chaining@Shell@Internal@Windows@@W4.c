/*
 * XREFs of ?HandleChainLinkEventInternal@ModalLink@@EEAAXPEAUIChainLink@Chaining@Shell@Internal@Windows@@W4ChainLinkEventTypeInternal@?$ChainLink@VObjectWithSrwLock@@@3456@@Z @ 0x1801BEC90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B0C4 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ModalLink::HandleChainLinkEventInternal(__int64 a1, __int64 a2, int a3)
{
  struct IInspectable *v4; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 )
  {
    if ( a3 == 1 && *(_BYTE *)(a1 + 136) )
    {
      v4 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
      if ( (int)Microsoft::WRL::WeakRef::InternalResolve(
                  (Microsoft::WRL::Details::WeakReferenceImpl **)(a1 + 128),
                  &GUID_c126df4f_0ea7_48c6_875c_23b737939cd1,
                  &v4) >= 0 )
      {
        if ( v4 )
          ((void (__fastcall *)(struct IInspectable *, _QWORD))v4->lpVtbl[2].GetTrustLevel)(v4, 0LL);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v4);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 136) = 1;
  }
}
