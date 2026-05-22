/*
 * XREFs of ?QueryInterface@MobileCursorBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F5F0
 * Callers:
 *     ?QueryInterface@MobileCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030830 (-QueryInterface@MobileCursorBroker@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MobileCursorBroker@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030840 (-QueryInterface@MobileCursorBroker@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MobileCursorBroker@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030850 (-QueryInterface@MobileCursorBroker@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileCursorBroker::QueryInterface(MobileCursorBroker *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  char v6; // al
  int v7; // r9d
  char *v8; // rax

  v3 = 0;
  if ( !a3 )
  {
    v6 = 87;
    v3 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 146;
LABEL_13:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5f9adcb2_65c8_40db_988f_dffbe437aa7a.Data4 )
  {
    (*(void (__fastcall **)(MobileCursorBroker *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 24;
LABEL_10:
    *a3 = v8;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(MobileCursorBroker *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 32;
    goto LABEL_10;
  }
  v6 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 162;
    goto LABEL_13;
  }
  return v3;
}
