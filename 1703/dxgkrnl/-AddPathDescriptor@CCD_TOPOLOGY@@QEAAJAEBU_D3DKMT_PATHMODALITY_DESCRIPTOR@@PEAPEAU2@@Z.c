/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C00EA2CC
 * Callers:
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00EB9B0 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C00EA3F8 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAU.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        CCD_TOPOLOGY *this,
        const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR **a3)
{
  __int64 result; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v5; // rcx
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)a3;
  if ( (*(_QWORD *)a2 & 0x1000000000LL) != 0 && (*((_DWORD *)this + 21) & 1) == 0 )
    return 0LL;
  result = CCD_TOPOLOGY::AddPathDescriptor(
             this,
             (const struct _LUID *)a2 + 2,
             *((_DWORD *)a2 + 6),
             *((_DWORD *)a2 + 7),
             *((_BYTE *)a2 + 129),
             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 22),
             (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)a2 + 23),
             &v6,
             0);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *(_QWORD *)v6 = *(_QWORD *)a2;
    *((_OWORD *)v5 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v5 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v5 + 4) = *((_OWORD *)a2 + 4);
    *((_QWORD *)v5 + 10) = *((_QWORD *)a2 + 10);
    *((_DWORD *)v5 + 22) = *((_DWORD *)a2 + 22);
    *((_DWORD *)v5 + 23) = *((_DWORD *)a2 + 23);
    *((_OWORD *)v5 + 6) = *((_OWORD *)a2 + 6);
    *((_OWORD *)v5 + 7) = *((_OWORD *)a2 + 7);
    *((_DWORD *)v5 + 33) = *((_DWORD *)a2 + 33);
    *((_DWORD *)v5 + 34) = *((_DWORD *)a2 + 34);
    *((_DWORD *)v5 + 35) = *((_DWORD *)a2 + 35);
    *((_QWORD *)v5 + 18) = *((_QWORD *)a2 + 18);
    *((_QWORD *)v5 + 19) = *((_QWORD *)a2 + 19);
    *(_OWORD *)((char *)v5 + 168) = *(_OWORD *)((char *)a2 + 168);
    *((_DWORD *)v5 + 58) = *((_DWORD *)a2 + 58);
    *((_DWORD *)v5 + 59) = *((_DWORD *)a2 + 59);
    *((_DWORD *)v5 + 60) = *((_DWORD *)a2 + 60);
    return (unsigned int)result;
  }
  return result;
}
