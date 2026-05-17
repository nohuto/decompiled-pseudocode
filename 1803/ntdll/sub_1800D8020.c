/*
 * XREFs of sub_1800D8020 @ 0x1800D8020
 * Callers:
 *     sub_1800D7F24 @ 0x1800D7F24 (sub_1800D7F24.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 */

__int64 __fastcall sub_1800D8020(void *a1)
{
  unsigned int v2; // ebx
  struct _PEB *v3; // rax

  v2 = -1073741823;
  ZwQueryInformationProcess();
  v3 = NtCurrentPeb();
  if ( v3 )
  {
    v3->WerShipAssertPtr = a1;
    return 0;
  }
  return v2;
}
