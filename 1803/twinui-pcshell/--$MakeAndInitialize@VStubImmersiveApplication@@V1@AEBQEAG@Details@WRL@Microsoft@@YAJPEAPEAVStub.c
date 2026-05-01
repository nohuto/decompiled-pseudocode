/*
 * XREFs of ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEBQEAG@Details@WRL@Microsoft@@YAJPEAPEAVStubImmersiveApplication@@AEBQEAG@Z @ 0x18025747C
 * Callers:
 *     ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18024305C (-TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 *     ?_TerminateApp@AccessibilityExperienceManager@@AEAAJXZ @ 0x18025AF40 (-_TerminateApp@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800F7954 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??0StubImmersiveApplication@@QEAA@XZ @ 0x18023BB5C (--0StubImmersiveApplication@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@StubImmersiveApplication@@QEAAJPEBG@Z @ 0x1802416A4 (-RuntimeClassInitialize@StubImmersiveApplication@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<StubImmersiveApplication,StubImmersiveApplication,unsigned short * const &>(
        StubImmersiveApplication **a1,
        const unsigned __int16 **a2)
{
  StubImmersiveApplication *v4; // rax
  int v5; // edi
  StubImmersiveApplication *v6; // rax
  const unsigned __int16 *v7; // rdx
  StubImmersiveApplication *v8; // rbx
  StubImmersiveApplication *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (StubImmersiveApplication *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = StubImmersiveApplication::StubImmersiveApplication(v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach((__int64 *)&v10, (__int64)v6);
    v7 = *a2;
    v8 = v10;
    v5 = StubImmersiveApplication::RuntimeClassInitialize(v10, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(StubImmersiveApplication *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
