/*
 * XREFs of NtDCompositionCurrentBatchId @ 0x1C001E620
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001E6E4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionCurrentBatchId(unsigned int a1, int a2, CTouchProcessor *a3)
{
  CTouchProcessor *v6; // rcx
  int v7; // ebx
  int v8; // edi
  struct DirectComposition::CApplicationChannel *v10; // [rsp+28h] [rbp-30h] BYREF

  v10 = 0LL;
  if ( a3 )
  {
    v6 = a3;
    if ( a3 >= W32UserProbeAddress )
      v6 = W32UserProbeAddress;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v10);
    if ( v7 >= 0 )
    {
      if ( a2 )
        v8 = *((_DWORD *)v10 + 100);
      else
        v8 = *((_DWORD *)v10 + 98);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v10)(v10);
      *(_DWORD *)a3 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
