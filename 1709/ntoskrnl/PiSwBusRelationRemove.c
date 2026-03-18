/*
 * XREFs of PiSwBusRelationRemove @ 0x1406CD984
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PiSwCloseDevice @ 0x1406CDA04 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x1406CE2EC (PiSwProcessRemove.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiSwDeviceDereference @ 0x1405F2D74 (PiSwDeviceDereference.c)
 */

void __fastcall PiSwBusRelationRemove(char *P)
{
  char *v1; // rax
  __int64 v3; // rdx
  char **v4; // rcx
  _QWORD *v5; // rdx
  void *v6; // rdi

  v1 = P + 96;
  v3 = *((_QWORD *)P + 12);
  if ( *(char **)(v3 + 8) != P + 96 || (v4 = (char **)*((_QWORD *)P + 13), *v4 != v1) )
    __fastfail(3u);
  *v4 = (char *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  v5 = (_QWORD *)*((_QWORD *)P + 14);
  if ( (_QWORD *)v5[2] == v5 + 2 )
  {
    v6 = (void *)v5[1];
    RtlDeleteElementGenericTableAvl(&PiSwBusRelationsTable, v5);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x57706E50u);
  }
  *((_QWORD *)P + 14) = 0LL;
  PiSwDeviceDereference(P);
}
