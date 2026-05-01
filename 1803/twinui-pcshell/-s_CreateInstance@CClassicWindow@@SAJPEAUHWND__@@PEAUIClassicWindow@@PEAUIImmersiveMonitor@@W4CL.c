/*
 * XREFs of ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180008F70
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x1800073D0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x1800079C0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ??0CClassicWindow@@QEAA@PEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@@Z @ 0x180008140 (--0CClassicWindow@@QEAA@PEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindow::s_CreateInstance(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  void *v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rcx
  volatile int *v13; // rdx

  *a5 = 0LL;
  v9 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = 0LL;
  if ( v9 )
    v10 = CClassicWindow::CClassicWindow((__int64)v9, a1, a2, a3, a4);
  v11 = v10 == 0 ? 0x8007000E : 0;
  if ( v10 )
  {
    *a5 = 0LL;
    if ( (unsigned int)InlineIsEqualGUID(
                         &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
                         &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a5 = v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = 0;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v12, v12) )
    {
      *a5 = v10;
      v11 = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    }
    else
    {
      v11 = -2147467262;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(
      v10,
      v13);
  }
  return v11;
}
