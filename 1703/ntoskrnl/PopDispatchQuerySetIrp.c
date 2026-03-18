/*
 * XREFs of PopDispatchQuerySetIrp @ 0x140145880
 * Callers:
 *     PoHandleIrp @ 0x140145564 (PoHandleIrp.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PopDispatchQuerySetIrp(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v7; // rdx

  v2 = a1[23];
  *(_BYTE *)(v2 + 3) |= 1u;
  ObfReferenceObjectWithTag(*(PVOID *)(v2 + 40), 0x746C6644u);
  v4 = a1 + 21;
  if ( a1 == (_QWORD *)PopInrushIrp )
  {
    v7 = PopIrpWorkerList;
    if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList )
      __fastfail(3u);
    *v4 = PopIrpWorkerList;
    a1[22] = &PopIrpWorkerList;
    *(_QWORD *)(v7 + 8) = v4;
    PopIrpWorkerList = (__int64)(a1 + 21);
  }
  else
  {
    v5 = (_QWORD *)qword_14034B168;
    if ( *(__int64 **)qword_14034B168 != &PopIrpWorkerList )
      __fastfail(3u);
    *v4 = &PopIrpWorkerList;
    a1[22] = v5;
    *v5 = v4;
    qword_14034B168 = (__int64)(a1 + 21);
  }
  return KeReleaseSemaphoreEx((__int64)&PopIrpWorkerSemaphore, 0, 1, v3, 0);
}
