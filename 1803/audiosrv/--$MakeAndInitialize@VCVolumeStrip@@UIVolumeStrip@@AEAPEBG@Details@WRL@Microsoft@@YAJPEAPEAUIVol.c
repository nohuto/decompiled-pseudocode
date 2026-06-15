/*
 * XREFs of ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x180049F3C
 * Callers:
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18005EBB0 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800140B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallb.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DEE0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CVolumeStrip@@QEAA@XZ @ 0x18004A09C (--0CVolumeStrip@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004A190 (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVolumeStrip,IVolumeStrip,unsigned short const * &>(
        CVolumeStrip **a1,
        const unsigned __int16 **a2)
{
  CVolumeStrip *v4; // rax
  CVolumeStrip *v5; // rdi
  int v6; // ebx
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  CVolumeStrip *v9; // rcx

  *a1 = 0LL;
  v4 = (CVolumeStrip *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = CVolumeStrip::CVolumeStrip(v4);
  v6 = CVolumeStrip::RuntimeClassInitialize(v5, *a2);
  if ( v6 >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_5e874c8d_4066_4f50_6291_1bfd513dd43c, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, &GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7) )
      {
        *a1 = v5;
        v6 = 0;
        v9 = v5;
      }
      else
      {
        if ( InlineIsEqualGUID(v8, v8) )
        {
          v9 = (CVolumeStrip *)((char *)v5 + 8);
          *a1 = (CVolumeStrip *)((char *)v5 + 8);
          v6 = 0;
        }
        else
        {
          v6 = -2147467262;
          v9 = 0LL;
        }
        if ( v6 < 0 )
          goto LABEL_9;
      }
      (*(void (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
LABEL_9:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::Release((__int64)v5);
  return (unsigned int)v6;
}
