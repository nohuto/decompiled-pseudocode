/*
 * XREFs of CmpSignalDeferredPosts @ 0x14046FA38
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmpProcessLightWeightUOW @ 0x14044BDE0 (CmpProcessLightWeightUOW.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmpCloseKeyObject @ 0x14046F8B0 (CmpCloseKeyObject.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmpPostNotify @ 0x14047BFBC (CmpPostNotify.c)
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     CmpFreePostBlock @ 0x14046FAD4 (CmpFreePostBlock.c)
 */

_QWORD *__fastcall CmpSignalDeferredPosts(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  PVOID **v4; // rbx
  struct _KEVENT *v5; // rcx
  PVOID *v6; // rax
  struct _WORK_QUEUE_ITEM *v7; // rcx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      return result;
    if ( (_QWORD **)result[1] != a1 || (v3 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *a1 = v3;
    v4 = (PVOID **)(result - 2);
    v3[1] = a1;
    if ( (unsigned __int16)*((_DWORD *)result + 10) != 3 )
    {
      v5 = (struct _KEVENT *)*v4[8];
LABEL_6:
      KeSetEvent(v5, 0, 0);
      ObfDereferenceObject(*v4[8]);
      goto LABEL_7;
    }
    v6 = v4[8];
    v7 = (struct _WORK_QUEUE_ITEM *)v6[1];
    if ( v7 )
      ExQueueWorkItem(v7, *((WORK_QUEUE_TYPE *)v6 + 4));
    v5 = (struct _KEVENT *)*v4[8];
    if ( v5 )
      goto LABEL_6;
LABEL_7:
    CmpFreePostBlock(v4);
  }
}
