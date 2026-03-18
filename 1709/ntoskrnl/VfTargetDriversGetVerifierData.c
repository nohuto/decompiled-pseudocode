/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x1407B6B3C
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x1407B6C28 (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x140277D1C (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x1407A8E84 (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VfTargetDriversGetVerifierData(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  bool v2; // zf
  _QWORD *Node; // rax

  if ( VfDriverIsKernelImageAddress(a1) )
  {
    v2 = KernelVerifier == 0;
  }
  else
  {
    if ( KernelVerifier )
    {
      if ( dword_140362008 < 2 )
        return 0LL;
      goto LABEL_7;
    }
    v2 = dword_140362008 == 0;
  }
  if ( v2 )
    return 0LL;
LABEL_7:
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
