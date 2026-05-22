/*
 * XREFs of ?DeliverInputToTarget@DWMInputRouter@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x18001A960
 * Callers:
 *     ?DeliverInputToTarget@MPCInputRouter@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800A92A0 (-DeliverInputToTarget@MPCInputRouter@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::DeliverInputToTarget(
        DWMInputRouter *this,
        struct InputInfo *a2,
        struct IInputTarget *a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v3 = 0;
  if ( a3 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)a3 + 24LL))(a3, a2);
    v3 = v4;
    if ( v4 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 1484, v4);
  }
  return v3;
}
