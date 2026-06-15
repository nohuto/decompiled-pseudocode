/*
 * XREFs of ?CreateInstance@CVolumeLimitTrackerNull@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x18002C300
 * Callers:
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x18002AA4C (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 * Callees:
 *     ??0CDriverListener@@QEAA@XZ @ 0x18002C3B0 (--0CDriverListener@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180035538 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeLimitTrackerNull::CreateInstance(struct IVolumeLimitTracker **a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  unsigned int v4; // edi
  struct Microsoft::WRL::Details::ModuleBase *v5; // rcx

  *a1 = 0LL;
  v2 = operator new(0x220uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v5 = Microsoft::WRL::Details::ModuleBase::module_;
    v2[3] = 1;
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVolumeLimitTracker>::`vftable';
    if ( v5 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v5 + 8LL))(v5);
    v3[4] = 1;
    *(_QWORD *)v3 = &CVolumeLimitTrackerNull::`vftable';
    CDriverListener::CDriverListener((CDriverListener *)(v3 + 6));
    v4 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, struct IVolumeLimitTracker **))v3)(
           v3,
           &GUID_caa0a1b0_90b5_451e_b5d6_8c3807017c35,
           a1);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
