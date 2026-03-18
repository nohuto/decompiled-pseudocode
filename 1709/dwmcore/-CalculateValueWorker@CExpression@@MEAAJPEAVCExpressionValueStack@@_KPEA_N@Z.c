/*
 * XREFs of ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A78F0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z @ 0x1800A871C (-Swizzle@CExpressionValueStack@@QEAAJPEAUExpressionNode@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x1800A885C (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x1800A88B4 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?Negate@CExpressionValueStack@@QEAAJXZ @ 0x1800A892C (-Negate@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Add@CExpressionValueStack@@QEAAJXZ @ 0x1800A8A04 (-Add@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800A8AE0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?Divide@CExpressionValueStack@@QEAAJXZ @ 0x1800A8D30 (-Divide@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Multiply@CExpressionValueStack@@QEAAJXZ @ 0x1800A8DC0 (-Multiply@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ColorLerpHsl@CExpressionValueStack@@QEAAJXZ @ 0x1800A8FB8 (-ColorLerpHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector3@CExpressionValueStack@@QEAAJXZ @ 0x1800A9194 (-Vector3@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x1800A9230 (-ColorRgb@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJXZ @ 0x1800A9330 (-Matrix3x2FromTranslation@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJXZ @ 0x1800A9390 (-Matrix4x4FromTranslation@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4@CExpressionValueStack@@QEAAJXZ @ 0x1800A946C (-Matrix4x4@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2FromScale@CExpressionValueStack@@QEAAJXZ @ 0x1800A9560 (-Matrix3x2FromScale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x1800A9604 (-Matrix4x4FromAxisAngle@CExpressionValueStack@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?Absolute@CExpressionValueStack@@QEAAJXZ @ 0x180183670 (-Absolute@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Acos@CExpressionValueStack@@QEAAJXZ @ 0x1801837FC (-Acos@CExpressionValueStack@@QEAAJXZ.c)
 *     ?And@CExpressionValueStack@@QEAAJXZ @ 0x180183938 (-And@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Asin@CExpressionValueStack@@QEAAJXZ @ 0x1801839D4 (-Asin@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Atan@CExpressionValueStack@@QEAAJXZ @ 0x180183A78 (-Atan@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Ceil@CExpressionValueStack@@QEAAJXZ @ 0x180183AFC (-Ceil@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Clamp@CExpressionValueStack@@QEAAJXZ @ 0x180183B80 (-Clamp@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x180183DD4 (-ColorHsl@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ColorLerpRgb@CExpressionValueStack@@QEAAJXZ @ 0x180183F1C (-ColorLerpRgb@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Concatenate@CExpressionValueStack@@QEAAJXZ @ 0x180184060 (-Concatenate@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Conditional@CExpressionValueStack@@QEAAJPEAUExpressionConditionalNode@@PEA_N@Z @ 0x180184104 (-Conditional@CExpressionValueStack@@QEAAJPEAUExpressionConditionalNode@@PEA_N@Z.c)
 *     ?Cos@CExpressionValueStack@@QEAAJXZ @ 0x18018416C (-Cos@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Distance@CExpressionValueStack@@QEAAJXZ @ 0x1801841F0 (-Distance@CExpressionValueStack@@QEAAJXZ.c)
 *     ?DistanceSquared@CExpressionValueStack@@QEAAJXZ @ 0x1801843BC (-DistanceSquared@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Equals@CExpressionValueStack@@QEAAJXZ @ 0x18018457C (-Equals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Floor@CExpressionValueStack@@QEAAJXZ @ 0x180184774 (-Floor@CExpressionValueStack@@QEAAJXZ.c)
 *     ?GreaterThan@CExpressionValueStack@@QEAAJXZ @ 0x1801847F8 (-GreaterThan@CExpressionValueStack@@QEAAJXZ.c)
 *     ?GreaterThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x180184894 (-GreaterThanEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x180184930 (-Inverse@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Length@CExpressionValueStack@@QEAAJXZ @ 0x180184A6C (-Length@CExpressionValueStack@@QEAAJXZ.c)
 *     ?LengthSquared@CExpressionValueStack@@QEAAJXZ @ 0x180184BF4 (-LengthSquared@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Lerp@CExpressionValueStack@@QEAAJXZ @ 0x180184D64 (-Lerp@CExpressionValueStack@@QEAAJXZ.c)
 *     ?LessThan@CExpressionValueStack@@QEAAJXZ @ 0x1801853BC (-LessThan@CExpressionValueStack@@QEAAJXZ.c)
 *     ?LessThanEquals@CExpressionValueStack@@QEAAJXZ @ 0x180185458 (-LessThanEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Ln@CExpressionValueStack@@QEAAJXZ @ 0x1801854F4 (-Ln@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Log10@CExpressionValueStack@@QEAAJXZ @ 0x1801855A0 (-Log10@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2@CExpressionValueStack@@QEAAJXZ @ 0x18018564C (-Matrix3x2@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2FromRotation@CExpressionValueStack@@QEAAJXZ @ 0x180185768 (-Matrix3x2FromRotation@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix3x2FromSkew@CExpressionValueStack@@QEAAJXZ @ 0x180185834 (-Matrix3x2FromSkew@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJXZ @ 0x180185944 (-Matrix4x4FromScale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Max@CExpressionValueStack@@QEAAJXZ @ 0x180185A40 (-Max@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Min@CExpressionValueStack@@QEAAJXZ @ 0x180185C0C (-Min@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Modulus@CExpressionValueStack@@QEAAJXZ @ 0x180185DD8 (-Modulus@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Normalize@CExpressionValueStack@@QEAAJXZ @ 0x180185E9C (-Normalize@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Not@CExpressionValueStack@@QEAAJXZ @ 0x180185F90 (-Not@CExpressionValueStack@@QEAAJXZ.c)
 *     ?NotEquals@CExpressionValueStack@@QEAAJXZ @ 0x180185FFC (-NotEquals@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Or@CExpressionValueStack@@QEAAJXZ @ 0x1801861F4 (-Or@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x180186290 (-Pow@CExpressionValueStack@@QEAAJXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z @ 0x180186368 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x1801863DC (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x180186450 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x1801864CC (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180186540 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1801865C0 (-PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJ_N@Z @ 0x180186634 (-PushConstant@CExpressionValueStack@@QEAAJ_N@Z.c)
 *     ?Quaternion@CExpressionValueStack@@QEAAJXZ @ 0x1801866A4 (-Quaternion@CExpressionValueStack@@QEAAJXZ.c)
 *     ?QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ @ 0x180186784 (-QuaternionFromAxisAngle@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Round@CExpressionValueStack@@QEAAJXZ @ 0x180186848 (-Round@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Scale@CExpressionValueStack@@QEAAJXZ @ 0x180186978 (-Scale@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Sin@CExpressionValueStack@@QEAAJXZ @ 0x180186BA8 (-Sin@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Slerp@CExpressionValueStack@@QEAAJXZ @ 0x180186C2C (-Slerp@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Sqrt@CExpressionValueStack@@QEAAJXZ @ 0x180186CF0 (-Sqrt@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Square@CExpressionValueStack@@QEAAJXZ @ 0x180186D88 (-Square@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Subtract@CExpressionValueStack@@QEAAJXZ @ 0x180186DF8 (-Subtract@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Tan@CExpressionValueStack@@QEAAJXZ @ 0x180187040 (-Tan@CExpressionValueStack@@QEAAJXZ.c)
 *     ?TimeSpanFrom@CExpressionValueStack@@QEAAJI@Z @ 0x1801870EC (-TimeSpanFrom@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?ToDegrees@CExpressionValueStack@@QEAAJXZ @ 0x180187164 (-ToDegrees@CExpressionValueStack@@QEAAJXZ.c)
 *     ?ToRadians@CExpressionValueStack@@QEAAJXZ @ 0x1801871D8 (-ToRadians@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x18018724C (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Vector4@CExpressionValueStack@@QEAAJXZ @ 0x180187388 (-Vector4@CExpressionValueStack@@QEAAJXZ.c)
 */

__int64 __fastcall CExpression::CalculateValueWorker(
        CExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // r15
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r12d
  int v13; // r14d
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  __int64 v16; // r15
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // r14d
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  unsigned int v37; // r9d
  __int64 v38; // rdx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  int v58; // ecx
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  int v76; // ecx
  int v77; // ecx
  int v78; // ecx
  int v79; // ecx
  int v80; // ecx
  int v81; // ecx
  int v82; // ecx
  int v83; // ecx
  int v84; // ecx
  unsigned int v85; // edx
  unsigned int v86; // r12d
  _QWORD *v87; // r8
  __int64 v88; // rcx
  unsigned int v89; // eax
  unsigned __int64 v90; // rdx
  signed int v91; // r14d
  signed int v92; // eax
  DWORD v93; // r9d
  unsigned int v94; // edx
  LPCGUID v95; // r8
  LPCGUID v96; // r9
  UINT32 cData; // [rsp+20h] [rbp-69h]
  unsigned int v98; // [rsp+30h] [rbp-59h] BYREF
  int v99; // [rsp+34h] [rbp-55h] BYREF
  bool v100; // [rsp+38h] [rbp-51h] BYREF
  _DWORD v101[3]; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v102; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  _DWORD *v104; // [rsp+70h] [rbp-19h]
  __int64 v105; // [rsp+78h] [rbp-11h]
  unsigned int *v106; // [rsp+80h] [rbp-9h]
  __int64 v107; // [rsp+88h] [rbp-1h]
  int *v108; // [rsp+90h] [rbp+7h]
  __int64 v109; // [rsp+98h] [rbp+Fh]

  v4 = 0LL;
  *a4 = 0;
  v7 = *((unsigned int *)this + 71);
  v8 = *((_QWORD *)this + 34);
  v98 = 0;
  v9 = *(unsigned int *)(v8 + 64);
  if ( v7 < v9 && *((unsigned int *)this + 70) <= v9 - v7 && (v10 = *(_QWORD *)(v8 + 72)) != 0 )
    v11 = v7 + v10;
  else
    v11 = 0LL;
  *(_QWORD *)&v101[1] = v11;
  if ( v11 )
  {
    v12 = v101[0];
    *((_DWORD *)this + 81) = *((_DWORD *)this + 70);
    while ( 1 )
    {
      if ( (unsigned int)v4 >= *((_DWORD *)this + 81) )
      {
        v26 = *((_DWORD *)this + 88);
        if ( !v26 )
        {
          v99 = 0;
          goto LABEL_37;
        }
        *((_DWORD *)this + 81) = *(_DWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v26 - 1));
        v4 = *(unsigned int *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v26 - 1) + 4);
        *((_DWORD *)this + 88) = v26 - 1;
      }
      else
      {
        v13 = 4;
        v14 = *((_DWORD *)this + 70) - v4;
        v15 = v12;
        if ( v14 < 4 )
        {
          cData = 819;
          goto LABEL_306;
        }
        v16 = v11 + v4;
        v17 = *(_DWORD *)v16;
        if ( *(int *)v16 > 41 )
        {
          if ( v17 <= 63 )
          {
            if ( v17 == 63 )
            {
              v21 = CExpressionValueStack::Vector3(a2);
              v99 = v21;
              if ( v21 < 0 )
              {
                cData = 1237;
                goto LABEL_298;
              }
            }
            else if ( v17 <= 53 )
            {
              if ( v17 == 53 )
              {
                v21 = CExpressionValueStack::Equals(a2);
                v99 = v21;
                if ( v21 < 0 )
                {
                  cData = 1065;
                  goto LABEL_298;
                }
              }
              else if ( v17 > 47 )
              {
                v82 = v17 - 48;
                if ( v82 )
                {
                  v83 = v82 - 1;
                  if ( v83 )
                  {
                    v84 = v83 - 1;
                    if ( v84 )
                    {
                      if ( v84 != 1 )
                        goto LABEL_322;
                      if ( v14 < 0xC )
                      {
                        cData = 1359;
                        goto LABEL_306;
                      }
                      v27 = v98;
                      v85 = *(_DWORD *)(v16 + 8) + *(_DWORD *)(v16 + 4) + 12;
                      v86 = v85 + v98;
                      if ( v85 > v14 )
                      {
                        v99 = -2147467259;
                        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, 0x80004005, 0x55Au);
                        goto LABEL_38;
                      }
                      v87 = (_QWORD *)((char *)this + 328);
                      v88 = *((unsigned int *)this + 88);
                      LODWORD(v102) = *((_DWORD *)this + 81);
                      HIDWORD(v102) = v85 + v98;
                      v89 = v88 + 1;
                      v90 = (unsigned int)(v88 + 1);
                      if ( (int)v88 + 1 < (unsigned int)v88 )
                        v90 = v15;
                      v91 = v89 < (unsigned int)v88 ? 0x80070216 : 0;
                      v101[0] = v90;
                      if ( v89 < (unsigned int)v88 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v91, 0xB5u);
                      }
                      else if ( (unsigned int)v90 > *((_DWORD *)this + 87) )
                      {
                        v92 = DynArrayImpl<1>::AddMultipleAndSet((__int64)this + 328, 8u, (__int64)v87, &v102);
                        v91 = v92;
                        if ( v92 < 0 )
                          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v92, 0xC0u);
                      }
                      else
                      {
                        *(_QWORD *)(*v87 + 8 * v88) = v102;
                        *((_DWORD *)this + 88) = v90;
                      }
                      v99 = v91;
                      if ( v91 < 0 )
                      {
                        cData = 1379;
                        v93 = v91;
                        goto LABEL_300;
                      }
                      v21 = CExpressionValueStack::Conditional(a2, (struct ExpressionConditionalNode *)v90, &v100);
                      v99 = v21;
                      if ( v21 < 0 )
                      {
                        cData = 1382;
LABEL_298:
                        v93 = v21;
LABEL_300:
                        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, v93, cData);
LABEL_37:
                        v27 = v98;
                        goto LABEL_38;
                      }
                      if ( v100 )
                      {
                        v13 = 12;
                        *((_DWORD *)this + 81) = *(_DWORD *)(v16 + 4) + v98 + 12;
                      }
                      else
                      {
                        v13 = *(_DWORD *)(v16 + 4) + 12;
                        *((_DWORD *)this + 81) = v86;
                      }
                      v12 = v101[0];
                    }
                    else
                    {
                      v21 = CExpressionValueStack::ToRadians(a2);
                      v99 = v21;
                      if ( v21 < 0 )
                      {
                        cData = 1229;
                        goto LABEL_298;
                      }
                    }
                  }
                  else
                  {
                    v21 = CExpressionValueStack::ToDegrees(a2);
                    v99 = v21;
                    if ( v21 < 0 )
                    {
                      cData = 1225;
                      goto LABEL_298;
                    }
                  }
                }
                else
                {
                  v21 = CExpressionValueStack::Ln(a2);
                  v99 = v21;
                  if ( v21 < 0 )
                  {
                    cData = 1221;
                    goto LABEL_298;
                  }
                }
              }
              else if ( v17 == 47 )
              {
                v21 = CExpressionValueStack::Log10(a2);
                v99 = v21;
                if ( v21 < 0 )
                {
                  cData = 1217;
                  goto LABEL_298;
                }
              }
              else
              {
                v78 = v17 - 42;
                if ( v78 )
                {
                  v79 = v78 - 1;
                  if ( v79 )
                  {
                    v80 = v79 - 1;
                    if ( v80 )
                    {
                      v81 = v80 - 1;
                      if ( v81 )
                      {
                        if ( v81 != 1 )
                          goto LABEL_322;
                        v21 = CExpressionValueStack::Square(a2);
                        v99 = v21;
                        if ( v21 < 0 )
                        {
                          cData = 1213;
                          goto LABEL_298;
                        }
                      }
                      else
                      {
                        v21 = CExpressionValueStack::Pow(a2);
                        v99 = v21;
                        if ( v21 < 0 )
                        {
                          cData = 1209;
                          goto LABEL_298;
                        }
                      }
                    }
                    else
                    {
                      v21 = CExpressionValueStack::Sqrt(a2);
                      v99 = v21;
                      if ( v21 < 0 )
                      {
                        cData = 1205;
                        goto LABEL_298;
                      }
                    }
                  }
                  else
                  {
                    v21 = CExpressionValueStack::Round(a2);
                    v99 = v21;
                    if ( v21 < 0 )
                    {
                      cData = 1201;
                      goto LABEL_298;
                    }
                  }
                }
                else
                {
                  v21 = CExpressionValueStack::Floor(a2);
                  v99 = v21;
                  if ( v21 < 0 )
                  {
                    cData = 1197;
                    goto LABEL_298;
                  }
                }
              }
            }
            else
            {
              v29 = v17 - 54;
              if ( v29 )
              {
                v30 = v29 - 1;
                if ( v30 )
                {
                  v31 = v30 - 1;
                  if ( v31 )
                  {
                    v32 = v31 - 1;
                    if ( v32 )
                    {
                      v33 = v32 - 1;
                      if ( v33 )
                      {
                        v34 = v33 - 1;
                        if ( v34 )
                        {
                          v35 = v34 - 1;
                          if ( v35 )
                          {
                            v36 = v35 - 1;
                            if ( v36 )
                            {
                              if ( v36 != 1 )
                                goto LABEL_322;
                              v37 = *((_DWORD *)a2 + 4);
                              if ( v37 < 2 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x1528u);
LABEL_305:
                                cData = 1233;
                                goto LABEL_306;
                              }
                              v38 = *((_QWORD *)a2 + 3);
                              if ( *(_DWORD *)(v38 + 72LL * (v37 - 2) + 64) != 18
                                || *(_DWORD *)(v38 + 72LL * (v37 - 1) + 64) != 18 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004005, 0x1537u);
                                goto LABEL_305;
                              }
                              *(_DWORD *)(v38 + 72LL * (v37 - 2) + 4) = *(_DWORD *)(v38 + 72LL * (v37 - 1));
                              *(_DWORD *)(v38 + 72LL * (v37 - 2) + 64) = 35;
                              *(_BYTE *)(v38 + 72LL * (v37 - 2) + 68) = 1;
                              --*((_DWORD *)a2 + 4);
                              v99 = 0;
                            }
                            else
                            {
                              v21 = CExpressionValueStack::Not(a2);
                              v99 = v21;
                              if ( v21 < 0 )
                              {
                                cData = 1097;
                                goto LABEL_298;
                              }
                            }
                          }
                          else
                          {
                            v21 = CExpressionValueStack::Or(a2);
                            v99 = v21;
                            if ( v21 < 0 )
                            {
                              cData = 1093;
                              goto LABEL_298;
                            }
                          }
                        }
                        else
                        {
                          v21 = CExpressionValueStack::And(a2);
                          v99 = v21;
                          if ( v21 < 0 )
                          {
                            cData = 1089;
                            goto LABEL_298;
                          }
                        }
                      }
                      else
                      {
                        v21 = CExpressionValueStack::GreaterThanEquals(a2);
                        v99 = v21;
                        if ( v21 < 0 )
                        {
                          cData = 1085;
                          goto LABEL_298;
                        }
                      }
                    }
                    else
                    {
                      v21 = CExpressionValueStack::GreaterThan(a2);
                      v99 = v21;
                      if ( v21 < 0 )
                      {
                        cData = 1081;
                        goto LABEL_298;
                      }
                    }
                  }
                  else
                  {
                    v21 = CExpressionValueStack::LessThanEquals(a2);
                    v99 = v21;
                    if ( v21 < 0 )
                    {
                      cData = 1077;
                      goto LABEL_298;
                    }
                  }
                }
                else
                {
                  v21 = CExpressionValueStack::LessThan(a2);
                  v99 = v21;
                  if ( v21 < 0 )
                  {
                    cData = 1073;
                    goto LABEL_298;
                  }
                }
              }
              else
              {
                v21 = CExpressionValueStack::NotEquals(a2);
                v99 = v21;
                if ( v21 < 0 )
                {
                  cData = 1069;
                  goto LABEL_298;
                }
              }
            }
          }
          else if ( v17 > 73 )
          {
            v45 = v17 - 74;
            if ( v45 )
            {
              v46 = v45 - 1;
              if ( v46 )
              {
                v47 = v46 - 1;
                if ( v47 )
                {
                  v48 = v47 - 1;
                  if ( v48 )
                  {
                    v49 = v48 - 1;
                    if ( v49 )
                    {
                      v50 = v49 - 1;
                      if ( v50 )
                      {
                        v51 = v50 - 1;
                        if ( v51 )
                        {
                          v52 = v51 - 1;
                          if ( v52 )
                          {
                            if ( v52 != 1 )
                            {
LABEL_322:
                              cData = 1409;
                              goto LABEL_306;
                            }
                            v13 = 24;
                            if ( v14 < 0x18 )
                            {
                              cData = 1339;
LABEL_306:
                              v99 = -2147467259;
                              v93 = -2147467259;
                              goto LABEL_300;
                            }
                            v21 = CExpressionValueStack::Swizzle(a2, (struct ExpressionNode *)v16);
                            v99 = v21;
                            if ( v21 < 0 )
                            {
                              cData = 1344;
                              goto LABEL_298;
                            }
                          }
                          else
                          {
                            v13 = 16;
                            if ( v14 < 0x10 )
                            {
                              cData = 1319;
                              goto LABEL_306;
                            }
                            v21 = CExpressionValueStack::Swizzle(a2, (struct ExpressionNode *)v16);
                            v99 = v21;
                            if ( v21 < 0 )
                            {
                              cData = 1324;
                              goto LABEL_298;
                            }
                          }
                        }
                        else
                        {
                          v21 = CExpressionValueStack::TimeSpanFrom(a2, 0xEA60u);
                          v99 = v21;
                          if ( v21 < 0 )
                          {
                            cData = 1305;
                            goto LABEL_298;
                          }
                        }
                      }
                      else
                      {
                        v21 = CExpressionValueStack::TimeSpanFrom(a2, 0x3E8u);
                        v99 = v21;
                        if ( v21 < 0 )
                        {
                          cData = 1301;
                          goto LABEL_298;
                        }
                      }
                    }
                    else
                    {
                      v21 = CExpressionValueStack::TimeSpanFrom(a2, 1u);
                      v99 = v21;
                      if ( v21 < 0 )
                      {
                        cData = 1297;
                        goto LABEL_298;
                      }
                    }
                  }
                  else
                  {
                    v21 = CExpressionValueStack::QuaternionFromAxisAngle(a2);
                    v99 = v21;
                    if ( v21 < 0 )
                    {
                      cData = 1293;
                      goto LABEL_298;
                    }
                  }
                }
                else
                {
                  v21 = CExpressionValueStack::Matrix4x4FromAxisAngle(a2);
                  v99 = v21;
                  if ( v21 < 0 )
                  {
                    cData = 1289;
                    goto LABEL_298;
                  }
                }
              }
              else
              {
                v21 = CExpressionValueStack::Matrix4x4FromTranslation(a2);
                v99 = v21;
                if ( v21 < 0 )
                {
                  cData = 1269;
                  goto LABEL_298;
                }
              }
            }
            else
            {
              v21 = CExpressionValueStack::Matrix4x4FromScale(a2);
              v99 = v21;
              if ( v21 < 0 )
              {
                cData = 1277;
                goto LABEL_298;
              }
            }
          }
          else if ( v17 == 73 )
          {
            v21 = CExpressionValueStack::Matrix3x2FromTranslation(a2);
            v99 = v21;
            if ( v21 < 0 )
            {
              cData = 1265;
              goto LABEL_298;
            }
          }
          else
          {
            v39 = v17 - 64;
            if ( v39 )
            {
              v40 = v39 - 1;
              if ( v40 )
              {
                v41 = v40 - 1;
                if ( v41 )
                {
                  v42 = v41 - 1;
                  if ( v42 )
                  {
                    v43 = v42 - 1;
                    if ( v43 )
                    {
                      v44 = v43 - 1;
                      if ( v44 )
                      {
                        v54 = v44 - 1;
                        if ( v54 )
                        {
                          v55 = v54 - 1;
                          if ( v55 )
                          {
                            if ( v55 != 1 )
                              goto LABEL_322;
                            v21 = CExpressionValueStack::Matrix3x2FromSkew(a2);
                            v99 = v21;
                            if ( v21 < 0 )
                            {
                              cData = 1281;
                              goto LABEL_298;
                            }
                          }
                          else
                          {
                            v21 = CExpressionValueStack::Matrix3x2FromScale(a2);
                            v99 = v21;
                            if ( v21 < 0 )
                            {
                              cData = 1273;
                              goto LABEL_298;
                            }
                          }
                        }
                        else
                        {
                          v21 = CExpressionValueStack::Matrix3x2FromRotation(a2);
                          v99 = v21;
                          if ( v21 < 0 )
                          {
                            cData = 1285;
                            goto LABEL_298;
                          }
                        }
                      }
                      else
                      {
                        v21 = CExpressionValueStack::Matrix4x4(a2);
                        v99 = v21;
                        if ( v21 < 0 )
                        {
                          cData = 1261;
                          goto LABEL_298;
                        }
                      }
                    }
                    else
                    {
                      v21 = CExpressionValueStack::Matrix3x2(a2);
                      v99 = v21;
                      if ( v21 < 0 )
                      {
                        cData = 1257;
                        goto LABEL_298;
                      }
                    }
                  }
                  else
                  {
                    v21 = CExpressionValueStack::Quaternion(a2);
                    v99 = v21;
                    if ( v21 < 0 )
                    {
                      cData = 1253;
                      goto LABEL_298;
                    }
                  }
                }
                else
                {
                  v21 = CExpressionValueStack::ColorRgb(a2);
                  v99 = v21;
                  if ( v21 < 0 )
                  {
                    cData = 1249;
                    goto LABEL_298;
                  }
                }
              }
              else
              {
                v21 = CExpressionValueStack::ColorHsl(a2);
                v99 = v21;
                if ( v21 < 0 )
                {
                  cData = 1245;
                  goto LABEL_298;
                }
              }
            }
            else
            {
              v21 = CExpressionValueStack::Vector4(a2);
              v99 = v21;
              if ( v21 < 0 )
              {
                cData = 1241;
                goto LABEL_298;
              }
            }
          }
        }
        else if ( v17 == 41 )
        {
          v21 = CExpressionValueStack::Ceil(a2);
          v99 = v21;
          if ( v21 < 0 )
          {
            cData = 1193;
            goto LABEL_298;
          }
        }
        else if ( v17 > 21 )
        {
          if ( v17 > 31 )
          {
            v70 = v17 - 32;
            if ( v70 )
            {
              v71 = v70 - 1;
              if ( v71 )
              {
                v72 = v71 - 1;
                if ( v72 )
                {
                  v73 = v72 - 1;
                  if ( v73 )
                  {
                    v74 = v73 - 1;
                    if ( v74 )
                    {
                      v75 = v74 - 1;
                      if ( v75 )
                      {
                        v76 = v75 - 1;
                        if ( v76 )
                        {
                          v77 = v76 - 1;
                          if ( v77 )
                          {
                            if ( v77 != 1 )
                              goto LABEL_322;
                            v21 = CExpressionValueStack::Atan(a2);
                            v99 = v21;
                            if ( v21 < 0 )
                            {
                              cData = 1189;
                              goto LABEL_298;
                            }
                          }
                          else
                          {
                            v21 = CExpressionValueStack::Tan(a2);
                            v99 = v21;
                            if ( v21 < 0 )
                            {
                              cData = 1185;
                              goto LABEL_298;
                            }
                          }
                        }
                        else
                        {
                          v21 = CExpressionValueStack::Acos(a2);
                          v99 = v21;
                          if ( v21 < 0 )
                          {
                            cData = 1181;
                            goto LABEL_298;
                          }
                        }
                      }
                      else
                      {
                        v21 = CExpressionValueStack::Cos(a2);
                        v99 = v21;
                        if ( v21 < 0 )
                        {
                          cData = 1177;
                          goto LABEL_298;
                        }
                      }
                    }
                    else
                    {
                      v21 = CExpressionValueStack::Asin(a2);
                      v99 = v21;
                      if ( v21 < 0 )
                      {
                        cData = 1173;
                        goto LABEL_298;
                      }
                    }
                  }
                  else
                  {
                    v21 = CExpressionValueStack::Sin(a2);
                    v99 = v21;
                    if ( v21 < 0 )
                    {
                      cData = 1169;
                      goto LABEL_298;
                    }
                  }
                }
                else
                {
                  v21 = CExpressionValueStack::Concatenate(a2);
                  v99 = v21;
                  if ( v21 < 0 )
                  {
                    cData = 1165;
                    goto LABEL_298;
                  }
                }
              }
              else
              {
                v21 = CExpressionValueStack::Slerp(a2);
                v99 = v21;
                if ( v21 < 0 )
                {
                  cData = 1161;
                  goto LABEL_298;
                }
              }
            }
            else
            {
              v21 = CExpressionValueStack::Normalize(a2);
              v99 = v21;
              if ( v21 < 0 )
              {
                cData = 1157;
                goto LABEL_298;
              }
            }
          }
          else if ( v17 == 31 )
          {
            v21 = CExpressionValueStack::DistanceSquared(a2);
            v99 = v21;
            if ( v21 < 0 )
            {
              cData = 1153;
              goto LABEL_298;
            }
          }
          else
          {
            v57 = v17 - 22;
            if ( v57 )
            {
              v58 = v57 - 1;
              if ( v58 )
              {
                v59 = v58 - 1;
                if ( v59 )
                {
                  v60 = v59 - 1;
                  if ( v60 )
                  {
                    v66 = v60 - 1;
                    if ( v66 )
                    {
                      v67 = v66 - 1;
                      if ( v67 )
                      {
                        v68 = v67 - 1;
                        if ( v68 )
                        {
                          v69 = v68 - 1;
                          if ( v69 )
                          {
                            if ( v69 != 1 )
                              goto LABEL_322;
                            v21 = CExpressionValueStack::Distance(a2);
                            v99 = v21;
                            if ( v21 < 0 )
                            {
                              cData = 1149;
                              goto LABEL_298;
                            }
                          }
                          else
                          {
                            v21 = CExpressionValueStack::LengthSquared(a2);
                            v99 = v21;
                            if ( v21 < 0 )
                            {
                              cData = 1145;
                              goto LABEL_298;
                            }
                          }
                        }
                        else
                        {
                          v21 = CExpressionValueStack::Length(a2);
                          v99 = v21;
                          if ( v21 < 0 )
                          {
                            cData = 1141;
                            goto LABEL_298;
                          }
                        }
                      }
                      else
                      {
                        v21 = CExpressionValueStack::ColorLerpRgb(a2);
                        v99 = v21;
                        if ( v21 < 0 )
                        {
                          cData = 1137;
                          goto LABEL_298;
                        }
                      }
                    }
                    else
                    {
                      v21 = CExpressionValueStack::ColorLerpHsl(a2);
                      v99 = v21;
                      if ( v21 < 0 )
                      {
                        cData = 1133;
                        goto LABEL_298;
                      }
                    }
                  }
                  else
                  {
                    v21 = CExpressionValueStack::ColorLerpHsl(a2);
                    v99 = v21;
                    if ( v21 < 0 )
                    {
                      cData = 1129;
                      goto LABEL_298;
                    }
                  }
                }
                else
                {
                  v21 = CExpressionValueStack::Lerp(a2);
                  v99 = v21;
                  if ( v21 < 0 )
                  {
                    cData = 1125;
                    goto LABEL_298;
                  }
                }
              }
              else
              {
                v21 = CExpressionValueStack::Inverse(a2);
                v99 = v21;
                if ( v21 < 0 )
                {
                  cData = 1121;
                  goto LABEL_298;
                }
              }
            }
            else
            {
              v21 = CExpressionValueStack::Transform(a2);
              v99 = v21;
              if ( v21 < 0 )
              {
                cData = 1117;
                goto LABEL_298;
              }
            }
          }
        }
        else if ( v17 == 21 )
        {
          v21 = CExpressionValueStack::Scale(a2);
          v99 = v21;
          if ( v21 < 0 )
          {
            cData = 1113;
            goto LABEL_298;
          }
        }
        else if ( v17 > 11 )
        {
          v22 = v17 - 12;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v25 = v24 - 1;
                if ( v25 )
                {
                  v56 = v25 - 1;
                  if ( v56 )
                  {
                    v63 = v56 - 1;
                    if ( v63 )
                    {
                      v64 = v63 - 1;
                      if ( v64 )
                      {
                        v65 = v64 - 1;
                        if ( v65 )
                        {
                          if ( v65 != 1 )
                            goto LABEL_322;
                          v21 = CExpressionValueStack::Clamp(a2);
                          v99 = v21;
                          if ( v21 < 0 )
                          {
                            cData = 1109;
                            goto LABEL_298;
                          }
                        }
                        else
                        {
                          v21 = CExpressionValueStack::Max(a2);
                          v99 = v21;
                          if ( v21 < 0 )
                          {
                            cData = 1105;
                            goto LABEL_298;
                          }
                        }
                      }
                      else
                      {
                        v21 = CExpressionValueStack::Min(a2);
                        v99 = v21;
                        if ( v21 < 0 )
                        {
                          cData = 1101;
                          goto LABEL_298;
                        }
                      }
                    }
                    else
                    {
                      v21 = CExpressionValueStack::Modulus(a2);
                      v99 = v21;
                      if ( v21 < 0 )
                      {
                        cData = 1061;
                        goto LABEL_298;
                      }
                    }
                  }
                  else
                  {
                    v21 = CExpressionValueStack::Divide(a2);
                    v99 = v21;
                    if ( v21 < 0 )
                    {
                      cData = 1057;
                      goto LABEL_298;
                    }
                  }
                }
                else
                {
                  v21 = CExpressionValueStack::Multiply(a2);
                  v99 = v21;
                  if ( v21 < 0 )
                  {
                    cData = 1053;
                    goto LABEL_298;
                  }
                }
              }
              else
              {
                v21 = CExpressionValueStack::Subtract(a2);
                v99 = v21;
                if ( v21 < 0 )
                {
                  cData = 1049;
                  goto LABEL_298;
                }
              }
            }
            else
            {
              v21 = CExpressionValueStack::Add(a2);
              v99 = v21;
              if ( v21 < 0 )
              {
                cData = 1045;
                goto LABEL_298;
              }
            }
          }
          else
          {
            v21 = CExpressionValueStack::Negate(a2);
            v99 = v21;
            if ( v21 < 0 )
            {
              cData = 1041;
              goto LABEL_298;
            }
          }
        }
        else if ( v17 == 11 )
        {
          v21 = CExpressionValueStack::Absolute(a2);
          v99 = v21;
          if ( v21 < 0 )
          {
            cData = 1037;
            goto LABEL_298;
          }
        }
        else if ( v17 <= 5 )
        {
          if ( v17 == 5 )
          {
            v13 = 20;
            if ( v14 < 0x14 )
            {
              cData = 937;
              goto LABEL_306;
            }
            v21 = CExpressionValueStack::PushConstant(a2, (const struct _D3DCOLORVALUE *)(v16 + 4));
            v99 = v21;
            if ( v21 < 0 )
            {
              cData = 942;
              goto LABEL_298;
            }
          }
          else if ( v17 )
          {
            v53 = v17 - 1;
            if ( v53 )
            {
              v61 = v53 - 1;
              if ( v61 )
              {
                v62 = v61 - 1;
                if ( v62 )
                {
                  if ( v62 != 1 )
                    goto LABEL_322;
                  v13 = 20;
                  if ( v14 < 0x14 )
                  {
                    cData = 917;
                    goto LABEL_306;
                  }
                  v21 = CExpressionValueStack::PushConstant(a2, (const struct D2DVector4 *)(v16 + 4));
                  v99 = v21;
                  if ( v21 < 0 )
                  {
                    cData = 922;
                    goto LABEL_298;
                  }
                }
                else
                {
                  v13 = 16;
                  if ( v14 < 0x10 )
                  {
                    cData = 897;
                    goto LABEL_306;
                  }
                  v21 = CExpressionValueStack::PushConstant(a2, (const struct D2DVector3 *)(v16 + 4));
                  v99 = v21;
                  if ( v21 < 0 )
                  {
                    cData = 902;
                    goto LABEL_298;
                  }
                }
              }
              else
              {
                v13 = 12;
                if ( v14 < 0xC )
                {
                  cData = 877;
                  goto LABEL_306;
                }
                v21 = CExpressionValueStack::PushConstant(a2, (const struct D2DVector2 *)(v16 + 4));
                v99 = v21;
                if ( v21 < 0 )
                {
                  cData = 882;
                  goto LABEL_298;
                }
              }
            }
            else
            {
              v13 = 8;
              if ( v14 < 8 )
              {
                cData = 857;
                goto LABEL_306;
              }
              v21 = CExpressionValueStack::PushConstant(a2, *(float *)(v16 + 4));
              v99 = v21;
              if ( v21 < 0 )
              {
                cData = 862;
                goto LABEL_298;
              }
            }
          }
          else
          {
            v13 = 8;
            if ( v14 < 8 )
            {
              cData = 837;
              goto LABEL_306;
            }
            v21 = CExpressionValueStack::PushConstant(a2, *(_BYTE *)(v16 + 4));
            v99 = v21;
            if ( v21 < 0 )
            {
              cData = 842;
              goto LABEL_298;
            }
          }
        }
        else
        {
          v18 = v17 - 6;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( v20 )
              {
                if ( v20 != 1 )
                  goto LABEL_322;
                v13 = 8;
                if ( v14 < 8 )
                {
                  cData = 1017;
                  goto LABEL_306;
                }
                v21 = CExpressionValueStack::ProcessReferenceNode(a2, this, (struct ExpressionReferenceNode *)v16, v12);
                v99 = v21;
                if ( v21 < 0 )
                {
                  cData = 1032;
                  goto LABEL_298;
                }
              }
              else
              {
                v13 = 68;
                if ( v14 < 0x44 )
                {
                  cData = 997;
                  goto LABEL_306;
                }
                v21 = CExpressionValueStack::PushConstant(a2, (const struct D2DMatrix *)(v16 + 4));
                v99 = v21;
                if ( v21 < 0 )
                {
                  cData = 1002;
                  goto LABEL_298;
                }
              }
            }
            else
            {
              v13 = 28;
              if ( v14 < 0x1C )
              {
                cData = 977;
                goto LABEL_306;
              }
              v21 = CExpressionValueStack::PushConstant(a2, (const struct D2D_MATRIX_3X2_F *)(v16 + 4));
              v99 = v21;
              if ( v21 < 0 )
              {
                cData = 982;
                goto LABEL_298;
              }
            }
          }
          else
          {
            v13 = 20;
            if ( v14 < 0x14 )
            {
              cData = 957;
              goto LABEL_306;
            }
            v21 = CExpressionValueStack::PushConstant(a2, (const struct D2DQuaternion *)(v16 + 4));
            v99 = v21;
            if ( v21 < 0 )
            {
              cData = 962;
              goto LABEL_298;
            }
          }
        }
        v4 = v13 + v98;
      }
      v11 = *(_QWORD *)&v101[1];
      v98 = v4;
    }
  }
  v99 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024E0, 1u, 0x8007000E, 0x31Du);
  v27 = 0;
LABEL_38:
  if ( v99 < 0
    && (*(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x40000000) != 0
    && v27 < *((_DWORD *)this + 70)
    && dword_18026D7B0 > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 4uLL) )
  {
    v101[0] = CBaseExpression::GetTracingCookie(this);
    v104 = v101;
    v105 = 4LL;
    v107 = 4LL;
    v109 = 4LL;
    v94 = *(_DWORD *)(v27 + *(_QWORD *)&v101[1]);
    v106 = &v98;
    v108 = &v99;
    v98 = v94;
    TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_18021370E, v95, v96, 5u, &pData);
  }
  return (unsigned int)v99;
}
