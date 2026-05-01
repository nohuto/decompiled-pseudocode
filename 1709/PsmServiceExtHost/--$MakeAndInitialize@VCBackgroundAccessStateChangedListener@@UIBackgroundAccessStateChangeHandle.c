/*
 * XREFs of ??$MakeAndInitialize@VCBackgroundAccessStateChangedListener@@UIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIBackgroundAccessStateChangeHandler@@AEAPEAU_HOST_ACTIVITY_MANAGER@@AEAK@Z @ 0x180048798
 * Callers:
 *     ?HampSessionAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z @ 0x180048D70 (-HampSessionAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800269EC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ??0CBackgroundAccessStateChangedListener@@QEAA@XZ @ 0x180048834 (--0CBackgroundAccessStateChangedListener@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBackgroundAccessStateChangedListener,IBackgroundAccessStateChangeHandler,_HOST_ACTIVITY_MANAGER * &,unsigned long &>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  CBackgroundAccessStateChangedListener *v6; // rax
  unsigned int v7; // edi
  CBackgroundAccessStateChangedListener *v8; // rbx
  int v9; // edx

  *a1 = 0LL;
  v6 = (CBackgroundAccessStateChangedListener *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = CBackgroundAccessStateChangedListener::CBackgroundAccessStateChangedListener(v6);
    v9 = *a3;
    *((_QWORD *)v8 + 5) = *a2;
    *((_DWORD *)v8 + 12) = v9;
    v7 = (**(__int64 (__fastcall ***)(CBackgroundAccessStateChangedListener *, GUID *, _QWORD *))v8)(
           v8,
           &GUID_43c6b434_c1be_4ad2_af03_c0deaccebd1f,
           a1);
    (*(void (__fastcall **)(CBackgroundAccessStateChangedListener *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
