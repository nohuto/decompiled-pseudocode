/*
 * XREFs of RaCallMiniportCompleteServiceIrp @ 0x1C0032B10
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0067760 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RaCallMiniportCompleteServiceIrp(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  void (__fastcall *v3)(__int64); // rax

  v1 = *(_QWORD *)(a1 + 536);
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 528);
    if ( v2 )
    {
      if ( !*(_BYTE *)(a1 + 4450) && (*(_BYTE *)(a1 + 544) & 4) != 0 )
      {
        v3 = *(void (__fastcall **)(__int64))(v2 + 152);
        if ( v3 )
          v3(v1 + 16);
      }
    }
  }
}
