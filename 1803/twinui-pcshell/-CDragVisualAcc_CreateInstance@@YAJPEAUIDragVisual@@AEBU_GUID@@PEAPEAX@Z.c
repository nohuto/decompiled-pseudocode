/*
 * XREFs of ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F837C
 * Callers:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802F4300 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x1802F7E38 (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802F8500 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIRawEleme_ea_1802F8500.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedWindowGroupingOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802F9990 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedWindo.c)
 */

__int64 __fastcall CDragVisualAcc_CreateInstance(struct IDragVisual *a1, const struct _GUID *a2, CDragVisualAcc **a3)
{
  CDragVisualAcc *v5; // rbx
  CDragVisualAcc *v6; // rax
  CDragVisualAcc *v7; // rsi
  signed int CanCastTo; // edi
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // r9

  *a3 = 0LL;
  v5 = 0LL;
  v6 = (CDragVisualAcc *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
  {
    v5 = CDragVisualAcc::CDragVisualAcc(v6, a1);
    v7 = v5;
  }
  CanCastTo = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_959cb746_add4_483a_8acd_059d06f3798a, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a3 = v7;
      (*(void (__fastcall **)(CDragVisualAcc *))(*(_QWORD *)v7 + 8LL))(v7);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v9, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c)
        || (v7 = (CDragVisualAcc *)((char *)v7 + 8), InlineIsEqualGUID(v10, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87)) )
      {
        *a3 = v7;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::CanCastTo(
                      (char *)v7 + 8,
                      v11,
                      a3);
        if ( CanCastTo < 0 )
          goto LABEL_11;
      }
      (*(void (__fastcall **)(CDragVisualAcc *))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
  }
LABEL_11:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedWindowGroupingOperations,Microsoft::WRL::FtmBase>::Release(v5);
  return (unsigned int)CanCastTo;
}
