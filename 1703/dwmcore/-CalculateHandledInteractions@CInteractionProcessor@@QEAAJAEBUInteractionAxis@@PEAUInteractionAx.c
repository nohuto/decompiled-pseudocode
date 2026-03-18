/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18018CE58
 * Callers:
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x180166840 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x180192A20 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x180020564 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@U-$TMILFlagsEnum@W4FlagsEnum@DwmIn.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18009A95C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18018BFF4 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18018F53C (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18018F7F4 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions(
        CInteractionProcessor *this,
        __int64 a2,
        __int64 a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _OWORD *a8)
{
  unsigned int v10; // r12d
  struct _D3DMATRIX *v11; // rcx
  struct _D3DMATRIX *D3DMatrix; // rax
  __int64 v13; // r8
  _BYTE *v14; // r9
  __int64 v15; // r10
  int v16; // ecx
  __int128 v17; // xmm1
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  bool v21; // zf
  int v22; // eax
  unsigned __int8 v23; // r14
  unsigned __int8 v24; // r13
  unsigned __int8 v25; // r15
  int v26; // esi
  const GUID *v27; // r8
  const GUID *v28; // r9
  unsigned int v29; // ecx
  int v30; // eax
  _DWORD *v31; // rax
  __int128 v32; // xmm0
  _DWORD v34[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _D3DMATRIX v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+A0h] [rbp-60h] BYREF
  int v37; // [rsp+A4h] [rbp-5Ch] BYREF
  int v38; // [rsp+A8h] [rbp-58h] BYREF
  int v39; // [rsp+ACh] [rbp-54h] BYREF
  int v40; // [rsp+B0h] [rbp-50h] BYREF
  int v41; // [rsp+B4h] [rbp-4Ch] BYREF
  int v42; // [rsp+B8h] [rbp-48h] BYREF
  int v43; // [rsp+BCh] [rbp-44h] BYREF
  int v44; // [rsp+C0h] [rbp-40h] BYREF
  int v45; // [rsp+C4h] [rbp-3Ch] BYREF
  int v46; // [rsp+C8h] [rbp-38h] BYREF
  CInteractionProcessor *v47; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v50; // [rsp+E8h] [rbp-18h]
  _OWORD *v51; // [rsp+F0h] [rbp-10h]
  struct _D3DMATRIX v52; // [rsp+100h] [rbp+0h] BYREF
  __int128 v53; // [rsp+140h] [rbp+40h] BYREF
  __int128 v54; // [rsp+150h] [rbp+50h] BYREF
  __int128 v55; // [rsp+160h] [rbp+60h]
  __int128 v56; // [rsp+170h] [rbp+70h]
  __int128 v57; // [rsp+180h] [rbp+80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  CInteractionProcessor **v59; // [rsp+1B0h] [rbp+B0h]
  __int64 v60; // [rsp+1B8h] [rbp+B8h]
  __int64 *v61; // [rsp+1C0h] [rbp+C0h]
  __int64 v62; // [rsp+1C8h] [rbp+C8h]
  __int64 *v63; // [rsp+1D0h] [rbp+D0h]
  __int64 v64; // [rsp+1D8h] [rbp+D8h]
  _DWORD *v65; // [rsp+1E0h] [rbp+E0h]
  __int64 v66; // [rsp+1E8h] [rbp+E8h]
  int *v67; // [rsp+1F0h] [rbp+F0h]
  __int64 v68; // [rsp+1F8h] [rbp+F8h]
  int *v69; // [rsp+200h] [rbp+100h]
  __int64 v70; // [rsp+208h] [rbp+108h]
  int *v71; // [rsp+210h] [rbp+110h]
  __int64 v72; // [rsp+218h] [rbp+118h]
  int *v73; // [rsp+220h] [rbp+120h]
  __int64 v74; // [rsp+228h] [rbp+128h]
  int *v75; // [rsp+230h] [rbp+130h]
  __int64 v76; // [rsp+238h] [rbp+138h]
  int *v77; // [rsp+240h] [rbp+140h]
  __int64 v78; // [rsp+248h] [rbp+148h]
  int *v79; // [rsp+250h] [rbp+150h]
  __int64 v80; // [rsp+258h] [rbp+158h]
  int *v81; // [rsp+260h] [rbp+160h]
  __int64 v82; // [rsp+268h] [rbp+168h]
  int *v83; // [rsp+270h] [rbp+170h]
  __int64 v84; // [rsp+278h] [rbp+178h]
  char *v85; // [rsp+280h] [rbp+180h]
  __int64 v86; // [rsp+288h] [rbp+188h]
  char *v87; // [rsp+290h] [rbp+190h]
  __int64 v88; // [rsp+298h] [rbp+198h]
  char *v89; // [rsp+2A0h] [rbp+1A0h]
  __int64 v90; // [rsp+2A8h] [rbp+1A8h]
  int *v91; // [rsp+2B0h] [rbp+1B0h]
  __int64 v92; // [rsp+2B8h] [rbp+1B8h]
  int *v93; // [rsp+2C0h] [rbp+1C0h]
  __int64 v94; // [rsp+2C8h] [rbp+1C8h]
  char *v95; // [rsp+2D0h] [rbp+1D0h]
  __int64 v96; // [rsp+2D8h] [rbp+1D8h]
  char *v97; // [rsp+2E0h] [rbp+1E0h]
  __int64 v98; // [rsp+2E8h] [rbp+1E8h]
  char *v99; // [rsp+2F0h] [rbp+1F0h]
  __int64 v100; // [rsp+2F8h] [rbp+1F8h]

  v50 = a7;
  v51 = a8;
  v10 = 0;
  v34[0] = *((_DWORD *)this + 100);
  v53 = 0uLL;
  v35 = *CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v52);
  D3DMatrix = CMILMatrix::GetD3DMatrix(v11, &v52);
  v16 = *((_DWORD *)this + 101);
  v54 = *(_OWORD *)&D3DMatrix->_11;
  v55 = *(_OWORD *)&D3DMatrix->_21;
  v56 = *(_OWORD *)&D3DMatrix->_31;
  v17 = *(_OWORD *)&D3DMatrix->_41;
  v52 = (struct _D3DMATRIX)zmmword_1801F3E80;
  v57 = v17;
  v18 = v16 - 1;
  if ( !v18 )
  {
    v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            this,
            v13,
            v14,
            v15,
            v34,
            &v53,
            (__int64)&v35,
            (__int64)&v54,
            (__int64)&v52);
LABEL_13:
    v10 = v22;
    if ( v22 < 0 )
      return v10;
    goto LABEL_14;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v22 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (_BYTE *)this + 160,
            v13,
            v14,
            v15,
            v34,
            &v53,
            (__int64)&v35,
            (__int64)&v54,
            (__int64)&v52);
    goto LABEL_13;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v21 = *((_DWORD *)this + 80) == -1;
    goto LABEL_6;
  }
  if ( v20 == 1 )
  {
    v21 = *((_DWORD *)this + 81) == -1;
LABEL_6:
    if ( v21 )
    {
      v34[0] = 2;
      LOWORD(v53) = 257;
    }
    else
    {
      v34[0] = 3;
    }
    *(_QWORD *)&v35._42 = 0LL;
    v35._41 = 0.0;
    *(_QWORD *)&v35._31 = 0LL;
    *(_OWORD *)&v35._21 = 0x3F80000000000000uLL;
    *(_QWORD *)((char *)&v57 + 4) = 0LL;
    LODWORD(v57) = 0;
    *(_QWORD *)&v56 = 0LL;
    v55 = 0x3F80000000000000uLL;
    v35._44 = 1.0;
    *(_QWORD *)&v35._33 = 1065353216LL;
    *(_OWORD *)&v35._11 = 0x3F800000uLL;
    HIDWORD(v57) = 1065353216;
    *((_QWORD *)&v56 + 1) = 1065353216LL;
    v54 = 0x3F800000uLL;
  }
LABEL_14:
  if ( (unsigned __int8)CInteractionProcessor::ResolveProhibitedMotion(this, a5, &v53, v34)
    && CInteractionProcessor::ResolveMustHandleMotion(
         this,
         (const struct D2DMatrix *)&v54,
         (const struct D2DMatrix *)&v52,
         a4,
         (struct InteractionAxis *)&v53,
         (enum InteractionState *)v34) )
  {
    v23 = v53;
    v24 = 1;
    if ( *((_BYTE *)this + 856) )
      v23 = 1;
    v25 = BYTE1(v53);
    if ( *((_BYTE *)this + 857) )
      v25 = 1;
    LOBYTE(v53) = v23;
    BYTE1(v53) = v25;
    if ( *((float *)&v53 + 1) != 0.0 )
      *((_BYTE *)this + 424) |= 1u;
    if ( *((float *)&v53 + 2) != 0.0 )
      *((_BYTE *)this + 424) |= 2u;
    if ( *((float *)&v53 + 3) != 0.0 )
      *((_BYTE *)this + 424) |= 4u;
    if ( v23 || v25 )
      *((_BYTE *)this + 424) |= 8u;
  }
  else
  {
    v25 = BYTE1(v53);
    v24 = 0;
    v23 = v53;
  }
  v26 = v34[0];
  if ( v34[0] == 3
    && (*((_BYTE *)this + 872) & 4) != 0
    && (unsigned int)CInteractionProcessor::SupportsPointerType((__int64)this, *((_DWORD *)this + 101), 0LL, 0) )
  {
    v26 = 4;
  }
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v29 = *((unsigned __int8 *)this + 424);
    v59 = &v47;
    v48 = *(_QWORD *)this;
    v61 = &v48;
    v49 = *((_QWORD *)this + 20);
    v63 = &v49;
    v34[0] = *((_DWORD *)this + 101);
    v65 = v34;
    v36 = *((_DWORD *)this + 100);
    v67 = &v36;
    v69 = &v37;
    v47 = this;
    v38 = v29 & 1;
    v71 = &v38;
    v60 = 8LL;
    v39 = (v29 >> 1) & 1;
    v73 = &v39;
    v40 = (v29 >> 2) & 1;
    v62 = 8LL;
    v75 = &v40;
    v77 = &v41;
    v42 = v24;
    v79 = &v42;
    v43 = v23;
    v81 = &v43;
    v44 = v25;
    v83 = &v44;
    v85 = (char *)&v53 + 4;
    v87 = (char *)&v53 + 8;
    v89 = (char *)&v53 + 12;
    v30 = *((unsigned __int8 *)this + 856);
    v64 = 8LL;
    v66 = 4LL;
    v68 = 4LL;
    v37 = v26;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    v41 = (v29 >> 3) & 1;
    v78 = 4LL;
    v80 = 4LL;
    v82 = 4LL;
    v84 = 4LL;
    v86 = 4LL;
    v88 = 4LL;
    v90 = 4LL;
    v45 = v30;
    v91 = &v45;
    v46 = *((unsigned __int8 *)this + 857);
    v93 = &v46;
    v95 = (char *)this + 860;
    v97 = (char *)this + 864;
    v99 = (char *)this + 868;
    v92 = 4LL;
    v94 = 4LL;
    v96 = 4LL;
    v98 = 4LL;
    v100 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F8B57, v27, v28, 0x17u, &pData);
  }
  v31 = (_DWORD *)v50;
  v32 = v53;
  *((_DWORD *)this + 100) = v26;
  *v31 = v26;
  *v51 = v32;
  return v10;
}
