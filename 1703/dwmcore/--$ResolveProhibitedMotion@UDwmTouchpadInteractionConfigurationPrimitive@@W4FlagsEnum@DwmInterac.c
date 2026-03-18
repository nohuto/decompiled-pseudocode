/*
 * XREFs of ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18018C578
 * Callers:
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18018F7F4 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _anonymous_namespace_::AxisContainsInteraction @ 0x18018CAC4 (_anonymous_namespace_--AxisContainsInteraction.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801AFA40 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 *a1,
        __int64 *a2,
        unsigned __int8 *a3,
        _DWORD *a4)
{
  unsigned __int8 v8; // si
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // r11
  const GUID *v16; // r8
  const GUID *v17; // r9
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // rcx
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  int v24; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h]
  __int64 *v30; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h] BYREF
  int v33; // [rsp+78h] [rbp-90h] BYREF
  int v34; // [rsp+7Ch] [rbp-8Ch] BYREF
  _DWORD v35[2]; // [rsp+80h] [rbp-88h] BYREF
  int v36; // [rsp+88h] [rbp-80h] BYREF
  int v37; // [rsp+8Ch] [rbp-7Ch] BYREF
  _DWORD v38[2]; // [rsp+90h] [rbp-78h] BYREF
  int v39; // [rsp+98h] [rbp-70h] BYREF
  int v40; // [rsp+9Ch] [rbp-6Ch] BYREF
  _DWORD v41[6]; // [rsp+A0h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 **v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  __int64 *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  __int64 *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  int *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  __int64 *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  int *v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+28h]
  int *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  __int64 v57; // [rsp+148h] [rbp+40h]
  __int64 v58; // [rsp+150h] [rbp+48h]
  __int64 v59; // [rsp+158h] [rbp+50h]
  __int64 v60; // [rsp+160h] [rbp+58h]
  int *v61; // [rsp+168h] [rbp+60h]
  __int64 v62; // [rsp+170h] [rbp+68h]
  int *v63; // [rsp+178h] [rbp+70h]
  __int64 v64; // [rsp+180h] [rbp+78h]
  int *v65; // [rsp+188h] [rbp+80h]
  __int64 v66; // [rsp+190h] [rbp+88h]
  __int64 v67; // [rsp+198h] [rbp+90h]
  __int64 v68; // [rsp+1A0h] [rbp+98h]
  unsigned __int8 *v69; // [rsp+1A8h] [rbp+A0h]
  __int64 v70; // [rsp+1B0h] [rbp+A8h]
  unsigned __int8 *v71; // [rsp+1B8h] [rbp+B0h]
  __int64 v72; // [rsp+1C0h] [rbp+B8h]
  int *v73; // [rsp+1C8h] [rbp+C0h]
  __int64 v74; // [rsp+1D0h] [rbp+C8h]
  int *v75; // [rsp+1D8h] [rbp+D0h]
  __int64 v76; // [rsp+1E0h] [rbp+D8h]
  _DWORD *v77; // [rsp+1E8h] [rbp+E0h]
  __int64 v78; // [rsp+1F0h] [rbp+E8h]
  int *v79; // [rsp+1F8h] [rbp+F0h]
  __int64 v80; // [rsp+200h] [rbp+F8h]
  int *v81; // [rsp+208h] [rbp+100h]
  __int64 v82; // [rsp+210h] [rbp+108h]
  _DWORD *v83; // [rsp+218h] [rbp+110h]
  __int64 v84; // [rsp+220h] [rbp+118h]
  int *v85; // [rsp+228h] [rbp+120h]
  __int64 v86; // [rsp+230h] [rbp+128h]
  int *v87; // [rsp+238h] [rbp+130h]
  __int64 v88; // [rsp+240h] [rbp+138h]
  _DWORD *v89; // [rsp+248h] [rbp+140h]
  __int64 v90; // [rsp+250h] [rbp+148h]

  if ( *((_DWORD *)a2 + 6) && !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
    return 0;
  v8 = 1;
  v22 = 0;
  v9 = 0;
  do
  {
    if ( v9 >= *((_DWORD *)a2 + 6) )
      break;
    v10 = *((_DWORD *)a1 + 102);
    v11 = *a2;
    if ( v10 >= *(_DWORD *)(*a2 + 12LL * v9) && v10 <= *(_DWORD *)(v11 + 12LL * v9 + 4) )
    {
      if ( (*(_BYTE *)(v11 + 12LL * v9 + 8) & 0x40) != 0 )
        *a3 = 0;
      if ( *(char *)(*a2 + 12LL * v9 + 8) < 0 )
        a3[1] = 0;
      v12 = *a2;
      v41[4] = 0;
      v41[3] = 0;
      v41[2] = 0;
      v41[1] = 0;
      v40 = 0;
      v39 = 0;
      v38[1] = 0;
      v38[0] = 0;
      v36 = 0;
      v35[1] = 0;
      v35[0] = 0;
      v34 = 0;
      v41[5] = 1065353216;
      v41[0] = 1065353216;
      v37 = 1065353216;
      v33 = 1065353216;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 1) != 0 && *((float *)a3 + 1) > 0.0 )
        v33 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 2) != 0 && *((float *)a3 + 1) < 0.0 )
        v33 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 4) != 0 && *((float *)a3 + 2) > 0.0 )
        v37 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 8) != 0 && *((float *)a3 + 2) < 0.0 )
        v37 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 0x10) != 0 && *((float *)a3 + 3) < 0.0 )
        v41[0] = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 0x20) != 0 && *((float *)a3 + 3) > 0.0 )
        v41[0] = 0;
      v13 = *((_DWORD *)a3 + 3);
      v28 = *(_QWORD *)(a3 + 4);
      LODWORD(v29) = v13;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v28, (const struct D2DVector3 *)&v28, (const struct D2DMatrix *)&v33);
      v14 = v29;
      *(_QWORD *)v15 = v28;
      *(_DWORD *)(v15 + 8) = v14;
      if ( !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
      {
        v8 = 0;
        *a4 = *((_DWORD *)a1 + 100);
      }
      if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
      {
        v30 = a1;
        v43 = &v30;
        v31 = *a1;
        v45 = &v31;
        v32 = a1[20];
        v47 = &v32;
        v23 = *((_DWORD *)a1 + 101);
        v49 = &v23;
        v24 = v8;
        v53 = &v24;
        v55 = &v22;
        v19 = *a2;
        v44 = 8LL;
        v46 = 8LL;
        v48 = 8LL;
        v20 = v19 + 4LL * (_QWORD)v17;
        v50 = 4LL;
        v51 = a1 + 51;
        v59 = v20 + 4;
        v52 = 4LL;
        v54 = 4LL;
        v56 = 4LL;
        v57 = v20;
        v58 = 4LL;
        v60 = 4LL;
        v25 = *(_DWORD *)(v20 + 8);
        v61 = &v25;
        v26 = *a3;
        v63 = &v26;
        v27 = a3[1];
        v65 = &v27;
        v69 = a3 + 8;
        v71 = a3 + 12;
        v73 = &v33;
        v75 = &v34;
        v77 = v35;
        v79 = &v36;
        v81 = &v37;
        v83 = v38;
        v85 = &v39;
        v62 = 4LL;
        v64 = 4LL;
        v66 = 4LL;
        v67 = v18;
        v68 = 4LL;
        v70 = 4LL;
        v72 = 4LL;
        v74 = 4LL;
        v76 = 4LL;
        v78 = 4LL;
        v80 = 4LL;
        v82 = 4LL;
        v84 = 4LL;
        v86 = 4LL;
        v87 = &v40;
        v89 = v41;
        v88 = 4LL;
        v90 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F8538, v16, v17, 0x1Au, &pData);
        v9 = v22;
      }
    }
    v22 = ++v9;
  }
  while ( v8 );
  return v8;
}
