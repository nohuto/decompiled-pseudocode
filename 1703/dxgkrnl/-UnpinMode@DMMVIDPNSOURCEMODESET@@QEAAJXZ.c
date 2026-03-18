/*
 * XREFs of ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C0009C10
 * Callers:
 *     ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1C00A7CA0 (-UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C00E41F0 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01D3910 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01DA748 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::UnpinMode(DMMVIDPNSOURCEMODESET *this)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 136) )
  {
    if ( *((_QWORD *)this + 18) )
    {
      *((_QWORD *)this + 18) = 0LL;
    }
    else
    {
      WdLogNewEntry5_WdTrace();
      return 1075708679LL;
    }
  }
  else
  {
    v3 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v3 + 24) = this;
    WdLogEvent5_WdDmmEvent(v3);
    return 3223192352LL;
  }
  return result;
}
