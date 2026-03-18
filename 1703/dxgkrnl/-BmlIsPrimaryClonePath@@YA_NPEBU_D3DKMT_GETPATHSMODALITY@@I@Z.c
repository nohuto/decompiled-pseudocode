/*
 * XREFs of ?BmlIsPrimaryClonePath@@YA_NPEBU_D3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00F16BC
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00F1B74 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsPrimaryClonePath(const struct _D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  __int64 v3; // r8
  unsigned __int16 v4; // r9
  int v5; // edi
  int v6; // ebx
  int v7; // r8d
  __int64 v8; // rdx

  v3 = 264LL * a2;
  v4 = 0;
  v5 = *(_DWORD *)((char *)a1 + v3 + 64);
  v6 = *(_DWORD *)((char *)a1 + v3 + 68);
  v7 = *(_DWORD *)((char *)a1 + v3 + 72);
  while ( 1 )
  {
    v8 = 264LL * v4;
    if ( *(_DWORD *)((char *)a1 + v8 + 64) == v5
      && *(_DWORD *)((char *)a1 + v8 + 68) == v6
      && *(_DWORD *)((char *)a1 + v8 + 72) == v7 )
    {
      break;
    }
    ++v4;
  }
  return v4 == a2;
}
