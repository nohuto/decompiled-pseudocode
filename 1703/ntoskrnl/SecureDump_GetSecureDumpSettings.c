/*
 * XREFs of SecureDump_GetSecureDumpSettings @ 0x14015A240
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1401F3000 (KeCapturePersistentThreadState.c)
 *     IopInitializeCrashDump @ 0x1405BA68C (IopInitializeCrashDump.c)
 *     IoCaptureLiveDump @ 0x14068DFA4 (IoCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SecureDump_GetSecureDumpSettings(__int64 a1)
{
  int v1; // eax

  if ( !a1 )
    return 3221225485LL;
  if ( SecureDmpEncryptionContext == 2 )
  {
    *(_BYTE *)a1 = byte_14036BC40;
    *(_DWORD *)(a1 + 4) = cbOutput;
    *(_BYTE *)(a1 + 1) = dword_14036BC58 == 1;
    v1 = dword_14036BC74;
  }
  else
  {
    v1 = 0;
    *(_QWORD *)a1 = 0LL;
  }
  *(_DWORD *)(a1 + 8) = v1;
  return 0LL;
}
