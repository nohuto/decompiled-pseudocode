/*
 * XREFs of sub_18001F9B0 @ 0x18001F9B0
 * Callers:
 *     RtlLockHeap @ 0x18001F870 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x180021980 (RtlUnlockHeap.c)
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 *     sub_180090C78 @ 0x180090C78 (sub_180090C78.c)
 *     sub_18009100C @ 0x18009100C (sub_18009100C.c)
 *     sub_180100E1C @ 0x180100E1C (sub_180100E1C.c)
 *     sub_180101254 @ 0x180101254 (sub_180101254.c)
 *     sub_180101390 @ 0x180101390 (sub_180101390.c)
 *     sub_18010144C @ 0x18010144C (sub_18010144C.c)
 *     sub_1801015EC @ 0x1801015EC (sub_1801015EC.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 *     sub_180101C9C @ 0x180101C9C (sub_180101C9C.c)
 *     sub_180101E60 @ 0x180101E60 (sub_180101E60.c)
 *     sub_180101FF0 @ 0x180101FF0 (sub_180101FF0.c)
 *     sub_18010216C @ 0x18010216C (sub_18010216C.c)
 *     sub_1801021F4 @ 0x1801021F4 (sub_1801021F4.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 */

char __fastcall sub_18001F9B0(_DWORD *a1, const char *a2)
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
  sub_180102310();
  return 0;
}
