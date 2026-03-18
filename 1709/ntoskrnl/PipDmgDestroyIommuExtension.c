/*
 * XREFs of PipDmgDestroyIommuExtension @ 0x1405171F8
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x140517228 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x14055DC84 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PiIommuFreeExtension @ 0x14059F28C (PiIommuFreeExtension.c)
 */

__int64 __fastcall PipDmgDestroyIommuExtension(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 720);
  if ( v2 )
  {
    result = PiIommuFreeExtension(v2);
    *(_QWORD *)(a1 + 720) = 0LL;
  }
  return result;
}
