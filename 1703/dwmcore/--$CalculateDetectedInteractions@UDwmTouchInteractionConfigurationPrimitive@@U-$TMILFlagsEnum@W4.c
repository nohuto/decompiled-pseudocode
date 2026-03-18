/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18018BAB4
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18018CB48 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z @ 0x18018CA2C (-AddMultipleAndSet@-$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18018FDE4 (_anonymous_namespace_--TransformAndNormalize.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18018FEF8 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  int v7; // edi
  _DWORD *v8; // r15
  char *v10; // rsi
  __int64 v13; // rcx
  unsigned int v14; // r13d
  char v15; // r12
  char v16; // dl
  int v17; // r8d
  int v18; // ecx
  int v19; // r9d
  char v20; // cl
  bool v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rsi
  char v24; // al
  char v25; // al
  unsigned __int8 v26; // r12
  bool v27; // zf
  char v28; // al
  __int64 v29; // r14
  int v30; // edx
  const GUID *v31; // r8
  const GUID *v32; // r9
  char v34; // [rsp+30h] [rbp-D0h]
  char v35; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v36; // [rsp+31h] [rbp-CFh]
  int v37; // [rsp+40h] [rbp-C0h]
  unsigned int v38; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v39; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  char *v42; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v43; // [rsp+70h] [rbp-90h] BYREF
  int v44; // [rsp+78h] [rbp-88h]
  int v45; // [rsp+7Ch] [rbp-84h]
  int v46; // [rsp+80h] [rbp-80h]
  _BYTE v47[16]; // [rsp+88h] [rbp-78h] BYREF
  int v48; // [rsp+98h] [rbp-68h] BYREF
  char v49; // [rsp+9Ch] [rbp-64h]
  _BYTE v50[20]; // [rsp+D8h] [rbp-28h] BYREF
  int v51; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  _DWORD **v53; // [rsp+140h] [rbp+40h]
  int v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+14Ch] [rbp+4Ch]
  char **v56; // [rsp+150h] [rbp+50h]
  int v57; // [rsp+158h] [rbp+58h]
  int v58; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v59; // [rsp+160h] [rbp+60h]
  int v60; // [rsp+168h] [rbp+68h]
  int v61; // [rsp+16Ch] [rbp+6Ch]
  unsigned int *v62; // [rsp+170h] [rbp+70h]
  int v63; // [rsp+178h] [rbp+78h]
  int v64; // [rsp+17Ch] [rbp+7Ch]
  unsigned int *v65; // [rsp+180h] [rbp+80h]
  int v66; // [rsp+188h] [rbp+88h]
  int v67; // [rsp+18Ch] [rbp+8Ch]
  _DWORD *v68; // [rsp+190h] [rbp+90h]
  int v69; // [rsp+198h] [rbp+98h]
  int v70; // [rsp+19Ch] [rbp+9Ch]
  const GUID *v71; // [rsp+1A0h] [rbp+A0h]
  int v72; // [rsp+1A8h] [rbp+A8h]
  int v73; // [rsp+1ACh] [rbp+ACh]

  v7 = 0;
  v8 = a5;
  v41 = a6;
  v10 = a2;
  *a5 = 0;
  v42 = a2;
  *a7 = 0;
  v13 = *(_QWORD *)a2;
  v40 = a3;
  v43 = a5;
  v37 = 0;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 40LL))(v13, v50);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v48);
  v14 = 3;
  if ( (unsigned int)(*(_DWORD *)(a1 + 400) - 2) <= 2 || (v50[4] & 1) != 0 || (v49 & 1) != 0 )
    *(_DWORD *)(a1 + 400) = 3;
  if ( ((unsigned int)(*(_DWORD *)(a1 + 400) - 2) > 2 || v48 == 2) && (v10[16] & 0x40) != 0 )
    *(_BYTE *)a4 = 1;
  if ( ((unsigned int)(*(_DWORD *)(a1 + 400) - 2) > 2 || v48 == 4) && v10[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v15 = 0;
  v35 = 0;
  v34 = 0;
  if ( (v10[16] & 3) != 0 )
  {
    v45 = 0;
    v46 = 0;
    v44 = 1065353216;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)v47);
    v37 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet(a4 + 8);
    v7 = v37;
    if ( v37 < 0 )
      goto LABEL_57;
    ++*a5;
    v35 = 1;
  }
  if ( (v10[16] & 4) != 0 || (v10[16] & 8) != 0 )
  {
    v44 = 0;
    v46 = 0;
    v45 = 1065353216;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)v47);
    v37 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet(a4 + 8);
    v7 = v37;
    if ( v37 < 0 )
      goto LABEL_57;
    ++*a5;
    v15 = 1;
  }
  if ( (v10[16] & 0x10) != 0 || (v10[16] & 0x20) != 0 )
  {
    v44 = 0;
    v45 = 0;
    v46 = 1065353216;
    v37 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet(a4 + 8);
    v7 = v37;
    if ( v37 >= 0 )
    {
      ++*a5;
      v16 = 1;
      v34 = 1;
      goto LABEL_25;
    }
LABEL_57:
    v29 = v40;
    goto LABEL_58;
  }
  v16 = 0;
LABEL_25:
  if ( (int)*a5 > 0 )
  {
    v17 = *(_DWORD *)(a4 + 32) - *a5;
    v18 = v17 + 1;
    if ( !v35 )
      v18 = *(_DWORD *)(a4 + 32) - *a5;
    v38 = v18;
    v19 = v18 + 1;
    if ( !v15 )
      v19 = v18;
    *(_BYTE *)(a1 + 424) &= 0x3Fu;
    *(_BYTE *)(a1 + 425) &= ~1u;
    *(_BYTE *)(a1 + 425) |= v16;
    v20 = (v15 << 7) | (*(_BYTE *)(a1 + 424) | (v35 << 6)) & 0x7F;
    v39 = v19;
    *(_BYTE *)(a1 + 424) = v20;
    if ( v17 > 3 )
    {
      v21 = v35;
      v22 = v38;
      v23 = (unsigned int)v17;
      do
      {
        v36 = *(_BYTE *)(a1 + 424);
        if ( (v36 & 0x40) == 0 && v36 < 0x80u && (*(_BYTE *)(a1 + 425) & 1) == 0 )
          break;
        if ( v21 && (v36 & 0x40) != 0 )
        {
          v24 = anonymous_namespace_::VectorInsideAngleThreshold(
                  *(_QWORD *)(a4 + 8) + 12 * v23,
                  *(_QWORD *)(a4 + 8) + 12LL * v14);
          v16 = v34;
          *(_BYTE *)(a1 + 424) = v36 & 0xBF | (v24 != 0 ? 0 : 0x40);
          v21 = (v24 != 0 ? 0 : 0x40) != 0;
        }
        if ( v15 )
        {
          v25 = anonymous_namespace_::VectorInsideAngleThreshold(
                  *(_QWORD *)(a4 + 8) + 12 * v22,
                  *(_QWORD *)(a4 + 8) + 12LL * v14);
          v16 = v34;
          v26 = *(_BYTE *)(a1 + 424) & 0x7F | (v25 != 0 ? 0 : 0x80);
          *(_BYTE *)(a1 + 424) = v26;
          v15 = v26 >> 7;
        }
        if ( v16 )
        {
          v27 = (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                   *(_QWORD *)(a4 + 8) + 12LL * v39,
                                   *(_QWORD *)(a4 + 8) + 12LL * v14) == 0;
          v28 = *(_BYTE *)(a1 + 425) & 0xFE;
          *(_BYTE *)(a1 + 425) = v28 | v27;
          v16 = v28 & 1 | v27;
          v34 = v16;
        }
        ++v14;
      }
      while ( (int)v14 < (int)v23 );
      v7 = v37;
      v10 = v42;
      v8 = v43;
    }
  }
  if ( *(_BYTE *)a4 )
    goto LABEL_57;
  v27 = *(_BYTE *)(a4 + 1) == 0;
  v29 = v40;
  if ( v27 && v40 != *(_QWORD *)v10 )
  {
    if ( v51 == 1 )
    {
      if ( (v10[16] & 1) == 0 && (v10[16] & 2) == 0 )
        goto LABEL_58;
      v45 = 0;
      v44 = 1065353216;
    }
    else
    {
      if ( v51 != 2 || (v10[16] & 4) == 0 && (v10[16] & 8) == 0 )
        goto LABEL_58;
      v44 = 0;
      v45 = 1065353216;
    }
    v46 = 0;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)v47);
    v7 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet(v41 + 8);
    if ( v7 >= 0 )
      ++*a7;
  }
LABEL_58:
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v55 = 0;
    v58 = 0;
    v61 = 0;
    v64 = 0;
    v67 = 0;
    v70 = 0;
    v73 = 0;
    v53 = &v43;
    v42 = *(char **)v10;
    v56 = &v42;
    v59 = &v41;
    v39 = *(_DWORD *)(a1 + 404);
    v62 = &v39;
    v38 = *(_DWORD *)(a1 + 400);
    v65 = &v38;
    v43 = (_DWORD *)a1;
    v54 = 8;
    v57 = 8;
    v41 = v29;
    v60 = 8;
    v63 = v30 + 2;
    v66 = v30 + 2;
    v68 = v8;
    v69 = v30 + 2;
    v71 = v32;
    v72 = v30 + 2;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F87AA, v31, v32, 9u, &pData);
  }
  return (unsigned int)v7;
}
