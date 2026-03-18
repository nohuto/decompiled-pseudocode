/*
 * XREFs of ?EndFigure@GeometrySink@CDrawListEntryBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18017AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z @ 0x1800ADF68 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAJ_N0@Z.c)
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x18017DA20 (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 */

void __fastcall CDrawListEntryBuilder::GeometrySink::EndFigure(
        CDrawListEntryBuilder::GeometrySink *this,
        enum D2D1_FIGURE_END a2)
{
  int v2; // ebx
  char *v4; // r14
  int PolygonMesh; // eax
  unsigned int v6; // r9d
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  int v9; // r8d
  int v10; // ecx
  __int64 v11; // r10
  __int64 v12; // rdx
  int v13; // ecx
  bool v14; // zf
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // eax
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-30h]
  int v24; // [rsp+80h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 < 0 )
  {
    v23 = 280;
LABEL_53:
    v22 = v2;
    goto LABEL_54;
  }
  --*((_DWORD *)this + 12);
  v4 = (char *)this + 120;
  *((_DWORD *)this + 36) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 120, 4u);
  PolygonMesh = DynArrayImpl<0>::Grow((__int64)v4, 4u, *((_DWORD *)this + 12), 0, 0LL);
  v2 = PolygonMesh;
  if ( PolygonMesh < 0 )
  {
    v23 = 289;
    goto LABEL_47;
  }
  v6 = *((_DWORD *)this + 12);
  v7 = 0;
  if ( v6 )
  {
    v8 = v24;
    do
    {
      v9 = 0;
      v24 = 0;
      if ( !*((_DWORD *)this + 48) )
      {
        v10 = *((_DWORD *)this + 49);
        v9 = 3;
        v24 = 3;
        if ( v10 != 50529027 )
        {
          v11 = *((_QWORD *)this + 3);
          v12 = (v7 + 1) % v6;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 50) - *(float *)(v11 + 8LL * v7))) & _xmm) <= 0.0000011920929
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 50) - *(float *)(v11 + 8 * v12))) & _xmm) <= 0.0000011920929 )
          {
            v13 = v10 & 0x3000000;
            if ( v13 != 0x1000000 )
            {
              if ( v13 == 0x2000000 )
                goto LABEL_31;
              v14 = v13 == 50331648;
LABEL_28:
              if ( !v14 )
                v9 = 0;
              goto LABEL_30;
            }
            goto LABEL_32;
          }
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 52) - *(float *)(v11 + 8LL * v7))) & _xmm) <= 0.0000011920929
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 52) - *(float *)(v11 + 8 * v12))) & _xmm) <= 0.0000011920929 )
          {
            v15 = v10 & 0x300;
            if ( v15 != 256 )
            {
              if ( v15 == 512 )
                goto LABEL_31;
              v14 = v15 == 768;
              goto LABEL_28;
            }
            goto LABEL_32;
          }
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 51) - *(float *)(v11 + 8LL * v7 + 4))) & _xmm) <= 0.0000011920929
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 51) - *(float *)(v11 + 8 * v12 + 4))) & _xmm) <= 0.0000011920929 )
          {
            v16 = (v10 & 3) - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( !v17 )
                goto LABEL_31;
              if ( v17 != 1 )
              {
                v9 = 0;
                v24 = 0;
                goto LABEL_33;
              }
              goto LABEL_30;
            }
LABEL_32:
            v24 = 1;
            v9 = 1;
            goto LABEL_33;
          }
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 53) - *(float *)(v11 + 8LL * v7 + 4))) & _xmm) <= 0.0000011920929
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 53) - *(float *)(v11 + 8 * v12 + 4))) & _xmm) <= 0.0000011920929 )
          {
            v18 = v10 & 0x30000;
            if ( v18 != 0x10000 )
            {
              if ( v18 != 0x20000 )
              {
                v14 = v18 == 196608;
                goto LABEL_28;
              }
LABEL_31:
              v9 = 2;
LABEL_30:
              v24 = v9;
              goto LABEL_33;
            }
            goto LABEL_32;
          }
        }
      }
LABEL_33:
      v19 = *((unsigned int *)v4 + 6);
      v20 = v19 + 1;
      if ( (int)v19 + 1 >= (unsigned int)v19 )
        v8 = v19 + 1;
      v2 = v20 < (unsigned int)v19 ? 0x80070216 : 0;
      if ( v20 < (unsigned int)v19 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
      }
      else if ( v8 > *((_DWORD *)v4 + 5) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 4u, 1, &v24);
        v2 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xC0u);
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)v4 + 4 * v19) = v9;
        *((_DWORD *)v4 + 6) = v8;
      }
      if ( v2 < 0 )
      {
        v23 = 390;
        goto LABEL_53;
      }
      v6 = *((_DWORD *)this + 12);
      ++v7;
    }
    while ( v7 < v6 );
  }
  PolygonMesh = Mesh::CreatePolygonMesh(
                  (Mesh *)(*((_QWORD *)this + 1) + 112LL),
                  *((struct _D3DCOLORVALUE **)this + 23),
                  *((const struct D2D_POINT_2F **)this + 3),
                  *(const enum D2D1_EDGE_FLAGS **)v4,
                  v6);
  v2 = PolygonMesh;
  if ( PolygonMesh < 0 )
  {
    v23 = 397;
    goto LABEL_47;
  }
  if ( !PolygonMesh )
  {
    PolygonMesh = CDrawListEntryBuilder::AppendHWGeometry(
                    *((CDrawListEntryBuilder **)this + 1),
                    *((_BYTE *)this + 216),
                    *((_BYTE *)this + 217));
    v2 = PolygonMesh;
    if ( PolygonMesh < 0 )
    {
      v23 = 402;
LABEL_47:
      v22 = PolygonMesh;
LABEL_54:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, v23);
      goto LABEL_55;
    }
  }
  v2 = 0;
LABEL_55:
  *((_DWORD *)this + 4) = v2;
}
