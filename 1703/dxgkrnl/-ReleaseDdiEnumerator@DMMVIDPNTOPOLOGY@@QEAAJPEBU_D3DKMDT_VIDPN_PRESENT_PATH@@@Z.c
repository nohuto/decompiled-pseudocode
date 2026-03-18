/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E0C04
 * Callers:
 *     ?ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00F6630 (-ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01DAEF0 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@QEAAEQEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000C4E4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@QEAAEQEBVDMMVIDPNPRESENTPATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  SIZE_T *p_DataSize; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdError(this, 0LL);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_12:
    WdLogEvent5_WdError(v9);
    return 3223192345LL;
  }
  p_DataSize = &a2[-1].GammaRamp.DataSize;
  if ( LODWORD(a2[-1].GammaRamp.DataSize) != 305419896 )
  {
    v9 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v9 + 24) = p_DataSize;
    goto LABEL_12;
  }
  v4 = p_DataSize[1];
  if ( v4 && !DoublyLinkedList<DMMVIDPNPRESENTPATH>::ContainsByReference((__int64)this + 8, v4) )
  {
    v10 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v10 + 24) = p_DataSize;
    *(_QWORD *)(v10 + 32) = this;
    WdLogEvent5_WdError(v10);
    return 3223192368LL;
  }
  else
  {
    v7 = (void *)p_DataSize[46];
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( p_DataSize )
      ExFreePoolWithTag(p_DataSize, 0);
    return 0LL;
  }
}
