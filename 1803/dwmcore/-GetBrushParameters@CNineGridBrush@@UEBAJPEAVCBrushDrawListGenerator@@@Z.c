/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180003B90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x180002BF0 (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18000405C (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x180004E70 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??4?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180006530 (--4-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008CBBC (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008CF94 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800C38EC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800DB248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

__int64 __fastcall CNineGridBrush::GetBrushParameters(CNineGridBrush *this, struct CBrushDrawListGenerator *a2)
{
  int v4; // edi
  struct CGeometryOnlyDrawListBrush *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // xmm1_4
  __int64 *v8; // rcx
  unsigned int v9; // xmm0_4
  float v10; // xmm1_4
  int v11; // xmm1_4
  __int64 v12; // rax
  int v13; // eax
  int v14; // r9d
  __int128 v15; // xmm0
  CGeometryOnlyDrawListBrush *v16; // r8
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm1_4
  CGeometryOnlyDrawListBrush *v19; // rax
  __int128 v20; // xmm0
  CNineGridDrawListBrush *v21; // r8
  struct CGeometryOnlyDrawListBrush *v22; // rdx
  struct CGeometryOnlyDrawListBrush *v23; // rax
  __int64 v24; // rcx
  CComponentTransform2D *v26; // rcx
  int v27; // xmm1_4
  unsigned int v28; // xmm0_4
  unsigned int v29; // xmm1_4
  unsigned int v30; // xmm0_4
  __int128 v31; // xmm1
  CGeometryOnlyDrawListBrush *v32[2]; // [rsp+30h] [rbp-89h] BYREF
  struct CGeometryOnlyDrawListBrush *v33[2]; // [rsp+40h] [rbp-79h] BYREF
  char v34; // [rsp+50h] [rbp-69h]
  __int128 v35; // [rsp+58h] [rbp-61h] BYREF
  CGeometryOnlyDrawListBrush **v36; // [rsp+68h] [rbp-51h]
  CGeometryOnlyDrawListBrush *v37; // [rsp+70h] [rbp-49h] BYREF
  char v38; // [rsp+78h] [rbp-41h]
  __int128 v39; // [rsp+80h] [rbp-39h] BYREF
  __int64 v40; // [rsp+90h] [rbp-29h] BYREF
  int v41; // [rsp+98h] [rbp-21h]
  int v42; // [rsp+9Ch] [rbp-1Dh]
  int v43; // [rsp+A0h] [rbp-19h]
  __int128 v44; // [rsp+A4h] [rbp-15h]
  CGeometryOnlyDrawListBrush *v45; // [rsp+B8h] [rbp-1h]
  __int64 v46; // [rsp+C0h] [rbp+7h]
  __int64 v47; // [rsp+C8h] [rbp+Fh]
  __int64 v48; // [rsp+D0h] [rbp+17h]
  int v49; // [rsp+D8h] [rbp+1Fh]
  __int16 v50; // [rsp+DCh] [rbp+23h]
  char v51; // [rsp+DEh] [rbp+25h]

  v4 = -2147022876;
  if ( dword_1802D5F98 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802D5F98);
    if ( dword_1802D5F98 == -1 )
    {
      dword_1802D5F28 = -2147022876;
      Init_thread_footer(&dword_1802D5F98);
    }
  }
  v5 = 0LL;
  v6 = *(_QWORD *)a2;
  *(float *)&v7 = *((float *)this + 23) * *((float *)this + 22);
  v8 = (__int64 *)*((_QWORD *)this + 9);
  *(float *)&v35 = *((float *)this + 21) * *((float *)this + 20);
  *(float *)&v9 = *((float *)this + 25) * *((float *)this + 24);
  v40 = v6;
  *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(v9, v7);
  v10 = *((float *)this + 27) * *((float *)this + 26);
  v43 = 0;
  v41 = *((_DWORD *)a2 + 2);
  *((float *)&v35 + 3) = v10;
  v11 = *((_DWORD *)a2 + 3);
  v44 = _xmm;
  v45 = 0LL;
  v42 = v11;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0;
  v50 = 256;
  v51 = 0;
  v12 = *v8;
  v33[0] = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v12 + 48))(v8, 139LL) )
  {
    v26 = *(CComponentTransform2D **)(*((_QWORD *)this + 9) + 104LL);
    if ( v26 )
    {
      if ( !CComponentTransform2D::IsIdentity(v26) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
          McTemplateU0d(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_NINEGRIDBRUSH_DRAW_ERROR_INVALID_INPUT,
            2147944420LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D5F28, 1u, -2147022876, 0x224u);
        goto LABEL_42;
      }
    }
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 9) + 296LL))(*((_QWORD *)this + 9), &v40);
  v4 = v13;
  if ( v13 >= 0 )
  {
    v32[0] = v45;
    v45 = 0LL;
    std::unique_ptr<CDrawListBrush>::operator=(v33, v32);
    if ( v32[0] )
      ((void (*)(void))std::default_delete<CDrawListBrush>::operator())();
    v5 = v33[0];
    if ( v33[0] )
    {
      if ( *((_BYTE *)v33[0] + 52) )
      {
        v27 = *((_DWORD *)this + 22);
        LODWORD(v32[0]) = *((_DWORD *)this + 20);
        v28 = *((_DWORD *)this + 24);
        HIDWORD(v32[0]) = v27;
        v32[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(*((_DWORD *)this + 26), v28);
        v39 = *(_OWORD *)v32;
      }
      else
      {
        if ( !*((_BYTE *)this + 112) )
          goto LABEL_18;
        v29 = *((_DWORD *)a2 + 2);
        v32[0] = 0LL;
        v39 = v35;
        v30 = *((_DWORD *)a2 + 3);
        *((_BYTE *)v33[0] + 52) = 1;
        v32[1] = (CGeometryOnlyDrawListBrush *)__PAIR64__(v30, v29);
        v31 = *(_OWORD *)v32;
        *((_DWORD *)v5 + 12) = 50529027;
        *((_OWORD *)v5 + 2) = v31;
      }
    }
    else
    {
      v15 = v44;
      *((_BYTE *)a2 + 76) = v50;
      *(_OWORD *)((char *)a2 + 20) = v15;
      if ( !*((_BYTE *)this + 112) )
        goto LABEL_18;
      v32[0] = 0LL;
      v33[0] = (struct CGeometryOnlyDrawListBrush *)v32;
      v39 = v35;
      v33[1] = 0LL;
      v34 = 1;
      v4 = CGeometryOnlyDrawListBrush::Create(&v33[1]);
      if ( v34 )
      {
        v16 = *(CGeometryOnlyDrawListBrush **)v33[0];
        *(_QWORD *)v33[0] = v33[1];
        if ( v16 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v16, 1u);
      }
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D5F28, 1u, v4, 0x23Bu);
        if ( v32[0] )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v32[0], 1u);
        goto LABEL_42;
      }
      v17 = *((_DWORD *)a2 + 3);
      v18 = *((_DWORD *)a2 + 2);
      v19 = v32[0];
      v33[0] = 0LL;
      v33[1] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(v17, v18);
      v20 = *(_OWORD *)v33;
      *((_BYTE *)v32[0] + 52) = 1;
      *((_DWORD *)v19 + 12) = 50529027;
      *((_OWORD *)v19 + 2) = v20;
      v33[0] = v32[0];
    }
    LOBYTE(v14) = *((_BYTE *)this + 112);
    v36 = v32;
    v32[0] = 0LL;
    v37 = 0LL;
    v38 = 1;
    v4 = CNineGridDrawListBrush::Create((unsigned int)v33, (unsigned int)&v39, (unsigned int)&v35, v14, (__int64)&v37);
    if ( v38 )
    {
      v21 = *v36;
      *v36 = v37;
      if ( v21 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v21, 1u);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D5F28, 1u, v4, 0x269u);
      if ( v32[0] )
        CNineGridDrawListBrush::`scalar deleting destructor'(v32[0], 1u);
      v5 = v33[0];
      goto LABEL_42;
    }
    v22 = v33[0];
    v23 = v32[0];
    v32[0] = 0LL;
    v33[0] = v23;
    if ( v22 )
    {
      ((void (*)(void))std::default_delete<CDrawListBrush>::operator())();
      if ( v32[0] )
        CNineGridDrawListBrush::`scalar deleting destructor'(v32[0], 1u);
    }
LABEL_18:
    CBrushDrawListGenerator::AttachInput(a2, 0LL, v33);
    v4 = 0;
    v5 = v33[0];
    *((_DWORD *)a2 + 4) = v43;
    goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D5F28, 1u, v13, 0x228u);
LABEL_42:
  CBrushDrawListGenerator::Reset(a2);
LABEL_19:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v40);
  if ( v5 )
    std::default_delete<CDrawListBrush>::operator()(v24, v5);
  return (unsigned int)v4;
}
