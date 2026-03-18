/*
 * XREFs of PiSwCloseDescendants @ 0x14055E718
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x14055E648 (PiSwProcessParentRemoveIrp.c)
 *     PiSwCloseDescendants @ 0x14055E718 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x1405BBE50 (PiSwIrpCleanup.c)
 * Callees:
 *     PiSwFindBusRelations @ 0x140553A48 (PiSwFindBusRelations.c)
 *     PiSwCloseDescendants @ 0x14055E718 (PiSwCloseDescendants.c)
 *     PiSwCloseDevice @ 0x1406CDA04 (PiSwCloseDevice.c)
 */

__int64 __fastcall PiSwCloseDescendants(__int128 *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi

  result = (__int64)PiSwFindBusRelations(a1);
  if ( result )
  {
    v2 = (_QWORD *)(result + 16);
    v3 = *(_QWORD **)(result + 16);
    while ( v3 != v2 )
    {
      v4 = v3 - 12;
      v3 = (_QWORD *)*v3;
      result = *((unsigned int *)v4 + 1);
      if ( (result & 1) == 0 )
      {
        PiSwCloseDescendants(v4 + 9);
        result = PiSwCloseDevice(v4);
      }
    }
  }
  return result;
}
