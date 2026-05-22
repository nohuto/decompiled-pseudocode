/*
 * XREFs of ?QueryInterface@ComboButtonProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180063F80
 * Callers:
 *     ?QueryInterface@DragNDropProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065F60 (-QueryInterface@DragNDropProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ComboButtonProcessor::QueryInterface(ComboButtonProcessor *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_7303df7a_7fda_4ca1_b274_a0a033ec3f5b.Data4 )
    {
      (*(void (__fastcall **)(ComboButtonProcessor *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
           && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(ComboButtonProcessor *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
