/*
 * XREFs of ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C01F9810
 * Callers:
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01F9980 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000A34C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z @ 0x1C00DB150 (-_ProcessVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDMMVIDPN@@_N@Z.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DC7BC (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C00DC84C (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectPathsFromLegacyVidPn(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this,
        struct DMMVIDPN *a2)
{
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 v6; // r10
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v7; // eax
  __int64 v8; // r11
  int v9; // ecx
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rax
  unsigned int i; // edx
  __int64 v14; // rcx
  CCD_TOPOLOGY *v16; // [rsp+30h] [rbp+8h] BYREF

  CCD_TOPOLOGY::SetUsedReservedFields(*(_QWORD *)this, &v16, 96);
  v4 = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_ProcessVidPn(this, a2, 0);
  if ( v4 >= 0 )
  {
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)this + 64LL);
    if ( *(_WORD *)(v6 + 20) )
    {
      do
      {
        v7 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(264LL * v5 + v6 + 180));
        v9 = *(_DWORD *)(v8 + v6 + 148);
        v10 = ((v7 - 1) & 0xFFFFFFFD) == 0;
        v11 = *(_DWORD *)(v8 + v6 + 144);
        if ( v10 )
        {
          *(_DWORD *)(v8 + v6 + 200) = v11;
          *(_DWORD *)(v8 + v6 + 204) = v9;
        }
        else
        {
          *(_DWORD *)(v8 + v6 + 204) = v11;
          *(_DWORD *)(v8 + v6 + 200) = v9;
        }
        *(_DWORD *)(v8 + v6 + 224) = v11;
        v12 = *(_QWORD *)(v8 + v6 + 48) | 0x820000LL;
        *(_QWORD *)(v8 + v6 + 216) = 0LL;
        *(_DWORD *)(v8 + v6 + 228) = v9;
        *(_QWORD *)(v8 + v6 + 48) = v12;
        if ( (v12 & 0x4000000000000LL) == 0 )
        {
          for ( i = v5; i < *(unsigned __int16 *)(v6 + 20); ++i )
          {
            v14 = 264LL * i;
            if ( *(_DWORD *)(v14 + v6 + 72) == *(_DWORD *)(v8 + v6 + 72)
              && *(_DWORD *)(v14 + v6 + 64) == *(_DWORD *)(v8 + v6 + 64)
              && *(_DWORD *)(v14 + v6 + 68) == *(_DWORD *)(v8 + v6 + 68) )
            {
              *(_QWORD *)(v14 + v6 + 48) |= 0x4000000000000uLL;
              *(_DWORD *)(v14 + v6 + 232) = v5 | 0xFE57A000;
            }
          }
        }
        ++v5;
      }
      while ( v5 < *(unsigned __int16 *)(v6 + 20) );
    }
    v4 = 0;
  }
  if ( v16 )
    CCD_TOPOLOGY::ClearReservedFields(v16);
  return (unsigned int)v4;
}
