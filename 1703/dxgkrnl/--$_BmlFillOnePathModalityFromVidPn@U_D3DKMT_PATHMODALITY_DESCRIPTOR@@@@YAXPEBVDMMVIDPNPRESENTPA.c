/*
 * XREFs of ??$_BmlFillOnePathModalityFromVidPn@U_D3DKMT_PATHMODALITY_DESCRIPTOR@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00F154C
 * Callers:
 *     ?BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F1370 (-BmlFillPathModalityFromVidPn@@YAJPEBVDMMVIDPN@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007400 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall _BmlFillOnePathModalityFromVidPn<_D3DKMT_PATHMODALITY_DESCRIPTOR>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  DMMVIDPNSOURCEMODE *v9; // rcx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // xmm1_8
  int v18; // ecx
  int v19; // eax
  __int64 result; // rax
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax

  v4 = *(_QWORD *)(a1 + 88);
  v7 = *(_QWORD *)(v4 + 104);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 96));
    v8 = *(_QWORD *)(v4 + 104);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *(DMMVIDPNSOURCEMODE **)(v8 + 144);
  if ( v9 )
  {
    if ( (*(_QWORD *)a2 & 0x100LL) != 0 )
    {
      GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(v9, a2, a3, a4);
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
    v10 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*(DMMVIDPNSOURCEMODE **)(v8 + 144), a2, a3, a4);
    *(_OWORD *)(a2 + 96) = *(_OWORD *)&v10->PrimSurfSize.cx;
    v11 = *(_OWORD *)&v10->Stride;
    *(_QWORD *)a2 |= 0x100uLL;
    *(_OWORD *)(a2 + 112) = v11;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v8 + 88), a2);
  v13 = *(_QWORD *)(a1 + 96);
  v14 = *(_QWORD *)(v13 + 104);
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 96));
    v15 = *(_QWORD *)(v13 + 104);
  }
  else
  {
    v15 = 0LL;
  }
  v16 = *(_QWORD *)(v15 + 144);
  if ( v16 )
  {
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(v16 + 72);
    *(_OWORD *)(a2 + 48) = *(_OWORD *)(v16 + 88);
    *(_OWORD *)(a2 + 64) = *(_OWORD *)(v16 + 104);
    v17 = *(_QWORD *)(v16 + 120);
    *(_QWORD *)a2 |= 0x87uLL;
    *(_QWORD *)(a2 + 80) = v17;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 88), v12);
  v18 = *(_DWORD *)(a1 + 116);
  if ( v18 && (unsigned int)(v18 - 254) > 1 )
  {
    *(_QWORD *)a2 |= 0x200uLL;
    *(_DWORD *)(a2 + 132) = v18;
  }
  v19 = *(_DWORD *)(a1 + 112);
  if ( v19 && v19 != 254 )
  {
    *(_DWORD *)(a2 + 136) = v19;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 80LL);
  *(_DWORD *)(a2 + 92) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 84LL);
  result = 0x800000000000LL;
  *(_QWORD *)a2 |= 0x800000000000uLL;
  return result;
}
