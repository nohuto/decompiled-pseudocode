/*
 * XREFs of ??$_BmlFillOnePathModalityFromVidPn@UD3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00AEA28
 * Callers:
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE80C (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C00059D4 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 */

__int64 __fastcall _BmlFillOnePathModalityFromVidPn<D3DKMT_PATHMODALITY_DESCRIPTOR>(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rax
  __int64 v6; // rsi
  DMMVIDPNSOURCEMODE *v7; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // xmm1_8
  int v15; // ecx
  int v16; // eax
  __int64 result; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax

  v2 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(v2 + 104);
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
    v6 = *(_QWORD *)(v2 + 104);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = *(DMMVIDPNSOURCEMODE **)(v6 + 144);
  if ( v7 )
  {
    if ( (*(_QWORD *)a2 & 0x100LL) != 0 )
    {
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v7);
      if ( *(_DWORD *)(a2 + 96) != GraphicsInfo->PrimSurfSize.cx
        || *(_DWORD *)(a2 + 100) != GraphicsInfo->PrimSurfSize.cy )
      {
        *(_QWORD *)a2 &= ~0x800000uLL;
      }
    }
    else
    {
      *(_QWORD *)a2 &= ~0x800000uLL;
    }
    v8 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*(DMMVIDPNSOURCEMODE **)(v6 + 144));
    *(_OWORD *)(a2 + 96) = *(_OWORD *)&v8->PrimSurfSize.cx;
    v9 = *(_OWORD *)&v8->Stride;
    *(_QWORD *)a2 |= 0x100uLL;
    *(_OWORD *)(a2 + 112) = v9;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v6 + 88));
  v10 = *(_QWORD *)(a1 + 96);
  v11 = *(_QWORD *)(v10 + 104);
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
    v12 = *(_QWORD *)(v10 + 104);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = *(_QWORD *)(v12 + 144);
  if ( v13 )
  {
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v13 + 72);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v13 + 88);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(v13 + 104);
    v14 = *(_QWORD *)(v13 + 120);
    *(_QWORD *)a2 |= 0x87uLL;
    *(_QWORD *)(a2 + 80) = v14;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 88));
  v15 = *(_DWORD *)(a1 + 116);
  if ( v15 && (unsigned int)(v15 - 254) > 1 )
  {
    *(_QWORD *)a2 |= 0x200uLL;
    *(_DWORD *)(a2 + 132) = v15;
  }
  v16 = *(_DWORD *)(a1 + 112);
  if ( v16 && v16 != 254 )
  {
    *(_DWORD *)(a2 + 136) = v16;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 80LL);
  *(_DWORD *)(a2 + 92) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 84LL);
  result = 0x800000000000LL;
  *(_QWORD *)a2 |= 0x800000000000uLL;
  return result;
}
