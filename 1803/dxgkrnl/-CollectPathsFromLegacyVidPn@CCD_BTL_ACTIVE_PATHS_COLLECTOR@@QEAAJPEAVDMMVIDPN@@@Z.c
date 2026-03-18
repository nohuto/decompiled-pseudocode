/*
 * XREFs of ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C022766C
 * Callers:
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C02277EC (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000731C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B44EC (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C00B457C (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00B6E84 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2)
{
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // r10
  __int64 v7; // r11
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  unsigned int i; // edx
  __int64 v12; // rcx
  CCD_TOPOLOGY *v14; // [rsp+30h] [rbp+8h] BYREF

  CCD_TOPOLOGY::SetUsedReservedFields(*(_QWORD *)this, &v14, 96);
  v4 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, a2, 0);
  if ( v4 >= 0 )
  {
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    if ( *(_WORD *)(v6 + 20) )
    {
      do
      {
        if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(272LL * v5 + v6 + 180)) - 1) & 0xFFFFFFFD) != 0 )
        {
          v8 = *(_DWORD *)(v7 + v6 + 148);
          v9 = *(_DWORD *)(v7 + v6 + 144);
        }
        else
        {
          v8 = *(_DWORD *)(v7 + v6 + 144);
          v9 = *(_DWORD *)(v7 + v6 + 148);
        }
        *(_DWORD *)(v7 + v6 + 204) = v9;
        *(_DWORD *)(v7 + v6 + 200) = v8;
        *(_DWORD *)(v7 + v6 + 224) = *(_DWORD *)(v7 + v6 + 144);
        *(_DWORD *)(v7 + v6 + 228) = *(_DWORD *)(v7 + v6 + 148);
        v10 = *(_QWORD *)(v7 + v6 + 48) | 0x820000LL;
        *(_QWORD *)(v7 + v6 + 216) = 0LL;
        *(_QWORD *)(v7 + v6 + 48) = v10;
        if ( (v10 & 0x4000000000000LL) == 0 )
        {
          for ( i = v5; i < *(unsigned __int16 *)(v6 + 20); ++i )
          {
            v12 = 272LL * i;
            if ( *(_DWORD *)(v12 + v6 + 72) == *(_DWORD *)(v7 + v6 + 72)
              && *(_DWORD *)(v12 + v6 + 64) == *(_DWORD *)(v7 + v6 + 64)
              && *(_DWORD *)(v12 + v6 + 68) == *(_DWORD *)(v7 + v6 + 68) )
            {
              *(_QWORD *)(v12 + v6 + 48) |= 0x4000000000000uLL;
              *(_DWORD *)(v12 + v6 + 232) = v5 | 0xFE57A000;
            }
          }
        }
        ++v5;
      }
      while ( v5 < *(unsigned __int16 *)(v6 + 20) );
    }
    v4 = 0;
  }
  if ( v14 )
    CCD_TOPOLOGY::ClearReservedFields(v14);
  return (unsigned int)v4;
}
