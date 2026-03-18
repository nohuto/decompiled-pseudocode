/*
 * XREFs of ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18004EEAC
 * Callers:
 *     ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x180054240 (-GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CVisual::GetTopLevelWindow(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 26);
  if ( *(int *)(v1 + 4) >= 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x1000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(_QWORD *)(i + 4);
}
