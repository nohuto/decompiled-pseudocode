/*
 * XREFs of ?OnDeliverInput@MagnifierTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z @ 0x1800A6410
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z @ 0x180071D7C (-OnInputReport@SessionBasedPointerDeviceArbitration@@QEAAJPEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierTarget::OnDeliverInput(
        SessionBasedPointerDeviceArbitration **this,
        struct InputInfo *a2,
        enum InputBufferingDecision *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  if ( a2 && a3 )
  {
    v5 = SessionBasedPointerDeviceArbitration::OnInputReport(this[6], a2);
    v7 = v5;
    if ( v5 >= 0 )
    {
      if ( *((_BYTE *)this + 73) )
      {
        *(_DWORD *)a3 = 5;
      }
      else if ( *((_BYTE *)this + 72) )
      {
        *(_DWORD *)a3 = 1;
      }
      else
      {
        *(_DWORD *)a3 = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this[6] + 2) + 32LL))(*((_QWORD *)this[6] + 2));
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 165, v5);
    }
  }
  else
  {
    v7 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 162, 87);
  }
  return v7;
}
