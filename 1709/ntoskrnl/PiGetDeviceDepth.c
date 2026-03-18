/*
 * XREFs of PiGetDeviceDepth @ 0x14058B5B8
 * Callers:
 *     PiCMGetDeviceDepth @ 0x140451DE0 (PiCMGetDeviceDepth.c)
 *     PiControlGetDeviceDepth @ 0x14058B520 (PiControlGetDeviceDepth.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiGetDeviceDepth(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rax
  __int64 v6; // r8

  *a2 = 0;
  v4 = -1073741810;
  PpDevNodeLockTree(0);
  v5 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5[39] + 40LL);
    if ( v6 )
    {
      v4 = 0;
      *a2 = *(_DWORD *)(v6 + 136);
    }
    ObfDereferenceObjectWithTag(v5, 0x43706E50u);
  }
  PpDevNodeUnlockTree(0);
  return v4;
}
