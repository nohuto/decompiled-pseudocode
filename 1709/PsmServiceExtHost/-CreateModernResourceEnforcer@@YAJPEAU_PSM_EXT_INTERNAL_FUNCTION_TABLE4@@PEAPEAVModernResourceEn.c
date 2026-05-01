/*
 * XREFs of ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x180020AA4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800211B0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ??0ModernResourceEnforcer@@IEAA@XZ @ 0x180020B1C (--0ModernResourceEnforcer@@IEAA@XZ.c)
 *     ?Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x180020B80 (-Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800269EC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateModernResourceEnforcer(
        struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1,
        struct ModernResourceEnforcer **a2)
{
  ModernResourceEnforcer *v4; // rax
  ModernResourceEnforcer *v5; // rbx
  int v6; // edi

  v4 = (ModernResourceEnforcer *)operator new(0x160uLL, (const struct std::nothrow_t *)&unk_180052988);
  if ( v4 )
    v5 = ModernResourceEnforcer::ModernResourceEnforcer(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = ModernResourceEnforcer::Init(v5, a1);
    if ( v6 >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
