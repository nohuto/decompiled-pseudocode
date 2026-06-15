/*
 * XREFs of ?LowerEndpointVolumes@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x18002BFE4
 * Callers:
 *     ?ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ @ 0x18002C128 (-ShowWarningDialog@CVolumeLimitTrackerImpl@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeLimitTrackerImpl::LowerEndpointVolumes(CVolumeLimitTrackerImpl *this)
{
  unsigned int v1; // edi
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (_QWORD *)*((_QWORD *)this + 17);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    v6 = 0LL;
    if ( (*(int (__fastcall **)(struct IVolumeProvider *, _QWORD, __int64 *))(*(_QWORD *)g_VolumeProvider + 48LL))(
           g_VolumeProvider,
           *(_QWORD *)(v3 + 88),
           &v6) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 184LL))(v6);
    *(_DWORD *)(v3 + 100) = *(_DWORD *)(v3 + 96);
    v1 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v3 + 72) + 56LL))(
           *(_QWORD *)(v3 + 72),
           v4,
           0LL);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v1;
}
