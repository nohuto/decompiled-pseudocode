/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00BBC14
 * Callers:
 *     ?ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00BB5A0 (-ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3D.c)
 *     ?ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00C5270 (-ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C021FE60 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNPRESENTPATH@@@@@@QEAAEQEBVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0006FD4 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@U-$DoubleLinkedListElementDeleter@.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2)
{
  SIZE_T *p_DataSize; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = 0LL;
LABEL_8:
    WdLogEvent5_WdError(v7);
    return 3223192345LL;
  }
  p_DataSize = &a2[-1].GammaRamp.DataSize;
  if ( LODWORD(a2[-1].GammaRamp.DataSize) != 305419896 )
  {
    v7 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v7 + 24) = p_DataSize;
    goto LABEL_8;
  }
  v4 = p_DataSize[1];
  if ( v4
    && !DoublyLinkedList<DMMVIDPNPRESENTPATH,DoubleLinkedListElementDeleter<DMMVIDPNPRESENTPATH>>::ContainsByReference(
          (__int64)this + 8,
          v4) )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = p_DataSize;
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    return 3223192368LL;
  }
  else
  {
    operator delete[]((void *)p_DataSize[46]);
    operator delete(p_DataSize);
    return 0LL;
  }
}
