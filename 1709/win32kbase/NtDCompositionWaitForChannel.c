/*
 * XREFs of NtDCompositionWaitForChannel @ 0x1C0090B50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0023924 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C0032C58 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
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
    if ( *((int *)v6 + 57) > 0
      && !DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(v6, a2 != 0) )
    {
      v3 = -1073741823;
    }
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
  }
  return (unsigned int)v3;
}
