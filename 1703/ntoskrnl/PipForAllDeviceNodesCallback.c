/*
 * XREFs of PipForAllDeviceNodesCallback @ 0x140460250
 * Callers:
 *     PipForAllChildDeviceNodes @ 0x140460204 (PipForAllChildDeviceNodes.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PipForAllChildDeviceNodes @ 0x140460204 (PipForAllChildDeviceNodes.c)
 */

__int64 __fastcall PipForAllDeviceNodesCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1, *(_QWORD *)(a2 + 8));
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      return PipForAllChildDeviceNodes(a1, (__int64)PipForAllDeviceNodesCallback, a2);
  }
  return result;
}
