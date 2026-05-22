/*
 * XREFs of ?QueryInterface@LegacyInjectionRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180086710
 * Callers:
 *     ?QueryInterface@LegacyInjectionRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180087630 (-QueryInterface@LegacyInjectionRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LegacyInjectionRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180087640 (-QueryInterface@LegacyInjectionRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LegacyInjectionRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180087650 (-QueryInterface@LegacyInjectionRawInputProvider@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::QueryInterface(
        LegacyInjectionRawInputProvider *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // edi
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
      v7 = 140;
LABEL_16:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9978c53c_56b6_4c55_ba5f_5495e889e2fe.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9978c53c_56b6_4c55_ba5f_5495e889e2fe.Data4 )
  {
    (*(void (__fastcall **)(LegacyInjectionRawInputProvider *))(*(_QWORD *)this + 8LL))(this);
    *a3 = this;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4 )
  {
    (*(void (__fastcall **)(LegacyInjectionRawInputProvider *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 8;
LABEL_13:
    *a3 = v8;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(LegacyInjectionRawInputProvider *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 24;
    goto LABEL_13;
  }
  v6 = 2;
  v3 = -2147467262;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 163;
    goto LABEL_16;
  }
  return v3;
}
