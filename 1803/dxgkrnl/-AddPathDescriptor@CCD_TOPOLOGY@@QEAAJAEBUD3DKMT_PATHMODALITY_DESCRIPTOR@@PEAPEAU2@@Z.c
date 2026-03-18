/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C00B6A00
 * Callers:
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00B41DC (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z @ 0x1C00B66F0 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B6B4C (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1W4_D3DK.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        CCD_TOPOLOGY *this,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR **a3)
{
  __int64 result; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v5; // rcx
  char v6; // [rsp+20h] [rbp-38h]
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = a3;
  if ( (*(_QWORD *)a2 & 0x1000000000LL) != 0 && (*((_DWORD *)this + 21) & 1) == 0 )
    return 0LL;
  v6 = *((_BYTE *)a2 + 129);
  result = CCD_TOPOLOGY::AddPathDescriptor(
             this,
             (char *)a2 + 16,
             *((unsigned int *)a2 + 6),
             *((unsigned int *)a2 + 7),
             v6,
             *((_DWORD *)a2 + 22),
             *((_DWORD *)a2 + 23),
             *((_DWORD *)a2 + 53),
             &v7);
  if ( (int)result >= 0 )
  {
    v5 = v7;
    *v7 = *(struct D3DKMT_PATHMODALITY_DESCRIPTOR **)a2;
    *((_OWORD *)v5 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v5 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v5 + 4) = *((_OWORD *)a2 + 4);
    v5[10] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 10);
    *((_DWORD *)v5 + 22) = *((_DWORD *)a2 + 22);
    *((_DWORD *)v5 + 23) = *((_DWORD *)a2 + 23);
    *((_OWORD *)v5 + 6) = *((_OWORD *)a2 + 6);
    *((_OWORD *)v5 + 7) = *((_OWORD *)a2 + 7);
    *((_DWORD *)v5 + 33) = *((_DWORD *)a2 + 33);
    *((_DWORD *)v5 + 34) = *((_DWORD *)a2 + 34);
    *((_DWORD *)v5 + 35) = *((_DWORD *)a2 + 35);
    v5[18] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 18);
    v5[19] = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)*((_QWORD *)a2 + 19);
    *(_OWORD *)(v5 + 21) = *(_OWORD *)((char *)a2 + 168);
    *((_DWORD *)v5 + 46) = *((_DWORD *)a2 + 46);
    *((_DWORD *)v5 + 47) = *((_DWORD *)a2 + 47);
    *((_DWORD *)v5 + 48) = *((_DWORD *)a2 + 48);
    *((_DWORD *)v5 + 51) = *((_DWORD *)a2 + 51);
    *((_DWORD *)v5 + 52) = *((_DWORD *)a2 + 52);
    return (unsigned int)result;
  }
  return result;
}
