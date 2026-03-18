/*
 * XREFs of ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x18019EB80
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800B7BB8 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180197760 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x18019E29C (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z @ 0x1801CDA50 (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z.c)
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x1801CE210 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 */

__int64 __fastcall CInteractionContextWrapper::ProcessInput(
        CInteractionContextWrapper *this,
        const struct tagPOINTER_INFO *a2,
        const struct CMILMatrix *a3,
        int a4)
{
  int v8; // eax
  __int64 v9; // rdx
  int updated; // r14d
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  bool *v13; // r8
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  int v17; // xmm0_4
  int v18; // xmm1_4
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int64 v22; // rcx
  const struct _TlgProvider_t *v23; // rcx
  const GUID *v24; // r8
  const GUID *v25; // r9
  int v26; // xmm0_4
  int v27; // xmm0_4
  int v28; // xmm0_4
  int v29; // xmm0_4
  int v30; // xmm0_4
  int v31; // xmm0_4
  int v32; // xmm0_4
  int v33; // xmm0_4
  int v34; // xmm0_4
  int v35; // xmm0_4
  int v36; // xmm0_4
  int v37; // xmm0_4
  int v38; // xmm0_4
  int v39; // xmm0_4
  int v40; // xmm0_4
  int v41; // xmm0_4
  int v43; // [rsp+30h] [rbp-D0h] BYREF
  int v44; // [rsp+34h] [rbp-CCh] BYREF
  int v45; // [rsp+38h] [rbp-C8h] BYREF
  int v46; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h] BYREF
  int v48; // [rsp+48h] [rbp-B8h] BYREF
  int v49; // [rsp+4Ch] [rbp-B4h] BYREF
  int v50; // [rsp+50h] [rbp-B0h] BYREF
  int v51; // [rsp+54h] [rbp-ACh] BYREF
  int v52; // [rsp+58h] [rbp-A8h] BYREF
  int v53; // [rsp+5Ch] [rbp-A4h] BYREF
  int v54; // [rsp+60h] [rbp-A0h] BYREF
  int v55; // [rsp+64h] [rbp-9Ch] BYREF
  int v56; // [rsp+68h] [rbp-98h] BYREF
  int v57; // [rsp+6Ch] [rbp-94h] BYREF
  int v58; // [rsp+70h] [rbp-90h] BYREF
  int v59; // [rsp+74h] [rbp-8Ch] BYREF
  int v60; // [rsp+78h] [rbp-88h] BYREF
  int v61; // [rsp+7Ch] [rbp-84h] BYREF
  int v62; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v63; // [rsp+88h] [rbp-78h] BYREF
  CInteractionContextWrapper *v64; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v65[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v66; // [rsp+D0h] [rbp-30h]
  __int128 v67; // [rsp+E0h] [rbp-20h]
  __int128 v68; // [rsp+F0h] [rbp-10h]
  _DWORD v69[8]; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  CInteractionContextWrapper **v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  char *v73; // [rsp+150h] [rbp+50h]
  const GUID *v74; // [rsp+158h] [rbp+58h]
  char *v75; // [rsp+160h] [rbp+60h]
  const GUID *v76; // [rsp+168h] [rbp+68h]
  int *v77; // [rsp+170h] [rbp+70h]
  const GUID *v78; // [rsp+178h] [rbp+78h]
  int *v79; // [rsp+180h] [rbp+80h]
  const GUID *v80; // [rsp+188h] [rbp+88h]
  int *v81; // [rsp+190h] [rbp+90h]
  const GUID *v82; // [rsp+198h] [rbp+98h]
  __int64 *v83; // [rsp+1A0h] [rbp+A0h]
  const GUID *v84; // [rsp+1A8h] [rbp+A8h]
  char *v85; // [rsp+1B0h] [rbp+B0h]
  const GUID *v86; // [rsp+1B8h] [rbp+B8h]
  int *v87; // [rsp+1C0h] [rbp+C0h]
  const GUID *v88; // [rsp+1C8h] [rbp+C8h]
  int *v89; // [rsp+1D0h] [rbp+D0h]
  const GUID *v90; // [rsp+1D8h] [rbp+D8h]
  int *v91; // [rsp+1E0h] [rbp+E0h]
  const GUID *v92; // [rsp+1E8h] [rbp+E8h]
  int *v93; // [rsp+1F0h] [rbp+F0h]
  const GUID *v94; // [rsp+1F8h] [rbp+F8h]
  int *v95; // [rsp+200h] [rbp+100h]
  const GUID *v96; // [rsp+208h] [rbp+108h]
  int *v97; // [rsp+210h] [rbp+110h]
  const GUID *v98; // [rsp+218h] [rbp+118h]
  int *v99; // [rsp+220h] [rbp+120h]
  const GUID *v100; // [rsp+228h] [rbp+128h]
  int *v101; // [rsp+230h] [rbp+130h]
  const GUID *v102; // [rsp+238h] [rbp+138h]
  int *v103; // [rsp+240h] [rbp+140h]
  const GUID *v104; // [rsp+248h] [rbp+148h]
  int *v105; // [rsp+250h] [rbp+150h]
  const GUID *v106; // [rsp+258h] [rbp+158h]
  int *v107; // [rsp+260h] [rbp+160h]
  const GUID *v108; // [rsp+268h] [rbp+168h]
  int *v109; // [rsp+270h] [rbp+170h]
  const GUID *v110; // [rsp+278h] [rbp+178h]
  int *v111; // [rsp+280h] [rbp+180h]
  const GUID *v112; // [rsp+288h] [rbp+188h]
  int *v113; // [rsp+290h] [rbp+190h]
  const GUID *v114; // [rsp+298h] [rbp+198h]
  int *v115; // [rsp+2A0h] [rbp+1A0h]
  const GUID *v116; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int64 *v117; // [rsp+2B0h] [rbp+1B0h]
  const GUID *v118; // [rsp+2B8h] [rbp+1B8h]
  int *v119; // [rsp+2C0h] [rbp+1C0h]
  const GUID *v120; // [rsp+2C8h] [rbp+1C8h]

  v8 = CInteractionContextWrapper::EnsureInteractionContext(this);
  v43 = v8;
  updated = v8;
  *((_DWORD *)this + 79) = a4;
  if ( v8 >= 0 )
  {
    *((_DWORD *)this + 55) = *((_DWORD *)a2 + 1);
    if ( *((_DWORD *)a2 + 2) != *((_DWORD *)this + 56) )
    {
      LOBYTE(v9) = 1;
      CInteractionContextWrapper::ResetCachedInteractionOutput(this, v9);
      *((_DWORD *)this + 56) = *((_DWORD *)a2 + 2);
      if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                           (CInteractionContextWrapper *)((char *)this + 616),
                           *((_QWORD *)a2 + 10),
                           &v63) )
        v11 = v63;
      else
        v11 = 1000LL * *((unsigned int *)a2 + 16);
      *((_QWORD *)this + 29) = v11;
    }
    if ( !CMILMatrix::IsEqualTo<0>((float *)this + 62, (float *)a3) )
    {
      *(_OWORD *)v12 = *(_OWORD *)a3;
      *(_OWORD *)(v12 + 16) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v12 + 32) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v12 + 48) = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v12 + 64) = *((_DWORD *)a3 + 16);
      v14 = *(_DWORD *)(v12 + 4);
      v69[0] = *(_DWORD *)v12;
      v15 = *(_DWORD *)(v12 + 16);
      v69[1] = v14;
      v16 = *(_DWORD *)(v12 + 20);
      v69[2] = v15;
      v17 = *(_DWORD *)(v12 + 48);
      v69[3] = v16;
      v18 = *(_DWORD *)(v12 + 52);
      v69[4] = v17;
      v69[5] = v18;
      updated = CInteractionContextTransformHelper::UpdateTransform(
                  (CInteractionContextWrapper *)((char *)this + 328),
                  (const struct D2D1::Matrix3x2F *)v69,
                  v13);
      v43 = updated;
    }
  }
  v19 = *((_OWORD *)a2 + 1);
  v65[0] = *(_OWORD *)a2;
  v65[1] = v19;
  v20 = *((_OWORD *)a2 + 3);
  v65[2] = *((_OWORD *)a2 + 2);
  v66 = v20;
  v21 = *((_OWORD *)a2 + 5);
  v67 = *((_OWORD *)a2 + 4);
  v68 = v21;
  if ( updated >= 0 )
  {
    v43 = CInteractionContextTransformHelper::TransformInput(
            (CInteractionContextWrapper *)((char *)this + 328),
            a2,
            *((_BYTE *)this + 320),
            (struct tagPOINTER_INFO *)v65);
    updated = v43;
    if ( v43 >= 0 )
    {
      v22 = *((_QWORD *)this + 3);
      *((_QWORD *)this + 30) = *((_QWORD *)a2 + 2);
      updated = ProcessPointerFramesInteractionContext(v22, 1LL, 1LL, v65);
      v43 = updated;
    }
  }
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
  {
    v26 = *(_DWORD *)a3;
    v71 = &v64;
    v73 = (char *)a2 + 4;
    v75 = (char *)a2 + 8;
    v44 = *((_DWORD *)a2 + 16);
    v77 = &v44;
    v45 = *((_DWORD *)a2 + 14);
    v79 = &v45;
    v46 = *((_DWORD *)a2 + 15);
    v81 = &v46;
    v47 = *((_QWORD *)&v66 + 1);
    v83 = &v47;
    v85 = (char *)&v47 + 4;
    v48 = v26;
    v27 = *((_DWORD *)a3 + 1);
    v87 = &v48;
    v49 = v27;
    v28 = *((_DWORD *)a3 + 2);
    v89 = &v49;
    v50 = v28;
    v29 = *((_DWORD *)a3 + 3);
    v91 = &v50;
    v51 = v29;
    v30 = *((_DWORD *)a3 + 4);
    v93 = &v51;
    v52 = v30;
    v31 = *((_DWORD *)a3 + 5);
    v95 = &v52;
    v53 = v31;
    v32 = *((_DWORD *)a3 + 6);
    v97 = &v53;
    v54 = v32;
    v33 = *((_DWORD *)a3 + 7);
    v99 = &v54;
    v55 = v33;
    v34 = *((_DWORD *)a3 + 8);
    v101 = &v55;
    v56 = v34;
    v35 = *((_DWORD *)a3 + 9);
    v103 = &v56;
    v64 = this;
    v72 = 8LL;
    v74 = v25;
    v76 = v25;
    v78 = v25;
    v80 = v25;
    v82 = v25;
    v84 = v25;
    v86 = v25;
    v88 = v25;
    v90 = v25;
    v92 = v25;
    v94 = v25;
    v96 = v25;
    v98 = v25;
    v100 = v25;
    v102 = v25;
    v104 = v25;
    v57 = v35;
    v36 = *((_DWORD *)a3 + 10);
    v105 = &v57;
    v107 = &v58;
    v109 = &v59;
    v58 = v36;
    v37 = *((_DWORD *)a3 + 11);
    v111 = &v60;
    v59 = v37;
    v38 = *((_DWORD *)a3 + 12);
    v113 = &v61;
    v60 = v38;
    v39 = *((_DWORD *)a3 + 13);
    v115 = &v62;
    v61 = v39;
    v40 = *((_DWORD *)a3 + 14);
    v117 = &v63;
    v62 = v40;
    v41 = *((_DWORD *)a3 + 15);
    v119 = &v43;
    LODWORD(v63) = v41;
    v106 = v25;
    v108 = v25;
    v110 = v25;
    v112 = v25;
    v114 = v25;
    v116 = v25;
    v118 = v25;
    v120 = v25;
    TlgWrite(v23, &unk_180215BD0, v24, v25, 0x1Bu, &pData);
    return (unsigned int)v43;
  }
  return (unsigned int)updated;
}
