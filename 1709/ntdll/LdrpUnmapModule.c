/*
 * XREFs of LdrpUnmapModule @ 0x180076FA8
 * Callers:
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpLoadEnclaveModule @ 0x1800D0B74 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x180076FE0 (RtlRemoveInvertedFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrpUnmapModule(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
      RtlRemoveInvertedFunctionTable();
    result = NtUnmapViewOfSection(-1LL, *(_QWORD *)(a1 + 48), a3);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
