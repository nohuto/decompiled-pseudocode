/*
 * XREFs of RtlGetNtProductType @ 0x18005A930
 * Callers:
 *     RtlGetVersion @ 0x18002DAB0 (RtlGetVersion.c)
 *     sub_18005A2C4 @ 0x18005A2C4 (sub_18005A2C4.c)
 *     sub_18005A768 @ 0x18005A768 (sub_18005A768.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800E6DA0 (RtlRestoreBootStatusDefaults.c)
 *     sub_180104A3C @ 0x180104A3C (sub_180104A3C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180088E4C @ 0x180088E4C (sub_180088E4C.c)
 */

char __fastcall RtlGetNtProductType(_DWORD *a1)
{
  char v2; // bl
  int v3; // eax

  v2 = 0;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v3 = *((_DWORD *)NtCurrentPeb()->HotpatchInformation + 4);
    goto LABEL_4;
  }
  if ( MEMORY[0x7FFE0268] )
  {
    v3 = MEMORY[0x7FFE0264];
LABEL_4:
    *a1 = v3;
    return 1;
  }
  if ( (int)sub_180088E4C(a1) < 0 )
  {
    *a1 = 1;
    return v2;
  }
  return 1;
}
