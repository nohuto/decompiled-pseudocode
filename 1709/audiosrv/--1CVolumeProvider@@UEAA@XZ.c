/*
 * XREFs of ??1CVolumeProvider@@UEAA@XZ @ 0x18006E630
 * Callers:
 *     ??_ECVolumeProvider@@UEAAPEAXI@Z @ 0x18006E6C0 (--_ECVolumeProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Cleanup@CVolumeProvider@@AEAAXXZ @ 0x18006E6F4 (-Cleanup@CVolumeProvider@@AEAAXXZ.c)
 */

void __fastcall CVolumeProvider::~CVolumeProvider(CVolumeProvider *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rsi

  *(_QWORD *)this = &CVolumeProvider::`vftable';
  CVolumeProvider::Cleanup(this);
  v2 = (__int64 *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 8);
    while ( v2 != v3 )
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v2++);
    std::_Deallocate(*((_QWORD **)this + 7), (__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 7)) >> 3, 8uLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
