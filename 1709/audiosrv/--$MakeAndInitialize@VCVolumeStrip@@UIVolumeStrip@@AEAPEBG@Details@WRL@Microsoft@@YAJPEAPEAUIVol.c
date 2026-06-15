/*
 * XREFs of ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x18006BD08
 * Callers:
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18006E7A4 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009BB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallb.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000D0D4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x18006BEBC (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18006D86C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVolumeStrip,IVolumeStrip,unsigned short const * &>(
        CVolumeStrip **a1,
        const unsigned __int16 **a2)
{
  CVolumeStrip *v4; // rax
  int v5; // ebx
  CVolumeStrip *v6; // rdi
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx

  *a1 = 0LL;
  v4 = (CVolumeStrip *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = CVolumeStrip::CVolumeStrip(v4);
  v5 = CVolumeStrip::RuntimeClassInitialize(v6, *a2);
  if ( v5 >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_e8943bfd_2bad_423d_a751_bfe9c7d65646, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v6;
      (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v6 + 8LL))(v6);
      v5 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, &GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7) )
      {
        *a1 = v6;
        v5 = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v8, v8) )
        {
          *a1 = (CVolumeStrip *)((char *)v6 + 8);
          v5 = 0;
        }
        else
        {
          v5 = -2147467262;
        }
        if ( v5 < 0 )
          goto LABEL_13;
      }
      (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
LABEL_13:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::Release((volatile signed __int32 *)v6);
  return (unsigned int)v5;
}
