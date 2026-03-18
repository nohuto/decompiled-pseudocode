/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x1801D14D0
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801D274C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x1801D66F8 (_anonymous_namespace_--TransformAndNormalize.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x1801D680C (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        _DWORD *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  int v7; // ebx
  _DWORD *v8; // r13
  char *v10; // r14
  __int64 v13; // rcx
  int v14; // ecx
  char v15; // si
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  int v24; // eax
  int v25; // eax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // edx
  int v29; // eax
  int v30; // eax
  bool v31; // dl
  __int64 v32; // r8
  __int64 v33; // rcx
  unsigned int v34; // r9d
  bool v35; // bl
  __int64 v36; // r13
  __int64 v37; // r15
  __int64 v38; // rsi
  __int64 v39; // r14
  int v40; // eax
  __int64 v41; // r14
  __int64 v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // edx
  int v47; // eax
  const struct _TlgProvider_t *v48; // rcx
  __int64 v49; // r9
  bool v51; // [rsp+30h] [rbp-D0h]
  bool v52; // [rsp+31h] [rbp-CFh]
  char v53; // [rsp+32h] [rbp-CEh]
  int v54; // [rsp+34h] [rbp-CCh]
  unsigned int v55; // [rsp+40h] [rbp-C0h]
  unsigned int v56; // [rsp+44h] [rbp-BCh] BYREF
  int v57; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B0h] BYREF
  int v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h] BYREF
  char *v63; // [rsp+78h] [rbp-88h] BYREF
  __int128 v64; // [rsp+80h] [rbp-80h] BYREF
  __int128 v65; // [rsp+90h] [rbp-70h] BYREF
  int v66; // [rsp+A0h] [rbp-60h] BYREF
  char v67; // [rsp+A4h] [rbp-5Ch]
  _BYTE v68[20]; // [rsp+E0h] [rbp-20h] BYREF
  int v69; // [rsp+F4h] [rbp-Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  char **v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  __int64 *v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  int *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  unsigned int *v79; // [rsp+180h] [rbp+80h]
  __int64 v80; // [rsp+188h] [rbp+88h]
  _DWORD *v81; // [rsp+190h] [rbp+90h]
  __int64 v82; // [rsp+198h] [rbp+98h]
  __int64 v83; // [rsp+1A0h] [rbp+A0h]
  __int64 v84; // [rsp+1A8h] [rbp+A8h]

  v7 = 0;
  v8 = a5;
  v62 = a6;
  v10 = a2;
  *a5 = 0;
  v63 = a2;
  *a7 = 0;
  v13 = *(_QWORD *)a2;
  v60 = a3;
  v58 = (__int64)a5;
  v54 = 0;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 40LL))(v13, v68);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v66);
  v14 = a1[196];
  v61 = 3LL;
  if ( (unsigned int)(v14 - 2) <= 2 || (v68[4] & 1) != 0 || (v67 & 1) != 0 )
  {
    a1[196] = 3;
    v14 = 3;
  }
  if ( ((unsigned int)(v14 - 2) > 2 || v66 == 2) && (v10[16] & 0x40) != 0 )
  {
    *(_BYTE *)a4 = 1;
    v14 = a1[196];
  }
  if ( ((unsigned int)(v14 - 2) > 2 || v66 == 4) && v10[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v15 = 0;
  v51 = 0;
  v52 = 0;
  v16 = *((_DWORD *)v10 + 4);
  v53 = 0;
  if ( (v16 & 3) != 0 )
  {
    DWORD2(v64) = 0;
    *(_QWORD *)&v64 = 1065353216LL;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v65);
    v17 = (_QWORD *)(a4 + 8);
    HIDWORD(v65) = a1[336];
    v18 = *(unsigned int *)(a4 + 32);
    v19 = v18 + 1;
    v7 = (int)v18 + 1 < (unsigned int)v18 ? 0x80070216 : 0;
    v54 = v7;
    if ( (int)v18 + 1 < (unsigned int)v18 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
      v54 = v7;
    }
    else if ( v19 > *(_DWORD *)(a4 + 28) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v17, 0x10u, 1, &v65);
      v54 = v20;
      v7 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*v17 + 16 * v18) = v65;
      *(_DWORD *)(a4 + 32) = v19;
    }
    if ( v7 < 0 )
      goto LABEL_87;
    ++*a5;
    v16 = *((_DWORD *)v10 + 4);
    v51 = 1;
  }
  if ( (v16 & 4) != 0 || (v16 & 8) != 0 )
  {
    LODWORD(v64) = 0;
    *(_QWORD *)((char *)&v64 + 4) = 1065353216LL;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v65);
    v21 = (_QWORD *)(a4 + 8);
    HIDWORD(v65) = a1[336];
    v22 = *(unsigned int *)(a4 + 32);
    v23 = v22 + 1;
    v7 = (int)v22 + 1 < (unsigned int)v22 ? 0x80070216 : 0;
    v54 = v7;
    if ( (int)v22 + 1 < (unsigned int)v22 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
      v54 = v7;
    }
    else if ( v23 > *(_DWORD *)(a4 + 28) )
    {
      v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v21, 0x10u, 1, &v65);
      v54 = v24;
      v7 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*v21 + 16 * v22) = v65;
      *(_DWORD *)(a4 + 32) = v23;
    }
    if ( v7 < 0 )
      goto LABEL_87;
    ++*a5;
    v15 = 1;
    v16 = *((_DWORD *)v10 + 4);
    v53 = 1;
  }
  if ( (v16 & 0x10) == 0 && (v16 & 0x20) == 0 )
    goto LABEL_42;
  v25 = a1[336];
  v26 = (_QWORD *)(a4 + 8);
  *(_QWORD *)&v64 = 0LL;
  HIDWORD(v64) = v25;
  v27 = *(unsigned int *)(a4 + 32);
  DWORD2(v64) = 1065353216;
  v28 = v27 + 1;
  v7 = (int)v27 + 1 < (unsigned int)v27 ? 0x80070216 : 0;
  v54 = v7;
  if ( (int)v27 + 1 < (unsigned int)v27 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
    v54 = v7;
  }
  else if ( v28 > *(_DWORD *)(a4 + 28) )
  {
    v29 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v26, 0x10u, 1, &v64);
    v54 = v29;
    v7 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC0u);
  }
  else
  {
    *(_OWORD *)(*v26 + 16 * v27) = v64;
    *(_DWORD *)(a4 + 32) = v28;
  }
  if ( v7 < 0 )
  {
LABEL_87:
    v43 = v60;
    goto LABEL_88;
  }
  ++*a5;
  v52 = 1;
LABEL_42:
  if ( (int)*a5 > 0 )
  {
    v30 = *(_DWORD *)(a4 + 32) - *a5;
    v31 = v51;
    v32 = v30;
    v57 = v30;
    v33 = (unsigned int)(v30 + 1);
    *(_QWORD *)&v64 = v30;
    if ( !v51 )
      v33 = (unsigned int)v30;
    v56 = v33;
    v34 = v33 + 1;
    if ( !v15 )
      v34 = v33;
    a1[203] = 0;
    a1[204] = 0;
    a1[205] = 0;
    v55 = v34;
    if ( v30 > 3LL )
    {
      v35 = v53;
      v36 = 3LL;
      v37 = 48LL;
      while ( v31 )
      {
        v39 = *(_QWORD *)(a4 + 8);
        v38 = (unsigned int)v61;
        if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                v39 + 16LL * (unsigned int)v30,
                                v39 + 16LL * (unsigned int)v61) )
          a1[203] |= *(_DWORD *)(v39 + v37 + 12);
        v40 = a1[203];
        v51 = v40 != 7;
        if ( v35 )
        {
          v33 = v56;
          v51 = v40 != 7;
LABEL_58:
          v41 = *(_QWORD *)(a4 + 8);
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(v41 + 16 * v33, v41 + 16 * v38) )
            a1[204] |= *(_DWORD *)(v41 + v37 + 12);
          v32 = v64;
          v34 = v55;
          v35 = a1[204] != 7;
          goto LABEL_62;
        }
        v32 = v64;
        v34 = v55;
LABEL_62:
        if ( v52 )
        {
          v42 = *(_QWORD *)(a4 + 8);
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(v42 + 16LL * v34, v42 + 16 * v38) )
            a1[205] |= *(_DWORD *)(v42 + v37 + 12);
          v32 = v64;
          v52 = a1[205] != 7;
        }
        LODWORD(v61) = v61 + 1;
        ++v36;
        v30 = v57;
        v37 += 16LL;
        v33 = v56;
        v31 = v51;
        v34 = v55;
        if ( v36 >= v32 )
        {
LABEL_67:
          v7 = v54;
          v10 = v63;
          v8 = (_DWORD *)v58;
          goto LABEL_68;
        }
      }
      if ( !v35 )
      {
        if ( !v52 )
          goto LABEL_67;
        v38 = (unsigned int)v61;
        goto LABEL_62;
      }
      v38 = (unsigned int)v61;
      goto LABEL_58;
    }
  }
LABEL_68:
  v43 = v60;
  if ( !*(_BYTE *)a4 && !*(_BYTE *)(a4 + 1) && v60 != *(_QWORD *)v10 )
  {
    if ( v69 == 1 )
    {
      if ( (v10[16] & 1) == 0 && (v10[16] & 2) == 0 )
        goto LABEL_88;
      v58 = 1065353216LL;
    }
    else
    {
      if ( v69 != 2 || (v10[16] & 4) == 0 && (v10[16] & 8) == 0 )
        goto LABEL_88;
      v58 = 0x3F80000000000000LL;
    }
    v59 = 0;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v65);
    v44 = v62 + 8;
    HIDWORD(v65) = a1[336];
    v45 = *(unsigned int *)(v62 + 32);
    v46 = v45 + 1;
    v7 = (int)v45 + 1 < (unsigned int)v45 ? 0x80070216 : 0;
    if ( (int)v45 + 1 < (unsigned int)v45 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
    }
    else if ( v46 > *(_DWORD *)(v62 + 28) )
    {
      v47 = DynArrayImpl<0>::AddMultipleAndSet(v44, 0x10u, 1, &v65);
      v7 = v47;
      if ( v47 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v44 + 16 * v45) = v65;
      *(_DWORD *)(v44 + 24) = v46;
    }
    if ( v7 >= 0 )
      ++*a7;
  }
LABEL_88:
  if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
  {
    v58 = (__int64)a1;
    v71 = &v58;
    v63 = *(char **)v10;
    v73 = &v63;
    v75 = &v62;
    v57 = a1[197];
    v77 = &v57;
    v56 = a1[196];
    v79 = &v56;
    v72 = 8LL;
    v74 = 8LL;
    v62 = v43;
    v76 = 8LL;
    v78 = 4LL;
    v80 = 4LL;
    v81 = v8;
    v82 = 4LL;
    v83 = v49;
    v84 = 4LL;
    TlgWrite(v48, &unk_1802AA0D2, 0LL, 0LL, 9u, &pData);
  }
  return (unsigned int)v7;
}
