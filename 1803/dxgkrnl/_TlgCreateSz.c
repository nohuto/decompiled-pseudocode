/*
 * XREFs of _TlgCreateSz @ 0x1C0038A08
 * Callers:
 *     ?LogDisplayState@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01EAE80 (-LogDisplayState@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateSz(PEVENT_DATA_DESCRIPTOR pDesc, LPCSTR psz)
{
  __int64 v2; // rax

  LODWORD(v2) = 0;
  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
  }
  if ( !psz )
    psz = File;
  pDesc->Reserved = 0;
  pDesc->Ptr = (ULONGLONG)psz;
  pDesc->Size = v2 + 1;
}
