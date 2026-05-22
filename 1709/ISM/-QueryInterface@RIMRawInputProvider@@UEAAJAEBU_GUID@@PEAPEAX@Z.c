/*
 * XREFs of ?QueryInterface@RIMRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180088780
 * Callers:
 *     ?QueryInterface@RIMRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180088B80 (-QueryInterface@RIMRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMRawInputProvider::QueryInterface(RIMRawInputProvider *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_00000000_0000_0000_c000_000000000046 )
  {
    (*(void (__fastcall **)(RIMRawInputProvider *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this + 8;
  }
  else
  {
    v3 = -2147467262;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 369, 2);
  }
  return v3;
}
