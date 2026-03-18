/*
 * XREFs of KeUnInitializeUmsThread @ 0x140742CE8
 * Callers:
 *     PspDetachThreadFromUmsCompletionList @ 0x140284734 (PspDetachThreadFromUmsCompletionList.c)
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     PspUmsUnInitThread @ 0x14077CAD4 (PspUmsUnInitThread.c)
 * Callees:
 *     KeRundownQueueEx @ 0x14013E1A4 (KeRundownQueueEx.c)
 *     KeSetCurrentUmsTeb @ 0x14024CEB0 (KeSetCurrentUmsTeb.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KeUnInitializeUmsThread(__int64 a1)
{
  char v1; // al
  void *v3; // rdi
  unsigned int v4; // eax

  v1 = *(_BYTE *)(a1 + 3);
  v3 = *(void **)(a1 + 496);
  if ( (v1 & 0x40) != 0 )
  {
    v4 = 30;
LABEL_5:
    _interlockedbittestandreset((volatile signed __int32 *)a1, v4);
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 496) = 0LL;
    return 0LL;
  }
  if ( v1 < 0 )
  {
    KeSetCurrentUmsTeb((struct _KTHREAD *)a1, *(_QWORD *)(a1 + 240));
    KeRundownQueueEx((__int64)v3 + 32, 1);
    v4 = 31;
    goto LABEL_5;
  }
  return 3221227292LL;
}
