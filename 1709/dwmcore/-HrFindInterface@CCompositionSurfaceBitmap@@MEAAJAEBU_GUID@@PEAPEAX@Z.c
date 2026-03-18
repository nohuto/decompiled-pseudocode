/*
 * XREFs of ?HrFindInterface@CCompositionSurfaceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800298B0
 * Callers:
 *     ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180028910 (-QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::HrFindInterface(
        CCompositionSurfaceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rax
  char *v10; // r9
  char *v11; // rax

  if ( !a3 )
    return 2147942487LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data4;
  if ( !v3 )
    goto LABEL_25;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data4;
  if ( !v4 )
    goto LABEL_25;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data4;
    if ( v6 )
    {
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data4;
      if ( v9 )
      {
        *a3 = 0LL;
        return 2147500033LL;
      }
      else
      {
        if ( this )
          v10 = (char *)this + 80;
        else
          v10 = 0LL;
        *a3 = v10;
        return 0LL;
      }
    }
    else
    {
      v7 = *((_QWORD *)this + 11);
      if ( v7 && *(_DWORD *)(v7 + 104) > 1u )
      {
        *a3 = (char *)this + 56;
        return 0LL;
      }
      else
      {
        result = 2147500034LL;
        *a3 = 0LL;
      }
    }
  }
  else
  {
LABEL_25:
    v11 = (char *)this + 64;
    if ( !this )
      v11 = 0LL;
    *a3 = v11;
    return 0LL;
  }
  return result;
}
