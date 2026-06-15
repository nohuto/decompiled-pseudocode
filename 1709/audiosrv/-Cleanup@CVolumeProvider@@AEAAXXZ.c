/*
 * XREFs of ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x18006E6F4
 * Callers:
 *     ??1CVolumeProvider@@UEAA@XZ @ 0x18006E630 (--1CVolumeProvider@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 */

void __fastcall CVolumeProvider::Cleanup(CVolumeProvider *this)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rsi
  __int64 *v4; // rsi
  __int64 *j; // rbx

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_d150c8ede9573e33824fdb490ef726ad_Traceguids);
  }
  v2 = (_QWORD *)*((_QWORD *)this + 8);
  for ( i = (_QWORD *)*((_QWORD *)this + 7); i != v2; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 264LL))(*i);
  v4 = (__int64 *)*((_QWORD *)this + 8);
  for ( j = (__int64 *)*((_QWORD *)this + 7); j != v4; ++j )
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(j);
  *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
}
