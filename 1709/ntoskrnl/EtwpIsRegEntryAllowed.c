/*
 * XREFs of EtwpIsRegEntryAllowed @ 0x1404EFD60
 * Callers:
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpApplyTransientFilters @ 0x14045213C (EtwpApplyTransientFilters.c)
 *     EtwpIsGuidAllowed @ 0x14048E60C (EtwpIsGuidAllowed.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1404EFE30 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140751B88 (EtwpCheckCurrentUserProcessAccess.c)
 */

bool __fastcall EtwpIsRegEntryAllowed(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, char a6)
{
  int v7; // esi
  __int64 v8; // rbx
  int v11; // eax

  v7 = *(_DWORD *)(a4 + 72);
  v8 = a3;
  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 && (*(_BYTE *)(a3 + 17) || *(_BYTE *)(a3 + 18))
    || (v7 == 2 || *(_BYTE *)(a3 + 18)) && !EtwpApplyTransientFilters(a1, a4, a5[9], a5)
    || (*(_BYTE *)(a1 + 98) & 8) != 0
    && (a6 == 2 || !v7 && *(_WORD *)(a4 + 104) != *(_WORD *)(*(_QWORD *)(a1 + 32) + 72LL)) )
  {
    return 0;
  }
  if ( *(_BYTE *)(v8 + 18) == 1 )
  {
    v11 = EtwpCheckCurrentUserProcessAccess(*(_QWORD *)(a1 + 80));
  }
  else
  {
    if ( a6 == 2 && !EtwpIsGuidAllowed(a2, (const void *)(*(_QWORD *)(a1 + 32) + 24LL)) )
      return 0;
    LOBYTE(a3) = *(_BYTE *)(v8 + 16);
    v11 = EtwpCheckProviderLoggingAccess(a1, v8, a3);
  }
  return !v11;
}
