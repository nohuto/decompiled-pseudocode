/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B6B4C
 * Callers:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C00B6A00 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00B6F48 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00D7B0C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1E@Z @ 0x1C022831C (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C0229D54 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ @ 0x1C00B42BC (-ClearModalitySetId@CCD_TOPOLOGY@@QEBAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        char a5,
        int a6,
        int a7,
        int a8,
        __int64 *a9)
{
  __int64 v13; // r10
  unsigned __int16 v14; // ax
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  _OWORD v20[3]; // [rsp+20h] [rbp-38h] BYREF

  CCD_TOPOLOGY::ClearModalitySetId((void **)a1);
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    return 3221225507LL;
  v14 = *(_WORD *)(v13 + 20);
  if ( v14 >= *(_WORD *)(v13 + 22) )
    return 3221225507LL;
  v15 = 272LL * v14 + v13 + 48;
  *(_QWORD *)(v15 + 16) = *a2;
  *(_DWORD *)(v15 + 28) = a4;
  v16 = 0x8700000000000LL;
  *(_BYTE *)(v15 + 129) = a5;
  *(_QWORD *)v15 = 0x8700000000000LL;
  *(_DWORD *)(v15 + 24) = a3;
  memset(v20, 0, 0x28uLL);
  v17 = v20[1];
  *(_OWORD *)(v15 + 232) = v20[0];
  v18 = *(_QWORD *)&v20[2];
  *(_OWORD *)(v15 + 248) = v17;
  *(_QWORD *)(v15 + 264) = v18;
  *(_DWORD *)(v15 + 232) = *(_DWORD *)(a1 + 88);
  if ( a6 != -2 && a7 != -2 )
  {
    v16 = 0x8F00000000000LL;
    *(_DWORD *)(v15 + 88) = a6;
    *(_QWORD *)v15 = 0x8F00000000000LL;
    *(_DWORD *)(v15 + 92) = a7;
  }
  *(_DWORD *)(v15 + 212) = a8;
  if ( a8 )
    *(_QWORD *)v15 = v16 | 0x1000000000LL;
  ++*(_WORD *)(*(_QWORD *)(a1 + 64) + 20LL);
  if ( a9 )
    *a9 = v15;
  return 0LL;
}
