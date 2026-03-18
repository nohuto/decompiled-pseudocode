/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x180198F14
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180199F6C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18019DA0C (_anonymous_namespace_--TransformAndNormalize.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18019DB20 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 *     ?AddMultipleAndSet@?$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z @ 0x1801A521C (-AddMultipleAndSet@-$DynArray@URampPair@CoordMap@@$0A@@@QEAAJPEFBURampPair@CoordMap@@I@Z.c)
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
  char v14; // r12
  char v15; // r13
  int v16; // edx
  unsigned int v17; // r9d
  unsigned int v18; // ecx
  bool v19; // si
  unsigned int v20; // r15d
  __int64 v21; // rdi
  unsigned __int8 v22; // al
  unsigned __int8 v23; // r12
  char v24; // r13
  bool v25; // zf
  __int64 v26; // r14
  int v27; // edx
  const GUID *v28; // r8
  const GUID *v29; // r9
  char v31; // [rsp+30h] [rbp-D0h]
  char v32; // [rsp+30h] [rbp-D0h]
  int v33; // [rsp+40h] [rbp-C0h]
  int v34; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  unsigned int v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  char *v39; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v40; // [rsp+70h] [rbp-90h] BYREF
  int v41; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+7Ch] [rbp-84h]
  int v43; // [rsp+80h] [rbp-80h]
  _BYTE v44[16]; // [rsp+88h] [rbp-78h] BYREF
  int v45; // [rsp+98h] [rbp-68h] BYREF
  char v46; // [rsp+9Ch] [rbp-64h]
  _BYTE v47[20]; // [rsp+D8h] [rbp-28h] BYREF
  int v48; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  _DWORD **v50; // [rsp+140h] [rbp+40h]
  int v51; // [rsp+148h] [rbp+48h]
  int v52; // [rsp+14Ch] [rbp+4Ch]
  char **v53; // [rsp+150h] [rbp+50h]
  int v54; // [rsp+158h] [rbp+58h]
  int v55; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v56; // [rsp+160h] [rbp+60h]
  int v57; // [rsp+168h] [rbp+68h]
  int v58; // [rsp+16Ch] [rbp+6Ch]
  unsigned int *v59; // [rsp+170h] [rbp+70h]
  int v60; // [rsp+178h] [rbp+78h]
  int v61; // [rsp+17Ch] [rbp+7Ch]
  int *v62; // [rsp+180h] [rbp+80h]
  int v63; // [rsp+188h] [rbp+88h]
  int v64; // [rsp+18Ch] [rbp+8Ch]
  _DWORD *v65; // [rsp+190h] [rbp+90h]
  int v66; // [rsp+198h] [rbp+98h]
  int v67; // [rsp+19Ch] [rbp+9Ch]
  const GUID *v68; // [rsp+1A0h] [rbp+A0h]
  int v69; // [rsp+1A8h] [rbp+A8h]
  int v70; // [rsp+1ACh] [rbp+ACh]

  v7 = 0;
  v8 = a5;
  v38 = a6;
  v10 = a2;
  *a5 = 0;
  v39 = a2;
  *a7 = 0;
  v13 = *(_QWORD *)a2;
  v36 = a3;
  v40 = a5;
  v33 = 0;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 40LL))(v13, v47);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v45);
  if ( (unsigned int)(*(_DWORD *)(a1 + 592) - 2) <= 2 || (v47[4] & 1) != 0 || (v46 & 1) != 0 )
    *(_DWORD *)(a1 + 592) = 3;
  if ( ((unsigned int)(*(_DWORD *)(a1 + 592) - 2) > 2 || v45 == 2) && (v10[16] & 0x40) != 0 )
    *(_BYTE *)a4 = 1;
  if ( ((unsigned int)(*(_DWORD *)(a1 + 592) - 2) > 2 || v45 == 4) && v10[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v14 = 0;
  v31 = 0;
  v15 = 0;
  if ( (v10[16] & 3) != 0 )
  {
    v42 = 0;
    v43 = 0;
    v41 = 1065353216;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)v44);
    v33 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet(a4 + 8);
    v7 = v33;
    if ( v33 < 0 )
      goto LABEL_56;
    ++*a5;
    v31 = 1;
  }
  if ( (v10[16] & 4) != 0 || (v10[16] & 8) != 0 )
  {
    v41 = 0;
    v43 = 0;
    v42 = 1065353216;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)v44);
    v33 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet(a4 + 8);
    v7 = v33;
    if ( v33 < 0 )
      goto LABEL_56;
    ++*a5;
    v14 = 1;
  }
  if ( (v10[16] & 0x10) != 0 || (v10[16] & 0x20) != 0 )
  {
    v41 = 0;
    v42 = 0;
    v43 = 1065353216;
    v33 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet(a4 + 8);
    v7 = v33;
    if ( v33 >= 0 )
    {
      ++*a5;
      v15 = 1;
      goto LABEL_24;
    }
LABEL_56:
    v26 = v36;
    goto LABEL_57;
  }
LABEL_24:
  if ( (int)*a5 > 0 )
  {
    v16 = *(_DWORD *)(a4 + 32) - *a5;
    v17 = v16 + 1;
    if ( !v31 )
      v17 = *(_DWORD *)(a4 + 32) - *a5;
    v37 = v17;
    v18 = v17 + 1;
    if ( !v14 )
      v18 = v17;
    *(_BYTE *)(a1 + 616) &= 0x3Fu;
    *(_BYTE *)(a1 + 617) &= ~1u;
    *(_BYTE *)(a1 + 617) |= v15;
    v35 = v18;
    *(_BYTE *)(a1 + 616) = (v14 << 7) | (*(_BYTE *)(a1 + 616) | (v31 << 6)) & 0x7F;
    if ( v16 > 3 )
    {
      v19 = v31;
      v20 = 3;
      v21 = (unsigned int)v16;
      do
      {
        v32 = *(_BYTE *)(a1 + 616);
        if ( (v32 & 0x40) == 0 && v32 >= 0 && (*(_BYTE *)(a1 + 617) & 1) == 0 )
          break;
        if ( v19 && (v32 & 0x40) != 0 )
        {
          v22 = anonymous_namespace_::VectorInsideAngleThreshold(
                  *(_QWORD *)(a4 + 8) + 12 * v21,
                  *(_QWORD *)(a4 + 8) + 12LL * v20);
          v17 = v37;
          *(_BYTE *)(a1 + 616) = v32 & 0xBF | ((v22 ^ 1) << 6);
          v19 = (((v22 ^ 1) << 6) & 0x40) != 0;
        }
        if ( v14 )
        {
          v23 = *(_BYTE *)(a1 + 616) & 0x7F | (~(unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                                                   *(_QWORD *)(a4 + 8) + 12LL * v17,
                                                                   *(_QWORD *)(a4 + 8) + 12LL * v20) << 7);
          *(_BYTE *)(a1 + 616) = v23;
          v14 = v23 >> 7;
        }
        if ( v15 )
        {
          v24 = *(_BYTE *)(a1 + 617) & 0xFE | anonymous_namespace_::VectorInsideAngleThreshold(
                                                *(_QWORD *)(a4 + 8) + 12LL * v35,
                                                *(_QWORD *)(a4 + 8) + 12LL * v20) ^ 1;
          *(_BYTE *)(a1 + 617) = v24;
          v15 = v24 & 1;
        }
        v17 = v37;
        ++v20;
      }
      while ( (int)v20 < (int)v21 );
      v7 = v33;
      v10 = v39;
      v8 = v40;
    }
  }
  if ( *(_BYTE *)a4 )
    goto LABEL_56;
  v25 = *(_BYTE *)(a4 + 1) == 0;
  v26 = v36;
  if ( v25 && v36 != *(_QWORD *)v10 )
  {
    if ( v48 == 1 )
    {
      if ( (v10[16] & 1) == 0 && (v10[16] & 2) == 0 )
        goto LABEL_57;
      v42 = 0;
      v41 = 1065353216;
    }
    else
    {
      if ( v48 != 2 || (v10[16] & 4) == 0 && (v10[16] & 8) == 0 )
        goto LABEL_57;
      v41 = 0;
      v42 = 1065353216;
    }
    v43 = 0;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)v44);
    v7 = DynArray<CoordMap::RampPair,0>::AddMultipleAndSet(v38 + 8);
    if ( v7 >= 0 )
      ++*a7;
  }
LABEL_57:
  if ( dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
  {
    v52 = 0;
    v55 = 0;
    v58 = 0;
    v61 = 0;
    v64 = 0;
    v67 = 0;
    v70 = 0;
    v50 = &v40;
    v39 = *(char **)v10;
    v53 = &v39;
    v56 = &v38;
    v35 = *(_DWORD *)(a1 + 596);
    v59 = &v35;
    v34 = *(_DWORD *)(a1 + 592);
    v62 = &v34;
    v40 = (_DWORD *)a1;
    v51 = 8;
    v54 = 8;
    v38 = v26;
    v57 = 8;
    v60 = v27 + 2;
    v63 = v27 + 2;
    v65 = v8;
    v66 = v27 + 2;
    v68 = v29;
    v69 = v27 + 2;
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021510C, v28, v29, 9u, &pData);
  }
  return (unsigned int)v7;
}
