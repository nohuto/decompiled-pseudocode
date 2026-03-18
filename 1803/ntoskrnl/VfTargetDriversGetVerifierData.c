/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140821CB8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140812DA0 (VeAllocatePoolWithTagPriority.c)
 *     VfTargetDriversIsEnabled @ 0x140821DA0 (VfTargetDriversIsEnabled.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x140831580 (VerifierMmBuildMdlForNonPagedPool.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x1402AAA9C (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140815EBC (VfDriverIsKernelImageAddress.c)
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
      if ( dword_1403A5648 < 2 )
        return 0LL;
      goto LABEL_7;
    }
    v2 = dword_1403A5648 == 0;
  }
  if ( v2 )
    return 0LL;
LABEL_7:
  Node = VfTargetDriversGetNode(v1);
  if ( !Node )
    return 0LL;
  return Node[7];
}
