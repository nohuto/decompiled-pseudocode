/*
 * XREFs of ArbFindSuitableRange @ 0x1C00940C0
 * Callers:
 *     AcpiMemarbFindSuitableRange @ 0x1C007E720 (AcpiMemarbFindSuitableRange.c)
 *     IrqArbFindSuitableRange @ 0x1C0090610 (IrqArbFindSuitableRange.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C0091388 (IrqArbpFindSuitableRangeMsi.c)
 * Callees:
 *     RtlFindRange_0 @ 0x1C0003FE6 (RtlFindRange_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     ArbShareDriverExclusive @ 0x1C009501C (ArbShareDriverExclusive.c)
 */

char __fastcall ArbFindSuitableRange(__int64 a1, __int64 a2)
{
  ULONGLONG v2; // r10
  ULONGLONG v4; // r8
  __int64 v7; // r9
  unsigned int v8; // ecx
  int v9; // edx
  int v10; // ecx
  ULONG Flags; // r11d
  UCHAR AttributeAvailableMask; // cl

  v2 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  if ( v2 > v4 )
    return 0;
  v7 = *(_QWORD *)(a2 + 40);
  if ( !*(_QWORD *)(v7 + 16) )
  {
    *(_QWORD *)a2 = v2;
    *(_QWORD *)(a2 + 8) = v2;
    return 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) & 0xFFFFFFFD) == 0 )
    *(_BYTE *)(a2 + 67) |= 1u;
  v8 = *(unsigned __int16 *)(a2 + 64);
  v9 = *(_DWORD *)(v7 + 36);
  v10 = (v8 >> 2) & 2;
  Flags = v10 | 1;
  if ( (v9 & 1) == 0 )
    Flags = v10;
  AttributeAvailableMask = *(_BYTE *)(a2 + 67);
  if ( (v9 & 8) != 0 )
  {
    AttributeAvailableMask |= 0x40u;
    *(_BYTE *)(a2 + 67) = AttributeAvailableMask;
  }
  if ( RtlFindRange_0(
         *(PRTL_RANGE_LIST *)(a1 + 48),
         v2,
         v4,
         *(_QWORD *)(v7 + 16),
         *(_QWORD *)(v7 + 24),
         Flags,
         AttributeAvailableMask,
         *(PVOID *)(a1 + 320),
         *(PRTL_CONFLICT_RANGE_CALLBACK *)(a1 + 328),
         (PULONGLONG)a2) >= 0 )
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)a2 + *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) - 1LL;
    return 1;
  }
  if ( (unsigned __int8)ArbShareDriverExclusive(a1, a2) )
    return 1;
  return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 272))(a1, a2);
}
