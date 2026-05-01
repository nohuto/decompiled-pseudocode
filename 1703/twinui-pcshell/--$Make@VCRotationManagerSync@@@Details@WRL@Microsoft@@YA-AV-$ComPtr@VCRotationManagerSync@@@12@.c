/*
 * XREFs of ??$Make@VCRotationManagerSync@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRotationManagerSync@@@12@XZ @ 0x18003A24C
 * Callers:
 *     ?CRotationManagerSync_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180039508 (-CRotationManagerSync_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0CRotationManagerSync@@QEAA@XZ @ 0x180039354 (--0CRotationManagerSync@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CRotationManagerSync **__fastcall Microsoft::WRL::Details::Make<CRotationManagerSync>(CRotationManagerSync **a1)
{
  CRotationManagerSync *v2; // rax
  CRotationManagerSync *v3; // rdi

  *a1 = 0LL;
  v2 = (CRotationManagerSync *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CRotationManagerSync::CRotationManagerSync(v2);
    if ( *a1 )
      (*(void (__fastcall **)(CRotationManagerSync *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
