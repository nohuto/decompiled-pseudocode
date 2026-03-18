/*
 * XREFs of ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00F6A8C
 * Callers:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00D9FF4 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     ?RemoveResolutionPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00F6ADC (-RemoveResolutionPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

void __fastcall CCD_TOPOLOGY::ClearPathDescriptor(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  CCD_TOPOLOGY::RemoveResolutionPathDescriptor(a1);
  *((_QWORD *)a1 + 2) = 0LL;
  *((_DWORD *)a1 + 6) = -1;
  *((_DWORD *)a1 + 7) = -1;
  *(_QWORD *)a1 = 0LL;
  *((_DWORD *)a1 + 22) = -2;
  *((_DWORD *)a1 + 23) = -2;
  *((_QWORD *)a1 + 18) = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_DWORD *)a1 + 47) = 0;
}
