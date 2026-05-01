/*
 * XREFs of ??0ModernResourceEnforcer@@IEAA@XZ @ 0x180020B1C
 * Callers:
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x180020AA4 (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 * Callees:
 *     <none>
 */

ModernResourceEnforcer *__fastcall ModernResourceEnforcer::ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 38) = (char *)this + 304;
  *((_QWORD *)this + 39) = (char *)this + 304;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_WORD *)this + 168) = 2048;
  *((_DWORD *)this + 86) = 0;
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  RtlInitializeCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 16));
  return this;
}
