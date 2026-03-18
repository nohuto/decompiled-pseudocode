/*
 * XREFs of ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x180140A00
 * Callers:
 *     <none>
 * Callees:
 *     ??2CMatrixTransform3D@@KAPEAX_K@Z @ 0x1800240D8 (--2CMatrixTransform3D@@KAPEAX_K@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18008533C (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18009A95C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetTransform(
        CCoRenderVisualProxy *this,
        const struct _D3DMATRIX *a2,
        const struct _D3DMATRIX *a3)
{
  unsigned int v3; // edi
  CBitmapOfDeviceBitmaps *v7; // rax
  CBitmapOfDeviceBitmaps *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int128 v11; // xmm0
  __int64 v12; // rbx
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  struct _D3DMATRIX *D3DMatrix; // rax
  _QWORD v23[9]; // [rsp+30h] [rbp-D8h] BYREF
  int v24; // [rsp+78h] [rbp-90h]
  _OWORD v25[4]; // [rsp+88h] [rbp-80h] BYREF
  int v26; // [rsp+C8h] [rbp-40h]
  struct _D3DMATRIX v27; // [rsp+D8h] [rbp-30h] BYREF
  int v28; // [rsp+118h] [rbp+10h]

  v3 = 0;
  if ( !*(_QWORD *)(*((_QWORD *)this + 3) + 224LL) )
  {
    v7 = (CBitmapOfDeviceBitmaps *)CMatrixTransform3D::operator new();
    v8 = v7;
    if ( v7 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
      *((_DWORD *)v7 + 2) = 0;
      *((_QWORD *)v7 + 2) = v9;
      *((_QWORD *)v7 + 3) = 0LL;
      *((_QWORD *)v7 + 5) = 0LL;
      *((_DWORD *)v7 + 8) = 0;
      *((_DWORD *)v7 + 34) = 0;
      *((_DWORD *)v7 + 8) |= 1u;
      *((_BYTE *)v7 + 148) = 0;
      *(_QWORD *)v7 = &CMatrixTransform3D::`vftable';
      *((_DWORD *)v7 + 38) = 1065353216;
      *((_DWORD *)v7 + 43) = 1065353216;
      *((_DWORD *)v7 + 48) = 1065353216;
      *((_DWORD *)v7 + 53) = 1065353216;
    }
    else
    {
      v8 = 0LL;
    }
    if ( !v8 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1B4u);
      return v3;
    }
    CBitmapOfDeviceBitmaps::AddRef(v8);
    v10 = CVisual::SetTransform(*((struct CResource ***)this + 3), v8);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1B5u);
      CMILCOMBase::InternalRelease(v8);
      return v3;
    }
    CMILCOMBase::InternalRelease(v8);
  }
  v11 = *(_OWORD *)&a2->_11;
  v12 = *(_QWORD *)(*((_QWORD *)this + 3) + 224LL);
  if ( a3 )
  {
    v14 = *(_OWORD *)&a2->_21;
    v28 = 0;
    v26 = 0;
    v24 = 0;
    v25[1] = v14;
    v15 = *(_OWORD *)&a2->_41;
    v25[0] = v11;
    v16 = *(_OWORD *)&a2->_31;
    v25[3] = v15;
    v17 = *(_OWORD *)&a3->_21;
    v25[2] = v16;
    v18 = *(_OWORD *)&a3->_11;
    *(_OWORD *)&v23[3] = v17;
    v19 = *(_OWORD *)&a3->_41;
    *(_OWORD *)&v23[1] = v18;
    v20 = *(_OWORD *)&a3->_31;
    *(_OWORD *)&v23[7] = v19;
    *(_OWORD *)&v23[5] = v20;
    CMILMatrix::Multiply((const struct CMILMatrix *)v25, (const struct CMILMatrix *)&v23[1], (struct CMILMatrix *)&v27);
    D3DMatrix = CMILMatrix::GetD3DMatrix(&v27, (struct _D3DMATRIX *)&v23[1]);
    *(_OWORD *)(v12 + 152) = *(_OWORD *)&D3DMatrix->_11;
    *(_OWORD *)(v12 + 168) = *(_OWORD *)&D3DMatrix->_21;
    *(_OWORD *)(v12 + 184) = *(_OWORD *)&D3DMatrix->_31;
    v13 = *(_OWORD *)&D3DMatrix->_41;
  }
  else
  {
    *(_OWORD *)(v12 + 152) = v11;
    *(_OWORD *)(v12 + 168) = *(_OWORD *)&a2->_21;
    *(_OWORD *)(v12 + 184) = *(_OWORD *)&a2->_31;
    v13 = *(_OWORD *)&a2->_41;
  }
  *(_OWORD *)(v12 + 200) = v13;
  CResource::NotifyOnChanged((_DWORD *)v12, 0LL, 0LL);
  return v3;
}
