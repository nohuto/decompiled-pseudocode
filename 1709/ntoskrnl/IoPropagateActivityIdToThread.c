/*
 * XREFs of IoPropagateActivityIdToThread @ 0x140117E90
 * Callers:
 *     <none>
 * Callees:
 *     IoGetActivityIdIrp @ 0x1401034A0 (IoGetActivityIdIrp.c)
 *     IopIrpHasExtensionType @ 0x140117EC8 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoPropagateActivityIdToThread(__int64 a1, _OWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  PVOID SparePtr; // rax

  if ( !(unsigned __int8)IopIrpHasExtensionType(a1, 0LL, a3, a4) )
    return 3221226021LL;
  IoGetActivityIdIrp(v6, a2);
  CurrentThread = KeGetCurrentThread();
  SparePtr = CurrentThread[1].WaitBlock[0].SparePtr;
  CurrentThread[1].WaitBlock[0].SparePtr = a2;
  *a3 = SparePtr;
  return 0LL;
}
