/*
 * XREFs of ?_FillPathsActiveFlagsFromTopology@CCD_TOPOLOGY@@AEAAJAEBV1@@Z @ 0x1C00EC238
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00EA924 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00EBB60 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00EC32C (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillPathsActiveFlagsFromTopology(
        CCD_TOPOLOGY *this,
        const struct CCD_TOPOLOGY *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int i; // edi
  __int64 v7; // rax
  __int64 v8; // r8
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v10; // r8
  unsigned int j; // esi
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rax
  int v16; // ecx
  int v17; // edx

  for ( i = 0; ; ++i )
  {
    v7 = *((_QWORD *)a2 + 8);
    v8 = v7 ? *(unsigned __int16 *)(v7 + 20) : 0LL;
    if ( i >= (unsigned __int16)v8 )
      break;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i, v8, a4);
    if ( *(__int64 *)PathDescriptor < 0 )
    {
      for ( j = 0; ; ++j )
      {
        v13 = *((_QWORD *)this + 8);
        v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
        if ( j >= v14 )
          break;
        v15 = CCD_TOPOLOGY::GetPathDescriptor(this, j, v10, a4);
        if ( *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v15 + 4)
          && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v15 + 5) )
        {
          v16 = *((_DWORD *)v15 + 7);
          if ( *((_DWORD *)PathDescriptor + 7) == v16 )
            *(_QWORD *)v15 |= 0x2000000000000000uLL;
          v17 = *((_DWORD *)v15 + 6);
          if ( *((_DWORD *)PathDescriptor + 6) == v17 )
          {
            v10 = 0x4000000000000000LL;
            *(_QWORD *)v15 |= 0x4000000000000000uLL;
          }
          if ( *((_DWORD *)PathDescriptor + 7) == v16 && *((_DWORD *)PathDescriptor + 6) == v17 )
            *(_QWORD *)v15 |= 0x8000000000000000uLL;
        }
      }
    }
  }
  return 0LL;
}
