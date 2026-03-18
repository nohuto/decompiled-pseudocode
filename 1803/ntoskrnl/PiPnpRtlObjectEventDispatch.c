/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x140509CE4
 * Callers:
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     PiDqObjectManagerHandleObjectEvent @ 0x1405E0490 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiDqGetObjectManagerForPnpObjectType @ 0x1405E0580 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDcHandleObjectEvent @ 0x1405E9FC0 (PiDcHandleObjectEvent.c)
 */

__int64 __fastcall PiPnpRtlObjectEventDispatch(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 4);
  if ( (result & 0xB) != 0 || *(_DWORD *)(a1 + 76) )
  {
    PiDcHandleObjectEvent();
    result = PiDqGetObjectManagerForPnpObjectType(*(unsigned int *)(*(_QWORD *)(a1 + 8) + 28LL));
    if ( result )
      return PiDqObjectManagerHandleObjectEvent(result, a1);
  }
  return result;
}
