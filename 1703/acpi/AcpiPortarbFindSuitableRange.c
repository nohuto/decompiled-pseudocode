/*
 * XREFs of AcpiPortarbFindSuitableRange @ 0x1C00A1230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     AcpiArblibIsAliasedRangeAvailable @ 0x1C009CBC0 (AcpiArblibIsAliasedRangeAvailable.c)
 */

char __fastcall AcpiPortarbFindSuitableRange(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  UCHAR AttributeAvailableMask; // bp
  ULONG Flags; // esi

  v4 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(v4 + 16) )
  {
    v6 = *(_QWORD *)(a2 + 32);
    AttributeAvailableMask = 0;
    if ( (*(_DWORD *)(v6 + 40) & 0xFFFFFFFD) == 0 || (*(_DWORD *)(v6 + 44) & 1) != 0 )
      AttributeAvailableMask = 1;
    Flags = *(_DWORD *)(v4 + 36) & 1;
    while ( *(_QWORD *)(a2 + 16) <= *(_QWORD *)(a2 + 24)
         && (RtlFindRange(
               *(PRTL_RANGE_LIST *)(a1 + 48),
               *(_QWORD *)(a2 + 16),
               *(_QWORD *)(a2 + 24),
               *(_QWORD *)(v4 + 16),
               *(_QWORD *)(v4 + 24),
               Flags,
               AttributeAvailableMask,
               *(PVOID *)(a1 + 320),
               *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 328),
               (PULONGLONG)a2) >= 0
          || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 272))(a1, a2)) )
    {
      *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 - 1LL + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
      if ( AcpiArblibIsAliasedRangeAvailable(a1, (__int128 *)a2) )
        return 1;
      v4 = *(_QWORD *)(a2 + 40);
      *(_QWORD *)a2 += *(_QWORD *)(v4 + 16);
    }
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2;
    return 1;
  }
}
