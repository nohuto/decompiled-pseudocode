/*
 * XREFs of ?RegisterWaitHandler@RIMRawInputProvider@@QEAAJPEAXP6AJ0K0@Z0@Z @ 0x180088710
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180087C18 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMRawInputProvider::RegisterWaitHandler(
        RIMRawInputProvider *this,
        void *a2,
        int (*a3)(void *, unsigned int, void *),
        void *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx

  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64 (__fastcall *)(void *, unsigned int, void *), void *))(*(_QWORD *)v4 + 264LL))(
           v4,
           a2,
           RIMDeviceCollection::OnReadCallbackStatic,
           a4);
    v5 = v6;
    if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 330, v6);
  }
  else
  {
    v5 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 327, 255);
  }
  return v5;
}
