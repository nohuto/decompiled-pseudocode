/*
 * XREFs of ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000A274
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000EFFC (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap@@@Z @ 0x18000A068 (-GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2.c)
 *     ?BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorBuffer@@3@Z @ 0x18000A0F4 (-BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContex.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800AF840 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandListBitmapRepresentation::GetD2DCommandList(
        CCommandListBitmapRepresentation *this,
        struct CPolygon *a2,
        struct ID2DContextOwner *a3,
        struct ID2DContext *a4,
        struct ID2D1PrivateCompositorCommandList **a5)
{
  unsigned int v5; // r10d
  struct ID2D1PrivateCompositorBuffer *v10; // r13
  unsigned int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // rsi
  int ID2DCommandList; // eax
  int v15; // ebx
  int D2DBitmapRealization; // eax
  int v17; // eax
  struct ID2D1PrivateCompositorBuffer *v18; // rsi
  struct ID2D1PrivateCompositorCommandList *v19; // rax
  int v21; // eax
  struct ID2DContextOwner *v22; // rdx
  struct ID2DContext *v23; // r8
  int v24; // eax
  int v25; // eax
  _QWORD *v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // edx
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // [rsp+28h] [rbp-41h]
  struct ID2D1Bitmap *v32; // [rsp+68h] [rbp-1h] BYREF
  struct ID2D1PrivateCompositorCommandList *v33; // [rsp+70h] [rbp+7h] BYREF
  CD2DCommandList *v34; // [rsp+78h] [rbp+Fh] BYREF
  struct ID2D1PrivateCompositorBuffer *v35; // [rsp+80h] [rbp+17h] BYREF
  __int128 v36; // [rsp+88h] [rbp+1Fh] BYREF
  struct ID2D1PrivateCompositorBuffer *v37; // [rsp+C8h] [rbp+5Fh] BYREF

  v5 = *((_DWORD *)this + 84);
  v35 = 0LL;
  v37 = 0LL;
  *a5 = 0LL;
  v33 = 0LL;
  v10 = 0LL;
  v34 = 0LL;
  v11 = 0;
  v32 = 0LL;
  if ( v5 )
  {
    v12 = *((_QWORD *)this + 39);
    while ( a4 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v12 + 16LL * v11) + 24LL) + 24LL) )
    {
      if ( ++v11 >= v5 )
        goto LABEL_17;
    }
    v13 = v12 + 16LL * v11;
    if ( v13 )
    {
      ID2DCommandList = CD2DCommandList::GetID2DCommandList(*(CD2DCommandList **)v13, a2, &v33);
      v15 = ID2DCommandList;
      if ( ID2DCommandList < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2DCommandList, 0x8Eu);
      }
      else
      {
        if ( !*(_BYTE *)(v13 + 8)
          && !(*(unsigned __int8 (__fastcall **)(CCommandListBitmapRepresentation *))(*(_QWORD *)this + 48LL))(this) )
        {
          goto LABEL_10;
        }
        D2DBitmapRealization = CCommandListBitmapRepresentation::GetD2DBitmapRealization(this, a3, &v32);
        v15 = D2DBitmapRealization;
        if ( D2DBitmapRealization < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapRealization, 0x9Bu);
        }
        else
        {
          v17 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorCommandList *, struct ID2D1Bitmap **, __int64))(*(_QWORD *)v33 + 32LL))(
                  v33,
                  &v32,
                  1LL);
          v15 = v17;
          if ( v17 >= 0 )
          {
            *(_BYTE *)(v13 + 8) = 0;
LABEL_10:
            v18 = v37;
LABEL_11:
            v19 = v33;
            v33 = 0LL;
            *a5 = v19;
            goto LABEL_12;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xA1u);
        }
      }
      goto LABEL_44;
    }
  }
LABEL_17:
  v21 = CCommandListBitmapRepresentation::GetD2DBitmapRealization(this, a3, &v32);
  v15 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xABu);
    goto LABEL_44;
  }
  if ( !v32 )
  {
LABEL_44:
    v18 = v37;
    goto LABEL_12;
  }
  v24 = CCommandListBitmapRepresentation::BuildCommandBuffers(this, v22, v23, v32, &v35, &v37);
  v15 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xBBu);
    v10 = v35;
    goto LABEL_44;
  }
  v10 = v35;
  v18 = v37;
  v25 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, __int64, _QWORD, _QWORD, _QWORD, _QWORD, CD2DCommandList **))(*(_QWORD *)a4 + 264LL))(
          a4,
          v35,
          v37,
          &v32,
          1LL,
          0LL,
          0LL,
          0LL,
          0LL,
          &v34);
  v15 = v25;
  if ( v25 < 0 )
  {
    v31 = 200;
    goto LABEL_41;
  }
  v25 = CD2DCommandList::GetID2DCommandList(v34, a2, &v33);
  v15 = v25;
  if ( v25 < 0 )
  {
    v31 = 206;
LABEL_41:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v31);
    goto LABEL_12;
  }
  v26 = (_QWORD *)((char *)this + 312);
  v27 = *((_DWORD *)this + 84);
  v28 = (unsigned int)a5;
  *(_QWORD *)&v36 = v34;
  BYTE8(v36) = 0;
  v29 = v27 + 1;
  if ( v27 + 1 >= v27 )
    v28 = v27 + 1;
  v15 = v29 < v27 ? 0x80070216 : 0;
  if ( v29 < v27 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB5u);
  }
  else if ( v28 > *((_DWORD *)this + 83) )
  {
    v30 = DynArrayImpl<0>::AddMultipleAndSet(v26, 16LL, 1LL, &v36);
    v15 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*v26 + 16LL * v27) = v36;
    *((_DWORD *)this + 84) = v28;
  }
  if ( v15 >= 0 )
  {
    v34 = 0LL;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xD4u);
LABEL_12:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v32);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v33);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v10);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v18);
  if ( v34 )
    (*(void (__fastcall **)(CD2DCommandList *))(*(_QWORD *)v34 + 16LL))(v34);
  return (unsigned int)v15;
}
