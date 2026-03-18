/*
 * XREFs of AcpiPortarbBacktrackAllocation @ 0x1C00A11A0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiArblibGetNextAlias @ 0x1C009CAE8 (AcpiArblibGetNextAlias.c)
 */

NTSTATUS __fastcall AcpiPortarbBacktrackAllocation(__int64 a1, ULONGLONG *a2)
{
  __int64 v2; // rdi
  int v5; // ebp
  char NextAlias; // al
  struct _RTL_RANGE_LIST *v7; // rcx
  void *v8; // r9
  ULONGLONG Start; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  Start = *a2;
  v5 = *(_DWORD *)(a2[5] + 36);
  while ( 1 )
  {
    NextAlias = AcpiArblibGetNextAlias(v5, v2, &Start);
    v7 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
    v8 = *(void **)(a2[4] + 32);
    if ( !NextAlias )
      break;
    v2 = Start;
    RtlDeleteRange(v7, Start, *(_QWORD *)(a2[5] + 16) + Start - 1, v8);
  }
  return RtlDeleteRange_0(v7, *a2, a2[1], v8);
}
