/*
 * XREFs of ??$ChangePropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800A5B68
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A64A0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x180011520 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPropertyBag::ChangePropertyValue<D2D_MATRIX_3X2_F>(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v6; // esi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  __int64 v19; // rbx
  struct _RTL_GENERIC_TABLE *v20; // rcx
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  unsigned int i; // r8d
  __int64 v25; // rcx
  __int64 v26; // rcx
  void (__fastcall *v27)(__int64, ULONG, unsigned int); // rax
  unsigned int v29; // [rsp+20h] [rbp-50h]
  int Buffer; // [rsp+30h] [rbp-40h] BYREF
  __int64 v31; // [rsp+38h] [rbp-38h]
  int v32; // [rsp+40h] [rbp-30h] BYREF
  void *lpMem[2]; // [rsp+48h] [rbp-28h]
  __int64 v34; // [rsp+58h] [rbp-18h]
  int v35; // [rsp+60h] [rbp-10h]

  Buffer = a2;
  v6 = 0;
  v31 = 0LL;
  v9 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 64), &Buffer);
  if ( !v9 )
  {
    v6 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070490, 0x255u);
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070490, 0x1DFu);
    return v6;
  }
  v10 = v9[1];
  if ( a2 != *(_DWORD *)(v10 + 8) || a3 != *(_DWORD *)v10 )
  {
    v29 = 489;
    goto LABEL_33;
  }
  v11 = a3 - 17;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 17;
      if ( v13 )
      {
        v14 = v13 - 17;
        if ( v14 )
        {
          v15 = v14 - 17;
          if ( v15 && (v16 = v15 - 1) != 0 && (v17 = v16 - 1) != 0 )
          {
            v18 = v17 - 33;
            if ( !v18 )
            {
              *(_OWORD *)(v10 + 12) = *(_OWORD *)a4;
              *(_QWORD *)(v10 + 28) = *(_QWORD *)(a4 + 16);
              goto LABEL_13;
            }
            if ( v18 != 161 )
            {
              v29 = 563;
LABEL_33:
              v6 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, v29);
              return v6;
            }
            *(_OWORD *)(v10 + 12) = *(_OWORD *)a4;
            *(_OWORD *)(v10 + 28) = *(_OWORD *)(a4 + 16);
            *(_OWORD *)(v10 + 44) = *(_OWORD *)(a4 + 32);
            *(_OWORD *)(v10 + 60) = *(_OWORD *)(a4 + 48);
          }
          else
          {
            *(_OWORD *)(v10 + 12) = *(_OWORD *)a4;
          }
        }
        else
        {
          *(_QWORD *)(v10 + 12) = *(_QWORD *)a4;
          *(_DWORD *)(v10 + 20) = *(_DWORD *)(a4 + 8);
        }
      }
      else
      {
        *(_QWORD *)(v10 + 12) = *(_QWORD *)a4;
      }
    }
    else
    {
      *(_DWORD *)(v10 + 12) = *(_DWORD *)a4;
    }
  }
  else
  {
    *(_BYTE *)(v10 + 12) = *(_BYTE *)a4;
  }
LABEL_13:
  v19 = 0LL;
  v20 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 360LL);
  if ( v20 )
  {
    v34 = 0LL;
    v35 = 0;
    *(_OWORD *)lpMem = 0LL;
    v32 = a2;
    v19 = (__int64)RtlLookupElementGenericTable(v20, &v32);
    if ( lpMem[0] != lpMem[1] )
    {
      WPF::ProcessHeapImpl::Free(lpMem[0]);
      lpMem[0] = 0LL;
    }
  }
  v22 = v19 + 8;
  v23 = -v19;
  if ( (v22 & -(__int64)(v23 != 0)) != 0 )
  {
    for ( i = 0;
          i < *(_DWORD *)((v22 & -(__int64)(v23 != 0)) + 0x18);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & -(__int64)(v23 != 0)) + 8 * v25) + 256LL) = v21 )
    {
      v25 = i++;
    }
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL) + 376LL) |= 2u;
    v26 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 528LL);
    v27 = *(void (__fastcall **)(__int64, ULONG, unsigned int))(*(_QWORD *)v26 + 104LL);
    if ( v27 == CPartitionVerticalBlankScheduler::ScheduleCompositionPass )
      CPartitionVerticalBlankScheduler::ScheduleCompositionPass(v26, 0, 8u);
    else
      v27(v26, 0LL, 8u);
  }
  return v6;
}
