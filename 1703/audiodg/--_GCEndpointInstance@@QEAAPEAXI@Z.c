/*
 * XREFs of ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140030644
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001A900 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14003FC9C (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
 *     ??1?$CAutoPtr@VCEndpointInstance@@@ATL@@QEAA@XZ @ 0x140041CC8 (--1-$CAutoPtr@VCEndpointInstance@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
CEndpointInstance *__fastcall CEndpointInstance::`scalar deleting destructor'(CEndpointInstance *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  __int64 v3; // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v2 )
    (**v2)(v2, 1LL);
  *((_QWORD *)this + 2) = 0LL;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  operator delete(this);
  return this;
}
