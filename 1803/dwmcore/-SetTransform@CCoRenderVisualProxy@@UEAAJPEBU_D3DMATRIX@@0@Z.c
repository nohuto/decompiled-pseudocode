/*
 * XREFs of ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x18014BB10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18004FF50 (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800A3E2C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??2CMatrixTransform3D@@KAPEAX_K@Z @ 0x1800CA0EC (--2CMatrixTransform3D@@KAPEAX_K@Z.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetTransform(
        CCoRenderVisualProxy *this,
        const struct _D3DMATRIX *a2,
        const struct _D3DMATRIX *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  CMILCOMBase *v8; // rax
  CMILCOMBase *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  struct _D3DMATRIX *D3DMatrix; // rax
  _QWORD v24[9]; // [rsp+30h] [rbp-D8h] BYREF
  int v25; // [rsp+78h] [rbp-90h]
  _OWORD v26[4]; // [rsp+88h] [rbp-80h] BYREF
  int v27; // [rsp+C8h] [rbp-40h]
  struct _D3DMATRIX v28; // [rsp+D8h] [rbp-30h] BYREF
  int v29; // [rsp+118h] [rbp+10h]

  v3 = *((_QWORD *)this + 3);
  v4 = 0;
  if ( !*(_QWORD *)(v3 + 232) )
  {
    v8 = (CMILCOMBase *)CMatrixTransform3D::operator new();
    v9 = v8;
    if ( v8 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 3) + 16LL);
      *((_DWORD *)v8 + 2) = 0;
      *((_QWORD *)v8 + 2) = v10;
      *((_QWORD *)v8 + 3) = 0LL;
      *((_QWORD *)v8 + 5) = 0LL;
      *((_DWORD *)v8 + 8) = 0;
      *((_DWORD *)v8 + 34) = 0;
      *((_DWORD *)v8 + 8) |= 1u;
      *((_BYTE *)v8 + 148) = 0;
      *(_QWORD *)v8 = &CMatrixTransform3D::`vftable';
      *((_DWORD *)v8 + 38) = 1065353216;
      *((_DWORD *)v8 + 43) = 1065353216;
      *((_DWORD *)v8 + 48) = 1065353216;
      *((_DWORD *)v8 + 53) = 1065353216;
    }
    else
    {
      v9 = 0LL;
    }
    if ( !v9 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1B4u);
      return v4;
    }
    CMILCOMBase::InternalAddRef(v9);
    v11 = CVisual::SetTransform(*((struct CResource ***)this + 3), v9);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1B5u);
      CMILCOMBase::InternalRelease(v9);
      return v4;
    }
    CMILCOMBase::InternalRelease(v9);
    v3 = *((_QWORD *)this + 3);
  }
  v12 = *(_QWORD *)(v3 + 232);
  v13 = *(_OWORD *)&a2->_11;
  if ( a3 )
  {
    v15 = *(_OWORD *)&a2->_21;
    v29 = 0;
    v27 = 0;
    v25 = 0;
    v26[1] = v15;
    v16 = *(_OWORD *)&a2->_41;
    v26[0] = v13;
    v17 = *(_OWORD *)&a2->_31;
    v26[3] = v16;
    v18 = *(_OWORD *)&a3->_21;
    v26[2] = v17;
    v19 = *(_OWORD *)&a3->_11;
    *(_OWORD *)&v24[3] = v18;
    v20 = *(_OWORD *)&a3->_41;
    *(_OWORD *)&v24[1] = v19;
    v21 = *(_OWORD *)&a3->_31;
    *(_OWORD *)&v24[7] = v20;
    *(_OWORD *)&v24[5] = v21;
    CMILMatrix::Multiply((const struct CMILMatrix *)v26, (const struct CMILMatrix *)&v24[1], (struct CMILMatrix *)&v28);
    D3DMatrix = CMILMatrix::GetD3DMatrix(&v28, (struct _D3DMATRIX *)&v24[1]);
    *(_OWORD *)(v12 + 152) = *(_OWORD *)&D3DMatrix->_11;
    *(_OWORD *)(v12 + 168) = *(_OWORD *)&D3DMatrix->_21;
    *(_OWORD *)(v12 + 184) = *(_OWORD *)&D3DMatrix->_31;
    v14 = *(_OWORD *)&D3DMatrix->_41;
  }
  else
  {
    *(_OWORD *)(v12 + 152) = v13;
    *(_OWORD *)(v12 + 168) = *(_OWORD *)&a2->_21;
    *(_OWORD *)(v12 + 184) = *(_OWORD *)&a2->_31;
    v14 = *(_OWORD *)&a2->_41;
  }
  *(_OWORD *)(v12 + 200) = v14;
  CResource::NotifyOnChanged((CVisual *)v12, 0LL, 0LL);
  return v4;
}
