/*
 * XREFs of ?GetMappedSectionPointer@CTokenManager@@SAJPEAPEAXPEA_K@Z @ 0x1C0013D04
 * Callers:
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C00132F0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0013A50 (NtDCompositionGetFrameLegacyTokens.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenManager::GetMappedSectionPointer(void **a1, unsigned __int64 *a2)
{
  CTokenManager *v2; // rax
  unsigned int v3; // r8d
  void *v4; // r9

  v2 = g_pTokenManager;
  v3 = 0;
  *a1 = 0LL;
  *a2 = 0LL;
  if ( v2 && (v4 = (void *)*((_QWORD *)v2 + 2)) != 0LL )
  {
    *a1 = v4;
    *a2 = *((_QWORD *)v2 + 3);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
