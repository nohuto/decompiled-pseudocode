/*
 * XREFs of ?QueryInterface@DWMCursor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180026CE0
 * Callers:
 *     ?QueryInterface@DWMCursor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800272D0 (-QueryInterface@DWMCursor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMCursor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800272E0 (-QueryInterface@DWMCursor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursor::QueryInterface(DWMCursor *this, const struct _GUID *a2, void **a3)
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
      v7 = 146;
LABEL_16:
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v7, v6);
      return v3;
    }
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(DWMCursor *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 16;
LABEL_10:
    *a3 = v8;
    return v3;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_925481d1_82a9_4761_95ea_d779b9de7e6b.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_925481d1_82a9_4761_95ea_d779b9de7e6b.Data4 )
  {
    (*(void (__fastcall **)(DWMCursor *))(*(_QWORD *)this + 8LL))(this);
    v8 = (char *)this + 8;
    goto LABEL_10;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a906d320_9167_4955_a961_8a982929b899.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a906d320_9167_4955_a961_8a982929b899.Data4 )
  {
    (*(void (__fastcall **)(DWMCursor *))(*(_QWORD *)this + 8LL))(this);
    *a3 = this;
  }
  else
  {
    v6 = 2;
    v3 = -2147467262;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 165;
      goto LABEL_16;
    }
  }
  return v3;
}
