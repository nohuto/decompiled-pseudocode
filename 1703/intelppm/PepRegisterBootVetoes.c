/*
 * XREFs of PepRegisterBootVetoes @ 0x1C001A870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepRegisterBootVetoes(__int64 a1, struct _IO_WORKITEM *a2)
{
  IoFreeWorkItem(a2);
  PoFxProcessorNotification(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1088LL), 26LL, 0LL);
  return ((__int64 (*)(void))qword_1C0015FE0)();
}
