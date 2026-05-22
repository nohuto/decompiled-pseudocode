/*
 * XREFs of ?GetDefaultInternalDisplay@DWMInputRouter@@UEAAJPEAPEAUIInputDisplay@@@Z @ 0x18001B160
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::GetDefaultInternalDisplay(DWMInputRouter *this, struct IInputDisplay **a2)
{
  unsigned int v2; // edi
  struct IInputDisplay *v4; // rbx

  v2 = 0;
  if ( a2 )
  {
    v4 = (struct IInputDisplay *)((*((_QWORD *)this + 54) + 8LL) & -(__int64)(*((_QWORD *)this + 54) != 0LL));
    if ( v4 )
      (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v4 + 8LL))(v4);
    *a2 = v4;
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 1702, 87);
  }
  return v2;
}
