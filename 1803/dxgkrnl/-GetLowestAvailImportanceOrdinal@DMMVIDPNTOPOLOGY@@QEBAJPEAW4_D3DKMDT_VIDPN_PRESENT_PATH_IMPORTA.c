/*
 * XREFs of ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C00BC1A8
 * Callers:
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00B9938 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C021EA2C (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(
        DMMVIDPNTOPOLOGY *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *a2)
{
  int v4; // edx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v5; // eax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  *a2 = D3DKMDT_VPPI_UNINITIALIZED;
  v4 = *((_DWORD *)this + 49);
  v5 = D3DKMDT_VPPI_PRIMARY;
  LODWORD(v6) = 1;
  if ( (v4 & 1) == 0 )
    goto LABEL_4;
  do
  {
    ++v5;
    v6 = (unsigned int)(2 * v6);
  }
  while ( (v4 & (unsigned int)v6) != 0 );
  if ( v5 > 32 )
  {
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = 32LL;
    *(_QWORD *)(v9 + 32) = this;
    WdLogEvent5_WdError(v9);
    return 3223192404LL;
  }
  else
  {
LABEL_4:
    *a2 = v5;
    return 0LL;
  }
}
