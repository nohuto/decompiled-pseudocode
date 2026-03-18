/*
 * XREFs of ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x1801D79A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x180025288 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800A6200 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x1801CFE20 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1801D6FDC (-EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ.c)
 *     ?ProcessMouseWheelPointer@CInteractionContextWrapper@@AEAAJPEBUtagPOINTER_INFO@@@Z @ 0x1801D7EB8 (-ProcessMouseWheelPointer@CInteractionContextWrapper@@AEAAJPEBUtagPOINTER_INFO@@@Z.c)
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z @ 0x18020E3FC (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z.c)
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x18020EB44 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
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
  int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  bool *v14; // r8
  int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  bool v23; // zf
  int v24; // eax
  const struct _TlgProvider_t *v25; // rcx
  __int64 v26; // r9
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
  int v42; // xmm0_4
  int v44; // [rsp+30h] [rbp-D0h] BYREF
  int v45; // [rsp+34h] [rbp-CCh] BYREF
  int v46; // [rsp+38h] [rbp-C8h] BYREF
  int v47; // [rsp+3Ch] [rbp-C4h] BYREF
  int v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+44h] [rbp-BCh] BYREF
  int v50; // [rsp+4Ch] [rbp-B4h] BYREF
  int v51; // [rsp+50h] [rbp-B0h] BYREF
  int v52; // [rsp+54h] [rbp-ACh] BYREF
  int v53; // [rsp+58h] [rbp-A8h] BYREF
  int v54; // [rsp+5Ch] [rbp-A4h] BYREF
  int v55; // [rsp+60h] [rbp-A0h] BYREF
  int v56; // [rsp+64h] [rbp-9Ch] BYREF
  int v57; // [rsp+68h] [rbp-98h] BYREF
  int v58; // [rsp+6Ch] [rbp-94h] BYREF
  int v59; // [rsp+70h] [rbp-90h] BYREF
  int v60; // [rsp+74h] [rbp-8Ch] BYREF
  int v61; // [rsp+78h] [rbp-88h] BYREF
  int v62; // [rsp+7Ch] [rbp-84h] BYREF
  int v63; // [rsp+80h] [rbp-80h] BYREF
  int v64; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned __int64 v65; // [rsp+88h] [rbp-78h] BYREF
  CInteractionContextWrapper *v66; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v67[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v68; // [rsp+D0h] [rbp-30h]
  __int128 v69; // [rsp+E0h] [rbp-20h]
  __int128 v70; // [rsp+F0h] [rbp-10h]
  _DWORD v71[8]; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  CInteractionContextWrapper **v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  char *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  int *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  char *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]
  int *v81; // [rsp+180h] [rbp+80h]
  __int64 v82; // [rsp+188h] [rbp+88h]
  int *v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]
  int *v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  __int64 *v87; // [rsp+1B0h] [rbp+B0h]
  __int64 v88; // [rsp+1B8h] [rbp+B8h]
  char *v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  int *v91; // [rsp+1D0h] [rbp+D0h]
  __int64 v92; // [rsp+1D8h] [rbp+D8h]
  int *v93; // [rsp+1E0h] [rbp+E0h]
  __int64 v94; // [rsp+1E8h] [rbp+E8h]
  int *v95; // [rsp+1F0h] [rbp+F0h]
  __int64 v96; // [rsp+1F8h] [rbp+F8h]
  int *v97; // [rsp+200h] [rbp+100h]
  __int64 v98; // [rsp+208h] [rbp+108h]
  int *v99; // [rsp+210h] [rbp+110h]
  __int64 v100; // [rsp+218h] [rbp+118h]
  int *v101; // [rsp+220h] [rbp+120h]
  __int64 v102; // [rsp+228h] [rbp+128h]
  int *v103; // [rsp+230h] [rbp+130h]
  __int64 v104; // [rsp+238h] [rbp+138h]
  int *v105; // [rsp+240h] [rbp+140h]
  __int64 v106; // [rsp+248h] [rbp+148h]
  int *v107; // [rsp+250h] [rbp+150h]
  __int64 v108; // [rsp+258h] [rbp+158h]
  int *v109; // [rsp+260h] [rbp+160h]
  __int64 v110; // [rsp+268h] [rbp+168h]
  int *v111; // [rsp+270h] [rbp+170h]
  __int64 v112; // [rsp+278h] [rbp+178h]
  int *v113; // [rsp+280h] [rbp+180h]
  __int64 v114; // [rsp+288h] [rbp+188h]
  int *v115; // [rsp+290h] [rbp+190h]
  __int64 v116; // [rsp+298h] [rbp+198h]
  int *v117; // [rsp+2A0h] [rbp+1A0h]
  __int64 v118; // [rsp+2A8h] [rbp+1A8h]
  int *v119; // [rsp+2B0h] [rbp+1B0h]
  __int64 v120; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int64 *v121; // [rsp+2C0h] [rbp+1C0h]
  __int64 v122; // [rsp+2C8h] [rbp+1C8h]
  int *v123; // [rsp+2D0h] [rbp+1D0h]
  __int64 v124; // [rsp+2D8h] [rbp+1D8h]

  v8 = CInteractionContextWrapper::EnsureInteractionContext(this);
  v44 = v8;
  updated = v8;
  *((_DWORD *)this + 81) = a4;
  if ( v8 >= 0 )
  {
    v11 = *((_DWORD *)this + 57);
    *((_DWORD *)this + 55) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 60) = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 56) = *(_DWORD *)a2;
    if ( *((_DWORD *)a2 + 2) != v11 )
    {
      LOBYTE(v9) = 1;
      CInteractionContextWrapper::ResetCachedInteractionOutput(this, v9);
      *((_DWORD *)this + 57) = *((_DWORD *)a2 + 2);
      if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                           (CInteractionContextWrapper *)((char *)this + 624),
                           *((_QWORD *)a2 + 10),
                           &v65) )
        v12 = v65;
      else
        v12 = 1000LL * *((unsigned int *)a2 + 16);
      *((_QWORD *)this + 29) = v12;
    }
    if ( !CMILMatrix::IsEqualTo<0>((float *)this + 64, (float *)a3) )
    {
      *(_OWORD *)v13 = *(_OWORD *)a3;
      *(_OWORD *)(v13 + 16) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v13 + 32) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v13 + 48) = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v13 + 64) = *((_DWORD *)a3 + 16);
      v15 = *(_DWORD *)(v13 + 4);
      v71[0] = *(_DWORD *)v13;
      v16 = *(_DWORD *)(v13 + 16);
      v71[1] = v15;
      v17 = *(_DWORD *)(v13 + 20);
      v71[2] = v16;
      v18 = *(_DWORD *)(v13 + 48);
      v71[3] = v17;
      v19 = *(_DWORD *)(v13 + 52);
      v71[4] = v18;
      v71[5] = v19;
      updated = CInteractionContextTransformHelper::UpdateTransform(
                  (CInteractionContextWrapper *)((char *)this + 336),
                  (const struct D2D1::Matrix3x2F *)v71,
                  v14);
      v44 = updated;
    }
  }
  v20 = *((_OWORD *)a2 + 1);
  v67[0] = *(_OWORD *)a2;
  v67[1] = v20;
  v21 = *((_OWORD *)a2 + 3);
  v67[2] = *((_OWORD *)a2 + 2);
  v68 = v21;
  v22 = *((_OWORD *)a2 + 5);
  v69 = *((_OWORD *)a2 + 4);
  v70 = v22;
  if ( updated >= 0 )
  {
    v44 = CInteractionContextTransformHelper::TransformInput(
            (CInteractionContextWrapper *)((char *)this + 336),
            a2,
            *((_BYTE *)this + 328),
            (struct tagPOINTER_INFO *)v67);
    updated = v44;
    if ( v44 >= 0 )
    {
      v23 = (HIDWORD(v67[0]) & 0x180000) == 0;
      *((_QWORD *)this + 31) = *((_QWORD *)a2 + 2);
      if ( v23 )
        v24 = ProcessPointerFramesInteractionContext(*((_QWORD *)this + 3), 1LL, 1LL, v67);
      else
        v24 = CInteractionContextWrapper::ProcessMouseWheelPointer(this, (const struct tagPOINTER_INFO *)v67);
      v44 = v24;
      updated = v24;
    }
  }
  if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
  {
    v27 = *(_DWORD *)a3;
    v73 = &v66;
    v75 = (char *)a2 + 4;
    v45 = *(_DWORD *)a2;
    v77 = &v45;
    v79 = (char *)a2 + 8;
    v46 = *((_DWORD *)a2 + 16);
    v81 = &v46;
    v47 = *((_DWORD *)a2 + 14);
    v83 = &v47;
    v48 = *((_DWORD *)a2 + 15);
    v85 = &v48;
    v49 = *((_QWORD *)&v68 + 1);
    v87 = &v49;
    v89 = (char *)&v49 + 4;
    v50 = v27;
    v28 = *((_DWORD *)a3 + 1);
    v91 = &v50;
    v51 = v28;
    v29 = *((_DWORD *)a3 + 2);
    v93 = &v51;
    v52 = v29;
    v30 = *((_DWORD *)a3 + 3);
    v95 = &v52;
    v53 = v30;
    v31 = *((_DWORD *)a3 + 4);
    v97 = &v53;
    v54 = v31;
    v32 = *((_DWORD *)a3 + 5);
    v99 = &v54;
    v55 = v32;
    v33 = *((_DWORD *)a3 + 6);
    v101 = &v55;
    v56 = v33;
    v34 = *((_DWORD *)a3 + 7);
    v103 = &v56;
    v57 = v34;
    v35 = *((_DWORD *)a3 + 8);
    v105 = &v57;
    v66 = this;
    v74 = 8LL;
    v76 = v26;
    v78 = v26;
    v80 = v26;
    v82 = v26;
    v84 = v26;
    v86 = v26;
    v88 = v26;
    v90 = v26;
    v92 = v26;
    v94 = v26;
    v96 = v26;
    v98 = v26;
    v100 = v26;
    v102 = v26;
    v104 = v26;
    v106 = v26;
    v58 = v35;
    v36 = *((_DWORD *)a3 + 9);
    v107 = &v58;
    v109 = &v59;
    v111 = &v60;
    v59 = v36;
    v37 = *((_DWORD *)a3 + 10);
    v113 = &v61;
    v60 = v37;
    v38 = *((_DWORD *)a3 + 11);
    v115 = &v62;
    v61 = v38;
    v39 = *((_DWORD *)a3 + 12);
    v117 = &v63;
    v62 = v39;
    v40 = *((_DWORD *)a3 + 13);
    v119 = &v64;
    v63 = v40;
    v41 = *((_DWORD *)a3 + 14);
    v121 = &v65;
    v64 = v41;
    v42 = *((_DWORD *)a3 + 15);
    v123 = &v44;
    LODWORD(v65) = v42;
    v108 = v26;
    v110 = v26;
    v112 = v26;
    v114 = v26;
    v116 = v26;
    v118 = v26;
    v120 = v26;
    v122 = v26;
    v124 = v26;
    TlgWrite(v25, &unk_1802AAC08, 0LL, 0LL, 0x1Cu, &pData);
    return (unsigned int)v44;
  }
  return (unsigned int)updated;
}
