/*
 * XREFs of ??$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchToMonitor@@AEAPEAUHMONITOR__@@@Z @ 0x180305BC8
 * Callers:
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180306520 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CLaunchToMonitor@@QEAA@XZ @ 0x180305DA8 (--0CLaunchToMonitor@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CLaunchToMonitor,CLaunchToMonitor,HMONITOR__ * &>(
        CLaunchToMonitor **a1,
        __int64 *a2)
{
  unsigned int v2; // esi
  CLaunchToMonitor *v5; // rax
  CLaunchToMonitor *v6; // rax
  __int64 v7; // rbx
  CLaunchToMonitor *v8; // rdi
  CLaunchToMonitor *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = (CLaunchToMonitor *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = CLaunchToMonitor::CLaunchToMonitor(v5);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    (*(void (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v6 + 2) + 24LL))((__int64)v6 + 16, 0LL);
    *((_QWORD *)v8 + 8) = v7;
    (*(void (__fastcall **)(CLaunchToMonitor *))(*(_QWORD *)v8 + 8LL))(v8);
    *a1 = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
