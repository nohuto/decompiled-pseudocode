/*
 * XREFs of ?GetLowestAvailImportanceOrdinal@DMMVIDPNTOPOLOGY@@QEBAJPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C01705B8
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A3674 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetLowestAvailImportanceOrdinal(
        DMMVIDPNTOPOLOGY *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *a2)
{
  __int64 v4; // rax
  int v5; // edx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  *a2 = D3DKMDT_VPPI_UNINITIALIZED;
  v5 = *((_DWORD *)this + 49);
  v6 = D3DKMDT_VPPI_PRIMARY;
  LODWORD(v7) = 1;
  if ( (v5 & 1) == 0 )
    goto LABEL_7;
  do
  {
    ++v6;
    v7 = (unsigned int)(2 * v7);
  }
  while ( (v5 & (unsigned int)v7) != 0 );
  if ( v6 > 32 )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v8 + 24) = 32LL;
    *(_QWORD *)(v8 + 32) = this;
    WdLogEvent5_WdError(v8);
    return 3223192404LL;
  }
  else
  {
LABEL_7:
    *a2 = v6;
    return 0LL;
  }
}
