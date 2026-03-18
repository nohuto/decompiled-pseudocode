/*
 * XREFs of ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1801E6184
 * Callers:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18019F008 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800D881C (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1801E5FA4 (-Add@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPolygon.c)
 *     ?FindKey@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEBAHAEBQEAVCPolygon@@@Z @ 0x1801E6158 (-FindKey@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPol.c)
 */

__int64 __fastcall CD2DCommandList::GetID2DCommandList(
        CD2DCommandList *this,
        struct CPolygon *a2,
        struct ID2D1PrivateCompositorCommandList **a3)
{
  char *v3; // r15
  unsigned int v7; // ebx
  int Key; // eax
  struct ID2D1PrivateCompositorCommandList *v9; // rcx
  unsigned int v10; // edi
  __int64 v11; // r12
  _DWORD *v12; // rbx
  void *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // r8
  _DWORD *v16; // rdx
  __int128 v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // r10
  int v20; // eax
  __int64 v22[5]; // [rsp+40h] [rbp-28h] BYREF
  struct ID2D1PrivateCompositorCommandList *v23; // [rsp+B0h] [rbp+48h] BYREF
  struct CPolygon *v24; // [rsp+B8h] [rbp+50h] BYREF
  _DWORD *v25; // [rsp+C0h] [rbp+58h] BYREF
  void *v26; // [rsp+C8h] [rbp+60h] BYREF

  v24 = a2;
  v3 = (char *)this + 104;
  v25 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  *a3 = 0LL;
  v7 = 0;
  Key = CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
          (__int64)this + 104,
          (__int64 *)&v24);
  if ( Key != -1 )
  {
    v9 = *(struct ID2D1PrivateCompositorCommandList **)(*((_QWORD *)this + 14) + 8LL * Key);
    v23 = v9;
LABEL_14:
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *))(*(_QWORD *)v9 + 8LL))(v9);
    *a3 = v23;
    goto LABEL_16;
  }
  v10 = *((_DWORD *)a2 + 10);
  v11 = v10;
  v25 = operator new(saturated_mul(v10, 8uLL));
  v12 = v25;
  if ( v25 )
  {
    v13 = operator new(saturated_mul(v10, 4uLL));
    v26 = v13;
    if ( v13 )
    {
      if ( v10 )
      {
        v14 = 0LL;
        v15 = v13;
        v16 = v12;
        do
        {
          v17 = *(_OWORD *)(v14 + *((_QWORD *)a2 + 2));
          v14 += 20LL;
          *v16 = v17;
          v16 += 2;
          *(v16 - 1) = *(_DWORD *)(v14 + *((_QWORD *)a2 + 2) - 16);
          *v15++ = *(_DWORD *)(v14 + *((_QWORD *)a2 + 2) - 4);
          --v11;
        }
        while ( v11 );
      }
      v22[0] = 0LL;
      v18 = *(_QWORD *)(*((_QWORD *)this + 14)
                      + 8LL
                      * (int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
                               (__int64)v3,
                               v22));
      v20 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, __int64, unsigned int, struct ID2D1PrivateCompositorCommandList **))(*(_QWORD *)v18 + 40LL))(
              v18,
              v12,
              v10,
              v19,
              v10,
              &v23);
      v7 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x51u);
        goto LABEL_16;
      }
      if ( (unsigned int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
                           (__int64)v3,
                           &v24,
                           &v23) )
      {
        v9 = v23;
        goto LABEL_14;
      }
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x56u);
    }
    else
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x43u);
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x40u);
  }
LABEL_16:
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)&v25);
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(&v26);
  return v7;
}
