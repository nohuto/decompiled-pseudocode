/*
 * XREFs of ??$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18018CB64
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VImmersiveShellStressTool@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18018D330 (-CreateInstance@-$SimpleClassFactory@VImmersiveShellStressTool@@$0A@@WRL@Microsoft@@UEAAJPEAUIUn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800286A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1800286A0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800F584C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VCW.c)
 *     ??0ImmersiveShellStressTool@@QEAA@XZ @ 0x18018D120 (--0ImmersiveShellStressTool@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ImmersiveShellStressTool@@QEAAJXZ @ 0x18018D8C0 (-RuntimeClassInitialize@ImmersiveShellStressTool@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ImmersiveShellStressTool,IUnknown,>(
        ImmersiveShellStressTool **a1)
{
  ImmersiveShellStressTool *v2; // rax
  int CanCastTo; // ebx
  ImmersiveShellStressTool *v4; // rdi
  volatile int *v5; // rdx
  _DWORD *v6; // rdx
  _DWORD *v7; // r10
  int v8; // r8d

  *a1 = 0LL;
  v2 = (ImmersiveShellStressTool *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v4 = ImmersiveShellStressTool::ImmersiveShellStressTool(v2);
  CanCastTo = ImmersiveShellStressTool::RuntimeClassInitialize(v4);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( !InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::CanCastTo(
                    (__int64)v4,
                    v6,
                    a1);
      if ( CanCastTo == -2147467262 )
      {
        if ( InlineIsEqualGUID(v7, &GUID_44a99782_39de_4d3d_9ef4_e8b221d82f15) )
        {
          *a1 = (ImmersiveShellStressTool *)((char *)v4 + 88);
          CanCastTo = 0;
LABEL_10:
          (*(void (__fastcall **)(ImmersiveShellStressTool *))(*(_QWORD *)*a1 + 8LL))(*a1);
          goto LABEL_12;
        }
        CanCastTo = v8;
      }
      if ( CanCastTo < 0 )
        goto LABEL_12;
      goto LABEL_10;
    }
    *a1 = v4;
    (*(void (__fastcall **)(ImmersiveShellStressTool *))(*(_QWORD *)v4 + 8LL))(v4);
    CanCastTo = 0;
  }
LABEL_12:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::Release(
      (__int64)v4,
      v5);
  return (unsigned int)CanCastTo;
}
