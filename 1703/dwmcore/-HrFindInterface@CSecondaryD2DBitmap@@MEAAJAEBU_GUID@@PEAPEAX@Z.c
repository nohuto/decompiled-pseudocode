/*
 * XREFs of ?HrFindInterface@CSecondaryD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015B490
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007ABF0 (-HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::HrFindInterface(CSecondaryD2DBitmap *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v5 )
      goto LABEL_8;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a2d1d2e5_dfc4_4554_9cc3_d47bcc235f80.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a2d1d2e5_dfc4_4554_9cc3_d47bcc235f80.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a2d1d2e5_dfc4_4554_9cc3_d47bcc235f80.Data4;
    if ( v6 )
    {
      return (unsigned int)CD2DBitmap::HrFindInterface(this, a2, a3);
    }
    else
    {
LABEL_8:
      *a3 = (void *)(((unsigned __int64)this + 264) & -(__int64)(this != 0LL));
      return 0;
    }
  }
  return v4;
}
