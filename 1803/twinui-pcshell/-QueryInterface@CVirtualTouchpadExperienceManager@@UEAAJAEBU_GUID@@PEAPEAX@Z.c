/*
 * XREFs of ?QueryInterface@CVirtualTouchpadExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801823F0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIApplicationFrameEventHandler@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5A20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTo.c)
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5A30 (-QueryInterface@CVirtualTouchpadExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVirtualTouchpadExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5A40 (-QueryInterface@CVirtualTouchpadExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UIApplicationFrameEventHandler@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180180F64 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIVirtualTouchpadExper.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::QueryInterface(
        CVirtualTouchpadExperienceManager *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // r10
  int CanCastTo; // ebx
  _QWORD *v8; // r8

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IWeakReferenceSource,IApplicationFrameEventHandler,Windows::Foundation::IClosable>::CanCastTo(
                  v5,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)CanCastTo;
}
