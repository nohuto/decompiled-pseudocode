/*
 * XREFs of ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x1800A6868
 * Callers:
 *     ??1CVolumeProvider@@UEAA@XZ @ 0x1800A6754 (--1CVolumeProvider@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 */

void __fastcall CVolumeProvider::Cleanup(CVolumeProvider *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rbx
  __int64 *v4; // rsi
  __int64 *v5; // rbx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_47f4b705a74e3dc9170912854ed06807_Traceguids);
  }
  v2 = (_QWORD *)*((_QWORD *)this + 8);
  for ( i = (_QWORD *)*((_QWORD *)this + 7); i != v2; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 264LL))(*i);
  v4 = (__int64 *)*((_QWORD *)this + 8);
  v5 = (__int64 *)*((_QWORD *)this + 7);
  if ( v5 != v4 )
  {
    do
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v5++);
    while ( v5 != v4 );
    v5 = (__int64 *)*((_QWORD *)this + 7);
  }
  *((_QWORD *)this + 8) = v5;
}
