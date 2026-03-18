/*
 * XREFs of KeUnInitializeUmsThread @ 0x1406D8C0C
 * Callers:
 *     PspDetachThreadFromUmsCompletionList @ 0x14024E3A4 (PspDetachThreadFromUmsCompletionList.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     PspUmsUnInitThread @ 0x140718B08 (PspUmsUnInitThread.c)
 * Callees:
 *     KeRundownQueueEx @ 0x1400DB4A4 (KeRundownQueueEx.c)
 *     KeSetCurrentUmsTeb @ 0x14020EC5C (KeSetCurrentUmsTeb.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeUnInitializeUmsThread(__int64 a1)
{
  char v1; // al
  void *v3; // rdi

  v1 = *(_BYTE *)(a1 + 3);
  v3 = *(void **)(a1 + 496);
  if ( (v1 & 0x40) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x1Eu);
LABEL_5:
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 496) = 0LL;
    return 0LL;
  }
  if ( v1 < 0 )
  {
    KeSetCurrentUmsTeb((struct _KTHREAD *)a1, *(_QWORD *)(a1 + 240));
    KeRundownQueueEx((__int64)v3 + 32, 1);
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x1Fu);
    goto LABEL_5;
  }
  return 3221227292LL;
}
