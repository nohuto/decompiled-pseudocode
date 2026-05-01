/*
 * XREFs of Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_c3737f3ad336e56436bbe3e31d4979f5_____lambda_c3737f3ad336e56436bbe3e31d4979f5___ @ 0x18014EEE0
 * Callers:
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_c3737f3ad336e56436bbe3e31d4979f5___ @ 0x18014F19C (ShellPositionerHelpers--PerformCallbackOnView__lambda_c3737f3ad336e56436bbe3e31d4979f5___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180025610 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIShellPositionerCallback@@VFtmBase@23.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_c3737f3ad336e56436bbe3e31d4979f5_____lambda_c3737f3ad336e56436bbe3e31d4979f5___(
        __int64 *a1,
        __int128 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  volatile int *v6; // rdx
  __int128 v7; // xmm0

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IShellPositionerCallback,Microsoft::WRL::FtmBase>((__int64)v4);
    v7 = *a2;
    *v5 = off_180328630;
    v5[1] = off_180326EB8;
    *((_OWORD *)v5 + 3) = v7;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
