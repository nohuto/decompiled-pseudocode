/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801D2C20
 * Callers:
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x180191B70 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801DA150 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180029048 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800A3E2C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x1801D1C1C (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x1801D26AC (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801D5C28 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801D5F28 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
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
  int v11; // r15d
  char v12; // r13
  struct _D3DMATRIX *v13; // rcx
  struct _D3DMATRIX *D3DMatrix; // rax
  _BYTE *v15; // r8
  int v16; // ecx
  __int128 v17; // xmm1
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  unsigned __int8 v24; // al
  unsigned __int8 v25; // r12
  unsigned __int8 v26; // si
  unsigned __int8 v27; // r14
  int v28; // edi
  unsigned int v29; // ecx
  _DWORD *v30; // rax
  __int128 v31; // xmm0
  _DWORD v33[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DMATRIX v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+A0h] [rbp-60h] BYREF
  int v36; // [rsp+A4h] [rbp-5Ch] BYREF
  int v37; // [rsp+A8h] [rbp-58h] BYREF
  int v38; // [rsp+ACh] [rbp-54h] BYREF
  int v39; // [rsp+B0h] [rbp-50h] BYREF
  int v40; // [rsp+B4h] [rbp-4Ch] BYREF
  int v41; // [rsp+B8h] [rbp-48h] BYREF
  int v42; // [rsp+BCh] [rbp-44h] BYREF
  int v43; // [rsp+C0h] [rbp-40h] BYREF
  int v44; // [rsp+C4h] [rbp-3Ch] BYREF
  struct InteractionAxisGroup *v45; // [rsp+C8h] [rbp-38h] BYREF
  CInteractionProcessor *v46; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v48; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v50; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-8h]
  _OWORD *v52; // [rsp+100h] [rbp+0h]
  struct _D3DMATRIX v53; // [rsp+110h] [rbp+10h] BYREF
  __int128 v54; // [rsp+150h] [rbp+50h] BYREF
  __int128 v55; // [rsp+160h] [rbp+60h] BYREF
  __int128 v56; // [rsp+170h] [rbp+70h]
  __int128 v57; // [rsp+180h] [rbp+80h]
  __int128 v58; // [rsp+190h] [rbp+90h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1A0h] [rbp+A0h] BYREF
  CInteractionProcessor **v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  __int64 *v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  __int64 *v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  __int64 *v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  __int64 *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  _DWORD *v70; // [rsp+210h] [rbp+110h]
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
  int *v86; // [rsp+290h] [rbp+190h]
  __int64 v87; // [rsp+298h] [rbp+198h]
  int *v88; // [rsp+2A0h] [rbp+1A0h]
  __int64 v89; // [rsp+2A8h] [rbp+1A8h]
  char *v90; // [rsp+2B0h] [rbp+1B0h]
  __int64 v91; // [rsp+2B8h] [rbp+1B8h]
  char *v92; // [rsp+2C0h] [rbp+1C0h]
  __int64 v93; // [rsp+2C8h] [rbp+1C8h]
  char *v94; // [rsp+2D0h] [rbp+1D0h]
  __int64 v95; // [rsp+2D8h] [rbp+1D8h]
  int *v96; // [rsp+2E0h] [rbp+1E0h]
  __int64 v97; // [rsp+2E8h] [rbp+1E8h]
  struct InteractionAxisGroup **v98; // [rsp+2F0h] [rbp+1F0h]
  __int64 v99; // [rsp+2F8h] [rbp+1F8h]
  char *v100; // [rsp+300h] [rbp+200h]
  __int64 v101; // [rsp+308h] [rbp+208h]
  char *v102; // [rsp+310h] [rbp+210h]
  __int64 v103; // [rsp+318h] [rbp+218h]
  char *v104; // [rsp+320h] [rbp+220h]
  __int64 v105; // [rsp+328h] [rbp+228h]

  v51 = a7;
  v11 = 0;
  v52 = a8;
  v12 = 0;
  v33[0] = *((_DWORD *)this + 196);
  v54 = 0uLL;
  v45 = a4;
  v34 = *CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v53);
  D3DMatrix = CMILMatrix::GetD3DMatrix(v13, &v53);
  v16 = *((_DWORD *)this + 197);
  v55 = *(_OWORD *)&D3DMatrix->_11;
  v56 = *(_OWORD *)&D3DMatrix->_21;
  v57 = *(_OWORD *)&D3DMatrix->_31;
  v17 = *(_OWORD *)&D3DMatrix->_41;
  v53 = (struct _D3DMATRIX)zmmword_1802A2200;
  v58 = v17;
  v18 = v16 - 2;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( !v21 )
        {
          v23 = *((_DWORD *)this + 160);
          if ( v23 == -805306369 )
            LOWORD(v54) = 257;
          *(_OWORD *)&v34._11 = 0x3F800000uLL;
          *(_QWORD *)&v34._43 = 0x3F80000000000000LL;
          *(_QWORD *)&v34._41 = 0LL;
          v34._34 = 0.0;
          *(_QWORD *)&v34._32 = 0x3F80000000000000LL;
          v34._31 = 0.0;
          *(_OWORD *)&v34._21 = 0x3F80000000000000uLL;
          *(_QWORD *)((char *)&v58 + 4) = 0LL;
          LODWORD(v58) = 0;
          *(_QWORD *)&v57 = 0LL;
          v56 = 0x3F80000000000000uLL;
          v33[0] = (v23 != -805306369) + 2;
          HIDWORD(v58) = 1065353216;
          *((_QWORD *)&v57 + 1) = 1065353216LL;
          v55 = 0x3F800000uLL;
          goto LABEL_17;
        }
        if ( v21 != 1 )
          goto LABEL_17;
        v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                (__int64)this,
                (_BYTE *)this + 480,
                a2,
                v15,
                a6,
                v33,
                &v54,
                (__int64)&v34,
                (__int64)&v55,
                (__int64)&v53);
      }
      else
      {
        if ( !CInteractionProcessor::AllowPenGestureDetection(this) )
        {
          v12 = 1;
          *(_QWORD *)&v34._42 = 0LL;
          v34._41 = 0.0;
          *(_QWORD *)&v34._31 = 0LL;
          *(_OWORD *)&v34._21 = 0x3F80000000000000uLL;
          *(_QWORD *)((char *)&v58 + 4) = 0LL;
          LODWORD(v58) = 0;
          *(_QWORD *)&v57 = 0LL;
          v56 = 0x3F80000000000000uLL;
          v33[0] = 2;
          LOWORD(v54) = 257;
          v34._44 = 1.0;
          *(_QWORD *)&v34._33 = 1065353216LL;
          *(_OWORD *)&v34._11 = 0x3F800000uLL;
          HIDWORD(v58) = 1065353216;
          *((_QWORD *)&v57 + 1) = 1065353216LL;
          v55 = 0x3F800000uLL;
          goto LABEL_16;
        }
        v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                (__int64)this,
                (_BYTE *)this + 320,
                a2,
                a3,
                a6,
                v33,
                &v54,
                (__int64)&v34,
                (__int64)&v55,
                (__int64)&v53);
      }
    }
    else
    {
      v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              (__int64)this,
              (_BYTE *)this + 160,
              a2,
              a3,
              a6,
              v33,
              &v54,
              (__int64)&v34,
              (__int64)&v55,
              (__int64)&v53);
    }
  }
  else
  {
    v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            this,
            a2,
            a3,
            a6,
            v33,
            &v54,
            (__int64)&v34,
            (__int64)&v55,
            (__int64)&v53);
  }
  v11 = v22;
LABEL_16:
  if ( v11 < 0 )
    return (unsigned int)v11;
LABEL_17:
  v24 = CInteractionProcessor::ResolveProhibitedMotion(this, a5, &v54, v33);
  v25 = v24;
  if ( !v12 )
  {
    if ( v24
      && CInteractionProcessor::ResolveMustHandleMotion(
           this,
           (const struct D2DMatrix *)&v55,
           (const struct D2DMatrix *)&v53,
           v45,
           (struct InteractionAxis *)&v54,
           (enum InteractionState *)v33) )
    {
      v25 = 1;
LABEL_23:
      v26 = v54;
      v27 = BYTE1(v54);
      if ( *((_BYTE *)this + 1248) )
        v26 = 1;
      if ( *((_BYTE *)this + 1249) )
        v27 = 1;
      LOBYTE(v54) = v26;
      BYTE1(v54) = v27;
      if ( *((float *)&v54 + 1) != 0.0 )
        *((_BYTE *)this + 808) |= 1u;
      if ( *((float *)&v54 + 2) != 0.0 )
        *((_BYTE *)this + 808) |= 2u;
      if ( *((float *)&v54 + 3) != 0.0 )
        *((_BYTE *)this + 808) |= 4u;
      if ( v26 || v27 )
        *((_BYTE *)this + 808) |= 8u;
      goto LABEL_37;
    }
    v25 = 0;
  }
  if ( v25 )
    goto LABEL_23;
  v27 = BYTE1(v54);
  v26 = v54;
LABEL_37:
  v28 = v33[0];
  if ( v33[0] == 3
    && (*((_BYTE *)this + 1264) & 4) != 0
    && (unsigned int)CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 0) )
  {
    v28 = 4;
  }
  if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
  {
    v29 = *((unsigned __int8 *)this + 808);
    v60 = &v46;
    v47 = *(_QWORD *)this;
    v62 = &v47;
    v48 = *((_QWORD *)this + 20);
    v64 = &v48;
    v49 = *((_QWORD *)this + 40);
    v66 = &v49;
    v50 = *((_QWORD *)this + 60);
    v68 = &v50;
    v33[0] = *((_DWORD *)this + 197);
    v70 = v33;
    v35 = *((_DWORD *)this + 196);
    v72 = &v35;
    v74 = &v36;
    v46 = this;
    v37 = v29 & 1;
    v76 = &v37;
    v61 = 8LL;
    v38 = (v29 >> 1) & 1;
    v78 = &v38;
    v39 = (v29 >> 2) & 1;
    v63 = 8LL;
    v80 = &v39;
    v82 = &v40;
    v41 = v25;
    v84 = &v41;
    v42 = v26;
    v86 = &v42;
    v43 = v27;
    v88 = &v43;
    v65 = 8LL;
    v67 = 8LL;
    v69 = 8LL;
    v71 = 4LL;
    v73 = 4LL;
    v36 = v28;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v40 = (v29 >> 3) & 1;
    v83 = 4LL;
    v85 = 4LL;
    v87 = 4LL;
    v89 = 4LL;
    v90 = (char *)&v54 + 4;
    v92 = (char *)&v54 + 8;
    v94 = (char *)&v54 + 12;
    v44 = *((unsigned __int8 *)this + 1248);
    v96 = &v44;
    LODWORD(v45) = *((unsigned __int8 *)this + 1249);
    v98 = &v45;
    v100 = (char *)this + 1252;
    v102 = (char *)this + 1256;
    v104 = (char *)this + 1260;
    v91 = 4LL;
    v93 = 4LL;
    v95 = 4LL;
    v97 = 4LL;
    v99 = 4LL;
    v101 = 4LL;
    v103 = 4LL;
    v105 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802AA5C0, 0LL, 0LL, 0x19u, &pData);
  }
  v30 = (_DWORD *)v51;
  v31 = v54;
  *((_DWORD *)this + 196) = v28;
  *v30 = v28;
  *v52 = v31;
  return (unsigned int)v11;
}
