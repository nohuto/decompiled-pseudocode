/*
 * XREFs of DpiFdoRebootWorkItem @ 0x1C01DEBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiFdoRebootWorkItem(_QWORD *IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  _QWORD *v9; // rax

  v4 = (unsigned int)Context;
  IoFreeWorkItem(IoWorkItem);
  if ( NtShutdownSystem(ShutdownReboot) < 0 )
  {
    v8 = IoObject[8];
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5, v7);
    v9[5] = v4;
    v9[3] = 275LL;
    v9[4] = 25LL;
    v9[6] = *(unsigned int *)(v8 + 1108);
    v9[7] = *(unsigned int *)(v8 + 1112);
    WdLogEvent5_WdCriticalError(v9);
  }
}
