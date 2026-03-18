/*
 * XREFs of NtDCompositionCurrentBatchId @ 0x1C0023860
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0023924 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionCurrentBatchId(unsigned int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // rdx
  int v6; // ebx
  int v7; // edi
  struct DirectComposition::CApplicationChannel *v9; // [rsp+28h] [rbp-30h] BYREF

  v9 = 0LL;
  if ( a3 )
  {
    v5 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v6 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
    if ( v6 >= 0 )
    {
      if ( a2 )
        v7 = *((_DWORD *)v9 + 96);
      else
        v7 = *((_DWORD *)v9 + 94);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v9)(v9);
      *a3 = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
