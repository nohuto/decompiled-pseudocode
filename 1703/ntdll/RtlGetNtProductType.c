/*
 * XREFs of RtlGetNtProductType @ 0x18000FC40
 * Callers:
 *     sub_18000F610 @ 0x18000F610 (sub_18000F610.c)
 *     sub_18000FAB4 @ 0x18000FAB4 (sub_18000FAB4.c)
 *     RtlGetVersion @ 0x1800396A0 (RtlGetVersion.c)
 *     sub_1800616E4 @ 0x1800616E4 (sub_1800616E4.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EB450 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800F5960 @ 0x1800F5960 (sub_1800F5960.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  int v6; // eax

  v5 = 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2, a3, a4) )
  {
    v6 = *((_DWORD *)NtCurrentPeb()->HotpatchInformation + 4);
    goto LABEL_4;
  }
  if ( MEMORY[0x7FFE0268] )
  {
    v6 = MEMORY[0x7FFE0264];
LABEL_4:
    *a1 = v6;
    return 1;
  }
  if ( (int)sub_1800F5960(a1) < 0 )
  {
    *a1 = 1;
    return v5;
  }
  return 1;
}
