/*
 * XREFs of PiProcessReenumeration @ 0x14055EF24
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400FF730 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PipClearDevNodeFlags @ 0x1405537C4 (PipClearDevNodeFlags.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140554D44 (PiMarkDeviceTreeForReenumeration.c)
 */

__int64 __fastcall PiProcessReenumeration(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  int v4; // esi
  int v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+54h] [rbp+Ch]

  v2 = *(_QWORD **)(a1 + 16);
  v3 = *(_QWORD *)(v2[39] + 40LL);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 787) <= 1 )
  {
    ObfDereferenceObject(v2);
    return 3221225558LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 24) == 8 )
    {
      if ( *(_BYTE *)(a1 + 32) )
        PipClearDevNodeFlags(*(_QWORD *)(v2[39] + 40LL), 0x80000000);
      v4 = 1;
    }
    else
    {
      v4 = 2;
    }
    PiMarkDeviceTreeForReenumeration(v3, v4 != 1);
    v7 = PnPBootDriversInitialized;
    v6 = 3;
    PipProcessDevNodeTree(v3, a1, (__int64)&v6, v4, 0, 0, 0);
    return 0LL;
  }
}
