/*
 * XREFs of ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18019CFC4
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18019A2FC (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x18019C470 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18019DB20 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801CA300 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveMustHandleMotion(
        CInteractionProcessor *this,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3,
        struct InteractionAxisGroup *a4,
        struct InteractionAxis *a5,
        enum InteractionState *a6)
{
  bool v6; // zf
  unsigned __int8 v10; // di
  char RailsEnabled; // bl
  char v12; // al
  int v13; // eax
  unsigned int v14; // r9d
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // r10
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v24; // [rsp+40h] [rbp-C8h] BYREF
  struct D2DMatrix *v25; // [rsp+48h] [rbp-C0h] BYREF
  CInteractionProcessor *v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  int v32; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  CInteractionProcessor **v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  __int64 *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  __int64 *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  __int64 *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  int *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  int *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  __int64 *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  struct D2DMatrix **v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  char *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  char *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  char *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  __int64 *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  char *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  int *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]

  v6 = *((_BYTE *)a4 + 1) == 0;
  v25 = a2;
  v10 = 1;
  if ( !v6 )
    v10 = *((_BYTE *)a5 + 1) != 0;
  if ( *(_BYTE *)a4 )
    v10 &= -(*(_BYTE *)a5 != 0);
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((__int64)this, 0);
  v12 = CInteractionProcessor::GetRailsEnabled((__int64)this, 1);
  if ( RailsEnabled || v12 )
  {
    v13 = *((_DWORD *)a5 + 3);
    v31 = *(_QWORD *)((char *)a5 + 4);
    v32 = v13;
    D3DXVec3TransformCoord((struct D2DVector3 *)&v31, (const struct D2DVector3 *)&v31, a3);
    v15 = v14;
    if ( !v10 )
    {
LABEL_11:
      *(_DWORD *)a6 = *((_DWORD *)this + 148);
      *(_WORD *)a5 = 0;
      LODWORD(v30) = 0;
      *(_QWORD *)((char *)a5 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)a5 + 3) = 0;
      goto LABEL_12;
    }
    do
    {
      if ( v15 >= *((_DWORD *)a4 + 8) )
        break;
      v16 = *((_QWORD *)a4 + 1);
      v17 = *(_QWORD *)(v16 + 12LL * v15);
      LODWORD(v16) = *(_DWORD *)(v16 + 12LL * v15 + 8);
      v29 = v17;
      LODWORD(v30) = v16;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v29, (const struct D2DVector3 *)&v29, v25);
      ++v15;
      v10 = anonymous_namespace_::VectorInsideAngleThreshold(&v31, &v29);
    }
    while ( v10 );
  }
  if ( !v10 )
    goto LABEL_11;
LABEL_12:
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
  {
    v26 = this;
    v34 = &v26;
    v27 = *(_QWORD *)this;
    v36 = &v27;
    v28 = *((_QWORD *)this + 20);
    v38 = &v28;
    v29 = *((_QWORD *)this + 40);
    v40 = &v29;
    v22 = *((_DWORD *)this + 149);
    v42 = &v22;
    v23 = v10;
    v44 = &v23;
    LODWORD(v24) = *(unsigned __int8 *)a5;
    v46 = &v24;
    LODWORD(v25) = *((unsigned __int8 *)a5 + 1);
    v48 = &v25;
    v50 = (char *)a5 + 4;
    v52 = (char *)a5 + 8;
    v54 = (char *)a5 + 12;
    v56 = &v31;
    v58 = (char *)&v31 + 4;
    v60 = &v32;
    v35 = 8LL;
    v37 = 8LL;
    v39 = 8LL;
    v41 = 8LL;
    v43 = v20;
    v45 = v20;
    v47 = v20;
    v49 = v20;
    v51 = v20;
    v53 = v20;
    v55 = v20;
    v57 = v20;
    v59 = v20;
    v61 = v20;
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180215514, v18, v19, 0x10u, &pData);
  }
  return v10;
}
