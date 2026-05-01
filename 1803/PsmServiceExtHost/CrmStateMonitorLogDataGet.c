/*
 * XREFs of CrmStateMonitorLogDataGet @ 0x180005764
 * Callers:
 *     CrmStateMonitorStateSet @ 0x180005574 (CrmStateMonitorStateSet.c)
 *     CrmLogStateMonitorRundown @ 0x180034E60 (CrmLogStateMonitorRundown.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x1800057E0 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 */

const void *__fastcall CrmStateMonitorLogDataGet(const void **a1, _QWORD *a2, const void *a3)
{
  unsigned int v6; // esi
  const void *v7; // rdx
  const void *result; // rax

  v6 = CrmStateMonitorStateSizeGet(*(unsigned int *)a1, a2, a3);
  memcpy_0((char *)a2 + 12, a1[5], v6);
  v7 = a3;
  if ( !a3 )
    v7 = a1[5];
  memcpy_0(a2, v7, v6);
  a2[4] = a1[6];
  result = (const void *)MEMORY[0x7FFE0008];
  a2[3] = MEMORY[0x7FFE0008];
  a1[6] = result;
  return result;
}
