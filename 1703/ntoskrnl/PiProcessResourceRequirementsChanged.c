/*
 * XREFs of PiProcessResourceRequirementsChanged @ 0x1406A6C40
 * Callers:
 *     PnpDeviceActionWorker @ 0x14003D340 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     PoFxActivateDevice @ 0x14006815C (PoFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140068444 (PoFxIdleDevice.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 *     PipClearDevNodeFlags @ 0x1404A770C (PipClearDevNodeFlags.c)
 *     PipSetDevNodeFlags @ 0x1404E2E9C (PipSetDevNodeFlags.c)
 *     PnpReallocateResources @ 0x1406A7CA0 (PnpReallocateResources.c)
 */

__int64 __fastcall PiProcessResourceRequirementsChanged(__int64 *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  int v5; // ebx
  int v7; // [rsp+50h] [rbp+8h] BYREF
  char v8; // [rsp+54h] [rbp+Ch]

  v2 = (_QWORD *)a1[2];
  if ( v2 )
    v3 = *(_QWORD *)(v2[39] + 40LL);
  else
    v3 = 0LL;
  ObfReferenceObjectWithTag(v2, 0x65706E50u);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 787) <= 1 )
  {
    v5 = -1073741738;
  }
  else
  {
    PoFxActivateDevice(a1[2]);
    *(_DWORD *)(v3 + 704) |= 0x40u;
    PipClearDevNodeFlags(v3, 256);
    PipSetDevNodeFlags(v3, 1024);
    PipClearDevNodeProblem(v3);
    if ( *(_DWORD *)(v3 + 300) == 776 )
    {
      if ( a1[4] )
        PipClearDevNodeFlags(v3, 2048);
      else
        PipSetDevNodeFlags(v3, 2048);
      PnpReallocateResources(v3);
      v4 = a1[5];
      v7 = 3;
      v8 = PnPBootDriversInitialized;
      ObfReferenceObject(*(PVOID *)(IopRootDeviceNode + 32));
      v5 = PipProcessDevNodeTree(IopRootDeviceNode, (__int64)a1, (__int64)&v7, 0, 0, v4 != 0, 0);
      if ( v5 < 0 )
        v5 = 0;
    }
    else
    {
      v5 = -1073741823;
    }
  }
  if ( (*(_DWORD *)(v3 + 704) & 0x40) != 0 )
  {
    PoFxIdleDevice(*(_QWORD *)(v3 + 32));
    *(_DWORD *)(v3 + 704) &= ~0x40u;
  }
  ObfDereferenceObjectWithTag((PVOID)a1[2], 0x65706E50u);
  return (unsigned int)v5;
}
