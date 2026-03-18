/*
 * XREFs of NtDCompositionWaitForChannel @ 0x1C008AF70
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C001D4BC (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001E6E4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionWaitForChannel(unsigned int a1, int a2)
{
  int v3; // edi
  struct DirectComposition::CApplicationChannel *v4; // rbx
  struct DirectComposition::CApplicationChannel *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    if ( *((int *)v6 + 61) > 0
      && !DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(v6, a2 != 0) )
    {
      v3 = -1073741823;
    }
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
  }
  return (unsigned int)v3;
}
