/*
 * XREFs of ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x180036FF0
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180037530 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ??0ModernResourceEnforcer@@IEAA@XZ @ 0x180037068 (--0ModernResourceEnforcer@@IEAA@XZ.c)
 *     ?Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x1800370DC (-Init@ModernResourceEnforcer@@IEAAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F5B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateModernResourceEnforcer(
        struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1,
        struct ModernResourceEnforcer **a2)
{
  ModernResourceEnforcer *v4; // rax
  ModernResourceEnforcer *v5; // rbx
  int v6; // edi

  v4 = (ModernResourceEnforcer *)operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
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
