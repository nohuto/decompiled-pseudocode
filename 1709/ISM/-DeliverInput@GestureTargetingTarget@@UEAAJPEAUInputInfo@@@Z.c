/*
 * XREFs of ?DeliverInput@GestureTargetingTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180015060
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     McTemplateU0qqqq @ 0x180005A78 (McTemplateU0qqqq.c)
 *     ?Enqueue@?$DynamicSizeQueue@UInputInfo@@$09@@QEAAJAEBUInputInfo@@@Z @ 0x180016114 (-Enqueue@-$DynamicSizeQueue@UInputInfo@@$09@@QEAAJAEBUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GestureTargetingTarget::DeliverInput(GestureTargetingTarget *this, struct InputInfo *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  _QWORD *v6; // rbp
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx

  v4 = DynamicSizeQueue<InputInfo,10>::Enqueue((char *)this + 40);
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 4, 218, v4);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v6 = (_QWORD *)*((_QWORD *)this + 3);
  if ( (Microsoft_OneCore_MinInputEnableBits & 4) != 0 )
    McTemplateU0qqqq(v5, &MinInput_Log_InputInfo, 4, *(_DWORD *)a2, *((_DWORD *)a2 + 1), *((_DWORD *)a2 + 2));
  v7 = v6[6];
  v6[7] = this;
  v6[8] = a2;
  LODWORD(result) = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v7 + 24LL))(v7, a2);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 4, 577, result);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v6[7] = 0LL;
  v6[8] = 0LL;
  return (unsigned int)result;
}
