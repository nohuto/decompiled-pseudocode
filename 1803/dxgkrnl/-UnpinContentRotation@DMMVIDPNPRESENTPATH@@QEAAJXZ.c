/*
 * XREFs of ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00450FC
 * Callers:
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00C2BA0 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C0216B04 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_N@Z @ 0x1C021CA20 (-UnpinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C021F64C (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UnpinContentRotation(
        DMMVIDPNPRESENTPATH *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  if ( *((_DWORD *)this + 29) == 254 )
  {
    v5 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    *(_QWORD *)(v5 + 32) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    return 1075708753LL;
  }
  else
  {
    *((_DWORD *)this + 29) = 254;
    return 0LL;
  }
}
