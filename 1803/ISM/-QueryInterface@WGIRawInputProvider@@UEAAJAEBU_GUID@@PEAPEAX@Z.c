/*
 * XREFs of ?QueryInterface@WGIRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180076B30
 * Callers:
 *     ?QueryInterface@WGIRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077E10 (-QueryInterface@WGIRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077E20 (-QueryInterface@WGIRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WGIRawInputProvider::QueryInterface(WGIRawInputProvider *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rax

  if ( !a3 )
    return 2147500035LL;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    v4 = (unsigned __int64)this + 16;
LABEL_12:
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    this = (WGIRawInputProvider *)(v4 & -(__int64)(this != 0LL));
    goto LABEL_13;
  }
  if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1
    || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4 )
  {
    if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1
      || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4 )
    {
      result = 2147500034LL;
      this = 0LL;
      goto LABEL_15;
    }
    v4 = (unsigned __int64)this + 8;
    goto LABEL_12;
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 6);
LABEL_13:
  result = 0LL;
LABEL_15:
  *a3 = this;
  return result;
}
