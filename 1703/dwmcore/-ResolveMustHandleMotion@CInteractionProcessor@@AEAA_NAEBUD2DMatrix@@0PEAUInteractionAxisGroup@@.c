/*
 * XREFs of ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18018F53C
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18018CE58 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x18018EC98 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18018FEF8 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1801AFA40 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
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
  __int64 v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-98h] BYREF
  int v31; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  CInteractionProcessor **v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  __int64 *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  __int64 *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  int *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  __int64 *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  struct D2DMatrix **v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  char *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  char *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  char *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  __int64 *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  char *v55; // [rsp+158h] [rbp+50h]
  __int64 v56; // [rsp+160h] [rbp+58h]
  int *v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]

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
    v30 = *(_QWORD *)((char *)a5 + 4);
    v31 = v13;
    D3DXVec3TransformCoord((struct D2DVector3 *)&v30, (const struct D2DVector3 *)&v30, a3);
    v15 = v14;
    if ( !v10 )
    {
LABEL_11:
      *(_DWORD *)a6 = *((_DWORD *)this + 100);
      *(_WORD *)a5 = 0;
      LODWORD(v29) = 0;
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
      v28 = v17;
      LODWORD(v29) = v16;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v28, (const struct D2DVector3 *)&v28, v25);
      ++v15;
      v10 = anonymous_namespace_::VectorInsideAngleThreshold(&v30, &v28);
    }
    while ( v10 );
  }
  if ( !v10 )
    goto LABEL_11;
LABEL_12:
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v26 = this;
    v33 = &v26;
    v27 = *(_QWORD *)this;
    v35 = &v27;
    v28 = *((_QWORD *)this + 20);
    v37 = &v28;
    v22 = *((_DWORD *)this + 101);
    v39 = &v22;
    v23 = v10;
    v41 = &v23;
    LODWORD(v24) = *(unsigned __int8 *)a5;
    v43 = &v24;
    LODWORD(v25) = *((unsigned __int8 *)a5 + 1);
    v45 = &v25;
    v47 = (char *)a5 + 4;
    v49 = (char *)a5 + 8;
    v51 = (char *)a5 + 12;
    v53 = &v30;
    v55 = (char *)&v30 + 4;
    v57 = &v31;
    v34 = 8LL;
    v36 = 8LL;
    v38 = 8LL;
    v40 = v20;
    v42 = v20;
    v44 = v20;
    v46 = v20;
    v48 = v20;
    v50 = v20;
    v52 = v20;
    v54 = v20;
    v56 = v20;
    v58 = v20;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F8A68, v18, v19, 0xFu, &pData);
  }
  return v10;
}
