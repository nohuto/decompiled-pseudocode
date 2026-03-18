/*
 * XREFs of ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0006578
 * Callers:
 *     ?UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C00D55B0 (-UnpinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00D69C0 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C01EDC70 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01EEFF0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01F3698 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UnpinContentScaling(DMMVIDPNPRESENTPATH *this)
{
  __int64 v3; // rax

  if ( *((_DWORD *)this + 28) == 254 )
  {
    v3 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v3 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    *(_QWORD *)(v3 + 32) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    return 1075708753LL;
  }
  else
  {
    *((_DWORD *)this + 28) = 254;
    return 0LL;
  }
}
