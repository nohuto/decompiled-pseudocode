/*
 * XREFs of ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A64A0
 * Callers:
 *     ?SetProperty@CPropertyBagBase@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A5250 (-SetProperty@CPropertyBagBase@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY@@@Z @ 0x1800A5658 (-ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 *     ?ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY@@@Z @ 0x1800A56FC (-ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 *     ?ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETSCALARPROPERTY@@@Z @ 0x1800A578C (-ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_.c)
 * Callees:
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x180011520 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180082680 (-OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A528C (-LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800A5B68 (--$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@P.c)
 *     ??$AddPropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800A5CF4 (--$AddPropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU.c)
 *     ??$AddPropertyValue@UD2DVector3@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector3@@@Z @ 0x1800A604C (--$AddPropertyValue@UD2DVector3@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVec.c)
 *     ??$AddPropertyValue@UD2DVector2@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector2@@@Z @ 0x1800A6178 (--$AddPropertyValue@UD2DVector2@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVec.c)
 *     ??$AddPropertyValue@M@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAM@Z @ 0x1800A6294 (--$AddPropertyValue@M@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAM@Z.c)
 *     ??$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x1800A63A0 (--$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D.c)
 *     ??$UpdatePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x1800A63F8 (--$UpdatePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x1801822C8 (--$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVec.c)
 *     ??$ChangePropertyValue@_N@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA_N@Z @ 0x1801826E4 (--$ChangePropertyValue@_N@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA_N@Z.c)
 *     ??$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x180182850 (--$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2.c)
 */

__int64 __fastcall CPropertyBag::UpdatePropertyValue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned int v6; // esi
  unsigned int v7; // r13d
  _QWORD *v9; // rax
  _DWORD *v10; // rcx
  __int64 v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  signed int v17; // esi
  unsigned int v18; // ebx
  __int64 (__fastcall ***v19)(__int64, unsigned int, unsigned int, __int64); // rcx
  int updated; // eax
  signed int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, ULONG, unsigned int); // rax
  signed int v27; // eax
  signed int v28; // eax
  __int64 (__fastcall *v29)(__int64, unsigned int, unsigned int, __int64); // rax
  signed int v30; // eax
  signed int v31; // eax
  signed int v32; // eax
  DWORD v33; // r9d
  signed int v34; // eax
  signed int v35; // eax
  signed int v36; // eax
  signed int v37; // eax
  unsigned int v38; // [rsp+20h] [rbp-50h]
  unsigned int Buffer; // [rsp+30h] [rbp-40h] BYREF
  __int64 v40; // [rsp+38h] [rbp-38h]
  unsigned int v41; // [rsp+40h] [rbp-30h] BYREF
  void *lpMem[2]; // [rsp+48h] [rbp-28h]
  int v43; // [rsp+58h] [rbp-18h]
  int v44; // [rsp+5Ch] [rbp-14h]
  int v45; // [rsp+60h] [rbp-10h]

  v6 = a4;
  v7 = a2;
  switch ( a4 )
  {
    case 0x11u:
      if ( (_DWORD)a2 )
      {
        if ( (_DWORD)a2 != 1 )
        {
          v18 = -2147024809;
          v17 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x11Bu);
LABEL_88:
          v38 = 198;
          goto LABEL_89;
        }
        v36 = CPropertyBag::ChangePropertyValue<bool>((CResource *)a1, a3);
        v17 = v36;
        if ( v36 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, 0x117u);
      }
      else
      {
        v37 = CPropertyBag::AddPropertyValue<D2DVector4>((CResource *)a1, a3);
        v17 = v37;
        if ( v37 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v37, 0x113u);
      }
      v18 = v17;
      if ( v17 >= 0 )
        goto LABEL_12;
      goto LABEL_88;
    case 0x12u:
      if ( (_DWORD)a2 )
      {
        if ( (_DWORD)a2 != 1 )
        {
          v18 = -2147024809;
          v17 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x11Bu);
LABEL_79:
          v38 = 202;
          goto LABEL_89;
        }
        v40 = 0LL;
        Buffer = a3;
        v9 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 64), &Buffer);
        if ( v9 )
        {
          v10 = (_DWORD *)v9[1];
          if ( a3 == v10[2] && *v10 == 18 )
          {
            v11 = 0LL;
            v10[3] = *(_DWORD *)a5;
            v12 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
            v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 360LL);
            if ( v12 )
            {
              v43 = 0;
              v44 = 0;
              v45 = 0;
              *(_OWORD *)lpMem = 0LL;
              v41 = a3;
              v11 = (__int64)RtlLookupElementGenericTable(v12, &v41);
              if ( lpMem[0] != lpMem[1] )
              {
                WPF::ProcessHeapImpl::Free(lpMem[0]);
                lpMem[0] = 0LL;
              }
            }
            v14 = v11 + 8;
            v15 = -v11;
            v16 = v14 & -(__int64)(v15 != 0);
            if ( v16 )
            {
              v23 = 0LL;
              if ( *(_DWORD *)((v14 & -(__int64)(v15 != 0)) + 0x18) )
              {
                do
                {
                  v24 = *(_QWORD *)(*(_QWORD *)v16 + 8 * v23);
                  v23 = (unsigned int)(v23 + 1);
                  *(_QWORD *)(v24 + 256) = v13;
                }
                while ( (unsigned int)v23 < *(_DWORD *)(v16 + 24) );
              }
              *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL) + 376LL) |= 2u;
              v25 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 528LL);
              v26 = *(void (__fastcall **)(__int64, ULONG, unsigned int))(*(_QWORD *)v25 + 104LL);
              if ( v26 == CPartitionVerticalBlankScheduler::ScheduleCompositionPass )
                CPartitionVerticalBlankScheduler::ScheduleCompositionPass(v25, 0, 8u);
              else
                v26(v25, 0LL, 8u);
            }
            v17 = 0;
            goto LABEL_11;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x1E9u);
          v17 = -2147024809;
        }
        else
        {
          v17 = -2147023728;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070490, 0x255u);
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070490, 0x1DFu);
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x117u);
        goto LABEL_11;
      }
      v27 = CPropertyBag::AddPropertyValue<float>((CResource *)a1, a3, 18, (__int64)a5);
      v17 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0x113u);
LABEL_11:
      v18 = v17;
      if ( v17 >= 0 )
      {
LABEL_12:
        v6 = a4;
        break;
      }
      goto LABEL_79;
    case 0x23u:
      if ( (_DWORD)a2 )
      {
        if ( (_DWORD)a2 != 1 )
        {
          v18 = -2147024809;
          v17 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x11Bu);
LABEL_73:
          v38 = 206;
          goto LABEL_89;
        }
        v35 = CPropertyBag::ChangePropertyValue<bool>((CResource *)a1, a3);
        v17 = v35;
        if ( v35 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v35, 0x117u);
      }
      else
      {
        v32 = CPropertyBag::AddPropertyValue<D2DVector2>((CResource *)a1, a3, 35, (__int64)a5);
        v17 = v32;
        if ( v32 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v32, 0x113u);
      }
      v18 = v17;
      if ( v17 >= 0 )
        goto LABEL_12;
      goto LABEL_73;
    case 0x34u:
      if ( (_DWORD)a2 )
      {
        if ( (_DWORD)a2 != 1 )
        {
          v18 = -2147024809;
          v17 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x11Bu);
LABEL_66:
          v38 = 210;
          goto LABEL_89;
        }
        v34 = CPropertyBag::ChangePropertyValue<bool>((CResource *)a1, a3);
        v17 = v34;
        if ( v34 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v34, 0x117u);
      }
      else
      {
        v31 = CPropertyBag::AddPropertyValue<D2DVector3>((CResource *)a1, a3, 52, (__int64)a5);
        v17 = v31;
        if ( v31 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v31, 0x113u);
      }
      v18 = v17;
      if ( v17 >= 0 )
        goto LABEL_12;
      goto LABEL_66;
    case 0x45u:
      updated = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2, a3, 69LL, a5);
      v18 = updated;
      if ( updated < 0 )
      {
        v38 = 214;
        goto LABEL_55;
      }
      break;
    case 0x46u:
      updated = CPropertyBag::UpdatePropertyValue<_D3DCOLORVALUE>((CResource *)a1, a2, a3, 70, (__int64)a5);
      v18 = updated;
      if ( updated >= 0 )
        break;
      v38 = 218;
      goto LABEL_55;
    case 0x47u:
      updated = CPropertyBag::UpdatePropertyValue<D2DVector4>(a1, a2, a3, 71LL, a5);
      v18 = updated;
      if ( updated < 0 )
      {
        v38 = 222;
        goto LABEL_55;
      }
      break;
    case 0x68u:
      if ( (_DWORD)a2 )
      {
        if ( (_DWORD)a2 != 1 )
        {
          v18 = -2147024809;
          v17 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x11Bu);
LABEL_57:
          v38 = 226;
LABEL_89:
          v33 = v17;
          goto LABEL_90;
        }
        v22 = CPropertyBag::ChangePropertyValue<D2D_MATRIX_3X2_F>(a1, a3, 104, (__int64)a5);
        v17 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x117u);
      }
      else
      {
        v28 = CPropertyBag::AddPropertyValue<D2D_MATRIX_3X2_F>((CResource *)a1, a3, 104, (__int64)a5);
        v17 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28, 0x113u);
      }
      v18 = v17;
      if ( v17 >= 0 )
        goto LABEL_12;
      goto LABEL_57;
    case 0x109u:
      updated = CPropertyBag::UpdatePropertyValue<D2DMatrix>((CResource *)a1, a2, a3, 265, (__int64)a5);
      v18 = updated;
      if ( updated >= 0 )
        break;
      v38 = 230;
LABEL_55:
      v33 = updated;
LABEL_90:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v33, v38);
      return v18;
    default:
      break;
  }
  v19 = *(__int64 (__fastcall ****)(__int64, unsigned int, unsigned int, __int64))(a1 + 136);
  if ( v19 )
  {
    v29 = **v19;
    v30 = v29 == CEffectBrush::OnPropertyValueChanged
        ? CEffectBrush::OnPropertyValueChanged((__int64)v19, a3, v6, (__int64)a5)
        : v29((__int64)v19, a3, v6, (__int64)a5);
    v18 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v30, 0xF0u);
      return v18;
    }
  }
  updated = CPropertyBagBase::LogValueUpdate(a1, v7, a3, v6, a5);
  v18 = updated;
  if ( updated < 0 )
  {
    v38 = 243;
    goto LABEL_55;
  }
  return v18;
}
