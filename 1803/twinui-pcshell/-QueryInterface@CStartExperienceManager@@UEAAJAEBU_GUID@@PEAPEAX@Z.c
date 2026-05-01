/*
 * XREFs of ?QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077850
 * Callers:
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B130 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800644CC (-GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007D4B4 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Micros.c)
 *     ?QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5740 (-QueryInterface@CStartExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5750 (-QueryInterface@CStartExperienceManager@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5760 (-QueryInterface@CStartExperienceManager@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5770 (-QueryInterface@CStartExperienceManager@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5780 (-QueryInterface@CStartExperienceManager@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5790 (-QueryInterface@CStartExperienceManager@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?AddRef@CStartExperienceManager@@UEAAKXZ @ 0x180077800 (-AddRef@CStartExperienceManager@@UEAAKXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveWindowMessageNotification@@UIClosable@Foundation@Windows@@UIDWMStoryboardListener@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18007AFB0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIImmersiveWindowMessag.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::QueryInterface(CStartExperienceManager *this, struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 (__fastcall *v4)(CStartExperienceManager *); // rax
  _QWORD *v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // r10
  __int64 v9; // r10
  int CanCastTo; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( (*(_QWORD *)&a2->Data1 != __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
     || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (a2->Data1 != -1350114592
     || *(_DWORD *)&a2->Data2 != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || *(_DWORD *)a2->Data4 != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || *(_DWORD *)&a2->Data4[4] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( !InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v9 = v8 + 8;
      if ( *v7 == -62389853
        && v7[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
        && v7[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
        && v7[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
      {
        *v6 = v9;
        goto LABEL_17;
      }
      v8 = v9 + 24;
      if ( *v7 != 56
        || v7[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        || v7[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        || v7[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        if ( *v7 != -1026420319
          || v7[1] != *(_DWORD *)&GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee.Data2
          || v7[2] != *(_DWORD *)GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee.Data4
          || v7[3] != *(_DWORD *)&GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee.Data4[4] )
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable,IDWMStoryboardListener>::CanCastTo(
                        v8 + 16,
                        v7);
LABEL_18:
          if ( CanCastTo < 0 )
            return (unsigned int)CanCastTo;
LABEL_19:
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
          return (unsigned int)CanCastTo;
        }
        *v6 = v8 + 8;
LABEL_17:
        CanCastTo = 0;
        goto LABEL_18;
      }
    }
    *v6 = v8;
    CanCastTo = 0;
    goto LABEL_19;
  }
  *a3 = this;
  v4 = *(__int64 (__fastcall **)(CStartExperienceManager *))(*(_QWORD *)this + 8LL);
  if ( v4 == CStartExperienceManager::AddRef )
    CStartExperienceManager::AddRef(this);
  else
    ((void (__fastcall *)(CStartExperienceManager *, struct _GUID *, void **, struct _GUID *))v4)(this, a2, a3, a2);
  return v3;
}
