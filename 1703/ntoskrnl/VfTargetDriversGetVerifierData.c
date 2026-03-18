/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140774D80
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x140774E6C (VfTargetDriversIsEnabled.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1402514AC (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x1407672E0 (VfDriverIsKernelImageAddress.c)
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
      if ( dword_140348588 < 2 )
        return 0LL;
      goto LABEL_7;
    }
    v2 = dword_140348588 == 0;
  }
  if ( v2 )
    return 0LL;
LABEL_7:
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
