/*
 * XREFs of PiPnpRtlObjectEventDispatch @ 0x1404890C4
 * Callers:
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     PiDqGetObjectManagerForPnpObjectType @ 0x140446840 (PiDqGetObjectManagerForPnpObjectType.c)
 *     PiDcHandleObjectEvent @ 0x140468B2C (PiDcHandleObjectEvent.c)
 */

void __fastcall PiPnpRtlObjectEventDispatch(__int64 a1)
{
  struct _ERESOURCE *ObjectManagerForPnpObjectType; // rax

  if ( (*(_DWORD *)(a1 + 4) & 0xB) != 0 || *(_DWORD *)(a1 + 76) )
  {
    PiDcHandleObjectEvent(a1);
    ObjectManagerForPnpObjectType = PiDqGetObjectManagerForPnpObjectType(*(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL));
    if ( ObjectManagerForPnpObjectType )
      PiDqObjectManagerHandleObjectEvent((__int64)ObjectManagerForPnpObjectType, a1);
  }
}
