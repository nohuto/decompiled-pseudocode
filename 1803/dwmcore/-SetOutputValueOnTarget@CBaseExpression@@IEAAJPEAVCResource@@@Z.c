/*
 * XREFs of ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BCFC (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18002B850 (-GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002B8A0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180039340 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18003CE40 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18004BEF0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18004BF70 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?IsOfType@CExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800535C0 (-IsOfType@CExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18009AE10 (-GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18013CF48 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x18018003C (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 *     ?LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z @ 0x180180EA8 (-LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x1801814F4 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x1801820E8 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x18019DD14 (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x1801AE290 (-GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x1802052BC (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValueOnTarget(CBaseExpression *this, struct CResource *a2)
{
  __int64 v3; // rdx
  __int64 (__fastcall *v5)(CComponentTransform3D *, int, struct CExpressionValue *); // rax
  __int64 v6; // r8
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rbx
  _BYTE *v10; // rsi
  __int64 v11; // rcx
  __int64 v13; // rax
  int Property; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 *v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(struct CResource *, __int64, __int64, unsigned __int8 *); // rax
  int v22; // eax
  __int64 (__fastcall *v23)(CBaseExpression *, __int64); // rax
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // r9d
  int v41; // eax
  unsigned int v42; // ebx
  size_t ValueSizeInBytes; // rax
  const void *v44; // r9
  int v45; // eax
  struct CAnimationLoggingManager *v46; // rcx
  __int64 v47; // r10
  __int64 v48; // rax
  __int64 v49; // rax
  struct CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rcx
  __int64 v51; // r10
  CAnimationLoggingManager *v52; // rax
  unsigned int v53; // [rsp+20h] [rbp-99h]
  __int128 Buf1; // [rsp+50h] [rbp-69h] BYREF
  __int128 v55; // [rsp+60h] [rbp-59h]
  __int128 v56; // [rsp+70h] [rbp-49h]
  __int128 v57; // [rsp+80h] [rbp-39h]
  __int64 v58; // [rsp+90h] [rbp-29h]
  int v59; // [rsp+98h] [rbp-21h]
  char v60; // [rsp+9Ch] [rbp-1Dh]
  float v61[16]; // [rsp+A0h] [rbp-19h] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]

  v59 = 18;
  Buf1 = 0uLL;
  v3 = *((unsigned int *)this + 46);
  v55 = 0uLL;
  v56 = 0uLL;
  v57 = 0uLL;
  v58 = 0LL;
  v60 = 0;
  v5 = *(__int64 (__fastcall **)(CComponentTransform3D *, int, struct CExpressionValue *))(*(_QWORD *)a2 + 96LL);
  if ( (char *)v5 != (char *)CPropertySet::GetProperty )
  {
    if ( (char *)v5 == (char *)CColorBrush::GetProperty )
    {
      Property = CColorBrush::GetProperty(a2, v3, (struct CExpressionValue *)&Buf1);
    }
    else
    {
      if ( v5 == CComponentTransform3D::GetProperty )
      {
        v8 = CComponentTransform3D::GetProperty(a2, v3, (struct CExpressionValue *)&Buf1);
        goto LABEL_5;
      }
      if ( (char *)v5 == (char *)CVisual::GetProperty )
      {
        v8 = CVisual::GetProperty(a2, v3, (struct CExpressionValue *)&Buf1);
        goto LABEL_5;
      }
      Property = v5(a2, v3, (struct CExpressionValue *)&Buf1);
    }
    v8 = Property;
    goto LABEL_5;
  }
  v6 = *((_QWORD *)a2 + 10);
  v7 = *(_DWORD *)(v6 + 8 * v3);
  if ( v7 == 18 )
  {
    LODWORD(Buf1) = *(_DWORD *)((*(_DWORD *)(v6 + 8 * v3 + 4) & 0x1FFFFFFF) + *((_QWORD *)a2 + 14));
    v59 = 18;
  }
  else
  {
    switch ( v7 )
    {
      case 17:
        LOBYTE(Buf1) = *(_BYTE *)((*(_DWORD *)(v6 + 8 * v3 + 4) & 0x1FFFFFFF) + *((_QWORD *)a2 + 14));
        v59 = 17;
        break;
      case 35:
        v30 = *((_QWORD *)a2 + 14);
        v31 = *(_DWORD *)(v6 + 8 * v3 + 4) & 0x1FFFFFFF;
        v59 = 35;
        *(_QWORD *)&Buf1 = *(_QWORD *)(v30 + v31);
        break;
      case 52:
        v32 = *((_QWORD *)a2 + 14);
        v33 = *(_DWORD *)(v6 + 8 * v3 + 4) & 0x1FFFFFFF;
        v59 = 52;
        *(_QWORD *)&Buf1 = *(_QWORD *)(v32 + v33);
        DWORD2(Buf1) = *(_DWORD *)(v32 + v33 + 8);
        break;
      case 69:
        v36 = *((_QWORD *)a2 + 14);
        v37 = *(_DWORD *)(v6 + 8 * v3 + 4) & 0x1FFFFFFF;
        v59 = 69;
        Buf1 = *(_OWORD *)(v36 + v37);
        break;
      case 70:
        v34 = *((_QWORD *)a2 + 14);
        v35 = *(_DWORD *)(v6 + 8 * v3 + 4) & 0x1FFFFFFF;
        v59 = 70;
        Buf1 = *(_OWORD *)(v34 + v35);
        break;
      case 71:
        v38 = *((_QWORD *)a2 + 14);
        v39 = *(_DWORD *)(v6 + 8 * v3 + 4) & 0x1FFFFFFF;
        v59 = 71;
        Buf1 = *(_OWORD *)(v38 + v39);
        break;
      case 104:
        v15 = *((_QWORD *)a2 + 14);
        v16 = *(_DWORD *)(v6 + 8 * v3 + 4) & 0x1FFFFFFF;
        v59 = 104;
        Buf1 = *(_OWORD *)(v15 + v16);
        *(_QWORD *)&v55 = *(_QWORD *)(v15 + v16 + 16);
        break;
      case 265:
        v26 = *((_QWORD *)a2 + 14);
        v27 = *(_DWORD *)(v6 + 8 * v3 + 4) & 0x1FFFFFFF;
        v59 = 265;
        Buf1 = *(_OWORD *)(v26 + v27);
        v55 = *(_OWORD *)(v26 + v27 + 16);
        v56 = *(_OWORD *)(v26 + v27 + 32);
        v57 = *(_OWORD *)(v26 + v27 + 48);
        break;
      default:
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
  }
  v60 = 1;
  v8 = 0;
LABEL_5:
  if ( v8 < 0 )
  {
    v53 = 547;
LABEL_99:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v53);
    goto LABEL_14;
  }
  v9 = *((_QWORD *)this + 24);
  if ( !v9 || !*(_BYTE *)(v9 + 4) )
  {
    v10 = (char *)this + 64;
    if ( v59 == *((_DWORD *)this + 34) && v60 == *((_BYTE *)this + 140) )
    {
      if ( !v60 )
        goto LABEL_12;
      if ( v59 != 18 )
      {
        switch ( v59 )
        {
          case 11:
            v49 = *((_QWORD *)this + 16);
            if ( v58 && v49 )
            {
              v29 = CPathData::operator==(v58, *((_QWORD *)this + 16));
LABEL_61:
              if ( !v29 )
                goto LABEL_31;
            }
            else if ( v58 != v49 )
            {
              goto LABEL_31;
            }
            break;
          case 17:
            if ( (_BYTE)Buf1 == *v10 )
              break;
            goto LABEL_31;
          case 35:
            v29 = (_QWORD)Buf1 == *(_QWORD *)v10;
            goto LABEL_61;
          case 42:
            if ( *(float *)&Buf1 == *(float *)v10 )
              break;
            goto LABEL_31;
          case 52:
            v28 = Buf1 - *(_QWORD *)v10;
            if ( (_QWORD)Buf1 == *(_QWORD *)v10 )
              v28 = DWORD2(Buf1) - (unsigned __int64)*((unsigned int *)this + 18);
            v29 = v28 == 0;
            goto LABEL_61;
          case 69:
            v48 = Buf1 - *(_QWORD *)v10;
            if ( (_QWORD)Buf1 == *(_QWORD *)v10 )
              v48 = *((_QWORD *)&Buf1 + 1) - *((_QWORD *)this + 9);
            v29 = v48 == 0;
            goto LABEL_61;
          case 70:
            v13 = Buf1 - *(_QWORD *)v10;
            if ( (_QWORD)Buf1 == *(_QWORD *)v10 )
              v13 = *((_QWORD *)&Buf1 + 1) - *((_QWORD *)this + 9);
            if ( v13 )
              goto LABEL_31;
            break;
          case 71:
            v29 = (unsigned int)D2DQuaternion::operator==(&Buf1, (char *)this + 64) != 0;
            goto LABEL_61;
          case 104:
            v17 = Buf1 - *(_QWORD *)v10;
            if ( (_QWORD)Buf1 == *(_QWORD *)v10 )
            {
              v17 = *((_QWORD *)&Buf1 + 1) - *((_QWORD *)this + 9);
              if ( *((_QWORD *)&Buf1 + 1) == *((_QWORD *)this + 9) )
                v17 = v55 - *((_QWORD *)this + 10);
            }
            if ( v17 )
              goto LABEL_31;
            break;
          case 265:
            if ( !memcmp_0(&Buf1, (char *)this + 64, 0x40uLL) )
              break;
            goto LABEL_31;
          default:
            goto LABEL_31;
        }
LABEL_12:
        if ( !(*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 224LL))(this) )
          goto LABEL_13;
        goto LABEL_31;
      }
      if ( *(float *)&Buf1 == *(float *)v10 )
        goto LABEL_12;
    }
LABEL_31:
    if ( *((_DWORD *)this + 34) == 11 )
      v18 = (unsigned __int8 *)*((_QWORD *)this + 16);
    else
      v18 = (unsigned __int8 *)this + 64;
    v19 = *((unsigned int *)this + 36);
    v20 = *((unsigned int *)this + 46);
    v21 = *(__int64 (__fastcall **)(struct CResource *, __int64, __int64, unsigned __int8 *))(*(_QWORD *)a2 + 88LL);
    if ( (char *)v21 == (char *)CPropertySet::SetProperty )
    {
      v22 = CPropertySet::SetProperty((__int64)a2, v20, v19, v18);
    }
    else if ( (char *)v21 == (char *)CComponentTransform3D::SetProperty )
    {
      v22 = CComponentTransform3D::SetProperty((__int64)a2, v20, v19, (const struct _D3DCOLORVALUE *)v18);
    }
    else if ( (char *)v21 == (char *)CVisual::SetProperty )
    {
      v22 = CVisual::SetProperty(a2, v20, v19, v18);
    }
    else
    {
      v22 = v21(a2, v20, v19, v18);
    }
    v8 = v22;
    if ( v22 >= 0 )
    {
      if ( (*((_BYTE *)this + 208) & 0x40) != 0 )
      {
        if ( *((_DWORD *)this + 34) == 11 )
          v10 = (_BYTE *)*((_QWORD *)this + 16);
        CBaseExpression::GetDebugInfo(this);
        AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
        CAnimationLoggingManager::LogDebugPropertyUpdate(
          AnimationLoggingManagerNoRef,
          *((_QWORD *)this + 20),
          *((unsigned int *)this + 51),
          *((unsigned int *)this + 50),
          *((_DWORD *)this + 46),
          0LL,
          *((_DWORD *)this + 36),
          v51,
          v10);
      }
      goto LABEL_37;
    }
    v53 = 554;
    goto LABEL_99;
  }
  memset_0(v61, 0, sizeof(v61));
  v41 = CBaseExpression::MergeValueWithMask(
          (const struct CExpressionValue *)&Buf1,
          (CBaseExpression *)((char *)this + 64),
          (const struct SubchannelMaskInfo *)v9,
          v40,
          v61);
  v8 = v41;
  if ( v41 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x244u);
    goto LABEL_14;
  }
  v42 = v59;
  ValueSizeInBytes = CExpressionValue::GetValueSizeInBytes((CExpressionValue *)&Buf1);
  if ( !memcmp_0(v61, v44, ValueSizeInBytes) )
  {
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  v45 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, float *))(*(_QWORD *)a2 + 88LL))(
          a2,
          *((unsigned int *)this + 46),
          v42,
          v61);
  v8 = v45;
  if ( v45 >= 0 )
  {
    if ( (*((_BYTE *)this + 208) & 0x40) != 0 )
    {
      CBaseExpression::GetDebugInfo(this);
      v46 = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        v46,
        *((_QWORD *)this + 20),
        *((unsigned int *)this + 51),
        *((unsigned int *)this + 50),
        *((_DWORD *)this + 46),
        *((_QWORD *)this + 24),
        v59,
        v47,
        v61);
    }
LABEL_37:
    v23 = *(__int64 (__fastcall **)(CBaseExpression *, __int64))(*(_QWORD *)this + 48LL);
    if ( (char *)v23 == (char *)CExpression::IsOfType )
    {
      v24 = CExpression::IsOfType(this, 84LL);
    }
    else if ( (char *)v23 == (char *)CKeyframeAnimation::IsOfType )
    {
      v24 = CKeyframeAnimation::IsOfType(this, 84LL);
    }
    else
    {
      v24 = v23(this, 84LL);
    }
    if ( v24 )
    {
      v25 = *((_QWORD *)this + 6);
      if ( v25 )
      {
        if ( *(_QWORD *)(v25 + 56) )
        {
          v52 = CBaseExpression::GetAnimationLoggingManagerNoRef(this);
          CAnimationLoggingManager::LogKeyframeAnimationDirtiedTarget(v52, this);
        }
      }
    }
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x248u);
LABEL_14:
  v11 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v8;
}
