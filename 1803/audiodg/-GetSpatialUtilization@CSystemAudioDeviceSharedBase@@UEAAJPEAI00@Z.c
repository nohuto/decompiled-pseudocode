/*
 * XREFs of ?GetSpatialUtilization@CSystemAudioDeviceSharedBase@@UEAAJPEAI00@Z @ 0x140039830
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetSpatialUtilization(
        CSystemAudioDeviceSharedBase *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  CSystemAudioDeviceSharedBase *v5; // rbx
  __int128 v9; // [rsp+40h] [rbp-48h] BYREF

  v5 = this;
  v9 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v9);
  LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, unsigned int *))(**((_QWORD **)v5 + 41)
                                                                                                  + 176LL))(
                  *((_QWORD *)v5 + 41),
                  a2,
                  a3,
                  a4);
  EtwEventActivityIdControl(4LL, &v9);
  return (unsigned int)v5;
}
