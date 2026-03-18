/*
 * XREFs of ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x1801999DC
 * Callers:
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18019D298 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _anonymous_namespace_::AxisContainsInteraction @ 0x180199EE8 (_anonymous_namespace_--AxisContainsInteraction.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801CA300 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
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
  __int64 v33; // [rsp+78h] [rbp-90h] BYREF
  int v34; // [rsp+88h] [rbp-80h] BYREF
  int v35; // [rsp+8Ch] [rbp-7Ch] BYREF
  _DWORD v36[2]; // [rsp+90h] [rbp-78h] BYREF
  int v37; // [rsp+98h] [rbp-70h] BYREF
  int v38; // [rsp+9Ch] [rbp-6Ch] BYREF
  _DWORD v39[2]; // [rsp+A0h] [rbp-68h] BYREF
  int v40; // [rsp+A8h] [rbp-60h] BYREF
  int v41; // [rsp+ACh] [rbp-5Ch] BYREF
  _DWORD v42[6]; // [rsp+B0h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  __int64 **v44; // [rsp+E8h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-18h]
  __int64 *v46; // [rsp+F8h] [rbp-10h]
  __int64 v47; // [rsp+100h] [rbp-8h]
  __int64 *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]
  __int64 *v50; // [rsp+118h] [rbp+10h]
  __int64 v51; // [rsp+120h] [rbp+18h]
  int *v52; // [rsp+128h] [rbp+20h]
  __int64 v53; // [rsp+130h] [rbp+28h]
  __int64 *v54; // [rsp+138h] [rbp+30h]
  __int64 v55; // [rsp+140h] [rbp+38h]
  int *v56; // [rsp+148h] [rbp+40h]
  __int64 v57; // [rsp+150h] [rbp+48h]
  int *v58; // [rsp+158h] [rbp+50h]
  __int64 v59; // [rsp+160h] [rbp+58h]
  __int64 v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  __int64 v62; // [rsp+178h] [rbp+70h]
  __int64 v63; // [rsp+180h] [rbp+78h]
  int *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  int *v66; // [rsp+198h] [rbp+90h]
  __int64 v67; // [rsp+1A0h] [rbp+98h]
  int *v68; // [rsp+1A8h] [rbp+A0h]
  __int64 v69; // [rsp+1B0h] [rbp+A8h]
  __int64 v70; // [rsp+1B8h] [rbp+B0h]
  __int64 v71; // [rsp+1C0h] [rbp+B8h]
  unsigned __int8 *v72; // [rsp+1C8h] [rbp+C0h]
  __int64 v73; // [rsp+1D0h] [rbp+C8h]
  unsigned __int8 *v74; // [rsp+1D8h] [rbp+D0h]
  __int64 v75; // [rsp+1E0h] [rbp+D8h]
  int *v76; // [rsp+1E8h] [rbp+E0h]
  __int64 v77; // [rsp+1F0h] [rbp+E8h]
  int *v78; // [rsp+1F8h] [rbp+F0h]
  __int64 v79; // [rsp+200h] [rbp+F8h]
  _DWORD *v80; // [rsp+208h] [rbp+100h]
  __int64 v81; // [rsp+210h] [rbp+108h]
  int *v82; // [rsp+218h] [rbp+110h]
  __int64 v83; // [rsp+220h] [rbp+118h]
  int *v84; // [rsp+228h] [rbp+120h]
  __int64 v85; // [rsp+230h] [rbp+128h]
  _DWORD *v86; // [rsp+238h] [rbp+130h]
  __int64 v87; // [rsp+240h] [rbp+138h]
  int *v88; // [rsp+248h] [rbp+140h]
  __int64 v89; // [rsp+250h] [rbp+148h]
  int *v90; // [rsp+258h] [rbp+150h]
  __int64 v91; // [rsp+260h] [rbp+158h]
  _DWORD *v92; // [rsp+268h] [rbp+160h]
  __int64 v93; // [rsp+270h] [rbp+168h]

  if ( *((_DWORD *)a2 + 6) && !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
    return 0;
  v8 = 1;
  v22 = 0;
  v9 = 0;
  do
  {
    if ( v9 >= *((_DWORD *)a2 + 6) )
      break;
    v10 = *((_DWORD *)a1 + 150);
    v11 = *a2;
    if ( v10 >= *(_DWORD *)(*a2 + 12LL * v9) && v10 <= *(_DWORD *)(v11 + 12LL * v9 + 4) )
    {
      if ( (*(_BYTE *)(v11 + 12LL * v9 + 8) & 0x40) != 0 )
        *a3 = 0;
      if ( *(char *)(*a2 + 12LL * v9 + 8) < 0 )
        a3[1] = 0;
      v12 = *a2;
      v42[4] = 0;
      v42[3] = 0;
      v42[2] = 0;
      v42[1] = 0;
      v41 = 0;
      v40 = 0;
      v39[1] = 0;
      v39[0] = 0;
      v37 = 0;
      v36[1] = 0;
      v36[0] = 0;
      v35 = 0;
      v42[5] = 1065353216;
      v42[0] = 1065353216;
      v38 = 1065353216;
      v34 = 1065353216;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 1) != 0 && *((float *)a3 + 1) > 0.0 )
        v34 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 2) != 0 && *((float *)a3 + 1) < 0.0 )
        v34 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 4) != 0 && *((float *)a3 + 2) > 0.0 )
        v38 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 8) != 0 && *((float *)a3 + 2) < 0.0 )
        v38 = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 0x10) != 0 && *((float *)a3 + 3) < 0.0 )
        v42[0] = 0;
      if ( (*(_BYTE *)(v12 + 12LL * v9 + 8) & 0x20) != 0 && *((float *)a3 + 3) > 0.0 )
        v42[0] = 0;
      v13 = *((_DWORD *)a3 + 3);
      v28 = *(_QWORD *)(a3 + 4);
      LODWORD(v29) = v13;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v28, (const struct D2DVector3 *)&v28, (const struct D2DMatrix *)&v34);
      v14 = v29;
      *(_QWORD *)v15 = v28;
      *(_DWORD *)(v15 + 8) = v14;
      if ( !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
      {
        v8 = 0;
        *a4 = *((_DWORD *)a1 + 148);
      }
      if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
      {
        v30 = a1;
        v44 = &v30;
        v31 = *a1;
        v46 = &v31;
        v32 = a1[20];
        v48 = &v32;
        v33 = a1[40];
        v50 = &v33;
        v23 = *((_DWORD *)a1 + 149);
        v52 = &v23;
        v24 = v8;
        v56 = &v24;
        v58 = &v22;
        v19 = *a2;
        v45 = 8LL;
        v47 = 8LL;
        v49 = 8LL;
        v20 = v19 + 4LL * (_QWORD)v17;
        v51 = 8LL;
        v53 = 4LL;
        v62 = v20 + 4;
        v54 = a1 + 75;
        v55 = 4LL;
        v57 = 4LL;
        v59 = 4LL;
        v60 = v20;
        v61 = 4LL;
        v63 = 4LL;
        v25 = *(_DWORD *)(v20 + 8);
        v64 = &v25;
        v26 = *a3;
        v66 = &v26;
        v27 = a3[1];
        v68 = &v27;
        v72 = a3 + 8;
        v74 = a3 + 12;
        v76 = &v34;
        v78 = &v35;
        v80 = v36;
        v82 = &v37;
        v84 = &v38;
        v86 = v39;
        v65 = 4LL;
        v67 = 4LL;
        v69 = 4LL;
        v70 = v18;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 4LL;
        v77 = 4LL;
        v79 = 4LL;
        v81 = 4LL;
        v83 = 4LL;
        v85 = 4LL;
        v87 = 4LL;
        v88 = &v40;
        v90 = &v41;
        v92 = v42;
        v89 = 4LL;
        v91 = 4LL;
        v93 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180214E95, v16, v17, 0x1Bu, &pData);
        v9 = v22;
      }
    }
    v22 = ++v9;
  }
  while ( v8 );
  return v8;
}
