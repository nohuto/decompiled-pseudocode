/*
 * XREFs of ??$_BmlFillOnePathModalityFromVidPn@U_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@@YAXPEBVDMMVIDPNPRESENTPATH@@PEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C00A0CDC
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C00A0940 (_BmlLogDiagnosticsPacket.c)
 *     ?DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2@@@Z @ 0x1C01D2A00 (-DmmStoreVidPnPathDataIntoDiagPacket@@YAJPEBVDMMVIDPNTOPOLOGY@@IPEAU_DXGK_DIAG_CCD_PATHMODALITY_.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0007400 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall _BmlFillOnePathModalityFromVidPn<_DXGK_DIAG_CCD_PATHMODALITY_DESCRIPTOR2>(
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
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // eax
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
      if ( *(_DWORD *)(a2 + 88) != GraphicsInfo->PrimSurfSize.cx
        || *(_DWORD *)(a2 + 92) != GraphicsInfo->PrimSurfSize.cy )
      {
        *(_QWORD *)a2 &= ~0x800000uLL;
      }
    }
    else
    {
      *(_QWORD *)a2 &= ~0x800000uLL;
    }
    v10 = DMMVIDPNSOURCEMODE::GetGraphicsInfo(*(DMMVIDPNSOURCEMODE **)(v8 + 144), a2, a3, a4);
    *(_OWORD *)(a2 + 88) = *(_OWORD *)&v10->PrimSurfSize.cx;
    v11 = *(_OWORD *)&v10->Stride;
    *(_QWORD *)a2 |= 0x100uLL;
    *(_OWORD *)(a2 + 104) = v11;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v8 + 88), a2);
  v12 = *(_QWORD *)(a1 + 96);
  v13 = *(_QWORD *)(v12 + 104);
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 96));
    v14 = *(_QWORD *)(v12 + 104);
  }
  else
  {
    v14 = 0LL;
  }
  v15 = *(_QWORD *)(v14 + 144);
  if ( v15 )
  {
    *(_DWORD *)(a2 + 72) = *(_DWORD *)(v15 + 72);
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(v15 + 76);
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(v15 + 84);
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(v15 + 92);
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(v15 + 100);
    *(_QWORD *)(a2 + 32) = *(unsigned int *)(v15 + 112);
    *(_DWORD *)(a2 + 76) = (int)(*(_DWORD *)(v15 + 120) << 29) >> 29;
    *(_QWORD *)a2 |= 0x87uLL;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v14 + 88), v14);
  v16 = *(_DWORD *)(a1 + 116);
  if ( v16 && (unsigned int)(v16 - 254) > 1 )
  {
    *(_QWORD *)a2 |= 0x200uLL;
    *(_DWORD *)(a2 + 120) = v16;
  }
  v17 = *(_DWORD *)(a1 + 112);
  if ( v17 && v17 != 254 )
  {
    *(_DWORD *)(a2 + 124) = v17;
    *(_QWORD *)a2 |= 0x40000000000uLL;
  }
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 80LL);
  *(_DWORD *)(a2 + 84) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 96LL) + 84LL);
  result = 0x800000000000LL;
  *(_QWORD *)a2 |= 0x800000000000uLL;
  return result;
}
