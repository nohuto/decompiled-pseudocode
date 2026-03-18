/*
 * XREFs of ?CleanupD3DReferences@CD3DModuleLoaderInternal@@AEAAXXZ @ 0x180188518
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800C6BF8 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 *     ??1CD3DModuleLoaderInternal@@QEAA@XZ @ 0x1800D2A8C (--1CD3DModuleLoaderInternal@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DModuleLoaderInternal::CleanupD3DReferences(CD3DModuleLoaderInternal *this)
{
  if ( dword_18023E578 >= 0 )
  {
    FreeLibrary(hLibModule);
    hLibModule = 0LL;
    dword_18023E578 = -2003292404;
  }
}
