/*
 * XREFs of PopDispatchQuerySetIrp @ 0x14012AA38
 * Callers:
 *     PoHandleIrp @ 0x14012A7F4 (PoHandleIrp.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 */

__int64 __fastcall PopDispatchQuerySetIrp(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  __int64 v6; // rdx

  v2 = a1[23];
  *(_BYTE *)(v2 + 3) |= 1u;
  ObfReferenceObjectWithTag(*(PVOID *)(v2 + 40), 0x746C6644u);
  v3 = a1 + 21;
  if ( a1 == (_QWORD *)PopInrushIrp )
  {
    v6 = PopIrpWorkerList;
    if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList )
      __fastfail(3u);
    *v3 = PopIrpWorkerList;
    a1[22] = &PopIrpWorkerList;
    *(_QWORD *)(v6 + 8) = v3;
    PopIrpWorkerList = (__int64)(a1 + 21);
  }
  else
  {
    v4 = (_QWORD *)qword_1403657C8;
    if ( *(__int64 **)qword_1403657C8 != &PopIrpWorkerList )
      __fastfail(3u);
    *v3 = &PopIrpWorkerList;
    a1[22] = v4;
    *v4 = v3;
    qword_1403657C8 = (__int64)(a1 + 21);
  }
  return KeReleaseSemaphoreEx((__int64)&PopIrpWorkerSemaphore, 0, 1);
}
