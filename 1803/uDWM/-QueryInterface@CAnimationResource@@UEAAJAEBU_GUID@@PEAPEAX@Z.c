/*
 * XREFs of ?QueryInterface@CAnimationResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A71B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::QueryInterface(CAnimationResource *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8

  result = a3 == 0LL ? 0x8007139F : 0;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cbfd91d9_51b2_45e4_b3de_d19ccfb863c5.Data4;
    if ( !v5 )
      goto LABEL_14;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_aa869e19_9176_46f9_9d0c_bc98d6a23724.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_aa869e19_9176_46f9_9d0c_bc98d6a23724.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_aa869e19_9176_46f9_9d0c_bc98d6a23724.Data4;
    if ( !v6 )
      goto LABEL_14;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_cadfc221_2187_4f55_b289_01544817b158.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_cadfc221_2187_4f55_b289_01544817b158.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_cadfc221_2187_4f55_b289_01544817b158.Data4;
    if ( !v7 )
      goto LABEL_14;
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v8 )
    {
      *a3 = 0LL;
      result = 2147500034LL;
    }
    else
    {
LABEL_14:
      *a3 = this;
    }
  }
  if ( (int)result >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
  return result;
}
