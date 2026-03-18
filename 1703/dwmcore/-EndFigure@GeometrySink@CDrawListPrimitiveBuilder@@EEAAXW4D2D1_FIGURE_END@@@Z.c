/*
 * XREFs of ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18015BB70
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendHWGeometry@CDrawListPrimitiveBuilder@@AEAAJ_N0@Z @ 0x18004009C (-AppendHWGeometry@CDrawListPrimitiveBuilder@@AEAAJ_N0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x18015E1C8 (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 */

void __fastcall CDrawListPrimitiveBuilder::GeometrySink::EndFigure(
        CDrawListPrimitiveBuilder::GeometrySink *this,
        enum D2D1_FIGURE_END a2)
{
  int v2; // ebx
  char *v4; // r14
  int PolygonMesh; // eax
  unsigned int v6; // r15d
  unsigned int v7; // r12d
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ecx
  bool v13; // zf
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // r9d
  unsigned int v22; // [rsp+20h] [rbp-30h]
  int v23; // [rsp+80h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  if ( v2 < 0 )
  {
    v22 = 270;
LABEL_54:
    v21 = v2;
    goto LABEL_55;
  }
  --*((_DWORD *)this + 12);
  v4 = (char *)this + 120;
  *((_DWORD *)this + 36) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 120, 4u);
  PolygonMesh = DynArrayImpl<0>::Grow((__int64)v4, 4u, *((_DWORD *)this + 12), 0, 0LL);
  v2 = PolygonMesh;
  if ( PolygonMesh < 0 )
  {
    v22 = 279;
    goto LABEL_48;
  }
  v6 = 0;
  if ( *((_DWORD *)this + 12) )
  {
    v7 = v23;
    do
    {
      v8 = 0;
      v23 = 0;
      if ( !*((_DWORD *)this + 48) )
      {
        v9 = *((_DWORD *)this + 49);
        v8 = 3;
        v23 = 3;
        if ( v9 != 50529027 )
        {
          v10 = *((_QWORD *)this + 3);
          v11 = (v6 + 1) % *((_DWORD *)this + 12);
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 50) - *(float *)(v10 + 8LL * v6))) & _xmm) <= 0.0000011920929
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 50) - *(float *)(v10 + 8 * v11))) & _xmm) <= 0.0000011920929 )
          {
            v12 = v9 & 0x3000000;
            if ( v12 != 0x1000000 )
            {
              if ( v12 != 0x2000000 )
              {
                v13 = v12 == 50331648;
LABEL_12:
                if ( !v13 )
                  v8 = 0;
LABEL_33:
                v23 = v8;
                goto LABEL_34;
              }
LABEL_15:
              v8 = 2;
              goto LABEL_33;
            }
            goto LABEL_32;
          }
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 52) - *(float *)(v10 + 8LL * v6))) & _xmm) <= 0.0000011920929
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 52) - *(float *)(v10 + 8 * v11))) & _xmm) <= 0.0000011920929 )
          {
            v14 = v9 & 0x300;
            if ( v14 != 256 )
            {
              if ( v14 != 512 )
              {
                v13 = v14 == 768;
                goto LABEL_12;
              }
              goto LABEL_15;
            }
            goto LABEL_32;
          }
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 51) - *(float *)(v10 + 8LL * v6 + 4))) & _xmm) <= 0.0000011920929
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 51) - *(float *)(v10 + 8 * v11 + 4))) & _xmm) <= 0.0000011920929 )
          {
            v15 = (v9 & 3) - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 != 1 )
                {
                  v8 = 0;
                  v23 = 0;
                  goto LABEL_34;
                }
                goto LABEL_33;
              }
              goto LABEL_15;
            }
            goto LABEL_32;
          }
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 53) - *(float *)(v10 + 8LL * v6 + 4))) & _xmm) <= 0.0000011920929
            && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 53) - *(float *)(v10 + 8 * v11 + 4))) & _xmm) <= 0.0000011920929 )
          {
            v17 = v9 & 0x30000;
            if ( v17 != 0x10000 )
            {
              if ( v17 != 0x20000 )
              {
                v13 = v17 == 196608;
                goto LABEL_12;
              }
              goto LABEL_15;
            }
LABEL_32:
            v8 = 1;
            goto LABEL_33;
          }
        }
      }
LABEL_34:
      v18 = *((unsigned int *)v4 + 6);
      v19 = v18 + 1;
      if ( (int)v18 + 1 >= (unsigned int)v18 )
        v7 = v18 + 1;
      v2 = v19 < (unsigned int)v18 ? 0x80070216 : 0;
      if ( v19 < (unsigned int)v18 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xB5u);
      }
      else if ( v7 > *((_DWORD *)v4 + 5) )
      {
        v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 4u, 1, &v23);
        v2 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)v4 + 4 * v18) = v8;
        *((_DWORD *)v4 + 6) = v7;
      }
      if ( v2 < 0 )
      {
        v22 = 380;
        goto LABEL_54;
      }
      ++v6;
    }
    while ( v6 < *((_DWORD *)this + 12) );
  }
  PolygonMesh = Mesh::CreatePolygonMesh(
                  (Mesh *)(*((_QWORD *)this + 1) + 112LL),
                  *((const struct Mesh::ContentInfo **)this + 23),
                  *((const struct D2D_POINT_2F **)this + 3),
                  *(const enum D2D1_EDGE_FLAGS **)v4,
                  *((_DWORD *)this + 12));
  v2 = PolygonMesh;
  if ( PolygonMesh < 0 )
  {
    v22 = 387;
    goto LABEL_48;
  }
  if ( !PolygonMesh )
  {
    PolygonMesh = CDrawListPrimitiveBuilder::AppendHWGeometry(
                    *((CDrawListPrimitiveBuilder **)this + 1),
                    *((_BYTE *)this + 216),
                    *((_BYTE *)this + 217));
    v2 = PolygonMesh;
    if ( PolygonMesh < 0 )
    {
      v22 = 392;
LABEL_48:
      v21 = PolygonMesh;
LABEL_55:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v22);
      goto LABEL_56;
    }
  }
  v2 = 0;
LABEL_56:
  *((_DWORD *)this + 4) = v2;
}
