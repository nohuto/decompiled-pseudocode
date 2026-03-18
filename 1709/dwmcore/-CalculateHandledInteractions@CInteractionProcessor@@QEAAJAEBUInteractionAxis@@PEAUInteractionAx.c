/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18019A2FC
 * Callers:
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x180169280 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801A1600 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005ACD4 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180091D44 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180199450 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180199EA4 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18019CFC4 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18019D298 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions(
        CInteractionProcessor *this,
        __int64 a2,
        _BYTE *a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _OWORD *a8)
{
  int v12; // r15d
  struct _D3DMATRIX *v13; // rcx
  struct _D3DMATRIX *D3DMatrix; // rax
  int v15; // ecx
  __int128 v16; // xmm1
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  unsigned __int8 v21; // si
  unsigned __int8 v22; // r12
  unsigned __int8 v23; // r14
  int v24; // edi
  const GUID *v25; // r8
  const GUID *v26; // r9
  unsigned int v27; // ecx
  char v28; // al
  _DWORD *v29; // rax
  __int128 v30; // xmm0
  _DWORD v32[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DMATRIX v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+A0h] [rbp-60h] BYREF
  int v35; // [rsp+A4h] [rbp-5Ch] BYREF
  int v36; // [rsp+A8h] [rbp-58h] BYREF
  int v37; // [rsp+ACh] [rbp-54h] BYREF
  int v38; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+B4h] [rbp-4Ch] BYREF
  int v40; // [rsp+B8h] [rbp-48h] BYREF
  int v41; // [rsp+BCh] [rbp-44h] BYREF
  int v42; // [rsp+C0h] [rbp-40h] BYREF
  int v43; // [rsp+C4h] [rbp-3Ch] BYREF
  int v44; // [rsp+C8h] [rbp-38h] BYREF
  CInteractionProcessor *v45; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v48; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v49; // [rsp+F0h] [rbp-10h]
  _OWORD *v50; // [rsp+F8h] [rbp-8h]
  struct _D3DMATRIX v51; // [rsp+100h] [rbp+0h] BYREF
  __int128 v52; // [rsp+140h] [rbp+40h] BYREF
  __int128 v53; // [rsp+150h] [rbp+50h] BYREF
  __int128 v54; // [rsp+160h] [rbp+60h]
  __int128 v55; // [rsp+170h] [rbp+70h]
  __int128 v56; // [rsp+180h] [rbp+80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  CInteractionProcessor **v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  __int64 *v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  __int64 *v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  __int64 *v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  _DWORD *v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  int *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  int *v70; // [rsp+210h] [rbp+110h]
  __int64 v71; // [rsp+218h] [rbp+118h]
  int *v72; // [rsp+220h] [rbp+120h]
  __int64 v73; // [rsp+228h] [rbp+128h]
  int *v74; // [rsp+230h] [rbp+130h]
  __int64 v75; // [rsp+238h] [rbp+138h]
  int *v76; // [rsp+240h] [rbp+140h]
  __int64 v77; // [rsp+248h] [rbp+148h]
  int *v78; // [rsp+250h] [rbp+150h]
  __int64 v79; // [rsp+258h] [rbp+158h]
  int *v80; // [rsp+260h] [rbp+160h]
  __int64 v81; // [rsp+268h] [rbp+168h]
  int *v82; // [rsp+270h] [rbp+170h]
  __int64 v83; // [rsp+278h] [rbp+178h]
  int *v84; // [rsp+280h] [rbp+180h]
  __int64 v85; // [rsp+288h] [rbp+188h]
  char *v86; // [rsp+290h] [rbp+190h]
  __int64 v87; // [rsp+298h] [rbp+198h]
  char *v88; // [rsp+2A0h] [rbp+1A0h]
  __int64 v89; // [rsp+2A8h] [rbp+1A8h]
  char *v90; // [rsp+2B0h] [rbp+1B0h]
  __int64 v91; // [rsp+2B8h] [rbp+1B8h]
  int *v92; // [rsp+2C0h] [rbp+1C0h]
  __int64 v93; // [rsp+2C8h] [rbp+1C8h]
  int *v94; // [rsp+2D0h] [rbp+1D0h]
  __int64 v95; // [rsp+2D8h] [rbp+1D8h]
  char *v96; // [rsp+2E0h] [rbp+1E0h]
  __int64 v97; // [rsp+2E8h] [rbp+1E8h]
  char *v98; // [rsp+2F0h] [rbp+1F0h]
  __int64 v99; // [rsp+2F8h] [rbp+1F8h]
  char *v100; // [rsp+300h] [rbp+200h]
  __int64 v101; // [rsp+308h] [rbp+208h]

  v49 = a7;
  v50 = a8;
  v12 = 0;
  v32[0] = *((_DWORD *)this + 148);
  v52 = 0uLL;
  v33 = *CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v51);
  D3DMatrix = CMILMatrix::GetD3DMatrix(v13, &v51);
  v15 = *((_DWORD *)this + 149);
  v53 = *(_OWORD *)&D3DMatrix->_11;
  v54 = *(_OWORD *)&D3DMatrix->_21;
  v55 = *(_OWORD *)&D3DMatrix->_31;
  v16 = *(_OWORD *)&D3DMatrix->_41;
  v51 = (struct _D3DMATRIX)zmmword_18020FF90;
  v56 = v16;
  v17 = v15 - 1;
  if ( !v17 )
  {
    v20 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            this,
            a2,
            a3,
            a6,
            v32,
            &v52,
            (__int64)&v33,
            (__int64)&v53,
            (__int64)&v51);
    goto LABEL_14;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v20 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (_BYTE *)this + 160,
            a2,
            a3,
            a6,
            v32,
            &v52,
            (__int64)&v33,
            (__int64)&v53,
            (__int64)&v51);
    goto LABEL_14;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    if ( !CInteractionProcessor::AllowPenGestureDetection(this) )
    {
      *(_QWORD *)&v33._42 = 0LL;
      v33._41 = 0.0;
      *(_QWORD *)&v33._31 = 0LL;
      *(_OWORD *)&v33._21 = 0x3F80000000000000uLL;
      *(_QWORD *)((char *)&v56 + 4) = 0LL;
      LODWORD(v56) = 0;
      *(_QWORD *)&v55 = 0LL;
      v54 = 0x3F80000000000000uLL;
      v32[0] = 2;
      LOWORD(v52) = 257;
      v33._44 = 1.0;
      *(_QWORD *)&v33._33 = 1065353216LL;
      *(_OWORD *)&v33._11 = 0x3F800000uLL;
      HIDWORD(v56) = 1065353216;
      *((_QWORD *)&v55 + 1) = 1065353216LL;
      v53 = 0x3F800000uLL;
      goto LABEL_15;
    }
    v20 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (_BYTE *)this + 320,
            a2,
            a3,
            a6,
            v32,
            &v52,
            (__int64)&v33,
            (__int64)&v53,
            (__int64)&v51);
LABEL_14:
    v12 = v20;
LABEL_15:
    if ( v12 < 0 )
      return (unsigned int)v12;
    goto LABEL_16;
  }
  if ( v19 == 1 )
  {
    if ( *((_DWORD *)this + 120) == -805306369 )
    {
      v32[0] = 2;
      LOWORD(v52) = 257;
    }
    else
    {
      v32[0] = 3;
    }
    *(_QWORD *)&v33._42 = 0LL;
    v33._41 = 0.0;
    *(_QWORD *)&v33._31 = 0LL;
    *(_OWORD *)&v33._21 = 0x3F80000000000000uLL;
    *(_QWORD *)((char *)&v56 + 4) = 0LL;
    LODWORD(v56) = 0;
    *(_QWORD *)&v55 = 0LL;
    v54 = 0x3F80000000000000uLL;
    v33._44 = 1.0;
    *(_QWORD *)&v33._33 = 1065353216LL;
    *(_OWORD *)&v33._11 = 0x3F800000uLL;
    HIDWORD(v56) = 1065353216;
    *((_QWORD *)&v55 + 1) = 1065353216LL;
    v53 = 0x3F800000uLL;
  }
LABEL_16:
  if ( (unsigned __int8)CInteractionProcessor::ResolveProhibitedMotion(this, a5, &v52, v32)
    && CInteractionProcessor::ResolveMustHandleMotion(
         this,
         (const struct D2DMatrix *)&v53,
         (const struct D2DMatrix *)&v51,
         a4,
         (struct InteractionAxis *)&v52,
         (enum InteractionState *)v32) )
  {
    v21 = v52;
    v22 = 1;
    v23 = BYTE1(v52);
    if ( *((_BYTE *)this + 1048) )
      v21 = 1;
    if ( *((_BYTE *)this + 1049) )
      v23 = 1;
    LOBYTE(v52) = v21;
    BYTE1(v52) = v23;
    if ( *((float *)&v52 + 1) != 0.0 )
      *((_BYTE *)this + 616) |= 1u;
    if ( *((float *)&v52 + 2) != 0.0 )
      *((_BYTE *)this + 616) |= 2u;
    if ( *((float *)&v52 + 3) != 0.0 )
      *((_BYTE *)this + 616) |= 4u;
    if ( v21 || v23 )
      *((_BYTE *)this + 616) |= 8u;
  }
  else
  {
    v23 = BYTE1(v52);
    v22 = 0;
    v21 = v52;
  }
  v24 = v32[0];
  if ( v32[0] == 3
    && (*((_BYTE *)this + 1064) & 4) != 0
    && (unsigned int)CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 149), 0) )
  {
    v24 = 4;
  }
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
  {
    v45 = this;
    v59 = 8LL;
    v58 = &v45;
    v46 = *(_QWORD *)this;
    v60 = &v46;
    v47 = *((_QWORD *)this + 20);
    v48 = v47;
    v64 = &v48;
    v32[0] = *((_DWORD *)this + 149);
    v66 = v32;
    v34 = *((_DWORD *)this + 148);
    v68 = &v34;
    v70 = &v35;
    v62 = &v47;
    v27 = *((unsigned __int8 *)this + 616);
    v28 = *((_BYTE *)this + 616);
    v61 = 8LL;
    v63 = 8LL;
    v36 = v28 & 1;
    v72 = &v36;
    v65 = 8LL;
    v37 = (v27 >> 1) & 1;
    v74 = &v37;
    v38 = (v27 >> 2) & 1;
    v67 = 4LL;
    v76 = &v38;
    v78 = &v39;
    v40 = v22;
    v80 = &v40;
    v41 = v21;
    v82 = &v41;
    v42 = v23;
    v84 = &v42;
    v86 = (char *)&v52 + 4;
    v88 = (char *)&v52 + 8;
    v69 = 4LL;
    v35 = v24;
    v71 = 4LL;
    v73 = 4LL;
    v75 = 4LL;
    v77 = 4LL;
    v39 = (v27 >> 3) & 1;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 4LL;
    v85 = 4LL;
    v87 = 4LL;
    v89 = 4LL;
    v91 = 4LL;
    v90 = (char *)&v52 + 12;
    v43 = *((unsigned __int8 *)this + 1048);
    v92 = &v43;
    v44 = *((unsigned __int8 *)this + 1049);
    v94 = &v44;
    v96 = (char *)this + 1052;
    v98 = (char *)this + 1056;
    v100 = (char *)this + 1060;
    v93 = 4LL;
    v95 = 4LL;
    v97 = 4LL;
    v99 = 4LL;
    v101 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_1802153CA, v25, v26, 0x18u, &pData);
  }
  v29 = (_DWORD *)v49;
  v30 = v52;
  *((_DWORD *)this + 148) = v24;
  *v29 = v24;
  *v50 = v30;
  return (unsigned int)v12;
}
