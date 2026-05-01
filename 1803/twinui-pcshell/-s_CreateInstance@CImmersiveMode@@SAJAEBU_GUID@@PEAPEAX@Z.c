/*
 * XREFs of ?s_CreateInstance@CImmersiveMode@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180118B60
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x180110654 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x18008FFB0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0CImmersiveMode@@QEAA@XZ @ 0x180116D3C (--0CImmersiveMode@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  CImmersiveMode *v3; // rbx
  CImmersiveMode *v4; // rax
  CImmersiveMode *v5; // rsi
  CImmersiveMode *v6; // rcx
  signed int inited; // edi

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (CImmersiveMode *)operator new(0x1D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  v6 = 0LL;
  if ( v4 )
  {
    v3 = CImmersiveMode::CImmersiveMode(v4);
    v5 = v3;
    v6 = v3;
  }
  inited = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    inited = CObjectWithThreadUseDetection::InitApartmentId((CImmersiveMode *)((char *)v6 + 184));
    if ( inited >= 0 )
      inited = (**(__int64 (__fastcall ***)(CImmersiveMode *, GUID *, void **))v3)(
                 v3,
                 &GUID_64aa042d_4144_4c88_afb9_aed881c0ffee,
                 a2);
  }
  if ( v5 )
    (*(void (__fastcall **)(CImmersiveMode *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)inited;
}
