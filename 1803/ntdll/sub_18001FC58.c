/*
 * XREFs of sub_18001FC58 @ 0x18001FC58
 * Callers:
 *     RtlUnlockHeap @ 0x18001FB70 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18001FC90 (RtlLockHeap.c)
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 *     sub_1800FF610 @ 0x1800FF610 (sub_1800FF610.c)
 *     sub_1800FF9D0 @ 0x1800FF9D0 (sub_1800FF9D0.c)
 *     sub_1800FFE08 @ 0x1800FFE08 (sub_1800FFE08.c)
 *     sub_1800FFF44 @ 0x1800FFF44 (sub_1800FFF44.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_180100300 @ 0x180100300 (sub_180100300.c)
 *     sub_1801004A0 @ 0x1801004A0 (sub_1801004A0.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_180100B78 @ 0x180100B78 (sub_180100B78.c)
 *     sub_180100D3C @ 0x180100D3C (sub_180100D3C.c)
 *     sub_180100ECC @ 0x180100ECC (sub_180100ECC.c)
 *     sub_180101048 @ 0x180101048 (sub_180101048.c)
 *     sub_1801010D0 @ 0x1801010D0 (sub_1801010D0.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 */

char __fastcall sub_18001FC58(_DWORD *a1, const char *a2)
{
  if ( a1[38] == -285217025 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", a1);
  if ( a2 )
    DbgPrint(", passed to %s", a2);
  DbgPrint("\n");
  sub_1801011EC();
  return 0;
}
