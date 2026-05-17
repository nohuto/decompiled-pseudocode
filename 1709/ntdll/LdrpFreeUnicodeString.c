/*
 * XREFs of LdrpFreeUnicodeString @ 0x18004F9BC
 * Callers:
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpApplyFileNameRedirection @ 0x180031AA8 (LdrpApplyFileNameRedirection.c)
 *     LdrpFindLoadedDllInternal @ 0x180035624 (LdrpFindLoadedDllInternal.c)
 *     LdrpSearchPath @ 0x18004D43C (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x18004DA64 (LdrpResolveDllName.c)
 *     LdrpMapDllSearchPath @ 0x18004F618 (LdrpMapDllSearchPath.c)
 *     LdrpAppCompatRedirect @ 0x180052E80 (LdrpAppCompatRedirect.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall LdrpFreeUnicodeString(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = NtdllpFreeStringRoutine(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
  return result;
}
