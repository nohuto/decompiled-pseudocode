/*
 * XREFs of LdrpFreeReplacedModule @ 0x18006D4E0
 * Callers:
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     LdrpLoadDllInternal @ 0x18002DFFC (LdrpLoadDllInternal.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpFreeLoadContext @ 0x18006D59C (LdrpFreeLoadContext.c)
 *     LdrpHandlePendingModuleReplaced @ 0x18006D638 (LdrpHandlePendingModuleReplaced.c)
 * Callees:
 *     LdrpFreeLoadContext @ 0x18006D59C (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeReplacedModule(__int64 a1)
{
  LdrpFreeLoadContext(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return LdrpDereferenceModule(a1);
}
