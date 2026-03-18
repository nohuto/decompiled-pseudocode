/*
 * XREFs of ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180031BF0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SetProperty@CPropertyBagBase@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800310C0 (-SetProperty@CPropertyBagBase@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETSCALARPROPERTY@@@Z @ 0x1800310FC (-ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_.c)
 *     ?ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY@@@Z @ 0x180031160 (-ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 *     ?ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY@@@Z @ 0x180031204 (-ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 * Callees:
 *     ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800107D0 (-OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$UpdatePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x18002347C (--$UpdatePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PE.c)
 *     ??$UpdatePropertyValue@UD2DVector3@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector3@@@Z @ 0x1800234D4 (--$UpdatePropertyValue@UD2DVector3@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2.c)
 *     ??$UpdatePropertyValue@UD2DVector2@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector2@@@Z @ 0x18002352C (--$UpdatePropertyValue@UD2DVector2@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2.c)
 *     ?LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180031294 (-LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$AddPropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800318E0 (--$AddPropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU.c)
 *     ??$AddPropertyValue@M@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAM@Z @ 0x180031A3C (--$AddPropertyValue@M@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAM@Z.c)
 *     ??$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x180031B48 (--$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXXZ @ 0x1800658C0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x18017C5C0 (--$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2.c)
 */

__int64 __fastcall CPropertyBag::UpdatePropertyValue(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int v9; // edi
  _QWORD *v10; // rax
  _DWORD *v11; // rcx
  char *v12; // rbx
  struct _RTL_GENERIC_TABLE *v13; // rcx
  __int64 v14; // r9
  char *v15; // rdx
  __int64 j; // r8
  __int64 v17; // rcx
  CPartitionVerticalBlankScheduler *v18; // rcx
  void (__fastcall *v19)(CPartitionVerticalBlankScheduler *__hidden); // rdx
  unsigned int v20; // ebx
  _QWORD *v21; // rax
  __int64 v22; // rax
  char *v23; // rbx
  struct _RTL_GENERIC_TABLE *v24; // rcx
  __int64 v25; // r9
  char *v26; // rdx
  __int64 i; // r8
  __int64 v28; // rcx
  HANDLE *v29; // rcx
  void (__fastcall *v30)(CPartitionVerticalBlankScheduler *__hidden); // rdx
  __int64 (__fastcall ***v31)(__int64, unsigned int, unsigned int, __int64); // rcx
  int v32; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 (__fastcall *v37)(__int64, unsigned int, unsigned int, __int64); // rax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int updated; // eax
  int v43; // eax
  int v44; // eax
  unsigned int v45; // [rsp+20h] [rbp-50h]
  unsigned int v46; // [rsp+20h] [rbp-50h]
  unsigned int v47; // [rsp+20h] [rbp-50h]
  __int64 v48; // [rsp+30h] [rbp-40h]
  __int64 v49; // [rsp+30h] [rbp-40h]
  unsigned int Buffer; // [rsp+38h] [rbp-38h] BYREF
  __int64 v51; // [rsp+40h] [rbp-30h]
  unsigned int v52; // [rsp+48h] [rbp-28h] BYREF
  void *lpMem[2]; // [rsp+50h] [rbp-20h]
  __int64 v54; // [rsp+60h] [rbp-10h]
  int v55; // [rsp+68h] [rbp-8h]

  if ( a4 == 104 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v9 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x11Bu);
        v20 = -2147024809;
LABEL_73:
        v45 = 226;
        goto LABEL_74;
      }
      v9 = 0;
      Buffer = a3;
      v51 = 0LL;
      v21 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 64), &Buffer);
      if ( v21 )
      {
        v22 = v21[1];
        if ( a3 == *(_DWORD *)(v22 + 8) && *(_DWORD *)v22 == 104 )
        {
          v23 = 0LL;
          *(_OWORD *)(v22 + 12) = *(_OWORD *)a5;
          *(_QWORD *)(v22 + 28) = *(_QWORD *)(a5 + 16);
          v24 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
          v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL);
          v49 = v25;
          if ( v24 )
          {
            v54 = 0LL;
            v55 = 0;
            *(_OWORD *)lpMem = 0LL;
            v52 = a3;
            v23 = (char *)RtlLookupElementGenericTable(v24, &v52);
            if ( lpMem[0] != lpMem[1] )
            {
              WPF::ProcessHeapImpl::Free(lpMem[0]);
              lpMem[0] = 0LL;
            }
            v25 = v49;
          }
          v26 = v23 + 8;
          if ( !v23 )
            v26 = 0LL;
          if ( v26 )
          {
            for ( i = 0LL;
                  (unsigned int)i < *((_DWORD *)v26 + 6);
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v26 + 8 * v28) + 216LL) = v25 )
            {
              v28 = (unsigned int)i;
              i = (unsigned int)(i + 1);
            }
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 376LL) |= 2u;
            v29 = *(HANDLE **)(*(_QWORD *)(a1 + 16) + 560LL);
            v30 = (void (__fastcall *)(CPartitionVerticalBlankScheduler *__hidden))*((_QWORD *)*v29 + 13);
            if ( v30 == CPartitionVerticalBlankScheduler::ScheduleCompositionPass )
              SetEvent(v29[8]);
            else
              (*((void (__fastcall **)(HANDLE *, void (__fastcall *)(CPartitionVerticalBlankScheduler *__hidden), __int64))*v29
               + 13))(
                v29,
                v30,
                i);
          }
          goto LABEL_37;
        }
        v9 = -2147024809;
        v47 = 489;
      }
      else
      {
        v9 = -2147023728;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x255u);
        v47 = 479;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v47);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x117u);
      goto LABEL_37;
    }
    v36 = CPropertyBag::AddPropertyValue<D2D_MATRIX_3X2_F>((CResource *)a1, a3, 104, a5);
    v9 = v36;
    if ( v36 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x113u);
LABEL_37:
    v20 = v9;
    if ( v9 >= 0 )
    {
LABEL_38:
      v31 = *(__int64 (__fastcall ****)(__int64, unsigned int, unsigned int, __int64))(a1 + 136);
      if ( v31
        && ((v37 = **v31, v37 != CEffectBrush::OnPropertyValueChanged)
          ? (v38 = v37((__int64)v31, a3, a4, a5))
          : (v38 = CEffectBrush::OnPropertyValueChanged((__int64)v31, a3, a4, a5)),
            v20 = v38,
            v38 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xF0u);
      }
      else
      {
        v32 = CPropertyBagBase::LogValueUpdate(a1, a2, a3, a4, (unsigned __int8 *)a5);
        v20 = v32;
        if ( v32 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xF3u);
      }
      return v20;
    }
    goto LABEL_73;
  }
  if ( a4 == 18 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v9 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x11Bu);
        v20 = -2147024809;
LABEL_67:
        v45 = 202;
LABEL_74:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v45);
        return v20;
      }
      v9 = 0;
      Buffer = a3;
      v51 = 0LL;
      v10 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 64), &Buffer);
      if ( v10 )
      {
        v11 = (_DWORD *)v10[1];
        if ( a3 == v11[2] && *v11 == a4 )
        {
          v12 = 0LL;
          v11[3] = *(_DWORD *)a5;
          v13 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
          v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL);
          v48 = v14;
          if ( v13 )
          {
            v54 = 0LL;
            v55 = 0;
            *(_OWORD *)lpMem = 0LL;
            v52 = a3;
            v12 = (char *)RtlLookupElementGenericTable(v13, &v52);
            if ( lpMem[0] != lpMem[1] )
            {
              WPF::ProcessHeapImpl::Free(lpMem[0]);
              lpMem[0] = 0LL;
            }
            v14 = v48;
          }
          v15 = v12 + 8;
          if ( !v12 )
            v15 = 0LL;
          if ( v15 )
          {
            for ( j = 0LL;
                  (unsigned int)j < *((_DWORD *)v15 + 6);
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8 * v17) + 216LL) = v14 )
            {
              v17 = (unsigned int)j;
              j = (unsigned int)(j + 1);
            }
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 376LL) |= 2u;
            v18 = *(CPartitionVerticalBlankScheduler **)(*(_QWORD *)(a1 + 16) + 560LL);
            v19 = *(void (__fastcall **)(CPartitionVerticalBlankScheduler *__hidden))(*(_QWORD *)v18 + 104LL);
            if ( v19 == CPartitionVerticalBlankScheduler::ScheduleCompositionPass )
              CPartitionVerticalBlankScheduler::ScheduleCompositionPass(v18);
            else
              (*(void (__fastcall **)(CPartitionVerticalBlankScheduler *, void (__fastcall *)(CPartitionVerticalBlankScheduler *__hidden), __int64))(*(_QWORD *)v18 + 104LL))(
                v18,
                v19,
                j);
          }
          goto LABEL_19;
        }
        v9 = -2147024809;
        v46 = 489;
      }
      else
      {
        v9 = -2147023728;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x255u);
        v46 = 479;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v46);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x117u);
      goto LABEL_19;
    }
    v35 = CPropertyBag::AddPropertyValue<float>((CResource *)a1, a3, 18, a5);
    v9 = v35;
    if ( v35 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x113u);
LABEL_19:
    v20 = v9;
    if ( v9 >= 0 )
      goto LABEL_38;
    goto LABEL_67;
  }
  switch ( a4 )
  {
    case 0x11u:
      updated = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2);
      v20 = updated;
      if ( updated >= 0 )
        goto LABEL_38;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xC6u);
      break;
    case 0x23u:
      v41 = CPropertyBag::UpdatePropertyValue<D2DVector2>((CResource *)a1, a2, a3, a4, a5);
      v20 = v41;
      if ( v41 >= 0 )
        goto LABEL_38;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0xCEu);
      break;
    case 0x34u:
      v40 = CPropertyBag::UpdatePropertyValue<D2DVector3>((CResource *)a1, a2, a3, a4, a5);
      v20 = v40;
      if ( v40 >= 0 )
        goto LABEL_38;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0xD2u);
      break;
    case 0x45u:
      v43 = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2);
      v20 = v43;
      if ( v43 >= 0 )
        goto LABEL_38;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xD6u);
      break;
    case 0x46u:
      v39 = CPropertyBag::UpdatePropertyValue<_D3DCOLORVALUE>((CResource *)a1, a2, a3, a4, a5);
      v20 = v39;
      if ( v39 >= 0 )
        goto LABEL_38;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0xDAu);
      break;
    case 0x47u:
      v44 = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2);
      v20 = v44;
      if ( v44 >= 0 )
        goto LABEL_38;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0xDEu);
      break;
    case 0x109u:
      v34 = CPropertyBag::UpdatePropertyValue<D2DMatrix>((CResource *)a1, a2, a3, a4, a5);
      v20 = v34;
      if ( v34 >= 0 )
        goto LABEL_38;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xE6u);
      break;
    default:
      goto LABEL_38;
  }
  return v20;
}
