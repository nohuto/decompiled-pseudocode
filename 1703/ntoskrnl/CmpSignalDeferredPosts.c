/*
 * XREFs of CmpSignalDeferredPosts @ 0x1404CE014
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmpPostNotify @ 0x14048C118 (CmpPostNotify.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 *     CmpCloseKeyObject @ 0x1404CDE90 (CmpCloseKeyObject.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpProcessLightWeightUOW @ 0x140669CF4 (CmpProcessLightWeightUOW.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     CmpFreePostBlock @ 0x1404CE0B0 (CmpFreePostBlock.c)
 */

_QWORD *__fastcall CmpSignalDeferredPosts(_QWORD **a1)
{
  _QWORD *result; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  struct _KEVENT *v5; // rcx
  __int64 v6; // rax
  struct _WORK_QUEUE_ITEM *v7; // rcx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      return result;
    v3 = *result;
    if ( (_QWORD **)result[1] != a1 || *(_QWORD **)(v3 + 8) != result )
      __fastfail(3u);
    *a1 = (_QWORD *)v3;
    v4 = result - 2;
    *(_QWORD *)(v3 + 8) = a1;
    if ( (unsigned __int16)*((_DWORD *)result + 10) != 3 )
    {
      v5 = *(struct _KEVENT **)v4[8];
LABEL_6:
      KeSetEvent(v5, 0, 0);
      ObfDereferenceObject(*(PVOID *)v4[8]);
      goto LABEL_7;
    }
    v6 = v4[8];
    v7 = *(struct _WORK_QUEUE_ITEM **)(v6 + 8);
    if ( v7 )
      ExQueueWorkItem(v7, *(WORK_QUEUE_TYPE *)(v6 + 16));
    v5 = *(struct _KEVENT **)v4[8];
    if ( v5 )
      goto LABEL_6;
LABEL_7:
    CmpFreePostBlock(v4);
  }
}
