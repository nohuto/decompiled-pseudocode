/*
 * XREFs of ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800B58D0
 * Callers:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180025F10 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Add@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAHAEBQEAVCPolygon@@AEBQEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800B5A1C (-Add@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPolygon.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FindKey@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEBAHAEBQEAVCPolygon@@@Z @ 0x18011DD84 (-FindKey@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCPol.c)
 */

__int64 __fastcall CD2DCommandList::GetID2DCommandList(
        CD2DCommandList *this,
        struct CPolygon *a2,
        struct ID2D1PrivateCompositorCommandList **a3)
{
  unsigned int v3; // ebx
  struct CPolygon ***v4; // r15
  _DWORD *v5; // rsi
  void *v6; // rdi
  int v7; // eax
  __int64 v8; // r9
  struct CPolygon *v9; // r14
  struct CPolygon **v11; // rcx
  struct ID2D1PrivateCompositorCommandList *v12; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r12
  LPVOID v16; // rax
  _DWORD *v17; // r8
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  __int128 v20; // xmm0
  __int64 v21; // rcx
  signed int v22; // eax
  struct ID2D1PrivateCompositorCommandList *v23; // [rsp+B0h] [rbp+48h] BYREF
  struct CPolygon *v24; // [rsp+B8h] [rbp+50h] BYREF
  struct ID2D1PrivateCompositorCommandList **v25; // [rsp+C0h] [rbp+58h]
  __int64 v26; // [rsp+C8h] [rbp+60h] BYREF

  v25 = a3;
  v24 = a2;
  v3 = 0;
  v4 = (struct CPolygon ***)((char *)this + 104);
  v23 = 0LL;
  v5 = 0LL;
  *a3 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = -1LL;
  v9 = a2;
  if ( *((int *)this + 30) <= 0 )
  {
LABEL_12:
    v7 = -1;
  }
  else
  {
    a3 = (struct ID2D1PrivateCompositorCommandList **)*((int *)this + 30);
    a2 = 0LL;
    v11 = *v4;
    while ( *v11 != v9 )
    {
      ++v7;
      a2 = (struct CPolygon *)((char *)a2 + 1);
      ++v11;
      if ( (__int64)a2 >= (__int64)a3 )
        goto LABEL_12;
    }
  }
  if ( v7 == -1 )
  {
    v14 = *((_DWORD *)v9 + 10);
    v15 = v14;
    v5 = operator new(saturated_mul(v14, 8uLL));
    if ( !v5 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x40u);
      return v3;
    }
    v16 = operator new(saturated_mul(v14, 4uLL));
    v6 = v16;
    if ( !v16 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x43u);
      goto LABEL_7;
    }
    if ( v14 )
    {
      v18 = 0LL;
      v17 = v16;
      v19 = v5;
      do
      {
        v20 = *(_OWORD *)(v18 + *((_QWORD *)v9 + 2));
        v18 += 20LL;
        *v19 = v20;
        v19 += 2;
        *(v19 - 1) = *(_DWORD *)(v18 + *((_QWORD *)v9 + 2) - 16);
        *v17++ = *(_DWORD *)(v18 + *((_QWORD *)v9 + 2) - 4);
        --v15;
      }
      while ( v15 );
    }
    v26 = 0LL;
    v21 = *(_QWORD *)(*((_QWORD *)this + 14)
                    + 8LL
                    * (int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
                             v4,
                             &v26,
                             v17));
    v22 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, void *, unsigned int, struct ID2D1PrivateCompositorCommandList **))(*(_QWORD *)v21 + 40LL))(
            v21,
            v5,
            v14,
            v6,
            v14,
            &v23);
    v3 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x51u);
      goto LABEL_7;
    }
    if ( !(unsigned int)CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::Add(
                          v4,
                          &v24,
                          &v23) )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x56u);
      goto LABEL_7;
    }
    v12 = v23;
  }
  else
  {
    v12 = *(struct ID2D1PrivateCompositorCommandList **)(*((_QWORD *)this + 14) + 8LL * v7);
    v23 = v12;
  }
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorCommandList *, struct CPolygon *, struct ID2D1PrivateCompositorCommandList **, __int64))(*(_QWORD *)v12 + 8LL))(
    v12,
    a2,
    a3,
    v8);
  *v25 = v23;
LABEL_7:
  if ( v5 )
    WPF::ProcessHeapImpl::Free(v5);
  if ( v6 )
    WPF::ProcessHeapImpl::Free(v6);
  return v3;
}
