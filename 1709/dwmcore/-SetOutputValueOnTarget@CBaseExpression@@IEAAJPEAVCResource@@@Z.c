/*
 * XREFs of ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800A2208 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180053A20 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180053A70 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180095B20 (-GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180095F80 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A0A90 (-SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A0BF0 (-GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetProperty@CPropertyBagBase@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A5250 (-SetProperty@CPropertyBagBase@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A5300 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x180157080 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 *     ?GetDebugInfo@CBaseExpression@@QEBAPEBGXZ @ 0x180158420 (-GetDebugInfo@CBaseExpression@@QEBAPEBGXZ.c)
 *     ?GetTargetObjectHandle@CBaseExpression@@QEBAIXZ @ 0x180158474 (-GetTargetObjectHandle@CBaseExpression@@QEBAIXZ.c)
 *     ?GetTargetResourceType@CBaseExpression@@QEBA?AW4MIL_RESOURCE_TYPE@@XZ @ 0x1801584B8 (-GetTargetResourceType@CBaseExpression@@QEBA-AW4MIL_RESOURCE_TYPE@@XZ.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180159000 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x1801878C8 (-GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ.c)
 *     ??8D2DQuaternion@@QEBAHAEBU0@@Z @ 0x1801C8E7C (--8D2DQuaternion@@QEBAHAEBU0@@Z.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValueOnTarget(CBaseExpression *this, struct CResource *a2)
{
  __int64 (__fastcall *v4)(CPropertyBagBase *__hidden, unsigned int, struct CExpressionValue *); // rax
  signed int Property; // eax
  signed int v6; // edi
  __int64 v7; // rdi
  float *v8; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  float *v13; // r9
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(struct CResource *, __int64, __int64, float *); // rax
  signed int v16; // eax
  unsigned int v17; // esi
  __int128 v18; // xmm0
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  bool v21; // cl
  unsigned int v22; // r9d
  size_t ValueSizeInBytes; // rax
  __int64 v24; // r8
  __int64 v25; // r10
  __int64 v26; // rcx
  __int64 TargetResourceType; // r8
  unsigned int v28; // r11d
  __int64 v29; // r10
  __int128 Buf1; // [rsp+50h] [rbp-59h] BYREF
  __int64 v31; // [rsp+60h] [rbp-49h]
  __int64 v32; // [rsp+68h] [rbp-41h]
  __int64 v33; // [rsp+70h] [rbp-39h]
  __int64 v34; // [rsp+78h] [rbp-31h]
  __int64 v35; // [rsp+80h] [rbp-29h]
  __int64 v36; // [rsp+88h] [rbp-21h]
  unsigned int v37; // [rsp+90h] [rbp-19h]
  char v38; // [rsp+94h] [rbp-15h]
  float v39; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v40[60]; // [rsp+A4h] [rbp-5h] BYREF

  v37 = 18;
  Buf1 = 0uLL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v38 = 0;
  v4 = *(__int64 (__fastcall **)(CPropertyBagBase *__hidden, unsigned int, struct CExpressionValue *))(*(_QWORD *)a2 + 96LL);
  if ( v4 == CPropertyBagBase::GetProperty )
  {
    Property = CPropertyBagBase::GetProperty(a2, *((_DWORD *)this + 44), (struct CExpressionValue *)&Buf1);
LABEL_3:
    v6 = Property;
    goto LABEL_4;
  }
  if ( v4 == CCompositionSpotLight::GetProperty )
  {
    Property = CCompositionSpotLight::GetProperty(a2, *((_DWORD *)this + 44), (struct CExpressionValue *)&Buf1);
    goto LABEL_3;
  }
  if ( (char *)v4 != (char *)CColorBrush::GetProperty )
  {
    v19 = *((unsigned int *)this + 44);
    if ( (char *)v4 == (char *)CComponentTransform3D::GetProperty )
    {
      Property = CComponentTransform3D::GetProperty(a2, v19, (struct CExpressionValue *)&Buf1);
    }
    else if ( (char *)v4 == (char *)CVisual::GetProperty )
    {
      Property = CVisual::GetProperty(a2, v19, (struct CExpressionValue *)&Buf1);
    }
    else
    {
      Property = v4(a2, v19, (struct CExpressionValue *)&Buf1);
    }
    goto LABEL_3;
  }
  v6 = 0;
  if ( *((_DWORD *)this + 44) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x1Du);
  }
  else
  {
    v18 = *((_OWORD *)a2 + 5);
    v37 = 70;
    v38 = 1;
    Buf1 = v18;
  }
LABEL_4:
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x222u);
    return (unsigned int)v6;
  }
  v7 = *((_QWORD *)this + 23);
  if ( !v7 || !*(_BYTE *)(v7 + 4) )
  {
    v8 = (float *)((char *)this + 64);
    if ( v37 == *((_DWORD *)this + 32) && v38 == *((_BYTE *)this + 132) )
    {
      if ( !v38 )
        goto LABEL_11;
      if ( v37 == 18 )
      {
        if ( *(float *)&Buf1 == *v8 )
          goto LABEL_11;
      }
      else
      {
        switch ( v37 )
        {
          case 0x11u:
            if ( (_BYTE)Buf1 != *(_BYTE *)v8 )
              goto LABEL_24;
            goto LABEL_11;
          case 0x23u:
            v21 = (_QWORD)Buf1 == *(_QWORD *)v8;
            break;
          case 0x2Au:
            if ( *(float *)&Buf1 != *v8 )
              goto LABEL_24;
            goto LABEL_11;
          case 0x34u:
            v20 = Buf1 - *(_QWORD *)v8;
            if ( (_QWORD)Buf1 == *(_QWORD *)v8 )
              v20 = DWORD2(Buf1) - (unsigned __int64)*((unsigned int *)this + 18);
            v21 = v20 == 0;
            break;
          case 0x45u:
            v26 = Buf1 - *(_QWORD *)v8;
            if ( (_QWORD)Buf1 == *(_QWORD *)v8 )
              v26 = *((_QWORD *)&Buf1 + 1) - *((_QWORD *)this + 9);
            v21 = v26 == 0;
            break;
          case 0x46u:
            v10 = Buf1 - *(_QWORD *)v8;
            if ( (_QWORD)Buf1 == *(_QWORD *)v8 )
              v10 = *((_QWORD *)&Buf1 + 1) - *((_QWORD *)this + 9);
            if ( v10 )
              goto LABEL_24;
            goto LABEL_11;
          case 0x47u:
            v21 = (unsigned int)D2DQuaternion::operator==(&Buf1, (char *)this + 64) != 0;
            break;
          case 0x68u:
            v11 = Buf1 - *(_QWORD *)v8;
            if ( (_QWORD)Buf1 == *(_QWORD *)v8 )
            {
              v11 = *((_QWORD *)&Buf1 + 1) - *((_QWORD *)this + 9);
              if ( *((_QWORD *)&Buf1 + 1) == *((_QWORD *)this + 9) )
                v11 = v31 - *((_QWORD *)this + 10);
            }
            if ( v11 )
              goto LABEL_24;
            goto LABEL_11;
          case 0x109u:
            if ( !memcmp_0(&Buf1, (char *)this + 64, 0x40uLL) )
              goto LABEL_11;
            goto LABEL_24;
          default:
            goto LABEL_24;
        }
        if ( v21 )
        {
LABEL_11:
          if ( !(*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 224LL))(this) )
            return 0LL;
        }
      }
    }
LABEL_24:
    v12 = *((unsigned int *)this + 34);
    v13 = (float *)((char *)this + 64);
    v14 = *((unsigned int *)this + 44);
    v15 = *(__int64 (__fastcall **)(struct CResource *, __int64, __int64, float *))(*(_QWORD *)a2 + 88LL);
    if ( (char *)v15 == (char *)CCompositionSpotLight::SetProperty )
    {
      v16 = CCompositionSpotLight::SetProperty((float *)a2, v14, v12, v13);
    }
    else if ( (char *)v15 == (char *)CPropertyBagBase::SetProperty )
    {
      v16 = CPropertyBagBase::SetProperty(a2, v14, v12, v13);
    }
    else if ( (char *)v15 == (char *)CComponentTransform3D::SetProperty )
    {
      v16 = CComponentTransform3D::SetProperty(a2, v14, v12, (__int64)v13);
    }
    else if ( (char *)v15 == (char *)CVisual::SetProperty )
    {
      v16 = CVisual::SetProperty((float *)a2, v14, v12, v13);
    }
    else
    {
      v16 = v15(a2, v14, v12, v13);
    }
    v17 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x229u);
      return v17;
    }
    if ( (*((_BYTE *)this + 192) & 0x40) != 0 )
    {
      CBaseExpression::GetDebugInfo(this);
      CBaseExpression::GetTargetObjectHandle(this);
      TargetResourceType = (unsigned int)CBaseExpression::GetTargetResourceType(this);
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        *(_QWORD *)(*((_QWORD *)this + 6) + 56LL),
        *((_QWORD *)this + 19),
        TargetResourceType,
        v28,
        *((_DWORD *)this + 44),
        0LL,
        *((_DWORD *)this + 34),
        v29,
        (char *)this + 64);
    }
    return 0LL;
  }
  v39 = 0.0;
  memset_0(v40, 0, sizeof(v40));
  v6 = CBaseExpression::MergeValueWithMask(
         (const struct CExpressionValue *)&Buf1,
         (CBaseExpression *)((char *)this + 64),
         (const struct SubchannelMaskInfo *)v7,
         v22,
         &v39);
  if ( v6 >= 0 )
  {
    ValueSizeInBytes = CExpressionValue::GetValueSizeInBytes((CExpressionValue *)&Buf1);
    if ( memcmp_0(&v39, &Buf1, ValueSizeInBytes) )
    {
      v6 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, _QWORD, float *))(*(_QWORD *)a2 + 88LL))(
             a2,
             *((unsigned int *)this + 44),
             v37,
             &v39);
      if ( v6 >= 0 )
      {
        if ( (*((_BYTE *)this + 192) & 0x40) != 0 )
        {
          CBaseExpression::GetDebugInfo(this);
          CBaseExpression::GetTargetObjectHandle(this);
          v24 = (unsigned int)CBaseExpression::GetTargetResourceType(this);
          CAnimationLoggingManager::LogDebugPropertyUpdate(
            *(_QWORD *)(*((_QWORD *)this + 6) + 56LL),
            *((_QWORD *)this + 19),
            v24,
            v28,
            *((_DWORD *)this + 44),
            *((_QWORD *)this + 23),
            v37,
            v25,
            &v39);
        }
        return 0LL;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x245u);
      return (unsigned int)v6;
    }
    return 0LL;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x241u);
  return (unsigned int)v6;
}
