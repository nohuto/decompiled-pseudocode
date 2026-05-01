/*
 * XREFs of ??0ModernResourceEnforcer@@IEAA@XZ @ 0x180037068
 * Callers:
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x180036FF0 (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 * Callees:
 *     <none>
 */

ModernResourceEnforcer *__fastcall ModernResourceEnforcer::ModernResourceEnforcer(ModernResourceEnforcer *this)
{
  *(_QWORD *)this = &ModernResourceEnforcer::`vftable';
  *((_DWORD *)this + 60) = 1;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = (char *)this + 320;
  *((_QWORD *)this + 41) = (char *)this + 320;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_WORD *)this + 176) = 2048;
  *((_DWORD *)this + 90) = 0;
  *((_QWORD *)this + 38) = (char *)this + 296;
  *((_QWORD *)this + 37) = (char *)this + 296;
  RtlInitializeCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 248));
  return this;
}
