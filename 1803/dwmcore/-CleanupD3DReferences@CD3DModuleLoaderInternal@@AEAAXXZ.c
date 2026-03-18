/*
 * XREFs of ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x1801C8B4C
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800CEF68 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 *     ??1CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800DA824 (--1CD3DModuleLoaderInternal@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DModuleLoaderInternal::CleanupD3DReferences(CD3DModuleLoaderInternal *this)
{
  if ( dword_1802D6478 >= 0 )
  {
    FreeLibrary(hLibModule);
    hLibModule = 0LL;
    dword_1802D6478 = -2003292404;
  }
}
