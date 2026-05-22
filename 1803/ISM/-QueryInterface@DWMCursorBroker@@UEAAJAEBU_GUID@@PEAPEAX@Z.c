/*
 * XREFs of ?QueryInterface@DWMCursorBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180089D00
 * Callers:
 *     ?QueryInterface@DWMCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008AB80 (-QueryInterface@DWMCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMCursorBroker@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008ABA0 (-QueryInterface@DWMCursorBroker@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::QueryInterface(DWMCursorBroker *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char *v6; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data4 )
    {
      (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 8;
    }
    else
    {
      if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
        || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
      {
        return (unsigned int)-2147467262;
      }
      (*(void (__fastcall **)(DWMCursorBroker *))(*(_QWORD *)this + 8LL))(this);
      v6 = (char *)this + 16;
    }
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
