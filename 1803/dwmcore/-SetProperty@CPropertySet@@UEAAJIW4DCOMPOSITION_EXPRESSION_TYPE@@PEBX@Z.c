/*
 * XREFs of ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180039340
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001A4F8 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x18001BB0C (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x18001BB9C (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x18002AEE0 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x18002AF20 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x18002B158 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ??$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180038770 (--$LogValueUpdate@UD2D_MATRIX_3X2_F@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x180038C5C (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180039200 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801A25A4 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801A33DC (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x1801A3460 (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x1801A34E4 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801A3568 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

__int64 __fastcall CPropertySet::SetProperty(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 *a4)
{
  char *v4; // r13
  __int64 v5; // rbp
  int updated; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, __int64, _QWORD); // rcx
  unsigned int v22; // r15d
  int v23; // eax
  char *v24; // rdi
  struct _RTL_GENERIC_TABLE *v25; // rcx
  __int64 v26; // rbx
  char *v27; // r8
  unsigned int j; // edx
  __int64 v29; // rcx
  int v30; // eax
  _DWORD *v31; // r9
  __int64 v32; // r8
  __int64 (__fastcall ***v33)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned int v34; // r12d
  int v35; // eax
  int v36; // edi
  struct _RTL_GENERIC_TABLE *v37; // rcx
  __int64 v38; // rdi
  char *v39; // r8
  unsigned int i; // edx
  __int64 v41; // rcx
  __int64 v42; // r9
  unsigned int v43; // r10d
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  _QWORD v54[2]; // [rsp+40h] [rbp-68h] BYREF
  int Buffer; // [rsp+50h] [rbp-58h] BYREF
  void *lpMem[2]; // [rsp+58h] [rbp-50h]
  __int64 v57; // [rsp+68h] [rbp-40h]
  int v58; // [rsp+70h] [rbp-38h]
  void *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = 0LL;
  v5 = a2;
  if ( (_DWORD)a3 == 18 )
  {
    if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80)
      && (v32 = *(_QWORD *)(a1 + 80), *(_DWORD *)(v32 + 8 * v5) == 18) )
    {
      *(_DWORD *)((*(_DWORD *)(v32 + 8 * v5 + 4) & 0x1FFFFFFF) + *(_QWORD *)(a1 + 112)) = *v31;
      v33 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 72);
      v34 = *(_DWORD *)(v32 + 8 * v5);
      if ( v33 && (v35 = (**v33)(v33, (unsigned int)v5, v34), v36 = v35, v35 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x1BBu);
      }
      else
      {
        v37 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
        v38 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
        if ( v37 )
        {
          Buffer = v5;
          v57 = 0LL;
          v58 = 0;
          *(_OWORD *)lpMem = 0LL;
          v4 = (char *)RtlLookupElementGenericTable(v37, &Buffer);
          if ( lpMem[0] != lpMem[1] )
          {
            operator delete(lpMem[0]);
            lpMem[0] = 0LL;
          }
        }
        v39 = v4 + 8;
        if ( !v4 )
          v39 = 0LL;
        if ( v39 )
        {
          for ( i = 0; i < *((_DWORD *)v39 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v39 + 8 * v41) + 272LL) = v38 )
            v41 = i++;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 424LL) |= 2u;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 552LL) + 104LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 552LL),
            0LL,
            8LL);
        }
        CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>(a1, (unsigned int)v5, v34, 1u, a4);
        switch ( v34 )
        {
          case 0x12u:
            v36 = 0;
            v42 = *(_QWORD *)(a1 + 48);
            if ( v42 )
            {
              v43 = *(_DWORD *)(v42 + 68);
              if ( v43 )
              {
                if ( *(_DWORD *)(a1 + 56) )
                {
                  v44 = *(_DWORD *)(a1 + 64);
                  if ( _bittest(&v44, v5) )
                  {
                    v45 = *(_QWORD *)(a1 + 16);
                    v54[1] = *(unsigned int *)(a1 + 56);
                    v46 = *(_QWORD *)(*(_QWORD *)(v45 + 1312) + 56LL);
                    v54[0] = v43;
                    v47 = CoreUICallSend(v46, v54, 2LL, 12LL, 0, &unk_180239CE0);
                    v36 = v47;
                    if ( v47 == -2018375675 )
                    {
                      v36 = 0;
                    }
                    else if ( v47 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0xC5u);
                    }
                  }
                }
              }
            }
            if ( v36 >= 0 )
              goto LABEL_73;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x221u);
            break;
          case 0x23u:
            v48 = CPropertyChangeResource::NotifyVector2PropertyChanged(
                    (CPropertyChangeResource *)a1,
                    (unsigned int)v5,
                    (const struct D2DVector2 *)(*(_QWORD *)(a1 + 112)
                                              + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8 * v5 + 4) & 0x1FFFFFFF)));
            v36 = v48;
            if ( v48 >= 0 )
              goto LABEL_73;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x224u);
            break;
          case 0x34u:
            v49 = CPropertyChangeResource::NotifyVector3PropertyChanged(
                    (CPropertyChangeResource *)a1,
                    (unsigned int)v5,
                    (const struct D2DVector3 *)(*(_QWORD *)(a1 + 112)
                                              + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8 * v5 + 4) & 0x1FFFFFFF)));
            v36 = v49;
            if ( v49 >= 0 )
              goto LABEL_73;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x227u);
            break;
          case 0x45u:
            v50 = CPropertyChangeResource::NotifyVector4PropertyChanged(
                    (CPropertyChangeResource *)a1,
                    v5,
                    (const struct D2DVector4 *)(*(_QWORD *)(a1 + 112)
                                              + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8 * v5 + 4) & 0x1FFFFFFF)));
            v36 = v50;
            if ( v50 >= 0 )
              goto LABEL_73;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x22Au);
            break;
          case 0x68u:
            v51 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
                    (CPropertyChangeResource *)a1,
                    (unsigned int)v5,
                    (const struct D2D_MATRIX_3X2_F *)(*(_QWORD *)(a1 + 112)
                                                    + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8 * v5 + 4) & 0x1FFFFFFF)));
            v36 = v51;
            if ( v51 >= 0 )
              goto LABEL_73;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x231u);
            break;
          case 0x109u:
            v52 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
                    (CPropertyChangeResource *)a1,
                    (unsigned int)v5,
                    (const struct D2DMatrix *)(*(_QWORD *)(a1 + 112)
                                             + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8 * v5 + 4) & 0x1FFFFFFF)));
            v36 = v52;
            if ( v52 >= 0 )
              goto LABEL_73;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x234u);
            break;
          default:
LABEL_73:
            v36 = 0;
            break;
        }
        if ( v36 >= 0 )
          return 0;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x1CEu);
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x197u);
    }
    else
    {
      v36 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x190u);
    }
    v9 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xFCu);
      return v9;
    }
    return 0;
  }
  if ( (_DWORD)a3 == 104 )
  {
    if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(a1 + 80)
      && (v18 = *(_QWORD *)(a1 + 80), *(_DWORD *)(v18 + 8 * v5) == 104) )
    {
      v19 = *(_QWORD *)(a1 + 112);
      v20 = *(_DWORD *)(v18 + 8 * v5 + 4) & 0x1FFFFFFF;
      *(_OWORD *)(v20 + v19) = *(_OWORD *)v17;
      *(_QWORD *)(v20 + v19 + 16) = *(_QWORD *)(v17 + 16);
      v21 = *(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD))(a1 + 72);
      v22 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8 * v5);
      if ( v21 && (v23 = (**v21)(v21, v16, v22), v9 = v23, v23 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1BBu);
      }
      else
      {
        v24 = 0LL;
        v25 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
        v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
        if ( v25 )
        {
          v57 = 0LL;
          v58 = 0;
          *(_OWORD *)lpMem = 0LL;
          Buffer = v5;
          v24 = (char *)RtlLookupElementGenericTable(v25, &Buffer);
          if ( lpMem[0] != lpMem[1] )
          {
            operator delete(lpMem[0]);
            lpMem[0] = 0LL;
          }
        }
        v27 = v24 + 8;
        if ( !v24 )
          v27 = 0LL;
        if ( v27 )
        {
          for ( j = 0; j < *((_DWORD *)v27 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 8 * v29) + 272LL) = v26 )
            v29 = j++;
          *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 240LL) + 424LL) |= 2u;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 552LL) + 104LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 552LL),
            0LL,
            8LL);
        }
        CPropertySet::LogValueUpdate<D2D_MATRIX_3X2_F>(a1, (unsigned int)v5, v22, 1u, a4);
        v30 = CPropertySet::NotifyPropertyValue(a1, v5, v22);
        v9 = v30;
        if ( v30 >= 0 )
          return 0;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x1CEu);
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x197u);
    }
    else
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x190u);
    }
    if ( (v9 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x114u);
      return v9;
    }
    return 0;
  }
  switch ( (int)a3 )
  {
    case 17:
      updated = CPropertySet::UpdateProperty<bool>(a1, a2);
      v9 = updated;
      if ( updated >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xF8u);
      break;
    case 35:
      v10 = CPropertySet::UpdateProperty<D2DVector2>(a1);
      v9 = v10;
      if ( v10 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x100u);
      break;
    case 52:
      v11 = CPropertySet::UpdateProperty<D2DVector3>(a1);
      v9 = v11;
      if ( v11 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x104u);
      break;
    case 69:
      v12 = CPropertySet::UpdateProperty<D2DQuaternion>(a1, a2);
      v9 = v12;
      if ( v12 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x108u);
      break;
    case 70:
      v13 = CPropertySet::UpdateProperty<_D3DCOLORVALUE>(a1, a2, a3);
      v9 = v13;
      if ( v13 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x10Cu);
      break;
    case 71:
      v14 = CPropertySet::UpdateProperty<D2DQuaternion>(a1, a2);
      v9 = v14;
      if ( v14 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x110u);
      break;
    case 265:
      v15 = CPropertySet::UpdateProperty<D2DMatrix>(a1);
      v9 = v15;
      if ( v15 >= 0 )
        return 0;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x118u);
      break;
    default:
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  return v9;
}
