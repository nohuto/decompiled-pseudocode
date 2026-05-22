/*
 * XREFs of ?s_MsgRoutingInfoCallback@Win32kInterop@@SAH_KPEAUtagMsgRoutingInfo@@@Z @ 0x180010B30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::s_MsgRoutingInfoCallback(__int64 a1, struct tagMsgRoutingInfo *a2)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  if ( (gdwMitConfig & 4) == 0 )
    return 0LL;
  CoreUIOpenExisting(&v8);
  v5 = v8;
  if ( !v8 )
  {
    CoreUICreate(&v8);
    v5 = v8;
    if ( !v8 )
      return 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, struct tagMsgRoutingInfo *))(*(_QWORD *)v5 + 112LL))(v5, a1, a2);
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 1410, v6);
    return 0LL;
  }
  return 1LL;
}
