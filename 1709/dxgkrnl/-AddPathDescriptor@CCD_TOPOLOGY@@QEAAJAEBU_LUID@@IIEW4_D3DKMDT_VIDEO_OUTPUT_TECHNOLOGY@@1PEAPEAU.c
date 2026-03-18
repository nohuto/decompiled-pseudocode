/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@IIEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@E@Z @ 0x1C00DEE60
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00DB214 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C00DED1C (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00E5108 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1E@Z @ 0x1C01FA770 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01FC31C (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        CCD_TOPOLOGY *this,
        const struct _LUID *a2,
        int a3,
        int a4,
        char a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a6,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a7,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR **a8,
        unsigned __int8 a9)
{
  void *v11; // rcx
  __int64 v14; // rdx
  unsigned __int16 v15; // ax
  __int64 v16; // rbx
  __int128 v17; // xmm1
  __int64 v18; // xmm0_8
  _OWORD v20[3]; // [rsp+20h] [rbp-38h] BYREF

  v11 = (void *)*((_QWORD *)this + 7);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  *((_QWORD *)this + 7) = 0LL;
  CCD_SET_STRING_ID::_Cleanup(this);
  v14 = *((_QWORD *)this + 8);
  if ( !v14 )
    return 3221225507LL;
  v15 = *(_WORD *)(v14 + 20);
  if ( v15 >= *(_WORD *)(v14 + 22) )
    return 3221225507LL;
  v16 = 264LL * v15 + v14 + 48;
  *(struct _LUID *)(v16 + 16) = *a2;
  *(_BYTE *)(v16 + 129) = a5;
  *(_QWORD *)v16 = 0x8700000000000LL;
  *(_DWORD *)(v16 + 24) = a3;
  *(_DWORD *)(v16 + 28) = a4;
  memset(v20, 0, 0x28uLL);
  v17 = v20[1];
  *(_OWORD *)(v16 + 224) = v20[0];
  v18 = *(_QWORD *)&v20[2];
  *(_OWORD *)(v16 + 240) = v17;
  *(_QWORD *)(v16 + 256) = v18;
  *(_DWORD *)(v16 + 224) = *((_DWORD *)this + 22);
  if ( a6 != D3DKMDT_VOT_UNINITIALIZED && a7 != D3DKMDT_VOT_UNINITIALIZED )
  {
    *(_DWORD *)(v16 + 92) = a7;
    *(_QWORD *)v16 = 0x8F00000000000LL;
    *(_DWORD *)(v16 + 88) = a6;
  }
  if ( a9 )
    *(_QWORD *)v16 |= 0x1000000000uLL;
  ++*(_WORD *)(*((_QWORD *)this + 8) + 20LL);
  if ( a8 )
    *a8 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v16;
  return 0LL;
}
